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
Symbol sym_Path_1;
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
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
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
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
}
ATerm term_t_60;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_k_60;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_n_59;
ATerm term_k_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_p_58;
ATerm term_k_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_k_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_a_56;
ATerm term_y_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_u_54;
ATerm term_p_54;
ATerm term_u_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_t_52;
ATerm term_q_52;
ATerm term_o_52;
ATerm term_z_51;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_x_49;
ATerm term_d_48;
ATerm term_y_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_m_47;
ATerm term_j_47;
ATerm term_g_47;
ATerm term_c_47;
ATerm term_y_46;
ATerm term_l_46;
ATerm term_g_46;
ATerm term_y_45;
ATerm term_r_45;
ATerm term_j_45;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_t_44;
ATerm term_p_44;
ATerm term_k_44;
ATerm term_d_44;
ATerm term_y_43;
ATerm term_m_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_v_42;
ATerm term_r_42;
ATerm term_h_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_v_41;
ATerm term_o_41;
ATerm term_l_41;
ATerm term_g_41;
ATerm term_v_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_u_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_b_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_i_35;
ATerm term_n_34;
ATerm term_o_31;
ATerm term_g_30;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_p_20;
ATerm term_c_19;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_16, term_c_16);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_lit_1, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_lit_1, term_i_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_27, term_c_27);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Arg_1, term_t_14);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym__2, term_i_53, term_j_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_r_55);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym__2, term_r_55, term_v_55);
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_55);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_d_56, term_m_14);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_s_56);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_k_57);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_y_14);
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_z_57, term_m_14);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym__2, term_d_58, term_m_14);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym__2, term_k_57, term_m_14);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_z_57);
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym__2, term_s_59, term_m_14);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm h_10 (ATerm h_58, ATerm i_58, ATerm g_58, ATerm t);
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm i_10 (ATerm l_69, ATerm t);
static ATerm h_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm b_130 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm collect_p__1_0 (ATerm o_129 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm e_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm e_98 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm j_38 (ATerm m_33, ATerm p_33, ATerm u_33, ATerm t);
static ATerm k_10 (ATerm v_21, ATerm u_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm m_10 (ATerm k_24, ATerm l_24, ATerm i_24, ATerm j_24, ATerm t);
static ATerm x_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm w_129 (ATerm), ATerm t);
static ATerm n_10 (ATerm n_47, ATerm o_47, ATerm t);
static ATerm o_10 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm q_25, ATerm r_25, ATerm t);
ATerm genzip_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm nzip_1_0 (ATerm f_107 (ATerm), ATerm t);
static ATerm s_10 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm m_25, ATerm t);
static ATerm u_10 (ATerm v_46, ATerm w_46, ATerm t);
static ATerm v_10 (ATerm u_31, ATerm s_31, ATerm t_31, ATerm t);
static ATerm r_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm w_10 (ATerm m_66, ATerm l_66, ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm s_128 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm x_10 (ATerm f_44, ATerm g_44, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
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
static ATerm i_92 (ATerm i_91, ATerm j_91, ATerm k_91, ATerm t);
ATerm number_node_1_0 (ATerm w_128 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm symbol2abox_1_0 (ATerm t_128 (ATerm), ATerm t);
static ATerm n_100 (ATerm t_98, ATerm u_98, ATerm v_98, ATerm t);
static ATerm o_100 (ATerm w_99, ATerm x_99, ATerm y_99, ATerm z_99, ATerm a_100, ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm b_106 (ATerm t_105, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm m_109 (ATerm i_109, ATerm t);
static ATerm v_6 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm c_11 (ATerm y_28, ATerm z_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm h_130 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm v_115 (ATerm s_114, ATerm t_114, ATerm y_114, ATerm t);
static ATerm x_6 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm i_11 (ATerm h_22, ATerm i_22, ATerm g_22, ATerm f_22, ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm j_11 (ATerm o_21, ATerm m_21, ATerm n_21, ATerm p_21, ATerm t);
ATerm filter_1_0 (ATerm k_112 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm k_11 (ATerm j_66, ATerm k_66, ATerm t);
ATerm unescape_chars_1_0 (ATerm v_114 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm t_11 (ATerm i_66, ATerm t);
ATerm oncetd_1_0 (ATerm h_99 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_104 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm w_11 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm w_34, ATerm v_34, ATerm t);
static ATerm x_11 (ATerm a_109 (ATerm), ATerm s_34, ATerm r_34, ATerm t);
ATerm foldr_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
ATerm collect_om_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm y_11 (ATerm y_26, ATerm x_26, ATerm t);
static ATerm a_12 (ATerm t_43, ATerm u_43, ATerm t);
static ATerm b_12 (ATerm o_28, ATerm p_28, ATerm t);
static ATerm d_12 (ATerm g_104 (ATerm), ATerm t_199, ATerm u_28, ATerm t);
static ATerm c_12 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm b_136 (ATerm v_135, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_12 (ATerm q_28, ATerm t);
static ATerm f_12 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm g_12 (ATerm v_43, ATerm w_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_137 (ATerm l_136, ATerm t);
static ATerm n_137 (ATerm p_136, ATerm q_136, ATerm r_136, ATerm t);
static ATerm o_137 (ATerm z_136, ATerm a_137, ATerm b_137, ATerm t);
static ATerm h_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_104 (ATerm), ATerm t);
static ATerm k_12 (ATerm y_59, ATerm z_59, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_119 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_12 (ATerm m_53, ATerm n_53, ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_12 (ATerm p_46, ATerm q_46, ATerm t);
ATerm foldr_2_0 (ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm r_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm need_help_1_0 (ATerm n_122 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_124 (ATerm), ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm parse_options_1_0 (ATerm p_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm iowrap_3_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
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
  t = term_m_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_o_14;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_14), b_0), term_p_14);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  t = term_t_14;
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
      t = term_m_14;
      t = o_0(t);
      y_0 = t;
      t = term_u_14;
      z_0 = t;
      t = term_y_14;
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_y_14, y_0);
      t = h_10(z_0, a_1, y_0, t);
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
static ATerm h_10 (ATerm h_58, ATerm i_58, ATerm g_58, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            ATerm c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
        t = k_12(h_58, i_58, t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATempty;
      }
  }
  l_1 = t;
  t = (ATerm) ATinsert(CheckATermList(l_1), g_58);
  m_1 = t;
  t = SSL_table_put(h_58, i_58, m_1);
  t = j_1;
  return(t);
}
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
      t = term_m_14;
      t = k_0(t);
      w_1 = t;
      t = term_u_14;
      x_1 = t;
      t = term_y_14;
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_y_14, w_1);
      t = h_10(x_1, y_1, w_1, t);
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
      t = term_m_14;
      t = i_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(CheckATermList(v_1), b_2);
    }
  return(t);
}
static ATerm i_10 (ATerm l_69, ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(l_69);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_2)));
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm d_2 = NULL;
        t = SSL_concat_strings(l_69);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_2);
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm g_15 = t;
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
      t = g_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
  g_2 = t;
  {
    ATerm h_15 = t;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,e_7 = NULL;
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
        e_7 = t;
        t = SSLsetAnnotations(e_7, i_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_15;
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
    ATerm j_15 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_15;
      }
  }
  t = g_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm n_15 = t;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,g_7 = NULL;
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
      g_7 = t;
      t = SSLsetAnnotations(g_7, m_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t)
{
  ATerm m_3 = NULL,i_7 = NULL;
  t = SSLgetAnnotations(z_2);
  m_3 = t;
  t = x_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
  i_7 = t;
  t = SSLsetAnnotations(i_7, m_3);
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
ATerm InsLayout_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    static ATerm n_5 (ATerm q_3, ATerm r_3, ATerm s_3, ATerm t)
    {
      ATerm u_3 = NULL,a_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
      t = b_130(t);
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
      t = b_130(t);
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          {
            ATerm s_15 = ATgetArgument(t, 1);
            if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
              {
                l_4 = ATgetFirst((ATermList) s_15);
                q_4 = (ATerm) ATgetNext((ATermList) s_15);
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
            t = i_10(u_4, t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_4))), t_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_4))))), r_4);
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
                  ATerm g_16 = t;
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
                      t = g_16;
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
                  t = i_10(x_4, t);
                  w_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(s_4), n_4), w_4), k_4), r_4);
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
            ATerm h_16 = t;
            int i_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_5(b_5, j_5, a_5, t);
                LocalPopChoice(i_16);
              }
            else
              {
                t = h_16;
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
                  ATerm j_16 = t;
                  int k_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_5(b_5, j_5, a_5, t);
                      LocalPopChoice(k_16);
                    }
                  else
                    {
                      t = j_16;
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
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_16 = t;
      if((PushChoice() == 0))
        {
          ATerm i_23 = NULL,j_23 = NULL,l_23 = NULL,p_7 = NULL;
          l_23 = t;
          if(match_cons(t, sym_layout_1))
            {
              j_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_23);
          i_23 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, j_23);
          p_7 = t;
          t = SSLsetAnnotations(p_7, i_23);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_16;
        }
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm n_25 = NULL,p_25 = NULL;
        n_25 = t;
        if(match_cons(t, sym_layout_1))
          {
            p_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_16 = NULL,e_17 = NULL,j_17 = NULL,r_7 = NULL;
              t = SSLgetAnnotations(n_25);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, p_25);
              r_7 = t;
              t = SSLsetAnnotations(r_7, e_17);
              j_17 = t;
              t = term_a_16;
              t = get_options_0_0(t);
              t = oncetd_1_0(s_0, t);
              t = j_17;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  y_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_10(y_16, t);
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              {
                ATerm r_17 = NULL,u_17 = NULL,u_7 = NULL;
                t = SSLgetAnnotations(n_25);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, p_25);
                u_7 = t;
                t = SSLsetAnnotations(u_7, u_17);
                {
                  ATerm q_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm x_17 = NULL;
                      x_17 = t;
                      t = term_a_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(v_0, t);
                      t = x_17;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_16;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    r_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_10(r_17, t);
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
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,s_25 = NULL,y_25 = NULL,z_25 = NULL,o_7 = NULL,k_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_7);
  u_6 = t;
  t = a_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_6 = ATgetFirst((ATermList) t);
      {
        ATerm r_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_16 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, b_7);
  k_7 = t;
  t = SSLsetAnnotations(k_7, u_6);
  {
    static ATerm v_26 (ATerm t)
    {
      static ATerm j_27 (ATerm v_14, ATerm w_14, ATerm x_14, ATerm t)
      {
        ATerm f_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,m_7 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(v_14);
        f_15 = t;
        t = w_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_15 = ATgetFirst((ATermList) t);
            l_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_14);
        i_15 = t;
        t = (ATerm) ATinsert(CheckATermList(l_15), k_15);
        l_7 = t;
        t = SSLsetAnnotations(l_7, i_15);
        m_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_15, x_14);
        m_7 = t;
        t = SSLsetAnnotations(m_7, f_15);
        t = InsLayout_1_0(v_26, t);
        return(t);
      }
      ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,t_15 = NULL,v_15 = NULL;
      v_15 = t;
      if(match_cons(t, sym__2))
        {
          r_15 = ATgetArgument(t, 0);
          t_15 = ATgetArgument(t, 1);
          t = r_15;
          if(match_cons(t, sym_H_2))
            {
              p_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              {
                ATerm t_16 = t;
                int u_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL,i_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                    t = InsLayout_1_0(v_26, t);
                    if(match_cons(t, sym__2))
                      {
                        h_1 = ATgetArgument(t, 0);
                        i_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, p_15, h_1), i_1);
                    LocalPopChoice(u_16);
                  }
                else
                  {
                    t = t_16;
                    {
                      ATerm v_16 = t;
                      int w_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_27(v_15, r_15, t_15, t);
                          LocalPopChoice(w_16);
                        }
                      else
                        {
                          t = v_16;
                          t = v_15;
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
                    ATerm x_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                        t = InsLayout_1_0(v_26, t);
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
                        t = x_16;
                        {
                          ATerm a_17 = t;
                          int b_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_27(v_15, r_15, t_15, t);
                              LocalPopChoice(b_17);
                            }
                          else
                            {
                              t = a_17;
                              t = v_15;
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
                        ATerm c_17 = t;
                        int d_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                            t = InsLayout_1_0(v_26, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, p_15, t_5), u_5);
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
                                  t = j_27(v_15, r_15, t_15, t);
                                  LocalPopChoice(g_17);
                                }
                              else
                                {
                                  t = f_17;
                                  t = v_15;
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
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, o_15, t_15);
                                t = InsLayout_1_0(v_26, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, p_15, q_15, h_6), i_6);
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
                                {
                                  ATerm k_17 = t;
                                  int l_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_27(v_15, r_15, t_15, t);
                                      LocalPopChoice(l_17);
                                    }
                                  else
                                    {
                                      t = k_17;
                                      t = v_15;
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
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_7 = NULL,x_7 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                    t = InsLayout_1_0(v_26, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        v_7 = ATgetArgument(t, 0);
                                        x_7 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, p_15, v_7), x_7);
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
                                          t = j_27(v_15, r_15, t_15, t);
                                          LocalPopChoice(p_17);
                                        }
                                      else
                                        {
                                          t = o_17;
                                          t = v_15;
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
                                    ATerm q_17 = t;
                                    int s_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_8 = NULL,k_8 = NULL,n_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, p_15, t_15);
                                        t = InsLayout_1_0(v_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            h_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm t_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                        t = InsLayout_1_0(v_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            k_8 = ATgetArgument(t, 0);
                                            n_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, h_8, k_8), n_8);
                                        LocalPopChoice(s_17);
                                      }
                                    else
                                      {
                                        t = q_17;
                                        {
                                          ATerm v_17 = t;
                                          int w_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_27(v_15, r_15, t_15, t);
                                              LocalPopChoice(w_17);
                                            }
                                          else
                                            {
                                              t = v_17;
                                              t = v_15;
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
                                        ATerm y_17 = t;
                                        int z_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_10 = NULL,b_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                            t = InsLayout_1_0(v_26, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                a_10 = ATgetArgument(t, 0);
                                                b_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, p_15, a_10), b_10);
                                            LocalPopChoice(z_17);
                                          }
                                        else
                                          {
                                            t = y_17;
                                            {
                                              ATerm a_18 = t;
                                              int b_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_27(v_15, r_15, t_15, t);
                                                  LocalPopChoice(b_18);
                                                }
                                              else
                                                {
                                                  t = a_18;
                                                  t = v_15;
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
                                            ATerm c_18 = t;
                                            int d_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_11 = NULL,o_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                                t = InsLayout_1_0(v_26, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    n_11 = ATgetArgument(t, 0);
                                                    o_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, p_15, n_11), o_11);
                                                LocalPopChoice(d_18);
                                              }
                                            else
                                              {
                                                t = c_18;
                                                {
                                                  ATerm f_18 = t;
                                                  int g_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_27(v_15, r_15, t_15, t);
                                                      LocalPopChoice(g_18);
                                                    }
                                                  else
                                                    {
                                                      t = f_18;
                                                      t = v_15;
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
                                                ATerm h_18 = t;
                                                int i_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm g_13 = NULL,m_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                                    t = InsLayout_1_0(v_26, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        g_13 = ATgetArgument(t, 0);
                                                        m_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, p_15, g_13), m_13);
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
                                                          t = j_27(v_15, r_15, t_15, t);
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = j_18;
                                                          t = v_15;
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
                                                    int n_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_15 = NULL,x_15 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                                        t = InsLayout_1_0(v_26, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            u_15 = ATgetArgument(t, 0);
                                                            x_15 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, p_15, u_15), x_15);
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
                                                              t = j_27(v_15, r_15, t_15, t);
                                                              LocalPopChoice(p_18);
                                                            }
                                                          else
                                                            {
                                                              t = o_18;
                                                              t = v_15;
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
                                                      t = j_27(v_15, r_15, t_15, t);
                                                      LocalPopChoice(r_18);
                                                    }
                                                  else
                                                    {
                                                      t = q_18;
                                                      t = v_15;
                                                    }
                                                }
                                            }
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
          t = v_15;
        }
      return(t);
    }
    t = v_26(t);
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
                ATerm v_18 = ATgetFirst((ATermList) t);
                ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
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
  o_7 = t;
  t = SSLsetAnnotations(o_7, o_6);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(((ATgetType(x_18) == AT_LIST) && !(ATisEmpty(x_18))))
          {
            n_6 = ATgetFirst((ATermList) x_18);
            {
              ATerm y_18 = (ATerm) ATgetNext((ATermList) x_18);
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
  z_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
      t = y_25;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_25;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), z_25);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), z_25);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm o_129 (ATerm), ATerm t)
{
  static ATerm q_27 (ATerm t)
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        t = o_129(t);
        n_27 = t;
        t = (ATerm) ATinsert(ATempty, n_27);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm e_18 = NULL,k_18 = NULL;
          k_18 = t;
          t = SSL_explode_term(k_18);
          if(match_cons(t, sym__2))
            {
              ATerm b_19 = ATgetArgument(t, 0);
              e_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_18;
          t = foldr_3_0(b_1, conc_0_0, q_27, t);
        }
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,t_8 = NULL;
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
  t_8 = t;
  t = SSLsetAnnotations(t_8, u_27);
  t = term_o_14;
  s_27 = t;
  t = (ATerm) ATinsert(ATempty, term_c_19);
  t_27 = t;
  t = SSL_printnl(s_27, t_27);
  t = term_t_14;
  r_27 = t;
  t = SSL_exit(r_27);
  t = (ATerm) ATinsert(ATempty, term_c_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 = NULL,f_20 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(k_30);
            w_19 = t;
            t = l_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_30;
            t = flat_list_0_0(t);
            f_20 = t;
            t = (ATerm) ATinsert(CheckATermList(f_20), l_30);
            w_8 = t;
            t = SSLsetAnnotations(w_8, w_19);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            {
              ATerm f_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_20 = NULL,x_20 = NULL,y_20 = NULL,b_21 = NULL,x_8 = NULL;
                  t = SSLgetAnnotations(k_30);
                  y_20 = t;
                  t = l_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = l_30;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm h_19 = ATgetFirst((ATermList) t);
                          ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = l_30;
                    }
                  t = (ATerm) ATinsert(CheckATermList(m_30), l_30);
                  x_8 = t;
                  t = SSLsetAnnotations(x_8, y_20);
                  b_21 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_20 = ATgetFirst((ATermList) t);
                      {
                        ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = b_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm l_19 = ATgetFirst((ATermList) t);
                      u_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, x_20, u_20);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = f_19;
                  {
                    ATerm r_21 = NULL,x_21 = NULL,z_8 = NULL;
                    t = SSLgetAnnotations(k_30);
                    r_21 = t;
                    t = m_30;
                    t = flat_list_0_0(t);
                    x_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(x_21), l_30);
                    z_8 = t;
                    t = SSLsetAnnotations(z_8, r_21);
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
  ATerm s_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      v_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      {
        ATerm y_30 = NULL,a_31 = NULL;
        t = term_m_14;
        t = e_0(t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, a_31);
        t = index_0_0(t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_30, y_30);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm c_31 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          v_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_m_14;
      t = e_0(t);
      c_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_30, c_31);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    t = bottomup_1_0(e_98, t);
    return(t);
  }
  t = SRTS_all(c_1, t);
  t = e_98(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm b_33 = NULL,i_33 = NULL,j_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      j_33 = ATgetArgument(t, 0);
      {
        ATerm e_22 = NULL,d_9 = NULL;
        t = SSLgetAnnotations(i_33);
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, j_33);
        d_9 = t;
        t = SSLsetAnnotations(d_9, e_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          j_33 = ATgetArgument(t, 0);
          b_33 = ATgetArgument(t, 1);
          {
            ATerm q_22 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(i_33);
            q_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, j_33, b_33);
            e_9 = t;
            t = SSLsetAnnotations(e_9, q_22);
          }
        }
      else
        {
          ATerm q_23 = NULL,f_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              j_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_33);
          q_23 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, j_33);
          f_9 = t;
          t = SSLsetAnnotations(f_9, q_23);
        }
    }
  return(t);
}
static ATerm j_38 (ATerm m_33, ATerm p_33, ATerm u_33, ATerm t)
{
  ATerm d_34 = NULL,j_9 = NULL;
  t = SSLgetAnnotations(m_33);
  d_34 = t;
  t = p_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = u_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_33, u_33);
  j_9 = t;
  t = SSLsetAnnotations(j_9, d_34);
  return(t);
}
static ATerm k_10 (ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,h_9 = NULL;
  a_32 = t;
  if(match_cons(t, sym__2))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_32);
  b_32 = t;
  t = c_32;
  t = collect_p__1_0(d_1, t);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, d_32);
  h_9 = t;
  t = SSLsetAnnotations(h_9, b_32);
  {
    static ATerm i_38 (ATerm t)
    {
      static ATerm l_38 (ATerm h_34, ATerm i_34, ATerm j_34, ATerm m_34, ATerm t)
      {
        ATerm t_34 = NULL,a_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_34, m_34);
        t = i_38(t);
        if(match_cons(t, sym__2))
          {
            t_34 = ATgetArgument(t, 0);
            a_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_34), (ATerm) ATmakeAppl(sym_Arg_1, h_34)), (ATerm) ATinsert(CheckATermList(a_35), j_34));
        return(t);
      }
      static ATerm m_38 (ATerm f_35, ATerm g_35, ATerm q_35, ATerm r_35, ATerm w_35, ATerm t)
      {
        ATerm b_36 = NULL,d_36 = NULL;
        t = g_35;
        if(((x_31 != NULL) && (x_31 != t)))
          _fail(t);
        else
          x_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_35, w_35);
        t = i_38(t);
        if(match_cons(t, sym__2))
          {
            b_36 = ATgetArgument(t, 0);
            d_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_36), (ATerm) ATmakeAppl(sym_Arg2_2, f_35, g_35)), (ATerm) ATinsert(CheckATermList(d_36), r_35));
        return(t);
      }
      static ATerm n_38 (ATerm i_36, ATerm m_36, ATerm o_36, ATerm t)
      {
        ATerm u_36 = NULL,w_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_36, o_36);
        t = i_38(t);
        if(match_cons(t, sym__2))
          {
            u_36 = ATgetArgument(t, 0);
            w_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_36), i_36), w_36);
        return(t);
      }
      ATerm g_37 = NULL,l_37 = NULL,m_37 = NULL,o_37 = NULL,p_37 = NULL,w_37 = NULL,x_37 = NULL,z_37 = NULL,c_38 = NULL;
      m_37 = t;
      if(match_cons(t, sym__2))
        {
          o_37 = ATgetArgument(t, 0);
          x_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_37 = ATgetFirst((ATermList) t);
          c_38 = (ATerm) ATgetNext((ATermList) t);
          t = o_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_37 = ATgetFirst((ATermList) t);
              w_37 = (ATerm) ATgetNext((ATermList) t);
              t = p_37;
              if(match_cons(t, sym_Arg_1))
                {
                  g_37 = ATgetArgument(t, 0);
                  {
                    ATerm m_19 = t;
                    int n_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_38(m_37, o_37, x_37, t);
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
                              t = l_38(g_37, w_37, z_37, c_38, t);
                              LocalPopChoice(p_19);
                            }
                          else
                            {
                              t = o_19;
                              t = n_38(p_37, w_37, c_38, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      g_37 = ATgetArgument(t, 0);
                      l_37 = ATgetArgument(t, 1);
                      {
                        ATerm q_19 = t;
                        int r_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_38(m_37, o_37, x_37, t);
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
                                  t = m_38(g_37, l_37, w_37, z_37, c_38, t);
                                  LocalPopChoice(t_19);
                                }
                              else
                                {
                                  t = s_19;
                                  t = n_38(p_37, w_37, c_38, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_19 = t;
                      int v_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_38(m_37, o_37, x_37, t);
                          LocalPopChoice(v_19);
                        }
                      else
                        {
                          t = u_19;
                          t = n_38(p_37, w_37, c_38, t);
                        }
                    }
                }
            }
          else
            {
              t = j_38(m_37, o_37, x_37, t);
            }
        }
      else
        {
          t = o_37;
          t = j_38(m_37, o_37, x_37, t);
        }
      return(t);
    }
    t = i_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, y_31);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  static ATerm s_39 (ATerm t)
  {
    ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
    j_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_39;
      }
    else
      {
        ATerm d_24 = NULL,e_24 = NULL,g_24 = NULL,p_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_19 = ATgetFirst((ATermList) t);
            ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_39);
        d_24 = t;
        t = term_m_14;
        t = u_129(t);
        {
          static ATerm e_1 (ATerm t)
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm f_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, k_39);
                      return(t);
                    }
                    t = Instantiate_1_0(f_1, t);
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = c_20;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
              }
            return(t);
          }
          t = bottomup_1_0(e_1, t);
        }
        g_24 = t;
        t = l_39;
        t = s_39(t);
        e_24 = t;
        t = (ATerm) ATinsert(CheckATermList(e_24), g_24);
        p_9 = t;
        t = SSLsetAnnotations(p_9, d_24);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
static ATerm m_10 (ATerm k_24, ATerm l_24, ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm z_39 = NULL,b_40 = NULL,c_40 = NULL,q_40 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = not_null(b_40);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATinsert(ATempty, j_24));
  t = conc_0_0(t);
  c_40 = t;
  t = k_24;
  if(match_cons(t, sym_iter_1))
    {
      q_40 = ATgetArgument(t, 0);
      {
        ATerm y_24 = NULL,s_9 = NULL;
        t = SSLgetAnnotations(k_24);
        y_24 = t;
        t = q_40;
        z_39 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, q_40);
        s_9 = t;
        t = SSLsetAnnotations(s_9, y_24);
      }
    }
  else
    {
      ATerm d_25 = NULL,t_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          q_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_24);
      d_25 = t;
      t = q_40;
      z_39 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, q_40);
      t_9 = t;
      t = SSLsetAnnotations(t_9, d_25);
    }
  t = (ATerm) ATmakeAppl(sym__2, k_24, c_40);
  t = get_pp_entry_0_0(t);
  if(((b_40 != NULL) && (b_40 != t)))
    _fail(t);
  else
    b_40 = t;
  t = l_24;
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm r_40 = NULL;
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__4, z_39, r_40, c_40, term_t_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  t = instantiate_list_1_0(n_1, t);
  return(t);
}
static ATerm x_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm j_41 = NULL,c_10 = NULL;
  t = SSLgetAnnotations(e_41);
  j_41 = t;
  t = d_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_41), c_41);
  c_10 = t;
  t = SSLsetAnnotations(c_10, j_41);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  static ATerm w_42 (ATerm t)
  {
    static ATerm y_42 (ATerm r_41, ATerm s_41, ATerm t_41, ATerm u_41, ATerm t)
    {
      ATerm y_41 = NULL,b_42 = NULL,d_42 = NULL,d_10 = NULL;
      t = u_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_20 = ATgetFirst((ATermList) t);
          ATerm g_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_41);
      y_41 = t;
      t = term_m_14;
      t = w_129(t);
      {
        static ATerm o_1 (ATerm t)
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, s_41), r_41);
                    return(t);
                  }
                  t = Instantiate_1_0(p_1, t);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
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
      d_42 = t;
      t = t_41;
      t = w_42(t);
      b_42 = t;
      t = (ATerm) ATinsert(CheckATermList(b_42), d_42);
      d_10 = t;
      t = SSLsetAnnotations(d_10, y_41);
      return(t);
    }
    ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,o_42 = NULL,p_42 = NULL;
    j_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_42 = ATgetFirst((ATermList) t);
            l_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_42 = ATgetFirst((ATermList) t);
            p_42 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_42(k_42, l_42, j_42, t);
                  LocalPopChoice(m_20);
                }
              else
                {
                  t = l_20;
                  t = y_42(k_42, o_42, p_42, j_42, t);
                }
            }
          }
        else
          {
            t = x_42(k_42, l_42, j_42, t);
          }
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
static ATerm n_10 (ATerm n_47, ATerm o_47, ATerm t)
{
  t = SSL_mod(n_47, o_47);
  return(t);
}
static ATerm o_10 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,o_44 = NULL;
      t = term_p_20;
      p_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, term_p_20);
      t = n_10(q_25, p_43, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_m_14;
      t = g_96(t);
      n_43 = t;
      t = term_m_14;
      t = h_96(t);
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym__4, n_43, r_25, o_43, term_p_20);
      t = symbol2abox_0_0(t);
      o_44 = t;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_44;
            {
              ATerm s_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_25 = NULL;
                  t_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = t_25;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm t_20 = ATgetFirst((ATermList) t);
                          ATerm v_20 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = t_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_20;
                }
            }
            t = (ATerm) ATinsert(ATempty, o_44);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = o_44;
          }
      }
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm q_44 = NULL,u_44 = NULL,f_45 = NULL;
        t = term_m_14;
        t = f_96(t);
        q_44 = t;
        t = term_m_14;
        t = h_96(t);
        u_44 = t;
        t = (ATerm) ATmakeAppl(sym__4, q_44, r_25, u_44, term_t_14);
        t = symbol2abox_0_0(t);
        f_45 = t;
        {
          ATerm w_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_45;
              {
                ATerm a_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_26 = NULL;
                    b_26 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = b_26;
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
                        t = b_26;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_21;
                  }
              }
              t = (ATerm) ATinsert(ATempty, f_45);
              LocalPopChoice(z_20);
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
ATerm genzip_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  static ATerm u_45 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_106(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,s_45 = NULL,r_10 = NULL;
          t = u_106(t);
          s_45 = t;
          if(match_cons(t, sym__2))
            {
              m_45 = ATgetArgument(t, 0);
              n_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_45);
          l_45 = t;
          t = m_45;
          t = w_106(t);
          o_45 = t;
          t = n_45;
          t = u_45(t);
          p_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
          r_10 = t;
          t = SSLsetAnnotations(r_10, l_45);
          t = v_106(t);
        }
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      ATerm h_21 = ATgetArgument(t, 1);
      if(((ATgetType(h_21) != AT_LIST) || !(ATisEmpty(h_21))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_45 = NULL,a_46 = NULL,c_46 = NULL,d_46 = NULL,f_46 = NULL;
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            a_46 = ATgetFirst((ATermList) i_21);
            c_46 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_t_14;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, term_t_14);
  t = i_12(x_45, f_46, t);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_45, a_46), (ATerm) ATmakeAppl(sym__2, d_46, c_46));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_46), h_46);
  return(t);
}
ATerm nzip_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, v_45);
  t = genzip_4_0(q_1, r_1, s_1, f_107, t);
  return(t);
}
static ATerm s_10 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm m_25, ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,z_46 = NULL,z_47 = NULL,a_48 = NULL;
  static ATerm q_2 (ATerm t)
  {
    t = not_null(u_46);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, g_25, (ATerm) ATinsert(ATempty, m_25));
  t = conc_0_0(t);
  z_46 = t;
  t = h_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      {
        ATerm j_26 = NULL,e_11 = NULL;
        t = SSLgetAnnotations(h_25);
        j_26 = t;
        t = z_47;
        s_46 = t;
        t = a_48;
        t_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, z_47, a_48);
        e_11 = t;
        t = SSLsetAnnotations(e_11, j_26);
      }
    }
  else
    {
      ATerm r_26 = NULL,g_11 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          z_47 = ATgetArgument(t, 0);
          a_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_25);
      r_26 = t;
      t = z_47;
      s_46 = t;
      t = a_48;
      t_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, z_47, a_48);
      g_11 = t;
      t = SSLsetAnnotations(g_11, r_26);
    }
  t = (ATerm) ATmakeAppl(sym__2, h_25, z_46);
  t = get_pp_entry_0_0(t);
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = i_25;
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm e_48 = NULL,f_48 = NULL;
      static ATerm z_1 (ATerm t)
      {
        t = s_46;
        return(t);
      }
      static ATerm a_2 (ATerm t)
      {
        t = t_46;
        return(t);
      }
      static ATerm e_2 (ATerm t)
      {
        t = z_46;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = m_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          e_48 = ATgetArgument(t, 0);
          f_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_10(z_1, a_2, e_2, p_2, e_48, f_48, t);
      return(t);
    }
    t = nzip_1_0(u_1, t);
  }
  t = instantiate_sep_list_1_0(q_2, t);
  return(t);
}
static ATerm u_10 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(v_46, w_46);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = SSL_subtr(v_46, w_46);
    }
  return(t);
}
static ATerm v_10 (ATerm u_31, ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm n_48 = NULL,q_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_31, term_p_20);
  t = geq_0_0(t);
  t = term_t_14;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_31, term_t_14);
  t = u_10(u_31, q_48, t);
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, t_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            w_48 = ATgetFirst((ATermList) l_21);
            x_48 = (ATerm) ATgetNext((ATermList) l_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_10(v_48, w_48, x_48, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t = repeat_2_0(r_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if(((ATgetType(q_21) != AT_INT) || (ATgetInt((ATermInt) q_21) != 1)))
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            t_48 = ATgetFirst((ATermList) s_21);
            {
              ATerm t_21 = (ATerm) ATgetNext((ATermList) s_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_48;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm w_21 = t;
  if((PushChoice() == 0))
    {
      ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,m_11 = NULL;
      p_67 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_67);
      n_67 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_67);
      m_11 = t;
      t = SSLsetAnnotations(m_11, n_67);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_21 = t;
  if((PushChoice() == 0))
    {
      ATerm s_67 = NULL,u_67 = NULL,v_67 = NULL,p_11 = NULL;
      v_67 = t;
      if(match_cons(t, sym_lit_1))
        {
          u_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_67);
      s_67 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, u_67);
      p_11 = t;
      t = SSLsetAnnotations(p_11, s_67);
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
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,d_64 = NULL,e_64 = NULL,y_64 = NULL,l_65 = NULL,m_65 = NULL,r_65 = NULL,u_65 = NULL;
  e_64 = t;
  if(match_cons(t, sym__4))
    {
      y_64 = ATgetArgument(t, 0);
      m_65 = ATgetArgument(t, 1);
      r_65 = ATgetArgument(t, 2);
      u_65 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_64;
  if(match_cons(t, sym_seq_1))
    {
      l_65 = ATgetArgument(t, 0);
      {
        ATerm g_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
        static ATerm u_2 (ATerm t)
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = t;
              int c_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm a_3 (ATerm t)
                  {
                    t = not_null(j_67);
                    return(t);
                  }
                  t = Instantiate_1_0(a_3, t);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = b_22;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
            }
          return(t);
        }
        t = m_65;
        if(match_cons(t, sym_appl_2))
          {
            ATerm d_22 = ATgetArgument(t, 0);
            d_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_65, (ATerm) ATinsert(ATempty, u_65));
        t = conc_0_0(t);
        m_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, l_65), m_67);
        t = get_pp_entry_0_0(t);
        g_67 = t;
        t = l_65;
        t = filter_1_0(s_2, t);
        k_67 = t;
        t = d_64;
        t = filter_1_0(t_2, t);
        l_67 = t;
        t = (ATerm) ATmakeAppl(sym__4, k_67, l_67, m_67, term_t_14);
        t = seq2abox_0_0(t);
        if(((j_67 != NULL) && (j_67 != t)))
          _fail(t);
        else
          j_67 = t;
        t = g_67;
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          l_65 = ATgetArgument(t, 0);
          x_63 = ATgetArgument(t, 1);
          {
            ATerm g_28 = NULL,h_28 = NULL,j_28 = NULL;
            static ATerm r_39 (ATerm t)
            {
              ATerm t_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,j_29 = NULL,k_29 = NULL,m_29 = NULL,n_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,h_30 = NULL,r_30 = NULL,u_30 = NULL;
              if(match_cons(t, sym__4))
                {
                  m_29 = ATgetArgument(t, 0);
                  n_29 = ATgetArgument(t, 1);
                  r_30 = ATgetArgument(t, 2);
                  u_30 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = n_29;
              if(match_cons(t, sym_appl_2))
                {
                  w_29 = ATgetArgument(t, 0);
                  x_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_29 = ATgetFirst((ATermList) t);
                  h_30 = (ATerm) ATgetNext((ATermList) t);
                  t = h_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = w_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          d_29 = ATgetArgument(t, 0);
                          g_29 = ATgetArgument(t, 1);
                          k_29 = ATgetArgument(t, 2);
                          t = g_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              h_29 = ATgetArgument(t, 0);
                              j_29 = ATgetArgument(t, 1);
                              t = d_29;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  e_29 = ATgetFirst((ATermList) t);
                                  f_29 = (ATerm) ATgetNext((ATermList) t);
                                  t = f_29;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = m_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          t_28 = ATgetArgument(t, 0);
                                          c_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_22 = t;
                                            int k_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = e_29;
                                                if((t_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = h_29;
                                                if((t_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = j_29;
                                                if((c_29 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, t_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, t_28), t_28, k_29), x_29), r_30, u_30);
                                                t = r_39(t);
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
                                                      ATerm q_31 = NULL,r_31 = NULL;
                                                      t = h_29;
                                                      if((t_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = j_29;
                                                      if((c_29 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_t_14;
                                                      r_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, u_30, term_t_14);
                                                      t = i_12(u_30, r_31, t);
                                                      q_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, c_29, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_29), c_29, k_29), x_29), r_30, q_31);
                                                      t = r_39(t);
                                                      LocalPopChoice(m_22);
                                                    }
                                                  else
                                                    {
                                                      t = l_22;
                                                      {
                                                        ATerm t_32 = NULL;
                                                        static ATerm b_3 (ATerm t)
                                                        {
                                                          ATerm n_22 = t;
                                                          int o_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_22 = t;
                                                              int r_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm c_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(h_28));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(c_3, t);
                                                                  LocalPopChoice(r_22);
                                                                }
                                                              else
                                                                {
                                                                  t = p_22;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(o_22);
                                                            }
                                                          else
                                                            {
                                                              t = n_22;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((g_28 != NULL) && (g_28 != t)))
                                                          _fail(t);
                                                        else
                                                          g_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((h_28 != NULL) && (h_28 != t)))
                                                          _fail(t);
                                                        else
                                                          h_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                                                        t = index_0_0(t);
                                                        t_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, t_32);
                                                        t = bottomup_1_0(b_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm o_33 = NULL;
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
                                                      t = (ATerm) ATinsert(ATempty, not_null(h_28));
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
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                                          t = get_pp_entry_0_0(t);
                                          if(((g_28 != NULL) && (g_28 != t)))
                                            _fail(t);
                                          else
                                            g_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                                          t = symbol2abox_0_0(t);
                                          if(((h_28 != NULL) && (h_28 != t)))
                                            _fail(t);
                                          else
                                            h_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                                          t = index_0_0(t);
                                          o_33 = t;
                                          t = (ATerm) ATinsert(ATempty, o_33);
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm u_34 = NULL;
                                      static ATerm f_3 (ATerm t)
                                      {
                                        ATerm w_22 = t;
                                        int x_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm y_22 = t;
                                            int z_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(h_28));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                LocalPopChoice(z_22);
                                              }
                                            else
                                              {
                                                t = y_22;
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
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                                      t = get_pp_entry_0_0(t);
                                      if(((g_28 != NULL) && (g_28 != t)))
                                        _fail(t);
                                      else
                                        g_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                                      t = symbol2abox_0_0(t);
                                      if(((h_28 != NULL) && (h_28 != t)))
                                        _fail(t);
                                      else
                                        h_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                                      t = index_0_0(t);
                                      u_34 = t;
                                      t = (ATerm) ATinsert(ATempty, u_34);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm m_35 = NULL;
                                  static ATerm h_3 (ATerm t)
                                  {
                                    ATerm a_23 = t;
                                    int b_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm c_23 = t;
                                        int d_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(h_28));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            LocalPopChoice(d_23);
                                          }
                                        else
                                          {
                                            t = c_23;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(b_23);
                                      }
                                    else
                                      {
                                        t = a_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                                  t = get_pp_entry_0_0(t);
                                  if(((g_28 != NULL) && (g_28 != t)))
                                    _fail(t);
                                  else
                                    g_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                                  t = symbol2abox_0_0(t);
                                  if(((h_28 != NULL) && (h_28 != t)))
                                    _fail(t);
                                  else
                                    h_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                                  t = index_0_0(t);
                                  m_35 = t;
                                  t = (ATerm) ATinsert(ATempty, m_35);
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm e_36 = NULL;
                              static ATerm j_3 (ATerm t)
                              {
                                ATerm e_23 = t;
                                int f_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_23 = t;
                                    int h_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(h_28));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        LocalPopChoice(h_23);
                                      }
                                    else
                                      {
                                        t = g_23;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(f_23);
                                  }
                                else
                                  {
                                    t = e_23;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                              t = get_pp_entry_0_0(t);
                              if(((g_28 != NULL) && (g_28 != t)))
                                _fail(t);
                              else
                                g_28 = t;
                              t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                              t = symbol2abox_0_0(t);
                              if(((h_28 != NULL) && (h_28 != t)))
                                _fail(t);
                              else
                                h_28 = t;
                              t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                              t = index_0_0(t);
                              e_36 = t;
                              t = (ATerm) ATinsert(ATempty, e_36);
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm a_37 = NULL;
                          static ATerm l_3 (ATerm t)
                          {
                            ATerm k_23 = t;
                            int m_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_23 = t;
                                int s_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(h_28));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(n_3, t);
                                    LocalPopChoice(s_23);
                                  }
                                else
                                  {
                                    t = r_23;
                                    t = flat_list_0_0(t);
                                  }
                                LocalPopChoice(m_23);
                              }
                            else
                              {
                                t = k_23;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), r_30);
                          t = get_pp_entry_0_0(t);
                          if(((g_28 != NULL) && (g_28 != t)))
                            _fail(t);
                          else
                            g_28 = t;
                          t = (ATerm) ATmakeAppl(sym__4, m_29, y_29, r_30, term_t_14);
                          t = symbol2abox_0_0(t);
                          if(((h_28 != NULL) && (h_28 != t)))
                            _fail(t);
                          else
                            h_28 = t;
                          t = (ATerm) ATmakeAppl(sym__2, u_30, g_28);
                          t = index_0_0(t);
                          a_37 = t;
                          t = (ATerm) ATinsert(ATempty, a_37);
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = w_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          d_29 = ATgetArgument(t, 0);
                          g_29 = ATgetArgument(t, 1);
                          k_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = m_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          t_28 = ATgetArgument(t, 0);
                          c_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_29;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          e_29 = ATgetFirst((ATermList) t);
                          f_29 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_29;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = g_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          h_29 = ATgetArgument(t, 0);
                          j_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_23 = t;
                        int v_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_29;
                            if((t_28 != t))
                              {
                                _fail(t);
                              }
                            t = h_29;
                            if((t_28 != t))
                              {
                                _fail(t);
                              }
                            t = j_29;
                            if((c_29 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, t_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, t_28), t_28, k_29), x_29), r_30, u_30);
                            t = r_39(t);
                            LocalPopChoice(v_23);
                          }
                        else
                          {
                            t = t_23;
                            {
                              ATerm y_37 = NULL,a_38 = NULL;
                              t = h_29;
                              if((t_28 != t))
                                {
                                  _fail(t);
                                }
                              t = j_29;
                              if((c_29 != t))
                                {
                                  _fail(t);
                                }
                              t = term_t_14;
                              a_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, u_30, term_t_14);
                              t = i_12(u_30, a_38, t);
                              y_37 = t;
                              t = (ATerm) ATmakeAppl(sym__4, c_29, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_29), c_29, k_29), x_29), r_30, y_37);
                              t = r_39(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = w_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      d_29 = ATgetArgument(t, 0);
                      g_29 = ATgetArgument(t, 1);
                      k_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = m_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      t_28 = ATgetArgument(t, 0);
                      c_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_29;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_29 = ATgetFirst((ATermList) t);
                      f_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_29;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      h_29 = ATgetArgument(t, 0);
                      j_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_23 = t;
                    int y_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_29;
                        if((t_28 != t))
                          {
                            _fail(t);
                          }
                        t = h_29;
                        if((t_28 != t))
                          {
                            _fail(t);
                          }
                        t = j_29;
                        if((c_29 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, t_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, t_28), t_28, k_29), x_29), r_30, u_30);
                        t = r_39(t);
                        LocalPopChoice(y_23);
                      }
                    else
                      {
                        t = w_23;
                        {
                          ATerm n_39 = NULL,o_39 = NULL;
                          t = h_29;
                          if((t_28 != t))
                            {
                              _fail(t);
                            }
                          t = j_29;
                          if((c_29 != t))
                            {
                              _fail(t);
                            }
                          t = term_t_14;
                          o_39 = t;
                          t = (ATerm) ATmakeAppl(sym__2, u_30, term_t_14);
                          t = i_12(u_30, o_39, t);
                          n_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, c_29, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_29), c_29, k_29), x_29), r_30, n_39);
                          t = r_39(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, r_65, (ATerm) ATinsert(ATempty, u_65));
            t = conc_0_0(t);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, l_65, x_63), m_65, j_28, term_t_14);
            t = r_39(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              l_65 = ATgetArgument(t, 0);
              x_63 = ATgetArgument(t, 1);
              {
                ATerm w_68 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_65, x_63);
                w_68 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, l_65, x_63), m_65, r_65, u_65);
                t = s_10(w_68, m_65, r_65, u_65, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  l_65 = ATgetArgument(t, 0);
                  x_63 = ATgetArgument(t, 1);
                  {
                    ATerm s_69 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, l_65, x_63);
                    s_69 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, l_65, x_63), m_65, r_65, u_65);
                    t = s_10(s_69, m_65, r_65, u_65, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      l_65 = ATgetArgument(t, 0);
                      {
                        ATerm c_70 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, l_65);
                        c_70 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, l_65), m_65, r_65, u_65);
                        t = m_10(c_70, m_65, r_65, u_65, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          l_65 = ATgetArgument(t, 0);
                          {
                            ATerm j_70 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, l_65);
                            j_70 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, l_65), m_65, r_65, u_65);
                            t = m_10(j_70, m_65, r_65, u_65, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              l_65 = ATgetArgument(t, 0);
                              t = m_65;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm z_23 = ATgetArgument(t, 0);
                                  d_64 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = d_64;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  y_63 = ATgetFirst((ATermList) t);
                                  z_63 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,i_41 = NULL;
                                    static ATerm o_3 (ATerm t)
                                    {
                                      ATerm a_24 = t;
                                      int b_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_24 = t;
                                          int m_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm p_3 (ATerm t)
                                              {
                                                t = not_null(a_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(p_3, t);
                                              LocalPopChoice(m_24);
                                            }
                                          else
                                            {
                                              t = f_24;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(b_24);
                                        }
                                      else
                                        {
                                          t = a_24;
                                        }
                                      return(t);
                                    }
                                    t = z_63;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, r_65, (ATerm) ATinsert(ATempty, u_65));
                                    t = conc_0_0(t);
                                    i_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, l_65), i_41);
                                    t = get_pp_entry_0_0(t);
                                    x_40 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, l_65, y_63, i_41, term_t_14);
                                    t = symbol2abox_0_0(t);
                                    y_40 = t;
                                    t = (ATerm) ATinsert(ATempty, y_40);
                                    b_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, x_40, (ATerm) ATinsert(ATempty, y_40));
                                    t = k_10(x_40, b_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        z_40 = ATgetArgument(t, 0);
                                        if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          a_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = z_40;
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
                                      ATerm p_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(o_24);
                                  {
                                    ATerm q_24 = t;
                                    int r_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_65;
                                        {
                                          ATerm s_24 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm t_42 = NULL;
                                              t_42 = t;
                                              t = SSL_is_string(t_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = s_24;
                                            }
                                        }
                                        t = m_65;
                                        {
                                          ATerm t_24 = t;
                                          int u_24 = stack_ptr;
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
                                              t = m_65;
                                              t = j_11(b_43, c_43, d_43, e_43, t);
                                              LocalPopChoice(u_24);
                                            }
                                          else
                                            {
                                              t = t_24;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(r_24);
                                      }
                                    else
                                      {
                                        t = q_24;
                                        t = SSL_is_string(m_65);
                                        t = (ATerm) ATmakeAppl(sym_S_1, m_65);
                                      }
                                  }
                                }
                              else
                                {
                                  t = n_24;
                                  {
                                    ATerm v_24 = t;
                                    int w_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm x_24 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(w_24);
                                        {
                                          ATerm h_44 = NULL,i_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, m_65);
                                          i_44 = t;
                                          t = SSL_implode_string(i_44);
                                          h_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, h_44);
                                        }
                                      }
                                    else
                                      {
                                        t = v_24;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            l_65 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, l_65);
                                      }
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
  ATerm c_74 = NULL,f_74 = NULL,j_74 = NULL,m_74 = NULL,o_74 = NULL,r_74 = NULL,t_74 = NULL,x_74 = NULL;
  if(match_cons(t, sym__4))
    {
      c_74 = ATgetArgument(t, 0);
      m_74 = ATgetArgument(t, 1);
      t_74 = ATgetArgument(t, 2);
      x_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_74;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_74 = ATgetFirst((ATermList) t);
          j_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_74 = ATgetFirst((ATermList) t);
          r_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_74;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm b_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_25);
            t = f_74;
            {
              ATerm c_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm f_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_25);
                  {
                    ATerm j_25 = t;
                    int k_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, j_74, r_74, t_74, x_74);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(k_25);
                      }
                    else
                      {
                        t = j_25;
                        {
                          ATerm t_76 = NULL,u_76 = NULL,z_76 = NULL,a_77 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, f_74, o_74, t_74, x_74);
                          t = symbol2abox_0_0(t);
                          t_76 = t;
                          t = term_t_14;
                          a_77 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_74, term_t_14);
                          t = i_12(x_74, a_77, t);
                          z_76 = t;
                          t = (ATerm) ATmakeAppl(sym__4, j_74, r_74, t_74, z_76);
                          t = seq2abox_0_0(t);
                          u_76 = t;
                          t = (ATerm) ATinsert(CheckATermList(u_76), t_76);
                        }
                      }
                  }
                }
              else
                {
                  t = c_25;
                  {
                    ATerm l_77 = NULL,m_77 = NULL,q_77 = NULL,s_77 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, f_74, o_74, t_74, x_74);
                    t = symbol2abox_0_0(t);
                    l_77 = t;
                    t = term_t_14;
                    s_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_74, term_t_14);
                    t = i_12(x_74, s_77, t);
                    q_77 = t;
                    t = (ATerm) ATmakeAppl(sym__4, j_74, r_74, t_74, q_77);
                    t = seq2abox_0_0(t);
                    m_77 = t;
                    t = (ATerm) ATinsert(CheckATermList(m_77), l_77);
                  }
                }
            }
          }
        else
          {
            t = z_24;
            {
              ATerm f_78 = NULL,i_78 = NULL,k_78 = NULL,l_78 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, f_74, o_74, t_74, x_74);
              t = symbol2abox_0_0(t);
              f_78 = t;
              t = term_t_14;
              l_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_74, term_t_14);
              t = i_12(x_74, l_78, t);
              k_78 = t;
              t = (ATerm) ATmakeAppl(sym__4, j_74, r_74, t_74, k_78);
              t = seq2abox_0_0(t);
              i_78 = t;
              t = (ATerm) ATinsert(CheckATermList(i_78), f_78);
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
  t = term_o_25;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
  u_78 = t;
  t = term_u_25;
  x_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, u_78);
  t = k_12(x_78, u_78, t);
  if(match_cons(t, sym__2))
    {
      w_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_78;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_3, t);
  t = (ATerm) ATmakeAppl(sym__2, w_78, v_78);
  return(t);
}
static ATerm w_10 (ATerm m_66, ATerm l_66, ATerm t)
{
  ATerm h_79 = NULL,o_79 = NULL,p_79 = NULL;
  h_79 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      o_79 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_79 = NULL,t_79 = NULL;
            t = m_66;
            t = mk_key_0_0(t);
            s_79 = t;
            t = term_u_25;
            t_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_u_25, s_79);
            t = k_12(t_79, s_79, t);
            t = h_79;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = h_79;
            t = k_11(o_79, p_79, t);
          }
      }
    }
  else
    {
      ATerm x_79 = NULL,y_79 = NULL;
      t = m_66;
      t = mk_key_0_0(t);
      x_79 = t;
      t = term_u_25;
      y_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_25, x_79);
      t = k_12(y_79, x_79, t);
      t = h_79;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm s_128 (ATerm), ATerm t)
{
  ATerm b_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = number_nonterminals_0_0(t);
  g_80 = t;
  t = make_0_0(t);
  b_80 = t;
  t = g_80;
  {
    static ATerm w_3 (ATerm t)
    {
      static ATerm x_3 (ATerm t)
      {
        ATerm h_80 = NULL;
        t = term_m_14;
        t = s_128(t);
        h_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_80, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = concat_0_0(t);
  e_80 = t;
  t = term_m_14;
  t = s_128(t);
  f_80 = t;
  t = (ATerm) ATinsert(CheckATermList(e_80), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, f_80), b_80));
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
  t = term_x_25;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm r_80 = NULL;
  ATerm a_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              f_81 = ATgetArgument(t, 0);
              {
                ATerm f_26 = ATgetArgument(t, 1);
              }
              j_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(e_26);
          {
            static ATerm z_3 (ATerm t)
            {
              t = not_null(r_80);
              return(t);
            }
            t = j_81;
            {
              static ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((r_80 != NULL) && (r_80 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
            }
            t = f_81;
            t = symbols2pp_entries_1_0(z_3, t);
          }
        }
      else
        {
          t = d_26;
          {
            ATerm o_81 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                f_81 = ATgetArgument(t, 0);
                i_81 = ATgetArgument(t, 1);
                j_81 = ATgetArgument(t, 2);
                k_81 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_26)), i_81), (ATerm) ATinsert(ATinsert(ATempty, term_h_26), (ATerm) ATmakeAppl(sym_lit_1, f_81)));
            t = concat_0_0(t);
            o_81 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_81, j_81, k_81);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(c_26);
    }
  else
    {
      t = a_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_26 = t;
            if((PushChoice() == 0))
              {
                ATerm s_81 = NULL;
                s_81 = t;
                t = term_o_26;
                t = get_options_0_0(t);
                t = oncetd_1_0(b_4, t);
                t = s_81;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_26;
              }
            t = debug_1_0(c_4, t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm x_10 (ATerm f_44, ATerm g_44, ATerm t)
{
  t = SSL_mkterm(f_44, g_44);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,n_93 = NULL,o_93 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      n_93 = ATgetArgument(t, 0);
      o_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_93;
  if(match_cons(t, sym_alt_2))
    {
      k_93 = ATgetArgument(t, 0);
      l_93 = ATgetArgument(t, 1);
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_93 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, k_93, l_93);
            t = flat_alt_0_0(t);
            s_93 = t;
            t = (ATerm) ATinsert(CheckATermList(s_93), n_93);
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_93), n_93);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, o_93), n_93);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm d_82 = NULL,i_82 = NULL,m_82 = NULL,n_82 = NULL,q_82 = NULL;
  d_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_82;
    }
  else
    {
      ATerm y_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_82 = ATgetFirst((ATermList) t);
          m_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_82 = ATgetFirst((ATermList) t);
          q_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_82;
      t = pair_0_0(t);
      y_82 = t;
      t = (ATerm) ATinsert(CheckATermList(y_82), (ATerm) ATmakeAppl(sym__2, i_82, n_82));
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
  ATerm y_86 = NULL,d_87 = NULL,f_87 = NULL,h_87 = NULL,s_12 = NULL;
  f_87 = t;
  if(match_cons(t, sym_lit_1))
    {
      d_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_87);
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, d_87);
  s_12 = t;
  t = SSLsetAnnotations(s_12, y_86);
  if(match_cons(t, sym_lit_1))
    {
      h_87 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, h_87));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          h_87 = ATgetArgument(t, 0);
          {
            ATerm t_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, h_87);
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
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,a_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,d_13 = NULL,m_90 = NULL,m_89 = NULL,w_12 = NULL;
  e_89 = t;
  if(match_cons(t, sym__2))
    {
      x_88 = ATgetArgument(t, 0);
      a_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_89);
  w_88 = t;
  t = x_88;
  if(match_cons(t, sym_lit_1))
    {
      d_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_88);
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, d_89);
  w_12 = t;
  t = SSLsetAnnotations(w_12, c_89);
  if(match_cons(t, sym_lit_1))
    {
      m_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, m_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          m_89 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, m_89);
    }
  u_88 = t;
  t = a_89;
  t = _2_0(_id, z_4, t);
  if(match_cons(t, sym_lit_1))
    {
      m_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, m_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          m_90 = ATgetArgument(t, 0);
          {
            ATerm z_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, m_90);
    }
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_88, v_88);
  d_13 = t;
  t = SSLsetAnnotations(d_13, w_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_27), (ATerm) ATinsert(ATinsert(ATempty, v_88), u_88));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL;
  j_90 = t;
  if(match_cons(t, sym_iter_1))
    {
      k_90 = ATgetArgument(t, 0);
      {
        ATerm n_46 = NULL,y_12 = NULL;
        t = SSLgetAnnotations(j_90);
        n_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, k_90);
        y_12 = t;
        t = SSLsetAnnotations(y_12, n_46);
      }
    }
  else
    {
      ATerm f_47 = NULL,b_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          k_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_90);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, k_90);
      b_13 = t;
      t = SSLsetAnnotations(b_13, f_47);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm r_90 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      r_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, r_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          r_90 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, r_90);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,j_84 = NULL,l_84 = NULL;
  ATerm h_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,r_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,z_84 = NULL,b_85 = NULL,c_85 = NULL,t_12 = NULL,q_86 = NULL,p_12 = NULL,n_86 = NULL,o_86 = NULL;
      t = reverse_acc_2_0(_id, h_4, t);
      c_85 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_84 = ATgetFirst((ATermList) t);
          r_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_85);
      n_84 = t;
      t = o_84;
      if(match_cons(t, sym__2))
        {
          w_84 = ATgetArgument(t, 0);
          z_84 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_84);
      v_84 = t;
      t = z_84;
      if(match_cons(t, sym_iter_1))
        {
          n_86 = ATgetArgument(t, 0);
          {
            ATerm m_44 = NULL,u_11 = NULL;
            t = SSLgetAnnotations(z_84);
            m_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, n_86);
            u_11 = t;
            t = SSLsetAnnotations(u_11, m_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              n_86 = ATgetArgument(t, 0);
              {
                ATerm w_44 = NULL,v_11 = NULL;
                t = SSLgetAnnotations(z_84);
                w_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, n_86);
                v_11 = t;
                t = SSLsetAnnotations(v_11, w_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  n_86 = ATgetArgument(t, 0);
                  o_86 = ATgetArgument(t, 1);
                  {
                    ATerm i_45 = NULL,z_11 = NULL;
                    t = SSLgetAnnotations(z_84);
                    i_45 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, n_86, o_86);
                    z_11 = t;
                    t = SSLsetAnnotations(z_11, i_45);
                  }
                }
              else
                {
                  ATerm b_46 = NULL,o_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      n_86 = ATgetArgument(t, 0);
                      o_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_84);
                  b_46 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, n_86, o_86);
                  o_12 = t;
                  t = SSLsetAnnotations(o_12, b_46);
                }
            }
        }
      b_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_84, b_85);
      p_12 = t;
      t = SSLsetAnnotations(p_12, v_84);
      if(match_cons(t, sym_lit_1))
        {
          q_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, q_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              q_86 = ATgetArgument(t, 0);
              {
                ATerm m_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, q_86);
        }
      t_84 = t;
      t = r_84;
      t = map_1_0(j_4, t);
      u_84 = t;
      t = (ATerm) ATinsert(CheckATermList(u_84), t_84);
      t_12 = t;
      t = SSLsetAnnotations(t_12, n_84);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_84 = ATgetFirst((ATermList) t);
          e_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_27 = t;
        if((PushChoice() == 0))
          {
            ATerm q_87 = NULL,u_87 = NULL,x_87 = NULL,y_87 = NULL,u_12 = NULL;
            y_87 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_87 = ATgetFirst((ATermList) t);
                x_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_87);
            q_87 = t;
            t = x_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_87), u_87);
            u_12 = t;
            t = SSLsetAnnotations(u_12, q_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_27;
          }
      }
      t = e_84;
      t = reverse_acc_2_0(_id, m_4, t);
      m_84 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_84), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, m_84)));
      LocalPopChoice(l_27);
    }
  else
    {
      t = h_27;
      {
        ATerm p_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,v_12 = NULL,j_88 = NULL;
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
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_26, (ATerm) ATmakeAppl(sym_S_1, j_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    j_88 = ATgetArgument(t, 0);
                    {
                      ATerm y_27 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, j_88);
              }
            l_84 = t;
            t = c_88;
            {
              ATerm z_27 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_27;
                }
            }
            t = reverse_acc_2_0(_id, p_4, t);
            g_84 = t;
            t = (ATerm) ATinsert(CheckATermList(g_84), l_84);
            v_12 = t;
            t = SSLsetAnnotations(v_12, a_88);
            t = g_84;
            t = pair_0_0(t);
            t = map_1_0(v_4, t);
            j_84 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, l_84), j_84));
            LocalPopChoice(x_27);
          }
        else
          {
            t = p_27;
            t = map_1_0(e_5, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm a_28 = t;
  if((PushChoice() == 0))
    {
      ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,y_13 = NULL;
      d_91 = t;
      if(match_cons(t, sym_lit_1))
        {
          c_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_91);
      b_91 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, c_91);
      y_13 = t;
      t = SSLsetAnnotations(y_13, b_91);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_28;
    }
  return(t);
}
static ATerm i_92 (ATerm i_91, ATerm j_91, ATerm k_91, ATerm t)
{
  ATerm o_91 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(i_91);
  o_91 = t;
  t = k_91;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_91, k_91);
  a_14 = t;
  t = SSLsetAnnotations(a_14, o_91);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  ATerm h_91 = NULL;
  static ATerm h_92 (ATerm t)
  {
    ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL;
    s_91 = t;
    if(match_cons(t, sym__2))
      {
        t_91 = ATgetArgument(t, 0);
        u_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_91 = ATgetFirst((ATermList) t);
        w_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_92(s_91, t_91, u_91, t);
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                ATerm d_28 = t;
                int e_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
                    t = v_91;
                    t = w_128(t);
                    t = term_t_14;
                    c_92 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_91, term_t_14);
                    t = i_12(t_91, c_92, t);
                    b_92 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_92, w_91);
                    t = h_92(t);
                    a_92 = t;
                    t = (ATerm) ATinsert(CheckATermList(a_92), (ATerm) ATmakeAppl(sym__2, t_91, v_91));
                    LocalPopChoice(e_28);
                  }
                else
                  {
                    t = d_28;
                    {
                      ATerm g_92 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, t_91, w_91);
                      t = h_92(t);
                      g_92 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_92), v_91);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = i_92(s_91, t_91, u_91, t);
      }
    return(t);
  }
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, h_91);
  t = h_92(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL;
  n_92 = t;
  {
    ATerm f_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            m_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_28);
        t = m_92;
      }
    else
      {
        t = f_28;
        t = n_92;
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
  ATerm z_92 = NULL;
  z_92 = t;
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_92;
        {
          ATerm b_29 = t;
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
                      ATerm i_29 = ATgetFirst((ATermList) t);
                      ATerm l_29 = (ATerm) ATgetNext((ATermList) t);
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
              t = b_29;
            }
        }
        t = (ATerm) ATinsert(ATempty, z_92);
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        t = z_92;
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
ATerm _2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,e_14 = NULL;
  h_93 = t;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_93);
  c_93 = t;
  t = d_93;
  t = m_75(t);
  f_93 = t;
  t = e_93;
  t = n_75(t);
  g_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_93, g_93);
  e_14 = t;
  t = SSLsetAnnotations(e_14, c_93);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          r_96 = ATgetArgument(t, 0);
          s_96 = ATgetArgument(t, 1);
          {
            ATerm v_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_29);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, r_96, s_96);
    }
  else
    {
      t = t_29;
      if(match_cons(t, sym_iter_n_2))
        {
          r_96 = ATgetArgument(t, 0);
          {
            ATerm z_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, r_96);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm a_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_50 = NULL,i_14 = NULL;
            t = SSLgetAnnotations(t_49);
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_49);
            i_14 = t;
            t = SSLsetAnnotations(i_14, f_50);
            t = term_g_30;
            LocalPopChoice(c_30);
          }
        else
          {
            t = a_30;
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
ATerm symbol2abox_1_0 (ATerm t_128 (ATerm), ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  static ATerm f_98 (ATerm t)
  {
    static ATerm h_98 (ATerm z_95, ATerm a_96, ATerm b_96, ATerm t)
    {
      ATerm c_96 = NULL,m_96 = NULL,h_14 = NULL;
      t = SSLgetAnnotations(z_95);
      c_96 = t;
      t = b_96;
      t = _2_0(_id, k_5, t);
      m_96 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_96, m_96);
      h_14 = t;
      t = SSLsetAnnotations(h_14, c_96);
      t = f_98(t);
      return(t);
    }
    static ATerm i_98 (ATerm w_96, ATerm x_96, ATerm y_96, ATerm z_96, ATerm t)
    {
      ATerm c_97 = NULL,g_97 = NULL,h_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
      t = SSL_explode_term(z_96);
      if(match_cons(t, sym__2))
        {
          j_97 = ATgetArgument(t, 0);
          k_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, x_96, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, y_96, j_97)));
      t = conc_0_0(t);
      c_97 = t;
      t = k_97;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      l_97 = t;
      t = make_0_0(t);
      g_97 = t;
      t = l_97;
      {
        static ATerm o_5 (ATerm t)
        {
          ATerm n_97 = NULL;
          n_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_96, c_97), n_97);
          t = f_98(t);
          return(t);
        }
        t = map_1_0(o_5, t);
      }
      t = concat_0_0(t);
      h_97 = t;
      t = (ATerm) ATinsert(CheckATermList(h_97), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, w_96, c_97), g_97));
      return(t);
    }
    ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
    s_97 = t;
    if(match_cons(t, sym__2))
      {
        t_97 = ATgetArgument(t, 0);
        w_97 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_97;
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm n_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(j_30);
          t = (ATerm) ATempty;
        }
      else
        {
          t = i_30;
          if(match_cons(t, sym__2))
            {
              x_97 = ATgetArgument(t, 0);
              y_97 = ATgetArgument(t, 1);
              t = y_97;
              {
                ATerm t_30 = t;
                int w_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm x_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_30);
                    t = t_97;
                    {
                      ATerm z_30 = t;
                      int b_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm d_31 = ATgetArgument(t, 0);
                              ATerm e_31 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_31);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = z_30;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = t_30;
                    {
                      ATerm f_31 = t;
                      int g_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm h_31 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(g_31);
                          t = t_97;
                          {
                            ATerm i_31 = t;
                            int j_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm k_31 = ATgetArgument(t, 0);
                                    ATerm l_31 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(j_31);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = i_31;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = f_31;
                          if(match_cons(t, sym_alt_2))
                            {
                              r_97 = ATgetArgument(t, 0);
                              o_97 = ATgetArgument(t, 1);
                              t = o_97;
                              if(match_cons(t, sym_alt_2))
                                {
                                  p_97 = ATgetArgument(t, 0);
                                  q_97 = ATgetArgument(t, 1);
                                  t = t_97;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_97 = ATgetArgument(t, 0);
                                      v_97 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_31 = t;
                                        int n_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,j_14 = NULL;
                                            t = u_97;
                                            if(((u_94 != NULL) && (u_94 != t)))
                                              _fail(t);
                                            else
                                              u_94 = t;
                                            t = v_97;
                                            if(((v_94 != NULL) && (v_94 != t)))
                                              _fail(t);
                                            else
                                              v_94 = t;
                                            t = x_97;
                                            if(((w_94 != NULL) && (w_94 != t)))
                                              _fail(t);
                                            else
                                              w_94 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, r_97, (ATerm) ATmakeAppl(sym_alt_2, p_97, q_97));
                                            t = flat_alt_0_0(t);
                                            f_49 = t;
                                            t = term_o_31;
                                            h_49 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_o_31, f_49);
                                            t = x_10(h_49, f_49, t);
                                            g_49 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_97, v_97), (ATerm) ATmakeAppl(sym__2, x_97, g_49));
                                            t = f_98(t);
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
                                            t = topdown_1_0(q_5, t);
                                            l_49 = t;
                                            t = (ATerm) ATinsert(CheckATermList(k_49), l_49);
                                            j_14 = t;
                                            t = SSLsetAnnotations(j_14, i_49);
                                            LocalPopChoice(n_31);
                                          }
                                        else
                                          {
                                            t = m_31;
                                            {
                                              ATerm p_31 = t;
                                              int v_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = h_98(s_97, t_97, w_97, t);
                                                  LocalPopChoice(v_31);
                                                }
                                              else
                                                {
                                                  t = p_31;
                                                  t = i_98(u_97, v_97, x_97, y_97, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = h_98(s_97, t_97, w_97, t);
                                    }
                                }
                              else
                                {
                                  t = t_97;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_97 = ATgetArgument(t, 0);
                                      v_97 = ATgetArgument(t, 1);
                                      {
                                        ATerm w_31 = t;
                                        int z_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_98(s_97, t_97, w_97, t);
                                            LocalPopChoice(z_31);
                                          }
                                        else
                                          {
                                            t = w_31;
                                            t = i_98(u_97, v_97, x_97, y_97, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = h_98(s_97, t_97, w_97, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  r_97 = ATgetArgument(t, 0);
                                  t = t_97;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_97 = ATgetArgument(t, 0);
                                      v_97 = ATgetArgument(t, 1);
                                      {
                                        ATerm g_32 = t;
                                        int h_32 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_98(s_97, t_97, w_97, t);
                                            LocalPopChoice(h_32);
                                          }
                                        else
                                          {
                                            t = g_32;
                                            {
                                              ATerm i_32 = t;
                                              int j_32 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_97, v_97), (ATerm) ATmakeAppl(sym__2, x_97, r_97));
                                                  t = f_98(t);
                                                  LocalPopChoice(j_32);
                                                }
                                              else
                                                {
                                                  t = i_32;
                                                  t = i_98(u_97, v_97, x_97, y_97, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = h_98(s_97, t_97, w_97, t);
                                    }
                                }
                              else
                                {
                                  t = t_97;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_97 = ATgetArgument(t, 0);
                                      v_97 = ATgetArgument(t, 1);
                                      {
                                        ATerm k_32 = t;
                                        int m_32 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_98(s_97, t_97, w_97, t);
                                            LocalPopChoice(m_32);
                                          }
                                        else
                                          {
                                            t = k_32;
                                            t = i_98(u_97, v_97, x_97, y_97, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = h_98(s_97, t_97, w_97, t);
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
              t = t_97;
              t = h_98(s_97, t_97, w_97, t);
            }
        }
    }
    return(t);
  }
  y_94 = t;
  t = term_m_14;
  t = t_128(t);
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_94, y_94);
  t = f_98(t);
  return(t);
}
static ATerm n_100 (ATerm t_98, ATerm u_98, ATerm v_98, ATerm t)
{
  ATerm w_98 = NULL,y_98 = NULL;
  t = v_98;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        t = u_98;
        t = pp_table_get_0_0(t);
        l_50 = t;
        t = SSL_explode_term(l_50);
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_32 = ATgetArgument(t, 1);
              if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
                {
                  ATerm v_32 = ATgetFirst((ATermList) r_32);
                  ATerm w_32 = (ATerm) ATgetNext((ATermList) r_32);
                  if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
                    {
                      k_50 = ATgetFirst((ATermList) w_32);
                      {
                        ATerm y_32 = (ATerm) ATgetNext((ATermList) w_32);
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
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,m_50 = NULL,n_50 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,o_99 = NULL,n_14 = NULL;
          t = u_98;
          t = reverse_acc_2_0(_id, r_5, t);
          f_99 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_99 = ATgetFirst((ATermList) t);
              e_99 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_99);
          c_99 = t;
          t = e_99;
          t = reverse_acc_2_0(_id, s_5, t);
          w_98 = t;
          t = (ATerm) ATinsert(CheckATermList(w_98), d_99);
          n_14 = t;
          t = SSLsetAnnotations(n_14, c_99);
          t = w_98;
          t = pp_table_get_0_0(t);
          b_99 = t;
          t = SSL_explode_term(b_99);
          if(match_cons(t, sym__2))
            {
              ATerm a_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm c_33 = ATgetArgument(t, 1);
                if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
                  {
                    a_99 = ATgetFirst((ATermList) c_33);
                    {
                      ATerm d_33 = (ATerm) ATgetNext((ATermList) c_33);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = a_99;
          if(match_cons(t, sym_Path_2))
            {
              o_99 = ATgetArgument(t, 0);
              k_99 = ATgetArgument(t, 1);
              t = k_99;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_99 = ATgetFirst((ATermList) t);
                  m_99 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_99;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, o_99, (ATerm) ATinsert(ATempty, l_99));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  o_99 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, o_99, (ATerm) ATempty);
            }
          y_98 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_99, t_98);
          {
            static ATerm v_5 (ATerm t)
            {
              t = y_98;
              return(t);
            }
            t = symbol2abox_1_0(v_5, t);
          }
          t = map_1_0(w_5, t);
          t = u_98;
          t = pp_table_get_0_0(t);
          n_50 = t;
          t = SSL_explode_term(n_50);
          if(match_cons(t, sym__2))
            {
              ATerm e_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm f_33 = ATgetArgument(t, 1);
                if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
                  {
                    ATerm g_33 = ATgetFirst((ATermList) f_33);
                    ATerm h_33 = (ATerm) ATgetNext((ATermList) f_33);
                    if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
                      {
                        m_50 = ATgetFirst((ATermList) h_33);
                        {
                          ATerm k_33 = (ATerm) ATgetNext((ATermList) h_33);
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
static ATerm o_100 (ATerm w_99, ATerm x_99, ATerm y_99, ATerm z_99, ATerm a_100, ATerm t)
{
  t = a_100;
  {
    ATerm l_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = z_99;
        t = pp_table_get_0_0(t);
        p_50 = t;
        t = SSL_explode_term(p_50);
        if(match_cons(t, sym__2))
          {
            ATerm q_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_33 = ATgetArgument(t, 1);
              if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
                {
                  ATerm s_33 = ATgetFirst((ATermList) r_33);
                  ATerm t_33 = (ATerm) ATgetNext((ATermList) r_33);
                  if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
                    {
                      o_50 = ATgetFirst((ATermList) t_33);
                      {
                        ATerm v_33 = (ATerm) ATgetNext((ATermList) t_33);
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
        LocalPopChoice(n_33);
      }
    else
      {
        t = l_33;
        {
          ATerm q_50 = NULL,b_51 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, w_99, x_99, y_99);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(x_5, t);
          t = z_99;
          t = pp_table_get_0_0(t);
          b_51 = t;
          t = SSL_explode_term(b_51);
          if(match_cons(t, sym__2))
            {
              ATerm w_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm x_33 = ATgetArgument(t, 1);
                if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
                  {
                    ATerm y_33 = ATgetFirst((ATermList) x_33);
                    ATerm z_33 = (ATerm) ATgetNext((ATermList) x_33);
                    if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
                      {
                        q_50 = ATgetFirst((ATermList) z_33);
                        {
                          ATerm a_34 = (ATerm) ATgetNext((ATermList) z_33);
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
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_99 = ATgetArgument(t, 0);
      v_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(u_99, v_99, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_100 = ATgetArgument(t, 0);
      g_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(f_100, g_100, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL;
  h_100 = t;
  if(match_cons(t, sym__2))
    {
      i_100 = ATgetArgument(t, 0);
      m_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_100;
  if(match_cons(t, sym_prod_3))
    {
      j_100 = ATgetArgument(t, 0);
      k_100 = ATgetArgument(t, 1);
      l_100 = ATgetArgument(t, 2);
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_100(i_100, m_100, h_100, t);
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = o_100(j_100, k_100, l_100, m_100, h_100, t);
          }
      }
    }
  else
    {
      t = n_100(i_100, m_100, h_100, t);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_34 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_34) != AT_INT) || (ATgetInt((ATermInt) e_34) != 34)))
        _fail(t);
      {
        ATerm f_34 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_34) != AT_LIST) || !(ATisEmpty(f_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  r_100 = t;
  t = SSL_explode_string(r_100);
  p_100 = t;
  {
    ATerm g_34 = t;
    if((PushChoice() == 0))
      {
        ATerm s_100 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_100 = ATgetFirst((ATermList) t);
            {
              ATerm k_34 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_100;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_34;
      }
  }
  t = p_100;
  {
    ATerm l_34 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(y_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_34;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_34)), p_100), (ATerm) ATinsert(ATempty, term_n_34));
  t = concat_0_0(t);
  q_100 = t;
  t = SSL_implode_string(q_100);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm u_100 = NULL,y_100 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm q_34 = ATgetArgument(t, 0);
          ATerm x_34 = ATgetArgument(t, 1);
          ATerm y_34 = ATgetArgument(t, 2);
          u_100 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(p_34);
      {
        ATerm a_101 = NULL;
        t = u_100;
        {
          static ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((a_101 != NULL) && (a_101 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_101 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
        }
        t = not_null(a_101);
      }
    }
  else
    {
      t = o_34;
      {
        ATerm c_101 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm z_34 = ATgetArgument(t, 0);
            ATerm b_35 = ATgetArgument(t, 1);
            y_100 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = y_100;
        {
          static ATerm a_6 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((c_101 != NULL) && (c_101 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_101 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(a_6, t);
        }
        t = not_null(c_101);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL;
  if(match_cons(t, sym__2))
    {
      l_101 = ATgetArgument(t, 0);
      p_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_101;
  if(match_cons(t, sym_prod_fun_4))
    {
      m_101 = ATgetArgument(t, 0);
      n_101 = ATgetArgument(t, 1);
      o_101 = ATgetArgument(t, 2);
      i_101 = ATgetArgument(t, 3);
      t = i_101;
      if(match_cons(t, sym_attrs_1))
        {
          h_101 = ATgetArgument(t, 0);
          {
            ATerm v_101 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_101, p_101);
            t = conc_0_0(t);
            v_101 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, m_101, n_101, o_101, (ATerm) ATmakeAppl(sym_attrs_1, v_101));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, m_101, n_101, o_101, (ATerm) ATmakeAppl(sym_attrs_1, p_101));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          m_101 = ATgetArgument(t, 0);
          n_101 = ATgetArgument(t, 1);
          o_101 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_101;
      if(match_cons(t, sym_attrs_1))
        {
          j_101 = ATgetArgument(t, 0);
          {
            ATerm e_102 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, j_101, p_101);
            t = conc_0_0(t);
            e_102 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, m_101, n_101, (ATerm) ATmakeAppl(sym_attrs_1, e_102));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, m_101, n_101, (ATerm) ATmakeAppl(sym_attrs_1, p_101));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,q_14 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
      u_102 = t;
      if(match_int(t, 34))
        {
          ATerm e_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_n_34), term_i_35);
              LocalPopChoice(h_35);
            }
          else
            {
              t = e_35;
              t = (ATerm) ATinsert(ATempty, u_102);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm j_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_35), term_i_35);
                  LocalPopChoice(k_35);
                }
              else
                {
                  t = j_35;
                  t = (ATerm) ATinsert(ATempty, u_102);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_102 = ATgetFirst((ATermList) t);
                  w_102 = (ATerm) ATgetNext((ATermList) t);
                  t = v_102;
                  if(match_int(t, 34))
                    {
                      ATerm l_35 = t;
                      int n_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, u_102);
                          LocalPopChoice(n_35);
                        }
                      else
                        {
                          t = l_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_102), term_n_34), term_i_35);
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
                              t = (ATerm) ATinsert(ATempty, u_102);
                              LocalPopChoice(p_35);
                            }
                          else
                            {
                              t = o_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_102), term_i_35), term_i_35);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm s_35 = t;
                              int t_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, u_102);
                                  LocalPopChoice(t_35);
                                }
                              else
                                {
                                  t = s_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(w_102), term_u_35), term_i_35);
                                }
                            }
                          else
                            {
                              if(match_int(t, 13))
                                {
                                  ATerm v_35 = t;
                                  int x_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATinsert(ATempty, u_102);
                                      LocalPopChoice(x_35);
                                    }
                                  else
                                    {
                                      t = v_35;
                                      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_102), term_y_35), term_i_35);
                                    }
                                }
                              else
                                {
                                  t = (ATerm) ATinsert(ATempty, u_102);
                                }
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, u_102);
                }
            }
        }
      t_102 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_102 = ATgetFirst((ATermList) t);
          r_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_102);
      p_102 = t;
      t = r_102;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      s_102 = t;
      t = (ATerm) ATinsert(CheckATermList(s_102), q_102);
      q_14 = t;
      t = SSLsetAnnotations(q_14, p_102);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL;
        u_103 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_103 = ATgetFirst((ATermList) t);
            t_103 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm r_51 = NULL,w_51 = NULL,r_14 = NULL;
              t = SSLgetAnnotations(u_103);
              r_51 = t;
              t = t_103;
              t = escape_chars_0_0(t);
              w_51 = t;
              t = (ATerm) ATinsert(CheckATermList(w_51), s_103);
              r_14 = t;
              t = SSLsetAnnotations(r_14, r_51);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_103;
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_52 = NULL,p_52 = NULL,r_52 = NULL;
  n_52 = t;
  if(match_int(t, 34))
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_n_34), term_i_35);
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
          t = (ATerm) ATinsert(ATempty, n_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm c_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_i_35), term_i_35);
              LocalPopChoice(f_36);
            }
          else
            {
              t = c_36;
              t = (ATerm) ATinsert(ATempty, n_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_52 = ATgetFirst((ATermList) t);
              r_52 = (ATerm) ATgetNext((ATermList) t);
              t = p_52;
              if(match_int(t, 34))
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, n_52);
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(r_52), term_n_34), term_i_35);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm j_36 = t;
                      int k_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, n_52);
                          LocalPopChoice(k_36);
                        }
                      else
                        {
                          t = j_36;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(r_52), term_i_35), term_i_35);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm l_36 = t;
                          int n_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, n_52);
                              LocalPopChoice(n_36);
                            }
                          else
                            {
                              t = l_36;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(r_52), term_u_35), term_i_35);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm p_36 = t;
                              int q_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, n_52);
                                  LocalPopChoice(q_36);
                                }
                              else
                                {
                                  t = p_36;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_52), term_y_35), term_i_35);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, n_52);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, n_52);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_105 = NULL,f_52 = NULL;
      c_105 = t;
      t = SSL_explode_string(c_105);
      t = map_1_0(b_6, t);
      t = concat_0_0(t);
      f_52 = t;
      t = SSL_implode_string(f_52);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm w_53 = NULL,x_53 = NULL;
        x_53 = t;
        t = SSL_explode_string(x_53);
        t = escape_chars_0_0(t);
        w_53 = t;
        t = SSL_implode_string(w_53);
      }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm t_36 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_36;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,h_54 = NULL,i_54 = NULL,k_54 = NULL,d_54 = NULL,e_54 = NULL,s_18 = NULL;
  t = filter_1_0(c_6, t);
  m_105 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_105 = ATgetFirst((ATermList) t);
      k_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_105);
  i_105 = t;
  t = SSL_explode_string(j_105);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_105 = ATgetFirst((ATermList) t);
      {
        ATerm v_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_105;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_105, term_z_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_b_37, l_105);
        t = leq_0_0(t);
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = (ATerm) ATmakeAppl(sym__2, l_105, term_c_37);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_37, l_105);
        t = leq_0_0(t);
      }
  }
  t = (ATerm) ATinsert(CheckATermList(k_105), j_105);
  s_18 = t;
  t = SSLsetAnnotations(s_18, i_105);
  e_54 = t;
  t = term_e_37;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_37, e_54);
  t = c_11(d_54, e_54, t);
  f_105 = t;
  t = SSL_concat_strings(f_105);
  e_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_105, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_38), term_v_37), term_u_37), term_t_37), term_s_37), term_r_37), term_q_37), term_n_37), term_k_37), term_j_37), term_i_37), term_h_37), term_f_37));
  {
    ATerm e_38 = t;
    if((PushChoice() == 0))
      {
        ATerm n_105 = NULL,o_105 = NULL;
        if(match_cons(t, sym__2))
          {
            n_105 = ATgetArgument(t, 0);
            o_105 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_105;
        {
          static ATerm d_6 (ATerm t)
          {
            if((n_105 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(d_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, n_105, o_105);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_38;
      }
  }
  t = e_105;
  t = escape_0_0(t);
  i_54 = t;
  t = SSL_explode_string(i_54);
  k_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_34)), k_54), (ATerm) ATinsert(ATempty, term_n_34));
  t = concat_0_0(t);
  h_54 = t;
  t = SSL_implode_string(h_54);
  return(t);
}
static ATerm b_106 (ATerm t_105, ATerm t)
{
  ATerm u_105 = NULL;
  t = SSL_explode_term(t_105);
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_105;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL;
  y_105 = t;
  if(match_cons(t, sym__2))
    {
      w_105 = ATgetArgument(t, 0);
      x_105 = ATgetArgument(t, 1);
      {
        ATerm h_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_6 (ATerm t)
            {
              t = x_105;
              return(t);
            }
            t = w_105;
            t = at_end_1_0(e_6, t);
            LocalPopChoice(k_38);
          }
        else
          {
            t = h_38;
            t = b_106(y_105, t);
          }
      }
    }
  else
    {
      t = b_106(y_105, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_38);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_38);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_38);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL;
  b_107 = t;
  if(match_cons(t, sym_cf_1))
    {
      z_106 = ATgetArgument(t, 0);
      t = z_106;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          z_106 = ATgetArgument(t, 0);
          t = z_106;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_r_38);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  z_106 = ATgetArgument(t, 0);
                  a_107 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(a_107), z_106);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      z_106 = ATgetArgument(t, 0);
                      t = z_106;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(f_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          z_106 = ATgetArgument(t, 0);
                          t = z_106;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(g_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              z_106 = ATgetArgument(t, 0);
                              t = z_106;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(j_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  z_106 = ATgetArgument(t, 0);
                                  a_107 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_107 = NULL,n_107 = NULL;
                                    t = z_106;
                                    t = Sym2Strs_0_0(t);
                                    m_107 = t;
                                    t = a_107;
                                    t = Sym2Strs_0_0(t);
                                    n_107 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_38)), n_107), m_107);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      z_106 = ATgetArgument(t, 0);
                                      a_107 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_107 = NULL,r_107 = NULL;
                                        t = z_106;
                                        t = Sym2Strs_0_0(t);
                                        q_107 = t;
                                        t = a_107;
                                        t = Sym2Strs_0_0(t);
                                        r_107 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_38)), r_107), q_107);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm s_38 = t;
                                      int t_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              z_106 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_38 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_38);
                                          {
                                            ATerm t_107 = NULL;
                                            t = z_106;
                                            t = Sym2Strs_0_0(t);
                                            t_107 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_38)), t_107);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = s_38;
                                          {
                                            ATerm y_38 = t;
                                            int z_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    z_106 = ATgetArgument(t, 0);
                                                    a_107 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_39 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(z_38);
                                                {
                                                  ATerm x_107 = NULL,y_107 = NULL;
                                                  t = z_106;
                                                  t = Sym2Strs_0_0(t);
                                                  x_107 = t;
                                                  t = a_107;
                                                  t = Sym2Strs_0_0(t);
                                                  y_107 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_38)), y_107), x_107);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = y_38;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    z_106 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_108 = NULL;
                                                      t = z_106;
                                                      t = Sym2Strs_0_0(t);
                                                      a_108 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, a_108), (ATerm) ATinsert(ATempty, term_b_39));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        z_106 = ATgetArgument(t, 0);
                                                        a_107 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_108 = NULL,e_108 = NULL;
                                                          t = z_106;
                                                          t = Sym2Strs_0_0(t);
                                                          d_108 = t;
                                                          t = a_107;
                                                          t = Sym2Strs_0_0(t);
                                                          e_108 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_108), (ATerm) ATinsert(ATempty, term_c_39)), d_108);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            z_106 = ATgetArgument(t, 0);
                                                            a_107 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_108 = NULL,i_108 = NULL;
                                                              t = z_106;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              h_108 = t;
                                                              t = a_107;
                                                              t = Sym2Strs_0_0(t);
                                                              i_108 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_108), (ATerm) ATinsert(ATempty, term_d_39)), h_108);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                z_106 = ATgetArgument(t, 0);
                                                                a_107 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm l_108 = NULL,m_108 = NULL;
                                                                  t = z_106;
                                                                  t = Sym2Strs_0_0(t);
                                                                  l_108 = t;
                                                                  t = a_107;
                                                                  t = Sym2Strs_0_0(t);
                                                                  m_108 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_108), (ATerm) ATinsert(ATempty, term_e_39)), l_108);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    z_106 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm o_108 = NULL;
                                                                      t = z_106;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      o_108 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(o_108), term_f_39);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        z_106 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, z_106);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            z_106 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm y_54 = NULL;
                                                                              t = z_106;
                                                                              {
                                                                                ATerm g_39 = t;
                                                                                int h_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(h_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_39;
                                                                                  }
                                                                              }
                                                                              y_54 = t;
                                                                              t = (ATerm) ATinsert(ATempty, y_54);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm i_39 = t;
                                                                            int m_39 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    z_106 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm p_39 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_39);
                                                                                {
                                                                                  ATerm l_55 = NULL;
                                                                                  t = z_106;
                                                                                  {
                                                                                    ATerm q_39 = t;
                                                                                    int t_39 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(t_39);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_39;
                                                                                      }
                                                                                  }
                                                                                  l_55 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, l_55);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_39;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_u_39);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm k_6 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(k_6, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_39 = ATgetFirst((ATermList) t);
      if(((ATgetType(x_39) != AT_INT) || (ATgetInt((ATermInt) x_39) != 34)))
        _fail(t);
      {
        ATerm y_39 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
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
  ATerm a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL,e_114 = NULL;
  e_114 = t;
  t = SSL_explode_string(e_114);
  a_114 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_114 = ATgetFirst((ATermList) t);
      {
        ATerm a_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_114;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = a_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_40 = ATgetFirst((ATermList) t);
      c_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_114;
  t = at_last_1_0(p_6, t);
  b_114 = t;
  t = SSL_implode_string(b_114);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm e_40 = t;
  if((PushChoice() == 0))
    {
      ATerm y_108 = NULL,z_108 = NULL;
      if(match_cons(t, sym__2))
        {
          y_108 = ATgetArgument(t, 0);
          z_108 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, y_108, z_108);
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(y_108, z_108);
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            t = SSL_gtr(y_108, z_108);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, y_108, z_108);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
static ATerm m_109 (ATerm i_109, ATerm t)
{
  t = SSL_explode_string(i_109);
  {
    ATerm h_40 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(v_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_40;
      }
  }
  t = term_i_40;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_55 = NULL;
      x_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_55, term_l_40);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_40, x_55);
      t = leq_0_0(t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_55 = NULL;
            z_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_55, term_z_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_37, z_55);
            t = leq_0_0(t);
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
            {
              ATerm p_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_56 = NULL;
                  b_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_56, term_c_37);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_d_37, b_56);
                  t = leq_0_0(t);
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = p_40;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_m_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm l_109 = NULL;
  l_109 = t;
  if(match_string(t, "|="))
    {
      ATerm t_40 = t;
      int u_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_109(l_109, t);
          LocalPopChoice(u_40);
        }
      else
        {
          t = t_40;
          t = term_v_40;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm w_40 = t;
          int f_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_109(l_109, t);
              LocalPopChoice(f_41);
            }
          else
            {
              t = w_40;
              t = term_g_41;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm h_41 = t;
              int k_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_109(l_109, t);
                  LocalPopChoice(k_41);
                }
              else
                {
                  t = h_41;
                  t = term_l_41;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm m_41 = t;
                  int n_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_109(l_109, t);
                      LocalPopChoice(n_41);
                    }
                  else
                    {
                      t = m_41;
                      t = term_o_41;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm p_41 = t;
                      int q_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_109(l_109, t);
                          LocalPopChoice(q_41);
                        }
                      else
                        {
                          t = p_41;
                          t = term_v_41;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm w_41 = t;
                          int x_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_109(l_109, t);
                              LocalPopChoice(x_41);
                            }
                          else
                            {
                              t = w_41;
                              t = term_z_41;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm a_42 = t;
                              int c_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_109(l_109, t);
                                  LocalPopChoice(c_42);
                                }
                              else
                                {
                                  t = a_42;
                                  t = term_e_42;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm f_42 = t;
                                  int g_42 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_109(l_109, t);
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
                                  if(match_string(t, "/="))
                                    {
                                      ATerm i_42 = t;
                                      int q_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_109(l_109, t);
                                          LocalPopChoice(q_42);
                                        }
                                      else
                                        {
                                          t = i_42;
                                          t = term_r_42;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm s_42 = t;
                                          int u_42 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = m_109(l_109, t);
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
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm z_42 = t;
                                              int f_43 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = m_109(l_109, t);
                                                  LocalPopChoice(f_43);
                                                }
                                              else
                                                {
                                                  t = z_42;
                                                  t = term_g_43;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm h_43 = t;
                                                  int i_43 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = m_109(l_109, t);
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
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm k_43 = t;
                                                      int l_43 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_109(l_109, t);
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
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm q_43 = t;
                                                          int r_43 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = m_109(l_109, t);
                                                              LocalPopChoice(r_43);
                                                            }
                                                          else
                                                            {
                                                              t = q_43;
                                                              t = term_e_39;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm s_43 = t;
                                                              int x_43 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = m_109(l_109, t);
                                                                  LocalPopChoice(x_43);
                                                                }
                                                              else
                                                                {
                                                                  t = s_43;
                                                                  t = term_y_43;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm z_43 = t;
                                                                  int a_44 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = m_109(l_109, t);
                                                                      LocalPopChoice(a_44);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_43;
                                                                      t = term_y_43;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm b_44 = t;
                                                                      int c_44 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = m_109(l_109, t);
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
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm e_44 = t;
                                                                          int j_44 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = m_109(l_109, t);
                                                                              LocalPopChoice(j_44);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_44;
                                                                              t = term_k_44;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm l_44 = t;
                                                                              int n_44 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = m_109(l_109, t);
                                                                                  LocalPopChoice(n_44);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = l_44;
                                                                                  t = term_p_44;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm r_44 = t;
                                                                                  int s_44 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = m_109(l_109, t);
                                                                                      LocalPopChoice(s_44);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_44;
                                                                                      t = term_t_44;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm v_44 = t;
                                                                                      int x_44 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = m_109(l_109, t);
                                                                                          LocalPopChoice(x_44);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_44;
                                                                                          t = term_y_44;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm z_44 = t;
                                                                                          int a_45 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = m_109(l_109, t);
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
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm c_45 = t;
                                                                                              int d_45 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = m_109(l_109, t);
                                                                                                  LocalPopChoice(d_45);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_45;
                                                                                                  t = term_e_45;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm g_45 = t;
                                                                                                  int h_45 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = m_109(l_109, t);
                                                                                                      LocalPopChoice(h_45);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_45;
                                                                                                      t = term_j_45;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm k_45 = t;
                                                                                                      int q_45 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = m_109(l_109, t);
                                                                                                          LocalPopChoice(q_45);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = k_45;
                                                                                                          t = term_r_45;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm t_45 = t;
                                                                                                          int w_45 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = m_109(l_109, t);
                                                                                                              LocalPopChoice(w_45);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_45;
                                                                                                              t = term_y_45;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm z_45 = t;
                                                                                                              int e_46 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = m_109(l_109, t);
                                                                                                                  LocalPopChoice(e_46);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_45;
                                                                                                                  t = term_g_46;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm j_46 = t;
                                                                                                                  int k_46 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = m_109(l_109, t);
                                                                                                                      LocalPopChoice(k_46);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_46;
                                                                                                                      t = term_l_46;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm m_46 = t;
                                                                                                                      int o_46 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = m_109(l_109, t);
                                                                                                                          LocalPopChoice(o_46);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = m_46;
                                                                                                                          t = term_c_39;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm r_46 = t;
                                                                                                                          int x_46 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = m_109(l_109, t);
                                                                                                                              LocalPopChoice(x_46);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_46;
                                                                                                                              t = term_y_46;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm a_47 = t;
                                                                                                                              int b_47 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = m_109(l_109, t);
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
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm d_47 = t;
                                                                                                                                  int e_47 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = m_109(l_109, t);
                                                                                                                                      LocalPopChoice(e_47);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = d_47;
                                                                                                                                      t = term_g_47;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm h_47 = t;
                                                                                                                                      int i_47 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = m_109(l_109, t);
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
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm k_47 = t;
                                                                                                                                          int l_47 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = m_109(l_109, t);
                                                                                                                                              LocalPopChoice(l_47);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_47;
                                                                                                                                              t = term_m_47;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm p_47 = t;
                                                                                                                                              int q_47 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = m_109(l_109, t);
                                                                                                                                                  LocalPopChoice(q_47);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_47;
                                                                                                                                                  t = term_r_47;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm s_47 = t;
                                                                                                                                                  int t_47 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = m_109(l_109, t);
                                                                                                                                                      LocalPopChoice(t_47);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = s_47;
                                                                                                                                                      t = term_u_47;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm v_47 = t;
                                                                                                                                                      int x_47 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = m_109(l_109, t);
                                                                                                                                                          LocalPopChoice(x_47);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_47;
                                                                                                                                                          t = term_y_47;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm b_48 = t;
                                                                                                                                                          int c_48 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = m_109(l_109, t);
                                                                                                                                                              LocalPopChoice(c_48);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = b_48;
                                                                                                                                                              t = term_d_48;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = m_109(l_109, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm c_11 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL;
  t = z_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_28;
    }
  else
    {
      ATerm h_56 = NULL,q_56 = NULL,i_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_110 = ATgetFirst((ATermList) t);
          d_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_28);
      h_56 = t;
      t = d_110;
      {
        static ATerm e_57 (ATerm t)
        {
          ATerm g_48 = t;
          int h_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_56 = NULL;
              x_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_56;
              LocalPopChoice(h_48);
            }
          else
            {
              t = g_48;
              {
                ATerm y_56 = NULL;
                t = Cons_2_0(_id, e_57, t);
                y_56 = t;
                t = (ATerm) ATinsert(CheckATermList(y_56), y_28);
              }
            }
          return(t);
        }
        t = e_57(t);
      }
      q_56 = t;
      t = (ATerm) ATinsert(CheckATermList(q_56), c_110);
      i_19 = t;
      t = SSLsetAnnotations(i_19, h_56);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_110 = ATgetFirst((ATermList) t);
      u_110 = (ATerm) ATgetNext((ATermList) t);
      t = u_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_110 = ATgetFirst((ATermList) t);
          s_110 = (ATerm) ATgetNext((ATermList) t);
          t = r_110;
          if(match_int(t, 34))
            {
              t = t_110;
              if(match_int(t, 92))
                {
                  ATerm i_48 = t;
                  int j_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_110 = NULL;
                      t = s_110;
                      t = De_Escape_0_0(t);
                      x_110 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_110), term_n_34);
                      LocalPopChoice(j_48);
                    }
                  else
                    {
                      t = i_48;
                      {
                        ATerm a_111 = NULL;
                        t = u_110;
                        t = De_Escape_0_0(t);
                        a_111 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_111), t_110);
                      }
                    }
                }
              else
                {
                  ATerm d_111 = NULL;
                  t = u_110;
                  t = De_Escape_0_0(t);
                  d_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_111), t_110);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = t_110;
                  if(match_int(t, 92))
                    {
                      ATerm k_48 = t;
                      int l_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_111 = NULL;
                          t = s_110;
                          t = De_Escape_0_0(t);
                          f_111 = t;
                          t = (ATerm) ATinsert(CheckATermList(f_111), term_i_35);
                          LocalPopChoice(l_48);
                        }
                      else
                        {
                          t = k_48;
                          {
                            ATerm n_111 = NULL;
                            t = u_110;
                            t = De_Escape_0_0(t);
                            n_111 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_111), t_110);
                          }
                        }
                    }
                  else
                    {
                      ATerm q_111 = NULL;
                      t = u_110;
                      t = De_Escape_0_0(t);
                      q_111 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_111), t_110);
                    }
                }
              else
                {
                  ATerm t_111 = NULL;
                  t = u_110;
                  t = De_Escape_0_0(t);
                  t_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_111), t_110);
                }
            }
        }
      else
        {
          ATerm x_111 = NULL;
          t = u_110;
          t = De_Escape_0_0(t);
          x_111 = t;
          t = (ATerm) ATinsert(CheckATermList(x_111), t_110);
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
  ATerm f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,l_112 = NULL;
  g_112 = t;
  t = SSL_explode_string(g_112);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_112 = ATgetFirst((ATermList) t);
      l_112 = (ATerm) ATgetNext((ATermList) t);
      t = l_112;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_112 = ATgetFirst((ATermList) t);
          i_112 = (ATerm) ATgetNext((ATermList) t);
          t = h_112;
          if(match_int(t, 34))
            {
              t = j_112;
              if(match_int(t, 92))
                {
                  ATerm m_48 = t;
                  int o_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_112 = NULL;
                      t = i_112;
                      t = De_Escape_0_0(t);
                      o_112 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_112), term_n_34);
                      LocalPopChoice(o_48);
                    }
                  else
                    {
                      t = m_48;
                      {
                        ATerm r_112 = NULL;
                        t = l_112;
                        t = De_Escape_0_0(t);
                        r_112 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_112), j_112);
                      }
                    }
                }
              else
                {
                  ATerm u_112 = NULL;
                  t = l_112;
                  t = De_Escape_0_0(t);
                  u_112 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_112), j_112);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = j_112;
                  if(match_int(t, 92))
                    {
                      ATerm p_48 = t;
                      int r_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_112 = NULL;
                          t = i_112;
                          t = De_Escape_0_0(t);
                          w_112 = t;
                          t = (ATerm) ATinsert(CheckATermList(w_112), term_i_35);
                          LocalPopChoice(r_48);
                        }
                      else
                        {
                          t = p_48;
                          {
                            ATerm z_112 = NULL;
                            t = l_112;
                            t = De_Escape_0_0(t);
                            z_112 = t;
                            t = (ATerm) ATinsert(CheckATermList(z_112), j_112);
                          }
                        }
                    }
                  else
                    {
                      ATerm c_113 = NULL;
                      t = l_112;
                      t = De_Escape_0_0(t);
                      c_113 = t;
                      t = (ATerm) ATinsert(CheckATermList(c_113), j_112);
                    }
                }
              else
                {
                  ATerm f_113 = NULL;
                  t = l_112;
                  t = De_Escape_0_0(t);
                  f_113 = t;
                  t = (ATerm) ATinsert(CheckATermList(f_113), j_112);
                }
            }
        }
      else
        {
          ATerm i_113 = NULL;
          t = l_112;
          t = De_Escape_0_0(t);
          i_113 = t;
          t = (ATerm) ATinsert(CheckATermList(i_113), j_112);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  f_112 = t;
  t = SSL_implode_string(f_112);
  return(t);
}
ATerm list_ana_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  static ATerm p_113 (ATerm t)
  {
    ATerm s_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_113 = NULL;
        t = h_130(t);
        k_113 = t;
        t = (ATerm) ATinsert(ATempty, k_113);
        LocalPopChoice(u_48);
      }
    else
      {
        t = s_48;
        {
          ATerm y_48 = t;
          int z_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_113 = NULL,l_57 = NULL;
              o_113 = t;
              t = SSL_explode_term(o_113);
              if(match_cons(t, sym__2))
                {
                  ATerm a_49 = ATgetArgument(t, 0);
                  l_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_57;
              t = filter_1_0(p_113, t);
              t = concat_0_0(t);
              LocalPopChoice(z_48);
            }
          else
            {
              t = y_48;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = p_113(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm u_113 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      u_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_113;
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm t_113 = NULL,p_57 = NULL,q_57 = NULL;
  t = list_ana_1_0(w_6, t);
  q_57 = t;
  t = term_e_37;
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_37, q_57);
  t = c_11(p_57, q_57, t);
  t_113 = t;
  t = SSL_concat_strings(t_113);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
      }
  }
  return(t);
}
static ATerm v_115 (ATerm s_114, ATerm t_114, ATerm y_114, ATerm t)
{
  ATerm b_115 = NULL;
  t = y_114;
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_114;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        b_115 = t;
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        {
          ATerm p_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_115 = NULL,e_115 = NULL;
              t = (ATerm) ATinsert(ATempty, t_114);
              t = syms2strs_0_0(t);
              d_115 = t;
              t = s_114;
              t = filter_1_0(lit2str_0_0, t);
              e_115 = t;
              t = filter_1_0(x_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_49 = ATgetFirst((ATermList) t);
                  ATerm u_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_115, e_115);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              b_115 = t;
              LocalPopChoice(q_49);
            }
          else
            {
              t = p_49;
              {
                ATerm v_49 = t;
                int w_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_114;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    b_115 = t;
                    LocalPopChoice(w_49);
                  }
                else
                  {
                    t = v_49;
                    {
                      ATerm g_115 = NULL,h_115 = NULL;
                      t = (ATerm) ATinsert(ATempty, t_114);
                      t = syms2strs_0_0(t);
                      g_115 = t;
                      t = term_m_14;
                      t = new_0_0(t);
                      h_115 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_115, (ATerm) ATinsert(ATinsert(ATempty, h_115), term_x_49));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      b_115 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = b_115;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm y_49 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_49;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL;
  j_115 = t;
  {
    ATerm z_49 = t;
    int a_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            k_115 = ATgetArgument(t, 0);
            {
              ATerm b_50 = ATgetArgument(t, 1);
            }
            {
              ATerm c_50 = ATgetArgument(t, 2);
            }
            {
              ATerm d_50 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_50);
        t = k_115;
        {
          ATerm e_50 = t;
          int g_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_57 = NULL,c_58 = NULL;
              ATerm h_50 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = h_50;
                }
              t = SSL_explode_string(k_115);
              c_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_34)), c_58), (ATerm) ATinsert(ATempty, term_n_34));
              t = concat_0_0(t);
              w_57 = t;
              t = SSL_implode_string(w_57);
              LocalPopChoice(g_50);
            }
          else
            {
              t = e_50;
            }
        }
      }
    else
      {
        t = z_49;
        if(match_cons(t, sym_prod_3))
          {
            k_115 = ATgetArgument(t, 0);
            l_115 = ATgetArgument(t, 1);
            {
              ATerm i_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_115;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_50 = t;
            int r_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_115(k_115, l_115, j_115, t);
                LocalPopChoice(r_50);
              }
            else
              {
                t = j_50;
                {
                  ATerm o_115 = NULL;
                  t = (ATerm) ATinsert(ATempty, l_115);
                  t = syms2strs_0_0(t);
                  o_115 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_115, (ATerm) ATinsert(ATempty, term_s_50));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = v_115(k_115, l_115, j_115, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL;
  a_118 = t;
  if(match_cons(t, sym_sort_1))
    {
      b_118 = ATgetArgument(t, 0);
      {
        ATerm j_58 = NULL,n_23 = NULL;
        t = SSLgetAnnotations(a_118);
        j_58 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, b_118);
        n_23 = t;
        t = SSLsetAnnotations(n_23, j_58);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          b_118 = ATgetArgument(t, 0);
          c_118 = ATgetArgument(t, 1);
          {
            ATerm t_58 = NULL,y_58 = NULL,z_58 = NULL,o_23 = NULL;
            t = SSLgetAnnotations(a_118);
            t_58 = t;
            t = b_118;
            t = syntaxless_sort_0_0(t);
            y_58 = t;
            t = c_118;
            t = syntaxless_sort_0_0(t);
            z_58 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, y_58, z_58);
            o_23 = t;
            t = SSLsetAnnotations(o_23, t_58);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              b_118 = ATgetArgument(t, 0);
              {
                ATerm l_60 = NULL,u_60 = NULL,p_23 = NULL;
                t = SSLgetAnnotations(a_118);
                l_60 = t;
                t = b_118;
                t = syntaxless_sort_0_0(t);
                u_60 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, u_60);
                p_23 = t;
                t = SSLsetAnnotations(p_23, l_60);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  b_118 = ATgetArgument(t, 0);
                  {
                    ATerm i_61 = NULL,r_61 = NULL,u_23 = NULL;
                    t = SSLgetAnnotations(a_118);
                    i_61 = t;
                    t = b_118;
                    t = syntaxless_sort_0_0(t);
                    r_61 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, r_61);
                    u_23 = t;
                    t = SSLsetAnnotations(u_23, i_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      b_118 = ATgetArgument(t, 0);
                      {
                        ATerm z_61 = NULL,b_62 = NULL,x_23 = NULL;
                        t = SSLgetAnnotations(a_118);
                        z_61 = t;
                        t = b_118;
                        t = syntaxless_sort_0_0(t);
                        b_62 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, b_62);
                        x_23 = t;
                        t = SSLsetAnnotations(x_23, z_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          b_118 = ATgetArgument(t, 0);
                          c_118 = ATgetArgument(t, 1);
                          {
                            ATerm j_62 = NULL,p_62 = NULL,c_24 = NULL;
                            t = SSLgetAnnotations(a_118);
                            j_62 = t;
                            t = b_118;
                            t = syntaxless_sort_0_0(t);
                            p_62 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_62, c_118);
                            c_24 = t;
                            t = SSLsetAnnotations(c_24, j_62);
                          }
                        }
                      else
                        {
                          ATerm k_63 = NULL,p_63 = NULL,h_24 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              b_118 = ATgetArgument(t, 0);
                              c_118 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(a_118);
                          k_63 = t;
                          t = b_118;
                          t = syntaxless_sort_0_0(t);
                          p_63 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_63, c_118);
                          h_24 = t;
                          t = SSLsetAnnotations(h_24, k_63);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,w_26 = NULL,l_25 = NULL;
  w_118 = t;
  if(match_cons(t, sym_prod_3))
    {
      n_118 = ATgetArgument(t, 0);
      o_118 = ATgetArgument(t, 1);
      p_118 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_118);
  m_118 = t;
  t = n_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_118 = ATgetFirst((ATermList) t);
      t_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_118);
  r_118 = t;
  t = s_118;
  t = syntaxless_sort_0_0(t);
  u_118 = t;
  t = t_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_118), u_118);
  l_25 = t;
  t = SSLsetAnnotations(l_25, r_118);
  v_118 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_118, o_118, p_118);
  w_26 = t;
  t = SSLsetAnnotations(w_26, m_118);
  q_118 = t;
  t = term_t_50;
  t = get_options_0_0(t);
  t = oncetd_1_0(z_6, t);
  t = q_118;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm y_118 = NULL,c_119 = NULL;
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm w_50 = ATgetArgument(t, 0);
          ATerm x_50 = ATgetArgument(t, 1);
          ATerm y_50 = ATgetArgument(t, 2);
          y_118 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(v_50);
      t = y_118;
      t = oncetd_1_0(c_7, t);
      t = term_m_14;
    }
  else
    {
      t = u_50;
      if(match_cons(t, sym_prod_3))
        {
          ATerm z_50 = ATgetArgument(t, 0);
          ATerm a_51 = ATgetArgument(t, 1);
          c_119 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_119;
      t = oncetd_1_0(f_7, t);
      t = term_m_14;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm g_119 = NULL,k_119 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm e_51 = ATgetArgument(t, 0);
          ATerm f_51 = ATgetArgument(t, 1);
          ATerm g_51 = ATgetArgument(t, 2);
          g_119 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(d_51);
      t = g_119;
      t = oncetd_1_0(h_7, t);
      t = term_m_14;
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_prod_3))
        {
          ATerm h_51 = ATgetArgument(t, 0);
          ATerm i_51 = ATgetArgument(t, 1);
          k_119 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_119;
      t = oncetd_1_0(j_7, t);
      t = term_m_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm r_119 = NULL;
  r_119 = t;
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_64 = NULL;
        t = r_119;
        {
          ATerm l_51 = t;
          if((PushChoice() == 0))
            {
              ATerm m_51 = t;
              int n_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(n_51);
                }
              else
                {
                  t = m_51;
                  {
                    ATerm o_51 = t;
                    int p_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(p_51);
                      }
                    else
                      {
                        t = o_51;
                        {
                          ATerm q_51 = t;
                          int s_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(s_51);
                            }
                          else
                            {
                              t = q_51;
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
              t = l_51;
            }
        }
        t = r_119;
        t = mk_constr_0_0(t);
        g_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_119, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, g_64)));
        t = add_attributes_0_0(t);
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        {
          ATerm t_119 = NULL;
          static ATerm n_7 (ATerm t)
          {
            ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL,b_27 = NULL;
            w_119 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm t_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_119);
            u_119 = t;
            t = not_null(t_119);
            t = uq2q_0_0(t);
            v_119 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, v_119);
            b_27 = t;
            t = SSLsetAnnotations(b_27, u_119);
            return(t);
          }
          t = r_119;
          t = get_constr_0_0(t);
          if(((t_119 != NULL) && (t_119 != t)))
            _fail(t);
          else
            t_119 = t;
          t = r_119;
          t = oncetd_1_0(n_7, t);
        }
      }
  }
  return(t);
}
static ATerm i_11 (ATerm h_22, ATerm i_22, ATerm g_22, ATerm f_22, ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL;
  ATerm u_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm q_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((a_120 != NULL) && (a_120 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              a_120 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = g_22;
      t = oncetd_1_0(q_7, t);
      LocalPopChoice(v_51);
    }
  else
    {
      t = u_51;
      {
        ATerm x_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,e_27 = NULL,d_27 = NULL;
            t = i_22;
            if(match_cons(t, sym_sort_1))
              {
                j_120 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_22);
            i_120 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, j_120);
            d_27 = t;
            t = SSLsetAnnotations(d_27, i_120);
            t = (ATerm) ATmakeAppl(sym_prod_3, h_22, i_22, g_22);
            t = prodcons_0_0(t);
            h_120 = t;
            if(match_cons(t, sym_prod_3))
              {
                d_120 = ATgetArgument(t, 0);
                e_120 = ATgetArgument(t, 1);
                f_120 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_120);
            c_120 = t;
            t = f_120;
            {
              static ATerm s_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((a_120 != NULL) && (a_120 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_120 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_7, t);
            }
            g_120 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, d_120, e_120, g_120);
            e_27 = t;
            t = SSLsetAnnotations(e_27, c_120);
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            t = term_z_51;
            a_120 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, h_22, i_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(a_120))))), (ATerm) ATinsert(ATempty, not_null(a_120)));
  t = get_pp_entry_0_0(t);
  b_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_120), b_120);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm a_52 = t;
  if((PushChoice() == 0))
    {
      ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL,i_27 = NULL;
      s_120 = t;
      if(match_cons(t, sym_lit_1))
        {
          r_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_120);
      q_120 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, r_120);
      i_27 = t;
      t = SSLsetAnnotations(i_27, q_120);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_52;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm b_52 = t;
  if((PushChoice() == 0))
    {
      ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL,k_27 = NULL;
      v_120 = t;
      if(match_cons(t, sym_lit_1))
        {
          u_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_120);
      t_120 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, u_120);
      k_27 = t;
      t = SSLsetAnnotations(k_27, t_120);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_52;
    }
  return(t);
}
static ATerm j_11 (ATerm o_21, ATerm m_21, ATerm n_21, ATerm p_21, ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  static ATerm y_7 (ATerm t)
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_52 = t;
        int g_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_7 (ATerm t)
            {
              t = not_null(n_120);
              return(t);
            }
            t = Instantiate_1_0(z_7, t);
            LocalPopChoice(g_52);
          }
        else
          {
            t = e_52;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, o_21, m_21, n_21), p_21);
  t = i_11(o_21, m_21, n_21, p_21, t);
  if(match_cons(t, sym__2))
    {
      l_120 = ATgetArgument(t, 0);
      m_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_21;
  t = filter_1_0(t_7, t);
  o_120 = t;
  t = p_21;
  t = filter_1_0(w_7, t);
  p_120 = t;
  t = (ATerm) ATmakeAppl(sym__4, o_120, p_120, (ATerm)ATinsert(ATempty, l_120), term_t_14);
  t = seq2abox_0_0(t);
  if(((n_120 != NULL) && (n_120 != t)))
    _fail(t);
  else
    n_120 = t;
  t = m_120;
  t = bottomup_1_0(y_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL;
  j_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_121;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_121 = ATgetFirst((ATermList) t);
          l_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_52 = t;
        int i_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_64 = NULL,o_64 = NULL,p_64 = NULL,m_28 = NULL;
            t = SSLgetAnnotations(j_121);
            l_64 = t;
            t = k_121;
            t = k_112(t);
            o_64 = t;
            t = l_121;
            t = filter_1_0(k_112, t);
            p_64 = t;
            t = (ATerm) ATinsert(CheckATermList(p_64), o_64);
            m_28 = t;
            t = SSLsetAnnotations(m_28, l_64);
            LocalPopChoice(i_52);
          }
        else
          {
            t = h_52;
            t = l_121;
            t = filter_1_0(k_112, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  static ATerm a_8 (ATerm t)
  {
    t = topdown_1_0(d_98, t);
    return(t);
  }
  t = d_98(t);
  t = SRTS_all(a_8, t);
  return(t);
}
ATerm sometd_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  static ATerm o_121 (ATerm t)
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        t = SRTS_some(o_121, t);
      }
    return(t);
  }
  t = o_121(t);
  return(t);
}
ATerm repeat_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  static ATerm q_121 (ATerm t)
  {
    ATerm l_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        t = q_121(t);
        LocalPopChoice(m_52);
      }
    else
      {
        t = l_52;
        t = e_97(t);
      }
    return(t);
  }
  t = q_121(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  static ATerm h_122 (ATerm t)
  {
    ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
    g_122 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_122 = ATgetFirst((ATermList) t);
        f_122 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_64 = NULL,b_65 = NULL,r_28 = NULL;
          t = SSLgetAnnotations(g_122);
          x_64 = t;
          t = f_122;
          t = h_122(t);
          b_65 = t;
          t = (ATerm) ATinsert(CheckATermList(b_65), e_122);
          r_28 = t;
          t = SSLsetAnnotations(r_28, x_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_122;
        t = g_105(t);
      }
    return(t);
  }
  t = h_122(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL;
  k_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_122;
    }
  else
    {
      static ATerm b_8 (ATerm t)
      {
        t = not_null(m_122);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_122 = ATgetFirst((ATermList) t);
          if(((m_122 != NULL) && (m_122 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_122;
      t = at_end_1_0(b_8, t);
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm q_65 = NULL,s_65 = NULL,t_65 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      q_65 = ATgetArgument(t, 0);
      s_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(q_65);
  t_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_65), term_q_52), t_65), term_o_52);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
  i_123 = t;
  if(match_cons(t, sym_Path1_1))
    {
      j_123 = ATgetArgument(t, 0);
      t = j_123;
    }
  else
    {
      ATerm o_65 = NULL,p_65 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_123 = ATgetArgument(t, 0);
          k_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_123;
      t = map_1_0(c_8, t);
      t = concat_0_0(t);
      o_65 = t;
      t = (ATerm) ATinsert(CheckATermList(o_65), j_123);
      p_65 = t;
      t = SSL_concat_strings(p_65);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm c_124 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_124 = ATgetArgument(t, 0);
      {
        ATerm s_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_124;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      s_123 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, s_123);
    }
  else
    {
      ATerm b_124 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          s_123 = ATgetArgument(t, 0);
          t_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_123;
      t = map_1_0(d_8, t);
      b_124 = t;
      t = (ATerm) ATinsert(CheckATermList(b_124), s_123);
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = debug_1_0(f_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_t_52;
  return(t);
}
static ATerm k_11 (ATerm j_66, ATerm k_66, ATerm t)
{
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL;
  t = j_66;
  t = mk_key_0_0(t);
  e_124 = t;
  t = term_u_25;
  f_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_66, k_66);
  g_124 = t;
  t = SSL_table_put(f_124, e_124, g_124);
  t = j_66;
  t = path_to_string_0_0(t);
  d_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_124, k_66);
  t = if_verbose1_1_0(e_8, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  static ATerm z_124 (ATerm t)
  {
    ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL;
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_114(t);
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
      }
    y_124 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_124 = ATgetFirst((ATermList) t);
        x_124 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_66 = NULL,f_66 = NULL,v_28 = NULL;
          t = SSLgetAnnotations(y_124);
          c_66 = t;
          t = x_124;
          t = z_124(t);
          f_66 = t;
          t = (ATerm) ATinsert(CheckATermList(f_66), w_124);
          v_28 = t;
          t = SSLsetAnnotations(v_28, c_66);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_124;
      }
    return(t);
  }
  t = z_124(t);
  return(t);
}
ATerm at_last_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm w_125 (ATerm t)
  {
    ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL;
    t_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_125 = ATgetFirst((ATermList) t);
        v_125 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_52 = t;
      int x_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_66 = NULL,x_28 = NULL;
          t = SSLgetAnnotations(t_125);
          v_66 = t;
          t = v_125;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_125), u_125);
          x_28 = t;
          t = SSLsetAnnotations(x_28, v_66);
          t = r_105(t);
          LocalPopChoice(x_52);
        }
      else
        {
          t = w_52;
          {
            ATerm f_67 = NULL,q_67 = NULL,a_29 = NULL;
            t = SSLgetAnnotations(t_125);
            f_67 = t;
            t = v_125;
            t = w_125(t);
            q_67 = t;
            t = (ATerm) ATinsert(CheckATermList(q_67), u_125);
            a_29 = t;
            t = SSLsetAnnotations(a_29, f_67);
          }
        }
    }
    return(t);
  }
  t = w_125(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_126 = NULL,d_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_126 = ATgetFirst((ATermList) t);
      d_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_126;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_126;
    }
  else
    {
      t = d_126;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm l_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_52 = ATgetFirst((ATermList) t);
      l_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_126;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL,k_126 = NULL;
  i_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_126 = ATgetFirst((ATermList) t);
      {
        ATerm z_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_126;
  t = h_114(t);
  t = i_126;
  t = last_0_0(t);
  t = i_114(t);
  t = i_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_53 = ATgetFirst((ATermList) t);
      j_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_126;
  t = at_last_1_0(g_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm n_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_70 = ATgetFirst((ATermList) t);
      r_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_70;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = r_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_70 = ATgetFirst((ATermList) t);
      t_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_70;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(t_70), term_n_34);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(t_70), term_i_35);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(t_70), term_b_53);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(t_70), term_c_53);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(t_70), term_d_53);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL;
  a_129 = t;
  if(match_cons(t, sym_Arg_1))
    {
      b_129 = ATgetArgument(t, 0);
      {
        ATerm b_68 = NULL,h_68 = NULL,o_29 = NULL;
        t = SSLgetAnnotations(a_129);
        b_68 = t;
        t = SSL_string_to_int(b_129);
        h_68 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, h_68);
        o_29 = t;
        t = SSLsetAnnotations(o_29, b_68);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          b_129 = ATgetArgument(t, 0);
          c_129 = ATgetArgument(t, 1);
          {
            ATerm q_68 = NULL,t_68 = NULL,u_68 = NULL,p_29 = NULL;
            t = SSLgetAnnotations(a_129);
            q_68 = t;
            t = SSL_string_to_int(b_129);
            t_68 = t;
            t = SSL_string_to_int(c_129);
            u_68 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, t_68, u_68);
            p_29 = t;
            t = SSLsetAnnotations(p_29, q_68);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              b_129 = ATgetArgument(t, 0);
              c_129 = ATgetArgument(t, 1);
              {
                ATerm d_69 = NULL,q_29 = NULL;
                t = SSLgetAnnotations(a_129);
                d_69 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, b_129, c_129);
                q_29 = t;
                t = SSLsetAnnotations(q_29, d_69);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  b_129 = ATgetArgument(t, 0);
                  {
                    ATerm t_69 = NULL,y_69 = NULL,z_69 = NULL,b_70 = NULL,d_70 = NULL,r_29 = NULL;
                    t = SSLgetAnnotations(a_129);
                    t_69 = t;
                    t = SSL_explode_string(b_129);
                    t = unquote_chars_2_0(i_8, j_8, t);
                    d_70 = t;
                    t = SSL_implode_string(d_70);
                    b_70 = t;
                    t = SSL_explode_string(b_70);
                    t = unescape_chars_1_0(l_8, t);
                    z_69 = t;
                    t = SSL_implode_string(z_69);
                    y_69 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, y_69);
                    r_29 = t;
                    t = SSLsetAnnotations(r_29, t_69);
                  }
                }
              else
                {
                  ATerm e_71 = NULL,h_71 = NULL,s_29 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      b_129 = ATgetArgument(t, 0);
                      c_129 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_129);
                  e_71 = t;
                  t = SSL_string_to_int(b_129);
                  h_71 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, h_71, c_129);
                  s_29 = t;
                  t = SSLsetAnnotations(s_29, e_71);
                }
            }
        }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm m_129 = NULL,n_129 = NULL;
  t = topdown_1_0(p_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      m_129 = ATgetArgument(t, 0);
      n_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(m_129, n_129, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
    }
  return(t);
}
static ATerm t_11 (ATerm i_66, ATerm t)
{
  t = i_66;
  t = reverse_acc_2_0(_id, m_8, t);
  t = map_1_0(o_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  static ATerm t_129 (ATerm t)
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_99(t);
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        t = SRTS_one(t_129, t);
      }
    return(t);
  }
  t = t_129(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL;
  t = term_i_53;
  y_129 = t;
  t = term_j_53;
  z_129 = t;
  t = term_k_53;
  t = k_12(y_129, z_129, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm l_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL;
      t = term_p_53;
      t = get_options_0_0(t);
      t = oncetd_1_0(q_8, t);
      t = term_o_14;
      f_130 = t;
      t = (ATerm) ATinsert(ATempty, term_q_53);
      g_130 = t;
      t = SSL_printnl(f_130, g_130);
      t = term_t_14;
      e_130 = t;
      t = SSL_exit(e_130);
      t = (ATerm) ATinsert(ATempty, term_q_53);
      LocalPopChoice(o_53);
    }
  else
    {
      t = l_53;
      {
        ATerm k_130 = NULL,m_130 = NULL;
        t = term_o_14;
        k_130 = t;
        t = (ATerm) ATinsert(ATempty, term_r_53);
        m_130 = t;
        t = SSL_printnl(k_130, m_130);
        t = (ATerm) ATinsert(ATempty, term_r_53);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL;
  q_130 = t;
  t = e_104(t);
  r_130 = t;
  t = term_o_14;
  s_130 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_130), r_130);
  t_130 = t;
  t = SSL_printnl(s_130, t_130);
  t = q_130;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL,o_71 = NULL,p_71 = NULL;
  t = if_verbose1_1_0(s_8, t);
  t = ReadFromFile_0_0(t);
  x_130 = t;
  t = SSL_explode_term(x_130);
  if(match_cons(t, sym__2))
    {
      p_71 = ATgetArgument(t, 0);
      {
        ATerm s_53 = ATgetArgument(t, 1);
        if(((ATgetType(s_53) == AT_LIST) && !(ATisEmpty(s_53))))
          {
            o_71 = ATgetFirst((ATermList) s_53);
            {
              ATerm t_53 = (ATerm) ATgetNext((ATermList) s_53);
              if(((ATgetType(t_53) != AT_LIST) || !(ATisEmpty(t_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_71;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = o_71;
  if(match_cons(t, sym_PP_Table_1))
    {
      w_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(w_130, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = debug_1_0(u_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm u_130 = NULL,v_130 = NULL;
  u_130 = t;
  t = term_u_25;
  v_130 = t;
  t = SSL_table_create(v_130);
  t = u_130;
  t = map_1_0(r_8, t);
  return(t);
}
static ATerm w_11 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = e_109(t);
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm y_130 = NULL;
      y_130 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, y_130);
      t = d_109(t);
      return(t);
    }
    t = fetch_1_0(v_8, t);
  }
  t = v_34;
  return(t);
}
static ATerm x_11 (ATerm a_109 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  static ATerm q_131 (ATerm t)
  {
    ATerm k_131 = NULL,l_131 = NULL,m_131 = NULL;
    k_131 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_131 = ATgetFirst((ATermList) t);
            m_131 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_53 = t;
          int y_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_131;
              {
                static ATerm y_8 (ATerm t)
                {
                  t = r_34;
                  return(t);
                }
                t = w_11(a_109, y_8, l_131, m_131, t);
              }
              t = q_131(t);
              LocalPopChoice(y_53);
            }
          else
            {
              t = v_53;
              {
                ATerm x_71 = NULL,a_72 = NULL,b_30 = NULL;
                t = SSLgetAnnotations(k_131);
                x_71 = t;
                t = m_131;
                t = q_131(t);
                a_72 = t;
                t = (ATerm) ATinsert(CheckATermList(a_72), l_131);
                b_30 = t;
                t = SSLsetAnnotations(b_30, x_71);
              }
            }
        }
      }
    return(t);
  }
  t = s_34;
  t = q_131(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL;
  t_131 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_131;
      t = i_111(t);
    }
  else
    {
      ATerm y_131 = NULL,z_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_131 = ATgetFirst((ATermList) t);
          v_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_131;
      t = k_111(t);
      y_131 = t;
      t = v_131;
      t = foldr_3_0(i_111, j_111, k_111, t);
      z_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_131, z_131);
      t = j_111(t);
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_132 = NULL;
      t = f_110(t);
      c_132 = t;
      t = (ATerm) ATinsert(ATempty, c_132);
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
      {
        ATerm f_72 = NULL,g_72 = NULL;
        static ATerm b_9 (ATerm t)
        {
          t = collect_om_2_0(f_110, g_110, t);
          return(t);
        }
        g_72 = t;
        t = SSL_explode_term(g_72);
        if(match_cons(t, sym__2))
          {
            ATerm b_54 = ATgetArgument(t, 0);
            f_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_72;
        t = foldr_3_0(a_9, g_110, b_9, t);
      }
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm m_132 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      m_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_132;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm n_132 = NULL,o_132 = NULL;
  if(match_cons(t, sym__2))
    {
      n_132 = ATgetArgument(t, 0);
      o_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(i_9, n_132, o_132, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm p_132 = NULL;
  if(match_cons(t, sym__2))
    {
      p_132 = ATgetArgument(t, 0);
      if((p_132 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = sometd_1_0(m_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm r_132 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      r_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_132;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm c_54 = t;
  int f_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_54 = ATgetFirst((ATermList) t);
              ATerm j_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(o_9, t);
      LocalPopChoice(f_54);
    }
  else
    {
      t = c_54;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm l_54 = t;
  if((PushChoice() == 0))
    {
      ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL,d_30 = NULL;
      v_132 = t;
      if(match_cons(t, sym_opt_1))
        {
          u_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_132);
      t_132 = t;
      t = u_132;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, u_132);
      d_30 = t;
      t = SSLsetAnnotations(d_30, t_132);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_54;
    }
  {
    ATerm m_54 = t;
    if((PushChoice() == 0))
      {
        ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL,e_30 = NULL;
        y_132 = t;
        if(match_cons(t, sym_layout_1))
          {
            x_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_132);
        w_132 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, x_132);
        e_30 = t;
        t = SSLsetAnnotations(e_30, w_132);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_54;
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL,f_30 = NULL;
  n_133 = t;
  if(match_cons(t, sym_layout_1))
    {
      m_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_133);
  l_133 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, m_133);
  f_30 = t;
  t = SSLsetAnnotations(f_30, l_133);
  return(t);
}
static ATerm y_11 (ATerm y_26, ATerm x_26, ATerm t)
{
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL;
  t = y_26;
  t = collect_om_2_0(c_9, g_9, t);
  t = reverse_acc_2_0(_id, k_9, t);
  t = read_pp_tables_0_0(t);
  t = x_26;
  t = repeat_2_0(l_9, _id, t);
  l_132 = t;
  t = topdown_1_0(n_9, t);
  {
    ATerm n_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL;
        b_133 = t;
        if(match_cons(t, sym_appl_2))
          {
            c_133 = ATgetArgument(t, 0);
            g_133 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_133;
        if(match_cons(t, sym_prod_3))
          {
            d_133 = ATgetArgument(t, 0);
            e_133 = ATgetArgument(t, 1);
            f_133 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = b_133;
        t = j_11(d_133, e_133, f_133, g_133, t);
        LocalPopChoice(o_54);
      }
    else
      {
        t = n_54;
        t = fatal_ambiguity_0_0(t);
      }
  }
  j_132 = t;
  t = l_132;
  t = collect_p__1_0(q_9, t);
  k_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_132, k_132);
  t = insert_layout_0_0(t);
  i_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, i_132);
  return(t);
}
static ATerm a_12 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm o_133 = NULL;
  t = SSL_fputc(t_43, u_43);
  o_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_133);
  return(t);
}
static ATerm b_12 (ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm p_133 = NULL;
  t = SSL_write_term_to_stream_text(o_28, p_28);
  p_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_133);
  return(t);
}
static ATerm d_12 (ATerm g_104 (ATerm), ATerm t_199, ATerm u_28, ATerm t)
{
  ATerm q_133 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_199, term_p_54);
  t = h_12(t);
  q_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_133, u_28);
  t = g_104(t);
  t = fclose_0_0(t);
  t = u_28;
  return(t);
}
static ATerm c_12 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm r_133 = NULL;
  t = SSL_write_term_to_stream_baf(k_28, l_28);
  r_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_133);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_54 = ATgetArgument(t, 0);
      if(match_cons(q_54, sym_Stream_1))
        {
          t_72 = ATgetArgument(q_54, 0);
        }
      else
        _fail(t);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(t_72, u_72, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_54 = ATgetArgument(t, 0);
      if(match_cons(r_54, sym_Stream_1))
        {
          i_73 = ATgetArgument(r_54, 0);
        }
      else
        _fail(t);
      j_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(i_73, j_73, t);
  f_73 = t;
  t = term_b_53;
  g_73 = t;
  t = f_73;
  if(match_cons(t, sym_Stream_1))
    {
      h_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_53, f_73);
  t = a_12(g_73, h_73, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_133 = NULL,w_133 = NULL,x_133 = NULL,y_133 = NULL,z_133 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL,f_135 = NULL,g_135 = NULL,p_30 = NULL,o_30 = NULL;
  w_133 = t;
  if(match_cons(t, sym__2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_133);
  c_134 = t;
  t = d_134;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_133 != NULL) && (v_133 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_9, t);
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = term_u_54;
        v_133 = t;
      }
  }
  f_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_134, e_134);
  o_30 = t;
  t = SSLsetAnnotations(o_30, c_134);
  t = w_133;
  if(match_cons(t, sym__2))
    {
      y_133 = ATgetArgument(t, 0);
      z_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_133);
  x_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_133, (ATerm) ATmakeAppl(sym__2, not_null(v_133), z_133));
  p_30 = t;
  t = SSLsetAnnotations(p_30, x_133);
  b_134 = t;
  if(match_cons(t, sym__2))
    {
      f_135 = ATgetArgument(t, 0);
      g_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_54 = t;
    int w_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,q_30 = NULL;
        t = SSLgetAnnotations(b_134);
        m_72 = t;
        t = f_135;
        t = fetch_1_0(u_9, t);
        p_72 = t;
        t = g_135;
        if(match_cons(t, sym__2))
          {
            r_72 = ATgetArgument(t, 0);
            s_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(v_9, r_72, s_72, t);
        q_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_72, q_72);
        q_30 = t;
        t = SSLsetAnnotations(q_30, m_72);
        LocalPopChoice(w_54);
      }
    else
      {
        t = v_54;
        {
          ATerm z_72 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_32 = NULL;
          t = SSLgetAnnotations(b_134);
          z_72 = t;
          t = g_135;
          if(match_cons(t, sym__2))
            {
              d_73 = ATgetArgument(t, 0);
              e_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_12(w_9, d_73, e_73, t);
          c_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_135, c_73);
          f_32 = t;
          t = SSLsetAnnotations(f_32, z_72);
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
ATerm apply_strategy_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL,m_135 = NULL,n_135 = NULL;
  n_135 = t;
  t = dtime_0_0(t);
  t = n_135;
  t = p_121(t);
  m_135 = t;
  t = dtime_0_0(t);
  j_135 = t;
  t = m_135;
  if(match_cons(t, sym__2))
    {
      k_135 = ATgetArgument(t, 0);
      l_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_135), (ATerm) ATmakeAppl(sym_Runtime_1, j_135)), l_135);
  return(t);
}
static ATerm b_136 (ATerm v_135, ATerm t)
{
  t = SSL_fclose(v_135);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_135 = NULL,z_135 = NULL;
  z_135 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_135 = ATgetArgument(t, 0);
      {
        ATerm x_54 = t;
        int z_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_135);
            LocalPopChoice(z_54);
          }
        else
          {
            t = x_54;
            t = b_136(z_135, t);
          }
      }
    }
  else
    {
      t = b_136(z_135, t);
    }
  return(t);
}
static ATerm e_12 (ATerm q_28, ATerm t)
{
  t = SSL_read_term_from_stream(q_28);
  return(t);
}
static ATerm f_12 (ATerm m_42, ATerm n_42, ATerm t)
{
  t = SSL_strcat(m_42, n_42);
  return(t);
}
static ATerm g_12 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm c_136 = NULL;
  t = SSL_fopen(v_43, w_43);
  c_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_136);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_136 = NULL;
  t = SSL_stdin_stream();
  d_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_136);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_136 = NULL;
  t = SSL_stdout_stream();
  e_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_136);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_136 = NULL;
  t = SSL_stderr_stream();
  f_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_136);
  return(t);
}
static ATerm m_137 (ATerm l_136, ATerm t)
{
  ATerm m_136 = NULL;
  t = SSL_explode_term(l_136);
  if(match_cons(t, sym__2))
    {
      ATerm a_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_55 = ATgetArgument(t, 1);
        if(((ATgetType(b_55) == AT_LIST) && !(ATisEmpty(b_55))))
          {
            m_136 = ATgetFirst((ATermList) b_55);
            {
              ATerm c_55 = (ATerm) ATgetNext((ATermList) b_55);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_136;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_136;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_136;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_136;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_137 (ATerm p_136, ATerm q_136, ATerm r_136, ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL,u_136 = NULL,x_136 = NULL,l_32 = NULL;
  t = SSLgetAnnotations(r_136);
  u_136 = t;
  t = p_136;
  if(match_cons(t, sym_Path_1))
    {
      x_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_136, q_136);
  l_32 = t;
  t = SSLsetAnnotations(l_32, u_136);
  if(match_cons(t, sym__2))
    {
      s_136 = ATgetArgument(t, 0);
      t_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(s_136, t_136, t);
  return(t);
}
static ATerm o_137 (ATerm z_136, ATerm a_137, ATerm b_137, ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,h_137 = NULL,p_32 = NULL;
  t = SSLgetAnnotations(b_137);
  e_137 = t;
  t = SSL_is_string(z_136);
  h_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_137, a_137);
  p_32 = t;
  t = SSLsetAnnotations(p_32, e_137);
  if(match_cons(t, sym__2))
    {
      c_137 = ATgetArgument(t, 0);
      d_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(c_137, d_137, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm j_137 = NULL,k_137 = NULL,l_137 = NULL;
  j_137 = t;
  if(match_cons(t, sym__2))
    {
      k_137 = ATgetArgument(t, 0);
      l_137 = ATgetArgument(t, 1);
      {
        ATerm d_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_137(j_137, t);
            LocalPopChoice(e_55);
          }
        else
          {
            t = d_55;
            {
              ATerm f_55 = t;
              int g_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_137(k_137, l_137, j_137, t);
                  LocalPopChoice(g_55);
                }
              else
                {
                  t = f_55;
                  t = o_137(k_137, l_137, j_137, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_137(j_137, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_137 = NULL,r_137 = NULL,s_137 = NULL,x_137 = NULL;
  x_137 = t;
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_137, term_j_55);
        t = h_12(t);
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        {
          ATerm u_73 = NULL,v_73 = NULL;
          t = term_k_55;
          v_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_55, x_137);
          t = f_12(v_73, x_137, t);
          u_73 = t;
          t = SSL_perror(u_73);
          _fail(t);
        }
      }
  }
  r_137 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12(s_137, t);
  q_137 = t;
  t = r_137;
  t = fclose_0_0(t);
  t = q_137;
  return(t);
}
ATerm fetch_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  static ATerm x_138 (ATerm t)
  {
    ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL;
    u_138 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_138 = ATgetFirst((ATermList) t);
        w_138 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_55 = t;
      int n_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_74 = NULL,i_74 = NULL,s_32 = NULL;
          t = SSLgetAnnotations(u_138);
          e_74 = t;
          t = v_138;
          t = z_104(t);
          i_74 = t;
          t = (ATerm) ATinsert(CheckATermList(w_138), i_74);
          s_32 = t;
          t = SSLsetAnnotations(s_32, e_74);
          LocalPopChoice(n_55);
        }
      else
        {
          t = m_55;
          {
            ATerm v_74 = NULL,b_75 = NULL,u_32 = NULL;
            t = SSLgetAnnotations(u_138);
            v_74 = t;
            t = w_138;
            t = x_138(t);
            b_75 = t;
            t = (ATerm) ATinsert(CheckATermList(b_75), v_138);
            u_32 = t;
            t = SSLsetAnnotations(u_32, v_74);
          }
        }
    }
    return(t);
  }
  t = x_138(t);
  return(t);
}
static ATerm k_12 (ATerm y_59, ATerm z_59, ATerm t)
{
  t = SSL_table_get(y_59, z_59);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm b_139 = NULL;
  b_139 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_139 = NULL,e_139 = NULL,f_139 = NULL;
        t = term_q_55;
        e_139 = t;
        t = term_r_55;
        f_139 = t;
        t = term_s_55;
        t = k_12(e_139, f_139, t);
        d_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_139, term_p_20);
        t = geq_0_0(t);
        t = b_139;
        t = y_119(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        t = b_139;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_139 = NULL;
  i_139 = t;
  if(match_string(t, "-k"))
    {
      t = i_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_139;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL;
  j_139 = t;
  t = SSL_string_to_int(j_139);
  k_139 = t;
  t = term_t_55;
  l_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_55, k_139);
  t = m_12(l_139, k_139, t);
  t = j_139;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_u_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, y_9, z_9, t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm n_139 = NULL;
  n_139 = t;
  if(match_string(t, "-S"))
    {
      t = n_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_139;
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL;
  t = term_r_55;
  o_139 = t;
  t = term_v_55;
  p_139 = t;
  t = term_w_55;
  t = m_12(o_139, p_139, t);
  t = term_y_55;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm q_139 = NULL,r_139 = NULL,s_139 = NULL;
  q_139 = t;
  t = SSL_string_to_int(q_139);
  r_139 = t;
  t = term_r_55;
  s_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_55, r_139);
  t = m_12(s_139, r_139, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_139);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL;
  t = term_d_56;
  t_139 = t;
  t = term_m_14;
  u_139 = t;
  t = term_e_56;
  t = m_12(t_139, u_139, t);
  t = term_f_56;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_g_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_10, f_10, g_10, t);
      LocalPopChoice(j_56);
    }
  else
    {
      t = i_56;
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_10, l_10, p_10, t);
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            t = Option_3_0(q_10, t_10, y_10, t);
          }
      }
    }
  return(t);
}
static ATerm m_12 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm v_139 = NULL;
  t = term_q_55;
  v_139 = t;
  t = SSL_table_put(v_139, m_53, n_53);
  t = (ATerm) ATmakeAppl(sym__3, term_q_55, m_53, n_53);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm x_139 = NULL;
  x_139 = t;
  if(match_string(t, "-o"))
    {
      t = x_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_139;
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm y_139 = NULL,z_139 = NULL;
  y_139 = t;
  t = term_m_56;
  z_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, y_139);
  t = m_12(z_139, y_139, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_139);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_10, a_11, b_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm b_140 = NULL;
  b_140 = t;
  if(match_string(t, "-i"))
    {
      t = b_140;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_140;
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm c_140 = NULL,d_140 = NULL;
  c_140 = t;
  t = term_o_56;
  d_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_56, c_140);
  t = m_12(d_140, c_140, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_140);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_p_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_11, f_11, h_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_14;
  t = whoami_0_0(t);
  e_140 = t;
  t = term_o_14;
  g_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_56), e_140);
  h_140 = t;
  t = SSL_printnl(g_140, h_140);
  t = term_t_14;
  f_140 = t;
  t = SSL_exit(f_140);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL;
  t = term_q_55;
  i_140 = t;
  t = term_s_56;
  j_140 = t;
  t = term_t_56;
  t = k_12(i_140, j_140, t);
  return(t);
}
static ATerm i_12 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm u_56 = t;
  int v_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_46, q_46);
      LocalPopChoice(v_56);
    }
  else
    {
      t = u_56;
      t = SSL_addr(p_46, q_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL;
  l_140 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_140;
      t = g_111(t);
    }
  else
    {
      ATerm q_140 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_140 = ATgetFirst((ATermList) t);
          n_140 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_140;
      t = foldr_2_0(g_111, h_111, t);
      q_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_140, q_140);
      t = h_111(t);
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
  t = term_v_55;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL;
  if(match_cons(t, sym__2))
    {
      w_75 = ATgetArgument(t, 0);
      x_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(w_75, x_75, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_140 = NULL,g_75 = NULL,l_75 = NULL;
  t = times_0_0(t);
  l_75 = t;
  t = SSL_explode_term(l_75);
  if(match_cons(t, sym__2))
    {
      ATerm w_56 = ATgetArgument(t, 0);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_75;
  t = foldr_2_0(l_11, q_11, t);
  t_140 = t;
  t = SSL_TicksToSeconds(t_140);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_141 = NULL,f_141 = NULL,g_141 = NULL;
  e_141 = t;
  if(match_cons(t, sym__2))
    {
      f_141 = ATgetArgument(t, 0);
      g_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_141;
        if((f_141 != t))
          {
            _fail(t);
          }
        t = e_141;
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
        t = (ATerm) ATmakeAppl(sym__2, f_141, g_141);
        {
          ATerm b_57 = t;
          int c_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_141, g_141);
              LocalPopChoice(c_57);
            }
          else
            {
              t = b_57;
              t = SSL_gtr(f_141, g_141);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_141, g_141);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm k_141 = NULL;
  k_141 = t;
  {
    ATerm d_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_141 = NULL,o_141 = NULL,p_141 = NULL;
        t = term_q_55;
        o_141 = t;
        t = term_r_55;
        p_141 = t;
        t = term_s_55;
        t = k_12(o_141, p_141, t);
        n_141 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_141, term_t_14);
        t = geq_0_0(t);
        t = k_141;
        t = x_119(t);
        LocalPopChoice(f_57);
      }
    else
      {
        t = d_57;
        t = k_141;
      }
  }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL,u_141 = NULL,v_141 = NULL;
  t = run_time_0_0(t);
  r_141 = t;
  t = term_m_14;
  t = whoami_0_0(t);
  s_141 = t;
  t = term_o_14;
  u_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_57), r_141), term_g_57), s_141);
  v_141 = t;
  t = SSL_printnl(u_141, v_141);
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_57), r_141), term_g_57), s_141));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_141 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_55;
  w_141 = t;
  t = SSL_exit(w_141);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL;
  h_142 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_142;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_142 = ATgetArgument(t, 0);
          {
            ATerm w_76 = NULL,x_32 = NULL;
            t = SSLgetAnnotations(h_142);
            w_76 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_142);
            x_32 = t;
            t = SSLsetAnnotations(x_32, w_76);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_142;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_141 = NULL,a_142 = NULL;
      t = term_q_55;
      z_141 = t;
      t = term_k_57;
      a_142 = t;
      t = term_m_57;
      t = k_12(z_141, a_142, t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = fetch_1_0(s_11, t);
    }
  t = n_122(t);
  return(t);
}
ATerm map_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  static ATerm x_142 (ATerm t)
  {
    ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL;
    u_142 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_142;
      }
    else
      {
        ATerm o_77 = NULL,u_77 = NULL,v_77 = NULL,z_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_142 = ATgetFirst((ATermList) t);
            w_142 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_142);
        o_77 = t;
        t = v_142;
        t = p_104(t);
        u_77 = t;
        t = w_142;
        t = x_142(t);
        v_77 = t;
        t = (ATerm) ATinsert(CheckATermList(v_77), u_77);
        z_32 = t;
        t = SSLsetAnnotations(z_32, o_77);
      }
    return(t);
  }
  t = x_142(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_143 = NULL,b_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_143 = ATgetFirst((ATermList) t);
      b_143 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_143 = NULL,g_143 = NULL;
        static ATerm j_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_143)), not_null(g_143));
          return(t);
        }
        t = b_143;
        t = d_0(t);
        if(((f_143 != NULL) && (f_143 != t)))
          _fail(t);
        else
          f_143 = t;
        t = a_143;
        t = c_0(t);
        if(((g_143 != NULL) && (g_143 != t)))
          _fail(t);
        else
          g_143 = t;
        t = b_143;
        t = reverse_acc_2_0(c_0, j_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_14;
      t = d_0(t);
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL,d_38 = NULL;
  o_143 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_143);
  m_143 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_143);
  d_38 = t;
  t = SSLsetAnnotations(d_38, m_143);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm q_143 = NULL;
  q_143 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_143), term_n_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_143 = NULL,j_143 = NULL;
  ATerm o_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_143 = NULL,l_143 = NULL;
      t = term_q_55;
      k_143 = t;
      t = term_s_56;
      l_143 = t;
      t = term_t_56;
      t = k_12(k_143, l_143, t);
      LocalPopChoice(r_57);
    }
  else
    {
      t = o_57;
      t = fetch_1_0(l_12, t);
    }
  t = term_s_57;
  t = echo_0_0(t);
  t = term_u_14;
  i_143 = t;
  t = term_y_14;
  j_143 = t;
  t = term_t_57;
  t = k_12(i_143, j_143, t);
  t = reverse_acc_2_0(_id, n_12, t);
  t = map_1_0(q_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL,u_143 = NULL;
  s_143 = t;
  {
    ATerm u_57 = t;
    int v_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_143;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_57 = ATgetFirst((ATermList) t);
                ATerm y_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_143;
          }
        LocalPopChoice(v_57);
      }
    else
      {
        t = u_57;
        t = (ATerm) ATinsert(ATempty, s_143);
      }
  }
  t_143 = t;
  t = term_u_54;
  u_143 = t;
  t = SSL_printnl(u_143, t_143);
  t = s_143;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_143 = NULL,z_143 = NULL;
  t = term_q_55;
  y_143 = t;
  t = term_s_56;
  z_143 = t;
  t = term_t_56;
  t = k_12(y_143, z_143, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL;
  t = term_z_57;
  a_144 = t;
  t = term_m_14;
  b_144 = t;
  t = term_a_58;
  t = m_12(a_144, b_144, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL;
  t = term_z_57;
  e_144 = t;
  t = term_m_14;
  f_144 = t;
  t = term_a_58;
  t = m_12(e_144, f_144, t);
  t = term_d_58;
  c_144 = t;
  t = term_m_14;
  d_144 = t;
  t = term_e_58;
  t = m_12(c_144, d_144, t);
  t = term_f_58;
  return(t);
}
static ATerm e_13 (ATerm t)
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
      t = Option_3_0(r_12, x_12, z_12, t);
      LocalPopChoice(m_58);
    }
  else
    {
      t = l_58;
      t = Option_3_0(a_13, c_13, e_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL,g_38 = NULL;
  l_144 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_144 = ATgetFirst((ATermList) t);
      i_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_144);
  g_144 = t;
  t = h_144;
  t = j_75(t);
  j_144 = t;
  t = i_144;
  t = k_75(t);
  k_144 = t;
  t = (ATerm) ATinsert(CheckATermList(k_144), j_144);
  g_38 = t;
  t = SSLsetAnnotations(g_38, g_144);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL,t_144 = NULL,v_144 = NULL,w_144 = NULL,v_38 = NULL;
  q_144 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_58;
        t = q_124(t);
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
      }
  }
  t = q_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_144 = ATgetFirst((ATermList) t);
      t_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_144);
  r_144 = t;
  t = term_s_56;
  w_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_56, s_144);
  t = m_12(w_144, s_144, t);
  t = t_144;
  {
    static ATerm g_145 (ATerm t)
    {
      ATerm q_58 = t;
      int r_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_58 = t;
          int u_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_144 = NULL;
              z_144 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_144;
              LocalPopChoice(u_58);
            }
          else
            {
              t = s_58;
              t = q_124(t);
              t = Cons_2_0(_id, g_145, t);
            }
          LocalPopChoice(r_58);
        }
      else
        {
          t = q_58;
          {
            ATerm c_145 = NULL,d_145 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_145 = ATgetFirst((ATermList) t);
                d_145 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_145), (ATerm) ATmakeAppl(sym_Undefined_1, c_145));
          }
        }
      return(t);
    }
    t = g_145(t);
  }
  v_144 = t;
  t = (ATerm) ATinsert(CheckATermList(v_144), (ATerm) ATmakeAppl(sym_Program_1, s_144));
  v_38 = t;
  t = SSLsetAnnotations(v_38, r_144);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm s_145 = NULL;
  s_145 = t;
  if(match_string(t, "--help"))
    {
      t = s_145;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_145;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_145;
        }
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL;
  t = term_k_57;
  t_145 = t;
  t = term_m_14;
  u_145 = t;
  t = term_v_58;
  t = m_12(t_145, u_145, t);
  t = term_w_58;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm l_145 = NULL,m_145 = NULL,n_145 = NULL,o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL;
  n_145 = t;
  t = term_u_14;
  p_145 = t;
  t = term_y_14;
  q_145 = t;
  t = (ATerm) ATempty;
  r_145 = t;
  t = SSL_table_put(p_145, q_145, r_145);
  t = n_145;
  {
    static ATerm f_13 (ATerm t)
    {
      ATerm a_59 = t;
      int b_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_124(t);
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
                t = Option_3_0(h_13, i_13, j_13, t);
                LocalPopChoice(d_59);
              }
            else
              {
                t = c_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_13, t);
  }
  {
    ATerm e_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_146 = NULL;
        f_146 = t;
        {
          ATerm g_59 = t;
          int h_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_78 = NULL;
              t = f_146;
              {
                ATerm i_59 = t;
                int j_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_78 = NULL,o_78 = NULL;
                    t = term_q_55;
                    n_78 = t;
                    t = term_k_57;
                    o_78 = t;
                    t = term_m_57;
                    t = k_12(n_78, o_78, t);
                    LocalPopChoice(j_59);
                  }
                else
                  {
                    t = i_59;
                    t = fetch_1_0(k_13, t);
                  }
              }
              t = f_146;
              t = default_system_usage_0_0(t);
              t = term_v_55;
              m_78 = t;
              t = SSL_exit(m_78);
              LocalPopChoice(h_59);
            }
          else
            {
              t = g_59;
              {
                ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
                t = term_q_55;
                a_79 = t;
                t = term_z_57;
                b_79 = t;
                t = term_k_59;
                t = k_12(a_79, b_79, t);
                t = f_146;
                t = default_system_about_0_0(t);
                t = term_v_55;
                z_78 = t;
                t = SSL_exit(z_78);
              }
            }
        }
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
        {
          ATerm l_59 = t;
          int m_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL;
              static ATerm l_13 (ATerm t)
              {
                ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL,x_38 = NULL;
                l_146 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_146 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_146);
                j_146 = t;
                t = k_146;
                if(((l_145 != NULL) && (l_145 != t)))
                  _fail(t);
                else
                  l_145 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_146);
                x_38 = t;
                t = SSLsetAnnotations(x_38, j_146);
                return(t);
              }
              t = fetch_1_0(l_13, t);
              t = term_o_14;
              h_146 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_145)), term_n_59);
              i_146 = t;
              t = SSL_printnl(h_146, i_146);
              t = (ATerm) ATmakeAppl(sym__2, term_o_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_145)), term_n_59));
              t = default_system_usage_0_0(t);
              t = term_t_14;
              g_146 = t;
              t = SSL_exit(g_146);
              LocalPopChoice(m_59);
            }
          else
            {
              t = l_59;
            }
        }
      }
  }
  m_145 = t;
  t = term_u_14;
  o_145 = t;
  t = SSL_table_destroy(o_145);
  t = m_145;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL;
  t = parse_options_1_0(p_122, t);
  q_146 = t;
  t = term_i_53;
  t_146 = t;
  t = SSL_table_create(t_146);
  t = term_i_53;
  r_146 = t;
  t = term_j_53;
  s_146 = t;
  t = SSL_table_put(r_146, s_146, q_146);
  t = q_146;
  t = r_122(t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_122, t);
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
              t = s_122(t);
              t = report_success_0_0(t);
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
static ATerm o_13 (ATerm t)
{
  t = if_verbose2_1_0(t_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL;
  t = term_s_59;
  u_146 = t;
  t = term_m_14;
  v_146 = t;
  t = term_t_59;
  t = m_12(u_146, v_146, t);
  t = term_u_59;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_v_59;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL,a_147 = NULL,b_147 = NULL;
  w_146 = t;
  t = term_q_55;
  a_147 = t;
  t = term_s_56;
  b_147 = t;
  t = term_t_56;
  t = k_12(a_147, b_147, t);
  x_146 = t;
  t = term_o_14;
  y_146 = t;
  t = (ATerm) ATinsert(ATempty, x_146);
  z_146 = t;
  t = SSL_printnl(y_146, z_146);
  t = w_146;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm t)
{
  static ATerm n_13 (ATerm t)
  {
    ATerm w_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_121(t);
        LocalPopChoice(x_59);
      }
    else
      {
        t = w_59;
        {
          ATerm a_60 = t;
          int b_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(d_60);
                  }
                else
                  {
                    t = c_60;
                    {
                      ATerm e_60 = t;
                      int f_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_13, r_13, s_13, t);
                          LocalPopChoice(f_60);
                        }
                      else
                        {
                          t = e_60;
                          {
                            ATerm g_60 = t;
                            int h_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_60);
                              }
                            else
                              {
                                t = g_60;
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
  static ATerm p_13 (ATerm t)
  {
    ATerm c_147 = NULL,d_147 = NULL,e_147 = NULL;
    d_147 = t;
    {
      ATerm i_60 = t;
      int j_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_147 != NULL) && (c_147 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_13, t);
          LocalPopChoice(j_60);
        }
      else
        {
          t = i_60;
          t = term_k_60;
          c_147 = t;
        }
    }
    t = not_null(c_147);
    t = ReadFromFile_0_0(t);
    e_147 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_147, e_147);
    t = apply_strategy_1_0(y_121, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_13, a_122, o_13, p_13, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm f_147 = NULL,g_147 = NULL;
  if(match_cons(t, sym__2))
    {
      f_147 = ATgetArgument(t, 0);
      g_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(f_147, g_147, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm m_60 = t;
  int n_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_13, z_13, b_14, t);
      LocalPopChoice(n_60);
    }
  else
    {
      t = m_60;
      {
        ATerm o_60 = t;
        int p_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(c_14, d_14, f_14, t);
            LocalPopChoice(p_60);
          }
        else
          {
            t = o_60;
            t = ArgOption_3_0(g_14, k_14, l_14, t);
          }
      }
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_q_60;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_r_60;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_a_16;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_s_60;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm h_147 = NULL;
  h_147 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, h_147);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_t_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(v_13, w_13, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

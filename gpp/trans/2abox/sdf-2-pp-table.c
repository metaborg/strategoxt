#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_context_free_syntax_1;
Symbol sym_cf_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_alt_2;
Symbol sym_bracket_0;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_lit_1;
Symbol sym_prod_fun_4;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_reject_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_char_class_1;
Symbol sym_alt_2;
Symbol sym_qlit_1;
Symbol sym_uqlit_1;
Symbol sym_fun_1;
Symbol sym_appl_2;
Symbol sym_bracket_0;
Symbol sym_reject_0;
Symbol sym_term_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_fun_4;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_alt_2;
Symbol sym_sort_1;
Symbol sym_lit_1;
Symbol sym_label_2;
Symbol sym_char_class_1;
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
static void init_module_constructors (void)
{
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
  ATprotectSymbol(sym_fun_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
}
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_q_45;
ATerm term_x_44;
ATerm term_r_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_v_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_w_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_n_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_d_36;
ATerm term_d_35;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_n_31;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_s_29;
ATerm term_k_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_t_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_f_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_m_15, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_e_17, term_f_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_u_13, term_v_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_j_18, term_k_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_p_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_h_19, term_i_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_a_20, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_g_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_m_20, term_p_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_20, term_z_20, term_a_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_h_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_t_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_f_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_m_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_q_22, term_r_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_z_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_23, term_d_23, term_e_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_b_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_o_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_t_26);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_s_29);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_r_32);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Arg_1, term_m_15);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_37, term_c_37);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_lit_1, term_c_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_lit_1, term_r_16);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_e_29);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_f_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_k_29);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_e_41);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_41);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_f_14);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_e_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_t_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_r_41, term_s_41);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_f_14);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_n_43, term_f_14);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym__2, term_t_42, term_f_14);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym__3, term_r_41, term_s_41, (ATerm) ATempty);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_k_43);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_f_14);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm n_1 (ATerm x_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_91 (ATerm), ATerm t);
static ATerm j_8 (ATerm t_96 (ATerm), ATerm f_31, ATerm q_243, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm v_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm k_8 (ATerm p_53, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm m_8 (ATerm j_45, ATerm k_45, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm l_8 (ATerm r_30, ATerm s_30, ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm e_115 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t);
static ATerm n_8 (ATerm t_25, ATerm u_25, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_90 (ATerm), ATerm t);
static ATerm p_8 (ATerm d_52, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_108 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_108 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm r_8 (ATerm b_49, ATerm c_49, ATerm d_49, ATerm t);
static ATerm s_8 (ATerm w_108 (ATerm), ATerm l_49, ATerm k_49, ATerm t);
static ATerm t_8 (ATerm m_53, ATerm n_53, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_28 (ATerm x_26, ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm u_8 (ATerm g_107 (ATerm), ATerm r_46, ATerm p_46, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm v_8 (ATerm j_48, ATerm k_48, ATerm t);
ATerm end_scope_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_107 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm x_8 (ATerm u_36, ATerm v_36, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm symbol2abox_1_0 (ATerm z_88 (ATerm), ATerm t);
ATerm _2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm q_60 (ATerm q_59, ATerm r_59, ATerm s_59, ATerm t);
ATerm number_node_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm y_88 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_96 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm m_97 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm unquote_chars_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t);
static ATerm b_9 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm p_36, ATerm o_36, ATerm t);
static ATerm c_9 (ATerm v_100 (ATerm), ATerm l_36, ATerm k_36, ATerm t);
ATerm foldr_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
ATerm collect_om_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm x_67 (ATerm t_65, ATerm u_65, ATerm t);
static ATerm y_67 (ATerm a_66, ATerm b_66, ATerm t);
static ATerm z_67 (ATerm h_66, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm d_9 (ATerm t_53, ATerm u_53, ATerm t);
static ATerm e_9 (ATerm f_29, ATerm g_29, ATerm t);
static ATerm g_9 (ATerm u_91 (ATerm), ATerm d_212, ATerm l_29, ATerm t);
static ATerm f_9 (ATerm b_29, ATerm c_29, ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm output_1_0 (ATerm d_113 (ATerm), ATerm t);
static ATerm h_69 (ATerm b_69, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_9 (ATerm h_29, ATerm t);
static ATerm i_9 (ATerm y_43, ATerm z_43, ATerm t);
static ATerm j_9 (ATerm v_53, ATerm w_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_70 (ATerm r_69, ATerm t);
static ATerm t_70 (ATerm v_69, ATerm w_69, ATerm x_69, ATerm t);
static ATerm u_70 (ATerm f_70, ATerm g_70, ATerm h_70, ATerm t);
static ATerm k_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_9 (ATerm j_52, ATerm k_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_9 (ATerm e_48, ATerm f_48, ATerm d_48, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_9 (ATerm d_45, ATerm e_45, ATerm t);
ATerm foldr_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_108 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm need_help_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm u_9 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t);
ATerm lookup_table_0_1 (ATerm q_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_52, ATerm f_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_9 (ATerm b_52, ATerm c_52, ATerm t);
static ATerm o_9 (ATerm g_52, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_9 (ATerm z_51, ATerm a_52, ATerm t);
static ATerm q_9 (ATerm x_49, ATerm y_49, ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_114 (ATerm), ATerm t);
static ATerm s_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm parse_options_1_0 (ATerm r_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm n_1 (ATerm x_0, ATerm t)
{
  ATerm z_0 = NULL;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      ATerm a_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_1 = NULL,h_1 = NULL,k_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = h_1;
              return(t);
            }
            t = f_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            t = n_1(k_1, t);
          }
      }
    }
  else
    {
      t = n_1(k_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  static ATerm f_0 (ATerm t)
  {
    t = topdown_1_0(x_91, t);
    return(t);
  }
  t = x_91(t);
  t = SRTS_all(f_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  static ATerm i_2 (ATerm t)
  {
    ATerm a_2 = NULL,g_2 = NULL,h_2 = NULL;
    h_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_2 = ATgetFirst((ATermList) t);
        g_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_0 = NULL,w_0 = NULL,b_0 = NULL;
          t = SSLgetAnnotations(h_2);
          q_0 = t;
          t = g_2;
          t = i_2(t);
          w_0 = t;
          t = (ATerm) ATinsert(CheckATermList(w_0), a_2);
          b_0 = t;
          t = SSLsetAnnotations(b_0, q_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        t = b_97(t);
      }
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_2 = NULL,w_2 = NULL,x_2 = NULL;
  p_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_2;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(x_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_2 = ATgetFirst((ATermList) t);
          if(((x_2 != NULL) && (x_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_2;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,c_4 = NULL;
  z_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_4 = ATgetFirst((ATermList) t);
          c_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,y_1 = NULL,z_1 = NULL,m_0 = NULL;
            t = SSLgetAnnotations(z_3);
            j_1 = t;
            t = a_4;
            t = c_105(t);
            y_1 = t;
            t = c_4;
            t = filter_1_0(c_105, t);
            z_1 = t;
            t = (ATerm) ATinsert(CheckATermList(z_1), y_1);
            m_0 = t;
            t = SSLsetAnnotations(m_0, j_1);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = c_4;
            t = filter_1_0(c_105, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  g_4 = t;
  t = s_91(t);
  h_4 = t;
  t = term_q_13;
  i_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_4), h_4);
  j_4 = t;
  t = SSL_printnl(i_4, j_4);
  t = g_4;
  return(t);
}
static ATerm j_8 (ATerm t_96 (ATerm), ATerm f_31, ATerm q_243, ATerm t)
{
  static ATerm j_0 (ATerm t)
  {
    ATerm l_4 = NULL;
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_31, l_4);
    t = t_96(t);
    t = l_4;
    return(t);
  }
  t = q_243;
  t = SRTS_one(j_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm r_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      if((r_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      if((u_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      if((x_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_whitespace_0_0 (ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  if(match_int(t, 10))
    {
      ATerm r_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13);
          q_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13));
          t = j_8(s_0, n_4, q_4, t);
          t = n_4;
          LocalPopChoice(t_13);
        }
      else
        {
          t = r_13;
          t = n_4;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm w_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_4 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13);
              t_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13));
              t = j_8(u_0, n_4, t_4, t);
              t = n_4;
              LocalPopChoice(y_13);
            }
          else
            {
              t = w_13;
              t = n_4;
            }
        }
      else
        {
          ATerm w_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13);
          w_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_u_13));
          t = j_8(y_0, n_4, w_4, t);
          t = n_4;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,l_2 = NULL,q_2 = NULL,r_1 = NULL;
        x_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_5 = ATgetFirst((ATermList) t);
            z_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_5);
        l_2 = t;
        t = z_5;
        t = b_6(t);
        q_2 = t;
        t = (ATerm) ATinsert(CheckATermList(q_2), y_5);
        r_1 = t;
        t = SSLsetAnnotations(r_1, l_2);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = j_97(t);
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,b_3 = NULL;
      b_3 = t;
      t = SSL_explode_string(b_3);
      t = rtrim_1_0(v_0, t);
      v_2 = t;
      t = SSL_implode_string(v_2);
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm u_6 = NULL,f_3 = NULL;
        u_6 = t;
        t = (ATerm) ATinsert(CheckATermList(u_6), term_f_14);
        {
          static ATerm a_1 (ATerm t)
          {
            ATerm i_3 = NULL,k_3 = NULL;
            i_3 = t;
            {
              ATerm j_14 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_14;
                }
            }
            {
              ATerm k_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,t_1 = NULL;
                  r_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_3 = ATgetFirst((ATermList) t);
                      p_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_3);
                  m_3 = t;
                  t = n_3;
                  t = v_0(t);
                  q_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_3), q_3);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, m_3);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = k_14;
                }
            }
            t = i_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_3 = ATgetFirst((ATermList) t);
                {
                  ATerm m_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, k_3);
            return(t);
          }
          t = at_suffix_rev_1_0(a_1, t);
        }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_14 = ATgetFirst((ATermList) t);
            f_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_3;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_97(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,f_4 = NULL,p_4 = NULL,v_1 = NULL;
          o_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_7 = ATgetFirst((ATermList) t);
              q_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_7);
          f_4 = t;
          t = q_7;
          t = s_7(t);
          p_4 = t;
          t = (ATerm) ATinsert(CheckATermList(p_4), p_7);
          v_1 = t;
          t = SSLsetAnnotations(v_1, f_4);
        }
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm g_8 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm y_9 = NULL,z_9 = NULL,c_10 = NULL;
    y_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_9;
      }
    else
      {
        ATerm h_5 = NULL,m_5 = NULL,x_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_9 = ATgetFirst((ATermList) t);
            c_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_9);
        h_5 = t;
        t = z_9;
        {
          ATerm u_14 = t;
          if((PushChoice() == 0))
            {
              t = v_104(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_14;
            }
        }
        m_5 = t;
        t = (ATerm) ATinsert(CheckATermList(c_10), m_5);
        x_1 = t;
        t = SSLsetAnnotations(x_1, h_5);
      }
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    return(t);
  }
  t = at_suffix_1_0(b_1, t);
  t = not_null(g_8);
  return(t);
}
ATerm ltrim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,w_5 = NULL;
      w_5 = t;
      t = SSL_explode_string(w_5);
      t = ltrim_1_0(t_0, t);
      t_5 = t;
      t = SSL_implode_string(t_5);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = drop_while_1_0(t_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL,g_6 = NULL;
      g_6 = t;
      t = SSL_explode_string(g_6);
      t = trim_1_0(r_0, t);
      d_6 = t;
      t = SSL_implode_string(d_6);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = ltrim_1_0(r_0, t);
      t = rtrim_1_0(r_0, t);
    }
  return(t);
}
static ATerm k_8 (ATerm p_53, ATerm t)
{
  t = SSL_fgetc(p_53);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  {
    static ATerm r_10 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = NULL,q_6 = NULL,r_6 = NULL,v_6 = NULL;
          q_10 = t;
          t = g_10;
          if(match_cons(t, sym_Stream_1))
            {
              v_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_8(v_6, t);
          q_6 = t;
          t = term_f_14;
          t = r_10(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = r_10(t);
  }
  h_10 = t;
  t = SSL_implode_string(h_10);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,w_10 = NULL,x_10 = NULL;
  t_10 = t;
  t = term_e_15;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_e_15);
  t = j_9(t_10, x_10, t);
  u_10 = t;
  t = read_text_from_stream_0_0(t);
  w_10 = t;
  t = u_10;
  t = fclose_0_0(t);
  t = w_10;
  return(t);
}
static ATerm m_8 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(j_45, k_45);
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      t = SSL_subtr(j_45, k_45);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  t = term_h_15;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL;
        t = term_k_15;
        f_11 = t;
        t = term_h_15;
        g_11 = t;
        t = term_l_15;
        t = q_9(f_11, g_11, t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = term_m_15;
      }
  }
  b_11 = t;
  t = term_m_15;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_11, term_m_15);
  t = m_8(b_11, d_11, t);
  c_11 = t;
  t = SSL_int_to_string(c_11);
  a_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_11), term_h_15);
  return(t);
}
static ATerm l_8 (ATerm r_30, ATerm s_30, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  t = s_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_30;
    }
  else
    {
      ATerm e_7 = NULL,j_7 = NULL,c_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_12 = ATgetFirst((ATermList) t);
          o_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_30);
      e_7 = t;
      t = o_12;
      {
        static ATerm u_7 (ATerm t)
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 = NULL;
              n_7 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_7;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                ATerm r_7 = NULL;
                t = Cons_2_0(_id, u_7, t);
                r_7 = t;
                t = (ATerm) ATinsert(CheckATermList(r_7), r_30);
              }
            }
          return(t);
        }
        t = u_7(t);
      }
      j_7 = t;
      t = (ATerm) ATinsert(CheckATermList(j_7), n_12);
      c_3 = t;
      t = SSLsetAnnotations(c_3, e_7);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm y_12 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm p_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_12, b_13);
      t = l_8(y_12, b_13, t);
      p_13 = t;
      t = (ATerm) ATinsert(CheckATermList(p_13), y_12);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_r_15;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL,l_14 = NULL;
      l_14 = t;
      if(match_cons(t, sym_FILE_1))
        {
          h_14 = ATgetArgument(t, 0);
          {
            ATerm b_8 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(l_14);
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, h_14);
            h_3 = t;
            t = SSLsetAnnotations(h_3, b_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_14;
        }
      LocalPopChoice(t_15);
      {
        static ATerm d_1 (ATerm t)
        {
          ATerm n_14 = NULL,q_14 = NULL,t_14 = NULL;
          t = term_f_14;
          t = pass_verbose_0_0(t);
          n_14 = t;
          t = term_f_14;
          t = e_115(t);
          t = map_1_0(xtc_find_0_0, t);
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, t_14);
          t = add_arg_flags_0_0(t);
          q_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_14, q_14);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(c_1, d_1, t);
      }
    }
  else
    {
      t = s_15;
      {
        static ATerm g_1 (ATerm t)
        {
          ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
          t = term_f_14;
          t = pass_verbose_0_0(t);
          x_14 = t;
          t = term_f_14;
          t = e_115(t);
          t = map_1_0(xtc_find_0_0, t);
          z_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, z_14);
          t = add_arg_flags_0_0(t);
          y_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_14, y_14);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(e_1, g_1, t);
      }
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_16);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_ast2abox_1_0(i_1, t);
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL,o_15 = NULL;
        o_15 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_15 = ATgetArgument(t, 0);
            {
              ATerm w_8 = NULL,l_3 = NULL;
              t = SSLgetAnnotations(o_15);
              w_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_15);
              l_3 = t;
              t = SSLsetAnnotations(l_3, w_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_15;
          }
        LocalPopChoice(m_16);
        t = xtc_transform_file_2_0(l_1, pass_verbose_0_0, t);
      }
    else
      {
        t = l_16;
        t = xtc_transform_term_2_0(m_1, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_n_16;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_16);
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, (ATerm) ATinsert(ATempty, term_o_16));
      t = t_8(u_15, w_15, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm z_15 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(match_cons(p_16, sym_Stream_1))
        {
          z_15 = ATgetArgument(p_16, 0);
        }
      else
        _fail(t);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(z_15, d_16, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  y_15 = t;
  t = xtc_new_file_0_0(t);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
  t = g_9(o_1, x_15, y_15, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_15);
  t = xtc_transform_file_2_0(r_110, s_110, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_8 (ATerm t_25, ATerm u_25, ATerm t)
{
  t = SSL_execvp(t_25, u_25);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_17 = ATgetArgument(t, 0);
      {
        ATerm l_10 = NULL,n_10 = NULL;
        t = SSL_int_to_string(i_17);
        l_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_16), l_10), term_q_16);
        n_10 = t;
        t = SSL_concat_strings(n_10);
      }
    }
  else
    {
      ATerm m_11 = NULL,o_11 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_17 = ATgetArgument(t, 0);
          j_17 = ATgetArgument(t, 1);
          k_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_17);
      m_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_17), term_t_16), m_11), term_s_16), i_17);
      o_11 = t;
      t = SSL_concat_strings(o_11);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_16 = ATgetArgument(t, 0);
              if((p_17 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm x_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_a_23), term_s_22), term_o_22), term_k_22), term_c_22), term_x_21), term_n_21), term_j_21), term_d_21), term_v_20), term_q_20), term_k_20), term_c_20), term_u_19), term_q_19), term_k_19), term_b_19), term_v_18), term_q_18), term_l_18), term_g_18), term_c_18), term_w_17), term_t_17), term_o_17), term_g_17), term_a_17);
        t = fetch_elem_1_0(p_1, t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_17);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_17 = NULL,r_18 = NULL;
  y_17 = t;
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            r_18 = ATgetArgument(t, 1);
            {
              ATerm n_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_23);
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_11 = NULL,a_12 = NULL,b_12 = NULL;
              t = r_18;
              {
                ATerm q_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_23;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              x_11 = t;
              t = term_q_13;
              a_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_11), term_t_23);
              b_12 = t;
              t = SSL_printnl(a_12, b_12);
              t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATempty, x_11), term_t_23));
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              t = y_17;
            }
        }
      }
    else
      {
        t = i_23;
        t = y_17;
      }
  }
  t = y_17;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  a_19 = t;
  t = fork_0_0(t);
  z_18 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_19;
        t = j_90(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = SSL_waitpid(z_18);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            if(((ATgetType(x_23) != AT_INT) || (ATgetInt((ATermInt) x_23) != 0)))
              _fail(t);
            {
              ATerm y_23 = ATgetArgument(t, 1);
            }
            {
              ATerm a_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_19;
      }
  }
  return(t);
}
static ATerm p_8 (ATerm d_52, ATerm t)
{
  t = SSL_hashtable_keys(d_52);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  static ATerm q_1 (ATerm t)
  {
    ATerm g_19 = NULL,j_19 = NULL;
    g_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), g_19);
    t = q_9(not_null(e_19), g_19, t);
    j_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_19, j_19);
    return(t);
  }
  if(((e_19 != NULL) && (e_19 != t)))
    _fail(t);
  else
    e_19 = t;
  t = lookup_table_0_1(e_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(f_19, t);
  t = map_1_0(q_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
        t = term_k_15;
        w_19 = t;
        t = term_h_15;
        x_19 = t;
        t = term_l_15;
        t = q_9(w_19, x_19, t);
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_19, term_m_22);
        t = geq_0_0(t);
        t = o_19;
        t = t_108(t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = o_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  {
    ATerm f_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
        t = term_k_15;
        i_20 = t;
        t = term_h_15;
        j_20 = t;
        t = term_l_15;
        t = q_9(i_20, j_20, t);
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_20, term_h_19);
        t = geq_0_0(t);
        t = f_20;
        t = s_108(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = f_24;
        t = f_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  {
    ATerm i_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,x_20 = NULL,y_20 = NULL;
        t = term_k_15;
        x_20 = t;
        t = term_h_15;
        y_20 = t;
        t = term_l_15;
        t = q_9(x_20, y_20, t);
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, term_r_17);
        t = geq_0_0(t);
        t = o_20;
        t = u_108(t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = i_24;
        t = o_20;
      }
  }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      if((u_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm b_49, ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,f_21 = NULL,g_21 = NULL;
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_49, c_49);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_49, c_49);
        t = q_9(b_49, c_49, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
  }
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_21, d_49);
  t = c_9(s_1, f_21, d_49, t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_49, c_49, c_21);
  t = lookup_table_0_1(b_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(c_49, c_21, g_21, t);
  t = b_21;
  return(t);
}
static ATerm s_8 (ATerm w_108 (ATerm), ATerm l_49, ATerm k_49, ATerm t)
{
  static ATerm u_1 (ATerm t)
  {
    ATerm v_21 = NULL,h_22 = NULL;
    if(match_cons(t, sym__2))
      {
        v_21 = ATgetArgument(t, 0);
        h_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_49, v_21, h_22);
    t = w_108(t);
    return(t);
  }
  t = k_49;
  t = map_1_0(u_1, t);
  return(t);
}
static ATerm t_8 (ATerm m_53, ATerm n_53, ATerm t)
{
  t = SSL_access(m_53, n_53);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,j_22 = NULL;
      i_22 = t;
      t = (ATerm) ATinsert(ATempty, term_g_25);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_22, (ATerm) ATinsert(ATempty, term_g_25));
      t = t_8(i_22, j_22, t);
      LocalPopChoice(e_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_25;
      {
        ATerm l_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = t;
            if((PushChoice() == 0))
              {
                ATerm w_22 = NULL,x_22 = NULL;
                w_22 = t;
                t = (ATerm) ATinsert(ATempty, term_o_16);
                x_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATempty, term_o_16));
                t = t_8(w_22, x_22, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_25;
              }
            t = debug_1_0(w_1, t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = l_25;
            t = debug_1_0(b_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  t = term_q_13;
  j_25 = t;
  t = (ATerm) ATinsert(ATempty, term_d_26);
  k_25 = t;
  t = SSL_printnl(j_25, k_25);
  t = i_25;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__3))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      o_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_8(m_25, n_25, o_25, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  t = term_q_13;
  q_25 = t;
  t = (ATerm) ATinsert(ATempty, term_l_26);
  r_25 = t;
  t = SSL_printnl(q_25, r_25);
  t = p_25;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm s_25 = NULL,v_25 = NULL,z_25 = NULL;
  s_25 = t;
  t = term_q_13;
  v_25 = t;
  t = (ATerm) ATinsert(ATempty, term_d_26);
  z_25 = t;
  t = SSL_printnl(v_25, z_25);
  t = s_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL,h_23 = NULL,w_23 = NULL,g_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  c_23 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm n_26 = t;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,h_25 = NULL;
        t = term_s_26;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_23);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATmakeAppl(sym_Imported_1, c_23));
        t = q_9(v_24, h_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_26;
      }
  }
  h_23 = t;
  t = term_s_26;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, (ATerm) ATinsert(ATempty, c_23));
  t = lookup_table_0_1(o_24, t);
  u_24 = t;
  t = term_t_26;
  r_24 = t;
  t = (ATerm) ATinsert(ATempty, c_23);
  s_24 = t;
  t = u_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(r_24, s_24, t_24, t);
  t = h_23;
  t = if_verbose4_1_0(e_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_2, t);
  f_23 = t;
  t = term_s_26;
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_26, f_23);
  t = s_8(k_2, n_24, f_23, t);
  t = if_verbose6_1_0(m_2, t);
  t = term_s_26;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_26, (ATerm)ATmakeAppl(sym_Imported_1, c_23), (ATerm) ATempty);
  t = lookup_table_0_1(w_23, t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_23);
  g_24 = t;
  t = (ATerm) ATempty;
  k_24 = t;
  t = m_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(g_24, k_24, l_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_26, (ATerm)ATmakeAppl(sym_Imported_1, c_23), (ATerm) ATempty);
  t = if_verbose4_1_0(n_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t)
{
  static ATerm b_26 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_94(t);
        t = b_26(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = q_94(t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_26 = NULL,f_26 = NULL;
      t = term_k_15;
      e_26 = t;
      t = term_b_27;
      f_26 = t;
      t = term_g_27;
      t = q_9(e_26, f_26, t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      {
        ATerm h_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_26 = NULL;
            t = term_m_27;
            g_26 = t;
            t = SSL_getenv(g_26);
            LocalPopChoice(j_27);
          }
        else
          {
            t = h_27;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  t = term_s_26;
  q_26 = t;
  t = term_o_27;
  r_26 = t;
  t = term_p_27;
  t = q_9(q_26, r_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_27;
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = if_verbose5_1_0(o_2, t);
  k_26 = t;
  {
    ATerm t_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,o_26 = NULL;
        t = term_s_26;
        m_26 = t;
        t = term_t_26;
        o_26 = t;
        t = term_y_27;
        t = q_9(m_26, o_26, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = t_27;
        {
          ATerm p_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_26 = t;
          t = repeat_2_0(s_2, _id, t);
          t = p_26;
        }
      }
  }
  t = k_26;
  t = if_verbose5_1_0(t_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm a_28 (ATerm x_26, ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,c_27 = NULL;
  t = term_s_26;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATmakeAppl(sym_Tool_1, x_26));
  t = q_9(a_27, c_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_28 = ATgetFirst((ATermList) t);
      if(match_cons(c_28, sym__2))
        {
          ATerm j_28 = ATgetArgument(c_28, 0);
          z_26 = ATgetArgument(c_28, 1);
        }
      else
        _fail(t);
      {
        ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_26;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_s_26;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      f_27 = t;
      if(match_cons(t, sym__2))
        {
          d_27 = ATgetArgument(t, 0);
          e_27 = ATgetArgument(t, 1);
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_27 = NULL,k_27 = NULL,l_27 = NULL;
                t = term_s_26;
                k_27 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_27);
                l_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATmakeAppl(sym_Tool_1, d_27));
                t = q_9(k_27, l_27, t);
                {
                  static ATerm d_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_3, t);
                }
                t = not_null(i_27);
                LocalPopChoice(s_28);
              }
            else
              {
                t = r_28;
                t = a_28(f_27, t);
              }
          }
        }
      else
        {
          t = a_28(f_27, t);
        }
      t = if_verbose5_1_0(e_3, t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      {
        ATerm z_27 = NULL,i_12 = NULL,l_12 = NULL;
        z_27 = t;
        t = term_q_13;
        i_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), z_27), term_t_28);
        l_12 = t;
        t = SSL_printnl(i_12, l_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), z_27), term_t_28);
        t = if_verbose5_1_0(j_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  f_28 = t;
  t = s_111(t);
  t = xtc_find_0_0(t);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm h_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
      t = n_8(e_28, f_28, t);
      t = term_d_29;
      h_28 = t;
      t = SSL_exit(h_28);
      return(t);
    }
    t = fork_and_wait_1_0(s_3, t);
  }
  t = f_28;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,o_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_28 = NULL,q_28 = NULL;
      t = m_28;
      t = xtc_new_file_0_0(t);
      p_28 = t;
      t = p_0(t);
      q_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, (ATerm) ATinsert(ATinsert(ATempty, p_28), term_e_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(o_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_28);
    }
  else
    {
      ATerm v_28 = NULL,w_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_28;
      t = xtc_new_file_0_0(t);
      v_28 = t;
      t = p_0(t);
      w_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_28), term_e_29), o_28), term_k_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(o_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_28);
    }
  return(t);
}
static ATerm u_8 (ATerm g_107 (ATerm), ATerm r_46, ATerm p_46, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,i_29 = NULL,j_29 = NULL,m_29 = NULL,n_29 = NULL;
  a_29 = t;
  t = g_107(t);
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_28, r_46, p_46);
  t = r_9(x_28, r_46, p_46, t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_29 = NULL;
        t = term_s_29;
        o_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_28, term_s_29);
        t = q_9(x_28, o_29, t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_28 = ATgetFirst((ATermList) t);
      z_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_28, term_s_29, (ATerm) ATinsert(CheckATermList(z_28), (ATerm) ATinsert(CheckATermList(y_28), r_46)));
  t = lookup_table_0_1(x_28, t);
  n_29 = t;
  t = term_s_29;
  i_29 = t;
  t = (ATerm) ATinsert(CheckATermList(z_28), (ATerm) ATinsert(CheckATermList(y_28), r_46));
  j_29 = t;
  t = n_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(i_29, j_29, m_29, t);
  t = a_29;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm t_29 = NULL;
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_29 = NULL,u_12 = NULL;
      x_29 = t;
      t = term_w_29;
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_29, term_w_29);
      t = i_9(x_29, u_12, t);
      t_29 = t;
      t = SSL_mkstemp(t_29);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm y_29 = NULL;
        t = term_z_29;
        y_29 = t;
        t = SSL_perror(y_29);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = P__tmpdir_0_0(t);
  g_30 = t;
  t = term_d_30;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_d_30);
  t = i_9(g_30, h_30, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_14;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_f_14);
  t = u_8(u_3, c_30, f_30, t);
  t = SSL_close(b_30);
  t = c_30;
  return(t);
}
static ATerm v_8 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm i_30 = NULL,k_30 = NULL;
  k_30 = t;
  {
    ATerm j_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = q_9(j_48, k_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_30 = ATgetFirst((ATermList) t);
            i_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_30);
        {
          ATerm l_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, i_30);
          t = lookup_table_0_1(j_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_9(k_48, i_30, l_30, t);
          t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, i_30);
        }
      }
    else
      {
        t = j_30;
        {
          ATerm n_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
          t = lookup_table_0_1(j_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_9(k_48, n_30, t);
          t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        }
      }
  }
  t = k_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,o_31 = NULL,s_31 = NULL;
  k_31 = t;
  t = d_107(t);
  j_31 = t;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_31 = NULL;
        t = term_s_29;
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_31, term_s_29);
        t = q_9(j_31, t_31, t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_31 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_31, term_s_29, c_31);
  t = lookup_table_0_1(j_31, t);
  s_31 = t;
  t = term_s_29;
  l_31 = t;
  t = s_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(l_31, c_31, o_31, t);
  t = i_31;
  {
    static ATerm v_3 (ATerm t)
    {
      ATerm u_31 = NULL;
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_31, u_31);
      t = v_8(j_31, u_31, t);
      return(t);
    }
    t = map_1_0(v_3, t);
  }
  t = k_31;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_108(t);
      t = e_108(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = e_108(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,e_32 = NULL;
  x_31 = t;
  t = c_107(t);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, term_s_29);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_29;
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_31, term_s_29);
        t = q_9(w_31, i_32, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_31, term_s_29, (ATerm) ATinsert(CheckATermList(y_31), (ATerm) ATempty));
  t = lookup_table_0_1(w_31, t);
  e_32 = t;
  t = term_s_29;
  z_31 = t;
  t = (ATerm) ATinsert(CheckATermList(y_31), (ATerm) ATempty);
  a_32 = t;
  t = e_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(z_31, a_32, b_32, t);
  t = x_31;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  {
    ATerm b_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_32);
        LocalPopChoice(g_31);
      }
    else
      {
        t = b_31;
        t = t_32;
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm l_32 = NULL;
  static ATerm b_4 (ATerm t)
  {
    ATerm o_32 = NULL;
    o_32 = t;
    {
      ATerm h_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_32 = NULL,q_32 = NULL;
          t = term_a_30;
          p_32 = t;
          t = term_s_29;
          q_32 = t;
          t = term_n_31;
          t = q_9(p_32, q_32, t);
          LocalPopChoice(m_31);
        }
      else
        {
          t = h_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_32 != NULL) && (l_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_32 = ATgetFirst((ATermList) t);
        {
          ATerm p_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_32;
    t = map_1_0(d_4, t);
    t = o_32;
    t = end_scope_1_0(k_4, t);
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  t = restore_always_2_0(e_111, b_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_32 = NULL,c_33 = NULL,e_33 = NULL;
  e_33 = t;
  t = xtc_new_file_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
  t = g_9(o_4, c_33, e_33, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_33);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL,k_33 = NULL,t_3 = NULL;
        k_33 = t;
        if(match_cons(t, sym_FILE_1))
          {
            ATerm c_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_33);
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_33);
        t_3 = t;
        t = SSLsetAnnotations(t_3, j_33);
        LocalPopChoice(r_31);
        t = xtc_transform_file_2_0(s_4, v_4, t);
      }
    else
      {
        t = q_31;
        t = xtc_transform_term_2_0(y_4, z_4, t);
      }
  }
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_32;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      if(match_cons(d_32, sym_Stream_1))
        {
          g_33 = ATgetArgument(d_32, 0);
        }
      else
        _fail(t);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(g_33, h_33, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  t = xtc_temp_files_1_0(m_4, t);
  w_32 = t;
  t = term_q_13;
  x_32 = t;
  t = (ATerm) ATinsert(ATempty, term_h_32);
  y_32 = t;
  t = SSL_printnl(x_32, y_32);
  t = w_32;
  t = debug_1_0(a_5, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  static ATerm l_33 (ATerm t)
  {
    ATerm k_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_93(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = k_32;
        t = SRTS_one(l_33, t);
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_n_32;
  n_33 = t;
  t = term_r_32;
  o_33 = t;
  t = term_s_32;
  t = q_9(n_33, o_33, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm s_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if(match_cons(u_32, sym_appl_2))
        {
          ATerm v_32 = ATgetArgument(u_32, 0);
          if(match_cons(v_32, sym_uqlit_1))
            {
              ATerm b_33 = ATgetArgument(v_32, 0);
              if((ATgetSymbol((ATermAppl) b_33) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm a_33 = ATgetArgument(u_32, 1);
            if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
              {
                ATerm d_33 = ATgetFirst((ATermList) a_33);
                if(match_cons(d_33, sym_fun_1))
                  {
                    ATerm m_33 = ATgetArgument(d_33, 0);
                    if(match_cons(m_33, sym_qlit_1))
                      {
                        s_13 = ATgetArgument(m_33, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm f_33 = (ATerm) ATgetNext((ATermList) a_33);
                  if(((ATgetType(f_33) != AT_LIST) || !(ATisEmpty(f_33))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = SSL_explode_string(s_13);
  t = unquote_chars_2_0(f_5, g_5, t);
  x_13 = t;
  t = SSL_implode_string(x_13);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm o_35 = NULL,s_35 = NULL,v_35 = NULL,x_35 = NULL,b_36 = NULL,c_36 = NULL,e_36 = NULL,f_36 = NULL,h_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_prod_3))
    {
      c_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
      f_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_36;
  if(match_cons(t, sym_attrs_1))
    {
      h_36 = ATgetArgument(t, 0);
      t = e_36;
      if(match_cons(t, sym_cf_1))
        {
          v_35 = ATgetArgument(t, 0);
          t = v_35;
          if(match_cons(t, sym_sort_1))
            {
              x_35 = ATgetArgument(t, 0);
              t = c_36;
              {
                ATerm p_33 = t;
                int r_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_36;
                    t = fetch_1_0(b_5, t);
                    t = b_36;
                    LocalPopChoice(r_33);
                  }
                else
                  {
                    t = p_33;
                    {
                      ATerm s_33 = t;
                      int t_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_36;
                          t = fetch_1_0(c_5, t);
                          t = b_36;
                          LocalPopChoice(t_33);
                        }
                      else
                        {
                          t = s_33;
                          {
                            ATerm u_33 = t;
                            int v_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_36;
                                t = fetch_1_0(d_5, t);
                                t = h_36;
                                {
                                  ATerm w_33 = t;
                                  if((PushChoice() == 0))
                                    {
                                      t = fetch_elem_1_0(e_5, t);
                                      PopChoice();
                                      _fail(t);
                                    }
                                  else
                                    {
                                      t = w_33;
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_prod_3, c_36, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, x_35)), (ATerm) ATmakeAppl(sym_attrs_1, h_36));
                                LocalPopChoice(v_33);
                              }
                            else
                              {
                                t = u_33;
                                t = h_36;
                                t = fetch_1_0(i_5, t);
                                t = b_36;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = c_36;
              {
                ATerm a_34 = t;
                int b_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_36;
                    t = fetch_1_0(k_5, t);
                    t = b_36;
                    LocalPopChoice(b_34);
                  }
                else
                  {
                    t = a_34;
                    {
                      ATerm c_34 = t;
                      int g_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_36;
                          t = fetch_1_0(l_5, t);
                          t = b_36;
                          LocalPopChoice(g_34);
                        }
                      else
                        {
                          t = c_34;
                          t = h_36;
                          t = fetch_1_0(n_5, t);
                          t = b_36;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = c_36;
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_36;
                t = fetch_1_0(o_5, t);
                t = b_36;
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                {
                  ATerm m_34 = t;
                  int n_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_36;
                      t = fetch_1_0(p_5, t);
                      t = b_36;
                      LocalPopChoice(n_34);
                    }
                  else
                    {
                      t = m_34;
                      t = h_36;
                      t = fetch_1_0(q_5, t);
                      t = b_36;
                    }
                }
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = e_36;
      if(match_cons(t, sym_sort_1))
        {
          ATerm o_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_35 = ATgetFirst((ATermList) t);
          s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_35;
      if(match_cons(t, sym_sort_1))
        {
          ATerm p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_36;
    }
  return(t);
}
static ATerm x_8 (ATerm u_36, ATerm v_36, ATerm t)
{
  t = SSL_mkterm(u_36, v_36);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm t_39 = NULL,v_39 = NULL,x_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_39;
  if(match_cons(t, sym_alt_2))
    {
      t_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_40 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, t_39, v_39);
            t = flat_alt_0_0(t);
            c_40 = t;
            t = (ATerm) ATinsert(CheckATermList(c_40), x_39);
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            t = (ATerm) ATinsert(ATinsert(ATempty, y_39), x_39);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, y_39), x_39);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_39;
        {
          ATerm u_34 = t;
          if((PushChoice() == 0))
            {
              ATerm i_14 = NULL;
              i_14 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = i_14;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_34 = ATgetFirst((ATermList) t);
                      ATerm w_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = i_14;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_34;
            }
        }
        t = (ATerm) ATinsert(ATempty, l_39);
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = l_39;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(r_5, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm n_45 = NULL,r_45 = NULL;
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          n_45 = ATgetArgument(t, 0);
          r_45 = ATgetArgument(t, 1);
          {
            ATerm z_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_34);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, n_45, r_45);
    }
  else
    {
      t = x_34;
      if(match_cons(t, sym_iter_n_2))
        {
          n_45 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, n_45);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym_Arg_1))
    {
      c_17 = ATgetArgument(t, 0);
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_17 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(d_17);
            x_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, c_17);
            y_3 = t;
            t = SSLsetAnnotations(y_3, x_17);
            t = term_d_35;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            t = d_17;
          }
      }
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL;
  static ATerm h_49 (ATerm t)
  {
    static ATerm j_49 (ATerm q_44, ATerm t_44, ATerm u_44, ATerm t)
    {
      ATerm v_44 = NULL,z_44 = NULL,x_3 = NULL;
      t = SSLgetAnnotations(q_44);
      v_44 = t;
      t = u_44;
      t = _2_0(_id, n_6, t);
      z_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_44, z_44);
      x_3 = t;
      t = SSLsetAnnotations(x_3, v_44);
      t = h_49(t);
      return(t);
    }
    static ATerm p_49 (ATerm v_45, ATerm z_45, ATerm a_46, ATerm b_46, ATerm t)
    {
      ATerm h_46 = NULL,v_46 = NULL,w_46 = NULL,z_46 = NULL,a_47 = NULL,d_47 = NULL;
      t = SSL_explode_term(b_46);
      if(match_cons(t, sym__2))
        {
          z_46 = ATgetArgument(t, 0);
          a_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, a_46, z_46)));
      t = conc_0_0(t);
      h_46 = t;
      t = a_47;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      d_47 = t;
      t = make_0_0(t);
      v_46 = t;
      t = d_47;
      {
        static ATerm o_6 (ATerm t)
        {
          ATerm f_47 = NULL;
          f_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_45, h_46), f_47);
          t = h_49(t);
          return(t);
        }
        t = map_1_0(o_6, t);
      }
      t = concat_0_0(t);
      w_46 = t;
      t = (ATerm) ATinsert(CheckATermList(w_46), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, v_45, h_46), v_46));
      return(t);
    }
    ATerm k_47 = NULL,m_47 = NULL,p_47 = NULL,r_47 = NULL,u_47 = NULL,v_47 = NULL,x_47 = NULL,m_48 = NULL,n_48 = NULL,q_48 = NULL,r_48 = NULL;
    u_47 = t;
    if(match_cons(t, sym__2))
      {
        v_47 = ATgetArgument(t, 0);
        n_48 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_48;
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm g_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(f_35);
          t = (ATerm) ATempty;
        }
      else
        {
          t = e_35;
          if(match_cons(t, sym__2))
            {
              q_48 = ATgetArgument(t, 0);
              r_48 = ATgetArgument(t, 1);
              t = r_48;
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm j_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_35);
                    t = v_47;
                    {
                      ATerm k_35 = t;
                      int l_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm m_35 = ATgetArgument(t, 0);
                              ATerm n_35 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_35);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = k_35;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = h_35;
                    {
                      ATerm p_35 = t;
                      int q_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm r_35 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(q_35);
                          t = v_47;
                          {
                            ATerm t_35 = t;
                            int u_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm w_35 = ATgetArgument(t, 0);
                                    ATerm y_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_35);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = t_35;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = p_35;
                          if(match_cons(t, sym_alt_2))
                            {
                              r_47 = ATgetArgument(t, 0);
                              k_47 = ATgetArgument(t, 1);
                              t = k_47;
                              if(match_cons(t, sym_alt_2))
                                {
                                  m_47 = ATgetArgument(t, 0);
                                  p_47 = ATgetArgument(t, 1);
                                  t = v_47;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_47 = ATgetArgument(t, 0);
                                      m_48 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_35 = t;
                                        int a_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_16 = NULL,c_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,e_4 = NULL;
                                            t = x_47;
                                            if(((v_41 != NULL) && (v_41 != t)))
                                              _fail(t);
                                            else
                                              v_41 = t;
                                            t = m_48;
                                            if(((b_42 != NULL) && (b_42 != t)))
                                              _fail(t);
                                            else
                                              b_42 = t;
                                            t = q_48;
                                            if(((c_42 != NULL) && (c_42 != t)))
                                              _fail(t);
                                            else
                                              c_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, r_47, (ATerm) ATmakeAppl(sym_alt_2, m_47, p_47));
                                            t = flat_alt_0_0(t);
                                            b_16 = t;
                                            t = term_d_36;
                                            e_16 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_d_36, b_16);
                                            t = x_8(e_16, b_16, t);
                                            c_16 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_47, m_48), (ATerm) ATmakeAppl(sym__2, q_48, c_16));
                                            t = h_49(t);
                                            j_16 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                g_16 = ATgetFirst((ATermList) t);
                                                h_16 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(j_16);
                                            f_16 = t;
                                            t = g_16;
                                            t = topdown_1_0(p_6, t);
                                            i_16 = t;
                                            t = (ATerm) ATinsert(CheckATermList(h_16), i_16);
                                            e_4 = t;
                                            t = SSLsetAnnotations(e_4, f_16);
                                            LocalPopChoice(a_36);
                                          }
                                        else
                                          {
                                            t = z_35;
                                            {
                                              ATerm g_36 = t;
                                              int i_36 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_49(u_47, v_47, n_48, t);
                                                  LocalPopChoice(i_36);
                                                }
                                              else
                                                {
                                                  t = g_36;
                                                  t = p_49(x_47, m_48, q_48, r_48, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_49(u_47, v_47, n_48, t);
                                    }
                                }
                              else
                                {
                                  t = v_47;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_47 = ATgetArgument(t, 0);
                                      m_48 = ATgetArgument(t, 1);
                                      {
                                        ATerm j_36 = t;
                                        int m_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_49(u_47, v_47, n_48, t);
                                            LocalPopChoice(m_36);
                                          }
                                        else
                                          {
                                            t = j_36;
                                            t = p_49(x_47, m_48, q_48, r_48, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_49(u_47, v_47, n_48, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  r_47 = ATgetArgument(t, 0);
                                  t = v_47;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_47 = ATgetArgument(t, 0);
                                      m_48 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_36 = t;
                                        int q_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_49(u_47, v_47, n_48, t);
                                            LocalPopChoice(q_36);
                                          }
                                        else
                                          {
                                            t = n_36;
                                            {
                                              ATerm r_36 = t;
                                              int s_36 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_47, m_48), (ATerm) ATmakeAppl(sym__2, q_48, r_47));
                                                  t = h_49(t);
                                                  LocalPopChoice(s_36);
                                                }
                                              else
                                                {
                                                  t = r_36;
                                                  t = p_49(x_47, m_48, q_48, r_48, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_49(u_47, v_47, n_48, t);
                                    }
                                }
                              else
                                {
                                  t = v_47;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_47 = ATgetArgument(t, 0);
                                      m_48 = ATgetArgument(t, 1);
                                      {
                                        ATerm t_36 = t;
                                        int w_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_49(u_47, v_47, n_48, t);
                                            LocalPopChoice(w_36);
                                          }
                                        else
                                          {
                                            t = t_36;
                                            t = p_49(x_47, m_48, q_48, r_48, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_49(u_47, v_47, n_48, t);
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
              t = v_47;
              t = j_49(u_47, v_47, n_48, t);
            }
        }
    }
    return(t);
  }
  g_42 = t;
  t = term_f_14;
  t = z_88(t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, g_42);
  t = h_49(t);
  return(t);
}
ATerm _2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,j_50 = NULL,j_5 = NULL;
  j_50 = t;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_50);
  c_50 = t;
  t = d_50;
  t = u_73(t);
  f_50 = t;
  t = e_50;
  t = v_73(t);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, g_50);
  j_5 = t;
  t = SSLsetAnnotations(j_5, c_50);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  u_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_50;
    }
  else
    {
      ATerm f_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          w_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_50 = ATgetFirst((ATermList) t);
          y_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_50;
      t = pair_0_0(t);
      f_51 = t;
      t = (ATerm) ATinsert(CheckATermList(f_51), (ATerm) ATmakeAppl(sym__2, v_50, x_50));
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,m_56 = NULL,p_56 = NULL,e_6 = NULL;
  m_56 = t;
  if(match_cons(t, sym_lit_1))
    {
      j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_56);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_56);
  e_6 = t;
  t = SSLsetAnnotations(e_6, i_56);
  if(match_cons(t, sym_lit_1))
    {
      p_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, p_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_56 = ATgetArgument(t, 0);
          {
            ATerm y_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_56);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,m_6 = NULL,s_58 = NULL,y_57 = NULL,j_6 = NULL;
  w_57 = t;
  if(match_cons(t, sym__2))
    {
      s_57 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  r_57 = t;
  t = s_57;
  if(match_cons(t, sym_lit_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_57);
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, v_57);
  j_6 = t;
  t = SSLsetAnnotations(j_6, u_57);
  if(match_cons(t, sym_lit_1))
    {
      y_57 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, y_57));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          y_57 = ATgetArgument(t, 0);
          {
            ATerm z_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, y_57);
    }
  p_57 = t;
  t = t_57;
  t = _2_0(_id, a_7, t);
  if(match_cons(t, sym_lit_1))
    {
      s_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, s_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_58 = ATgetArgument(t, 0);
          {
            ATerm a_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_58);
    }
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_57, q_57);
  m_6 = t;
  t = SSLsetAnnotations(m_6, r_57);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_d_37), (ATerm) ATinsert(ATinsert(ATempty, q_57), p_57));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  if(match_cons(t, sym_iter_1))
    {
      q_58 = ATgetArgument(t, 0);
      {
        ATerm z_19 = NULL,k_6 = NULL;
        t = SSLgetAnnotations(p_58);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, q_58);
        k_6 = t;
        t = SSLsetAnnotations(k_6, z_19);
      }
    }
  else
    {
      ATerm n_20 = NULL,l_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          q_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_58);
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, q_58);
      l_6 = t;
      t = SSLsetAnnotations(l_6, n_20);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm x_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      x_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, x_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_58 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_58);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,a_53 = NULL,d_53 = NULL,e_53 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_53 = NULL,g_53 = NULL,i_53 = NULL,l_53 = NULL,o_53 = NULL,q_53 = NULL,r_53 = NULL,a_54 = NULL,b_54 = NULL,e_54 = NULL,g_54 = NULL,f_6 = NULL,x_55 = NULL,c_6 = NULL,t_55 = NULL,u_55 = NULL;
      t = reverse_acc_2_0(_id, s_6, t);
      g_54 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_53 = ATgetFirst((ATermList) t);
          l_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_54);
      g_53 = t;
      t = i_53;
      if(match_cons(t, sym__2))
        {
          a_54 = ATgetArgument(t, 0);
          b_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_53);
      r_53 = t;
      t = b_54;
      if(match_cons(t, sym_iter_1))
        {
          t_55 = ATgetArgument(t, 0);
          {
            ATerm i_18 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(b_54);
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, t_55);
            s_5 = t;
            t = SSLsetAnnotations(s_5, i_18);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              t_55 = ATgetArgument(t, 0);
              {
                ATerm m_18 = NULL,u_5 = NULL;
                t = SSLgetAnnotations(b_54);
                m_18 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, t_55);
                u_5 = t;
                t = SSLsetAnnotations(u_5, m_18);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  t_55 = ATgetArgument(t, 0);
                  u_55 = ATgetArgument(t, 1);
                  {
                    ATerm c_19 = NULL,v_5 = NULL;
                    t = SSLgetAnnotations(b_54);
                    c_19 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, t_55, u_55);
                    v_5 = t;
                    t = SSLsetAnnotations(v_5, c_19);
                  }
                }
              else
                {
                  ATerm n_19 = NULL,a_6 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      t_55 = ATgetArgument(t, 0);
                      u_55 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_54);
                  n_19 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, t_55, u_55);
                  a_6 = t;
                  t = SSLsetAnnotations(a_6, n_19);
                }
            }
        }
      e_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_54, e_54);
      c_6 = t;
      t = SSLsetAnnotations(c_6, r_53);
      if(match_cons(t, sym_lit_1))
        {
          x_55 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, x_55));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              x_55 = ATgetArgument(t, 0);
              {
                ATerm h_37 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, x_55);
        }
      o_53 = t;
      t = l_53;
      t = map_1_0(t_6, t);
      q_53 = t;
      t = (ATerm) ATinsert(CheckATermList(q_53), o_53);
      f_6 = t;
      t = SSLsetAnnotations(f_6, g_53);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_52 = ATgetFirst((ATermList) t);
          w_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_37 = t;
        if((PushChoice() == 0))
          {
            ATerm t_56 = NULL,w_56 = NULL,y_56 = NULL,z_56 = NULL,h_6 = NULL;
            z_56 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_56 = ATgetFirst((ATermList) t);
                y_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_56);
            t_56 = t;
            t = y_56;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_56), w_56);
            h_6 = t;
            t = SSLsetAnnotations(h_6, t_56);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_37;
          }
      }
      t = w_52;
      t = reverse_acc_2_0(_id, w_6, t);
      f_53 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_52), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, f_53)));
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_6 = NULL,k_57 = NULL;
            t = reverse_acc_2_0(_id, x_6, t);
            h_57 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_57 = ATgetFirst((ATermList) t);
                g_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_57);
            c_57 = t;
            t = f_57;
            if(match_cons(t, sym_lit_1))
              {
                k_57 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_36, (ATerm) ATmakeAppl(sym_S_1, k_57));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    k_57 = ATgetArgument(t, 0);
                    {
                      ATerm l_37 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, k_57);
              }
            e_53 = t;
            t = g_57;
            {
              ATerm m_37 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_37;
                }
            }
            t = reverse_acc_2_0(_id, y_6, t);
            a_53 = t;
            t = (ATerm) ATinsert(CheckATermList(a_53), e_53);
            i_6 = t;
            t = SSLsetAnnotations(i_6, c_57);
            t = a_53;
            t = pair_0_0(t);
            t = map_1_0(z_6, t);
            d_53 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_53), d_53));
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = map_1_0(b_7, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm n_37 = t;
  if((PushChoice() == 0))
    {
      ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,i_8 = NULL;
      l_59 = t;
      if(match_cons(t, sym_lit_1))
        {
          k_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_59);
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, k_59);
      i_8 = t;
      t = SSLsetAnnotations(i_8, j_59);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_37;
    }
  return(t);
}
static ATerm q_60 (ATerm q_59, ATerm r_59, ATerm s_59, ATerm t)
{
  ATerm w_59 = NULL,z_8 = NULL;
  t = SSLgetAnnotations(q_59);
  w_59 = t;
  t = s_59;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_59, s_59);
  z_8 = t;
  t = SSLsetAnnotations(z_8, w_59);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm p_59 = NULL;
  static ATerm p_60 (ATerm t)
  {
    ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
    a_60 = t;
    if(match_cons(t, sym__2))
      {
        b_60 = ATgetArgument(t, 0);
        c_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = c_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_60 = ATgetFirst((ATermList) t);
        e_60 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_60(a_60, b_60, c_60, t);
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
              {
                ATerm q_37 = t;
                int r_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
                    t = d_60;
                    t = c_89(t);
                    t = term_m_15;
                    k_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_60, term_m_15);
                    t = l_9(b_60, k_60, t);
                    j_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_60, e_60);
                    t = p_60(t);
                    i_60 = t;
                    t = (ATerm) ATinsert(CheckATermList(i_60), (ATerm) ATmakeAppl(sym__2, b_60, d_60));
                    LocalPopChoice(r_37);
                  }
                else
                  {
                    t = q_37;
                    {
                      ATerm o_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_60, e_60);
                      t = p_60(t);
                      o_60 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_60), d_60);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = q_60(a_60, b_60, c_60, t);
      }
    return(t);
  }
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, p_59);
  t = p_60(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  v_60 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm u_37 = ATgetArgument(t, 0);
            u_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(t_37);
        t = u_60;
      }
    else
      {
        t = s_37;
        t = v_60;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(c_7, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  t = number_nonterminals_0_0(t);
  c_61 = t;
  t = make_0_0(t);
  z_60 = t;
  t = c_61;
  {
    static ATerm d_7 (ATerm t)
    {
      static ATerm f_7 (ATerm t)
      {
        ATerm d_61 = NULL;
        t = term_f_14;
        t = y_88(t);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_61, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(f_7, t);
      return(t);
    }
    t = map_1_0(d_7, t);
  }
  t = concat_0_0(t);
  a_61 = t;
  t = term_f_14;
  t = y_88(t);
  b_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, b_61), z_60));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm g_61 = NULL;
  static ATerm g_7 (ATerm t)
  {
    t = w_96(t);
    if(((g_61 != NULL) && (g_61 != t)))
      _fail(t);
    else
      g_61 = t;
    return(t);
  }
  t = fetch_1_0(g_7, t);
  t = not_null(g_61);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm q_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(match_cons(v_37, sym_appl_2))
        {
          ATerm w_37 = ATgetArgument(v_37, 0);
          if(match_cons(w_37, sym_uqlit_1))
            {
              ATerm y_37 = ATgetArgument(w_37, 0);
              if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm x_37 = ATgetArgument(v_37, 1);
            if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
              {
                ATerm z_37 = ATgetFirst((ATermList) x_37);
                if(match_cons(z_37, sym_fun_1))
                  {
                    ATerm b_38 = ATgetArgument(z_37, 0);
                    if(match_cons(b_38, sym_qlit_1))
                      {
                        q_21 = ATgetArgument(b_38, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm a_38 = (ATerm) ATgetNext((ATermList) x_37);
                  if(((ATgetType(a_38) != AT_LIST) || !(ATisEmpty(a_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = SSL_explode_string(q_21);
  t = unquote_chars_2_0(i_7, k_7, t);
  a_22 = t;
  t = SSL_implode_string(a_22);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  x_61 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      y_61 = ATgetArgument(t, 0);
      z_61 = ATgetArgument(t, 1);
      a_62 = ATgetArgument(t, 2);
      w_61 = ATgetArgument(t, 3);
      {
        ATerm f_62 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_38)), z_61), (ATerm) ATinsert(ATinsert(ATempty, term_d_38), (ATerm) ATmakeAppl(sym_lit_1, y_61)));
        t = concat_0_0(t);
        f_62 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, f_62, a_62, w_61);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm o_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          y_61 = ATgetArgument(t, 0);
          {
            ATerm f_38 = ATgetArgument(t, 1);
          }
          a_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_61;
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL;
            t = a_62;
            if(match_cons(t, sym_attrs_1))
              {
                p_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_21;
            t = fetch_elem_1_0(h_7, t);
            o_21 = t;
            LocalPopChoice(h_38);
            {
              static ATerm l_7 (ATerm t)
              {
                t = o_21;
                return(t);
              }
              t = y_61;
              t = symbols2pp_entries_1_0(l_7, t);
            }
          }
        else
          {
            t = g_38;
            {
              ATerm i_38 = t;
              int j_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(j_38);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = i_38;
                  {
                    ATerm k_38 = t;
                    int l_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_38 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm r_21 = NULL;
                            r_21 = t;
                            t = term_n_38;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(m_7, t);
                            t = r_21;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = m_38;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(l_38);
                      }
                    else
                      {
                        t = k_38;
                      }
                  }
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  static ATerm c_63 (ATerm t)
  {
    ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
    z_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_63 = ATgetFirst((ATermList) t);
        b_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_38 = t;
      int p_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_22 = NULL,p_9 = NULL;
          t = SSLgetAnnotations(z_62);
          g_22 = t;
          t = b_63;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_63), a_63);
          p_9 = t;
          t = SSLsetAnnotations(p_9, g_22);
          t = m_97(t);
          LocalPopChoice(p_38);
        }
      else
        {
          t = o_38;
          {
            ATerm t_22 = NULL,y_22 = NULL,s_9 = NULL;
            t = SSLgetAnnotations(z_62);
            t_22 = t;
            t = b_63;
            t = c_63(t);
            y_22 = t;
            t = (ATerm) ATinsert(CheckATermList(y_22), a_63);
            s_9 = t;
            t = SSLsetAnnotations(s_9, t_22);
          }
        }
    }
    return(t);
  }
  t = c_63(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_63 = ATgetFirst((ATermList) t);
      j_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_63;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_63;
    }
  else
    {
      t = j_63;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_38 = ATgetFirst((ATermList) t);
      r_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_63;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_63 = ATgetFirst((ATermList) t);
      {
        ATerm r_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_63;
  t = g_106(t);
  t = o_63;
  t = last_0_0(t);
  t = h_106(t);
  t = o_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_38 = ATgetFirst((ATermList) t);
      p_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_63;
  t = at_last_1_0(t_7, t);
  return(t);
}
static ATerm b_9 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm p_36, ATerm o_36, ATerm t)
{
  t = z_100(t);
  {
    static ATerm v_7 (ATerm t)
    {
      ATerm s_63 = NULL;
      s_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_36, s_63);
      t = y_100(t);
      return(t);
    }
    t = fetch_1_0(v_7, t);
  }
  t = o_36;
  return(t);
}
static ATerm c_9 (ATerm v_100 (ATerm), ATerm l_36, ATerm k_36, ATerm t)
{
  static ATerm i_64 (ATerm t)
  {
    ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
    d_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_64 = ATgetFirst((ATermList) t);
            f_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_64;
              {
                static ATerm w_7 (ATerm t)
                {
                  t = k_36;
                  return(t);
                }
                t = b_9(v_100, w_7, e_64, f_64, t);
              }
              t = i_64(t);
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              {
                ATerm j_23 = NULL,m_23 = NULL,e_10 = NULL;
                t = SSLgetAnnotations(d_64);
                j_23 = t;
                t = f_64;
                t = i_64(t);
                m_23 = t;
                t = (ATerm) ATinsert(CheckATermList(m_23), e_64);
                e_10 = t;
                t = SSLsetAnnotations(e_10, j_23);
              }
            }
        }
      }
    return(t);
  }
  t = l_36;
  t = i_64(t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_64;
      t = a_104(t);
    }
  else
    {
      ATerm q_64 = NULL,r_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_64 = ATgetFirst((ATermList) t);
          n_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_64;
      t = c_104(t);
      q_64 = t;
      t = n_64;
      t = foldr_3_0(a_104, b_104, c_104, t);
      r_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_64, r_64);
      t = b_104(t);
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_64 = NULL;
      t = s_102(t);
      u_64 = t;
      t = (ATerm) ATinsert(ATempty, u_64);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm r_23 = NULL,s_23 = NULL;
        static ATerm y_7 (ATerm t)
        {
          t = collect_om_2_0(s_102, t_102, t);
          return(t);
        }
        s_23 = t;
        t = SSL_explode_term(s_23);
        if(match_cons(t, sym__2))
          {
            ATerm x_38 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_23;
        t = foldr_3_0(x_7, t_102, y_7, t);
      }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm i_65 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      i_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_65;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL;
  if(match_cons(t, sym__2))
    {
      j_65 = ATgetArgument(t, 0);
      k_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(c_8, j_65, k_65, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm l_65 = NULL;
  if(match_cons(t, sym__2))
    {
      l_65 = ATgetArgument(t, 0);
      if((l_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  n_66 = t;
  if(match_cons(t, sym_cons_1))
    {
      l_66 = ATgetArgument(t, 0);
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = NULL,b_24 = NULL,c_24 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(n_66);
            z_23 = t;
            t = SSL_explode_string(l_66);
            t = unquote_chars_2_0(a_9, m_9, t);
            c_24 = t;
            t = SSL_implode_string(c_24);
            b_24 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, b_24);
            o_10 = t;
            t = SSLsetAnnotations(o_10, z_23);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            t = n_66;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          l_66 = ATgetArgument(t, 0);
          t = l_66;
          if(match_cons(t, sym_qlit_1))
            {
              m_66 = ATgetArgument(t, 0);
              {
                ATerm a_39 = t;
                int b_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_67(n_66, l_66, t);
                    LocalPopChoice(b_39);
                  }
                else
                  {
                    t = a_39;
                    {
                      ATerm c_39 = t;
                      int d_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_67(m_66, t);
                          LocalPopChoice(d_39);
                        }
                      else
                        {
                          t = c_39;
                          t = n_66;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm e_39 = t;
              int f_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_67(n_66, l_66, t);
                  LocalPopChoice(f_39);
                }
              else
                {
                  t = e_39;
                  t = n_66;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              l_66 = ATgetArgument(t, 0);
              {
                ATerm g_39 = t;
                int h_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_67(n_66, l_66, t);
                    LocalPopChoice(h_39);
                  }
                else
                  {
                    t = g_39;
                    t = n_66;
                  }
              }
            }
          else
            {
              t = n_66;
            }
        }
    }
  return(t);
}
static ATerm x_67 (ATerm t_65, ATerm u_65, ATerm t)
{
  ATerm v_65 = NULL,x_65 = NULL,y_65 = NULL,j_10 = NULL;
  t = SSLgetAnnotations(t_65);
  v_65 = t;
  t = SSL_explode_string(u_65);
  t = unquote_chars_2_0(e_8, f_8, t);
  y_65 = t;
  t = SSL_implode_string(y_65);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, x_65);
  j_10 = t;
  t = SSLsetAnnotations(j_10, v_65);
  return(t);
}
static ATerm y_67 (ATerm a_66, ATerm b_66, ATerm t)
{
  ATerm c_66 = NULL,e_66 = NULL,f_66 = NULL,m_10 = NULL;
  t = SSLgetAnnotations(a_66);
  c_66 = t;
  t = SSL_explode_string(b_66);
  t = unquote_chars_2_0(h_8, o_8, t);
  f_66 = t;
  t = SSL_implode_string(f_66);
  e_66 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, e_66);
  m_10 = t;
  t = SSLsetAnnotations(m_10, c_66);
  return(t);
}
static ATerm z_67 (ATerm h_66, ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL;
  t = SSL_explode_string(h_66);
  t = unquote_chars_2_0(q_8, y_8, t);
  k_66 = t;
  t = SSL_implode_string(k_66);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_66);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
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
static ATerm o_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm i_39 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_39;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  r_67 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_67 = ATgetArgument(t, 0);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_24 = NULL,q_24 = NULL,p_10 = NULL;
            t = SSLgetAnnotations(r_67);
            j_24 = t;
            t = SSL_int_to_string(q_67);
            q_24 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, q_24);
            p_10 = t;
            t = SSLsetAnnotations(p_10, j_24);
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            t = r_67;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          q_67 = ATgetArgument(t, 0);
          p_67 = ATgetArgument(t, 1);
          {
            ATerm m_39 = t;
            int n_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_25 = NULL,f_25 = NULL,s_10 = NULL;
                t = SSLgetAnnotations(r_67);
                c_25 = t;
                t = SSL_int_to_string(q_67);
                f_25 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, f_25, p_67);
                s_10 = t;
                t = SSLsetAnnotations(s_10, c_25);
                LocalPopChoice(n_39);
              }
            else
              {
                t = m_39;
                t = r_67;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              q_67 = ATgetArgument(t, 0);
              {
                ATerm o_39 = t;
                int p_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,n_11 = NULL;
                    t = SSLgetAnnotations(r_67);
                    c_26 = t;
                    t = SSL_explode_string(q_67);
                    i_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_26), term_q_39), (ATerm) ATinsert(ATempty, term_q_39));
                    t = conc_0_0(t);
                    j_26 = t;
                    t = SSL_implode_string(j_26);
                    h_26 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, h_26);
                    n_11 = t;
                    t = SSLsetAnnotations(n_11, c_26);
                    LocalPopChoice(p_39);
                  }
                else
                  {
                    t = o_39;
                    t = r_67;
                  }
              }
            }
          else
            {
              t = r_67;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm h_65 = NULL;
  t = collect_om_2_0(z_7, a_8, t);
  t = concat_0_0(t);
  t = topdown_1_0(d_8, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(w_9, t);
  t = concat_0_0(t);
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, h_65);
  t = topdown_1_0(x_9, t);
  return(t);
}
static ATerm d_9 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm d_68 = NULL;
  t = SSL_fputc(t_53, u_53);
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_68);
  return(t);
}
static ATerm e_9 (ATerm f_29, ATerm g_29, ATerm t)
{
  ATerm e_68 = NULL;
  t = SSL_write_term_to_stream_text(f_29, g_29);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_68);
  return(t);
}
static ATerm g_9 (ATerm u_91 (ATerm), ATerm d_212, ATerm l_29, ATerm t)
{
  ATerm f_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_212, term_r_39);
  t = k_9(t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_68, l_29);
  t = u_91(t);
  t = fclose_0_0(t);
  t = l_29;
  return(t);
}
static ATerm f_9 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm g_68 = NULL;
  t = SSL_write_term_to_stream_baf(b_29, c_29);
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_68);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(match_cons(s_39, sym_Stream_1))
        {
          n_68 = ATgetArgument(s_39, 0);
        }
      else
        _fail(t);
      o_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(n_68, o_68, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_39 = ATgetArgument(t, 0);
      if(match_cons(u_39, sym_Stream_1))
        {
          s_68 = ATgetArgument(u_39, 0);
        }
      else
        _fail(t);
      t_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9(s_68, t_68, t);
  p_68 = t;
  t = term_h_21;
  q_68 = t;
  t = p_68;
  if(match_cons(t, sym_Stream_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, p_68);
  t = d_9(q_68, r_68, t);
  return(t);
}
ATerm output_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  t = d_113(t);
  i_68 = t;
  {
    ATerm w_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_68 = NULL,k_68 = NULL;
        t = term_k_15;
        j_68 = t;
        t = term_e_29;
        k_68 = t;
        t = term_a_40;
        t = q_9(j_68, k_68, t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = w_39;
        t = term_b_40;
      }
  }
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_68, i_68);
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_68 = NULL,m_68 = NULL;
        t = term_k_15;
        l_68 = t;
        t = term_f_40;
        m_68 = t;
        t = term_g_40;
        t = q_9(l_68, m_68, t);
        t = (ATerm) ATmakeAppl(sym__2, h_68, i_68);
        LocalPopChoice(e_40);
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            ATerm i_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_9(a_10, h_68, i_68, t);
      }
    else
      {
        t = d_40;
        if(match_cons(t, sym__2))
          {
            ATerm j_40 = ATgetArgument(t, 0);
            ATerm k_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_9(b_10, h_68, i_68, t);
      }
  }
  return(t);
}
static ATerm h_69 (ATerm b_69, ATerm t)
{
  t = SSL_fclose(b_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_69 = ATgetArgument(t, 0);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_69);
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = h_69(f_69, t);
          }
      }
    }
  else
    {
      t = h_69(f_69, t);
    }
  return(t);
}
static ATerm h_9 (ATerm h_29, ATerm t)
{
  t = SSL_read_term_from_stream(h_29);
  return(t);
}
static ATerm i_9 (ATerm y_43, ATerm z_43, ATerm t)
{
  t = SSL_strcat(y_43, z_43);
  return(t);
}
static ATerm j_9 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm i_69 = NULL;
  t = SSL_fopen(v_53, w_53);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_69 = NULL;
  t = SSL_stdin_stream();
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_69 = NULL;
  t = SSL_stdout_stream();
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_69 = NULL;
  t = SSL_stderr_stream();
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_69);
  return(t);
}
static ATerm s_70 (ATerm r_69, ATerm t)
{
  ATerm s_69 = NULL;
  t = SSL_explode_term(r_69);
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
          {
            s_69 = ATgetFirst((ATermList) o_40);
            {
              ATerm p_40 = (ATerm) ATgetNext((ATermList) o_40);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_69;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_70 (ATerm v_69, ATerm w_69, ATerm x_69, ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL,d_70 = NULL,h_12 = NULL;
  t = SSLgetAnnotations(x_69);
  a_70 = t;
  t = v_69;
  if(match_cons(t, sym_Path_1))
    {
      d_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_70, w_69);
  h_12 = t;
  t = SSLsetAnnotations(h_12, a_70);
  if(match_cons(t, sym__2))
    {
      y_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(y_69, z_69, t);
  return(t);
}
static ATerm u_70 (ATerm f_70, ATerm g_70, ATerm h_70, ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,n_70 = NULL,j_12 = NULL;
  t = SSLgetAnnotations(h_70);
  k_70 = t;
  t = SSL_is_string(f_70);
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_70, g_70);
  j_12 = t;
  t = SSLsetAnnotations(j_12, k_70);
  if(match_cons(t, sym__2))
    {
      i_70 = ATgetArgument(t, 0);
      j_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(i_70, j_70, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_70(p_70, t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            {
              ATerm s_40 = t;
              int t_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_70(q_70, r_70, p_70, t);
                  LocalPopChoice(t_40);
                }
              else
                {
                  t = s_40;
                  t = u_70(q_70, r_70, p_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_70(p_70, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,d_71 = NULL;
  d_71 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_71, term_e_15);
        t = k_9(t);
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        {
          ATerm r_27 = NULL,u_27 = NULL;
          t = term_w_40;
          u_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_40, d_71);
          t = i_9(u_27, d_71, t);
          r_27 = t;
          t = SSL_perror(r_27);
          _fail(t);
        }
      }
  }
  x_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(y_70, t);
  w_70 = t;
  t = x_70;
  t = fclose_0_0(t);
  t = w_70;
  return(t);
}
ATerm input_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_71 = NULL,h_71 = NULL;
      t = term_k_15;
      g_71 = t;
      t = term_k_29;
      h_71 = t;
      t = term_z_40;
      t = q_9(g_71, h_71, t);
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      t = term_n_16;
    }
  t = ReadFromFile_0_0(t);
  t = e_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  i_71 = t;
  t = term_f_14;
  t = whoami_0_0(t);
  j_71 = t;
  t = term_q_13;
  l_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_41), j_71), term_a_41);
  m_71 = t;
  t = SSL_printnl(l_71, m_71);
  t = term_m_15;
  k_71 = t;
  t = SSL_exit(k_71);
  t = i_71;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm o_71 = NULL;
  o_71 = t;
  if(match_string(t, "-k"))
    {
      t = o_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_71;
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
  p_71 = t;
  t = SSL_string_to_int(p_71);
  q_71 = t;
  t = term_c_41;
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_41, q_71);
  t = t_9(r_71, q_71, t);
  t = p_71;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_10, f_10, i_10, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm t_71 = NULL;
  t_71 = t;
  if(match_string(t, "-S"))
    {
      t = t_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_71;
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  t = term_h_15;
  u_71 = t;
  t = term_e_41;
  v_71 = t;
  t = term_f_41;
  t = t_9(u_71, v_71, t);
  t = term_g_41;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_h_41;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
  w_71 = t;
  t = SSL_string_to_int(w_71);
  x_71 = t;
  t = term_h_15;
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, x_71);
  t = t_9(y_71, x_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_71);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL;
  t = term_j_41;
  z_71 = t;
  t = term_f_14;
  a_72 = t;
  t = term_k_41;
  t = t_9(z_71, a_72, t);
  t = term_l_41;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_10, v_10, y_10, t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      {
        ATerm p_41 = t;
        int q_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_10, e_11, h_11, t);
            LocalPopChoice(q_41);
          }
        else
          {
            t = p_41;
            t = Option_3_0(i_11, j_11, k_11, t);
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL;
  t = term_k_15;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_15, j_52, k_52);
  t = lookup_table_0_1(b_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(j_52, k_52, c_72, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_15, j_52, k_52);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
      t = term_f_14;
      t = e_0(t);
      i_72 = t;
      t = term_r_41;
      j_72 = t;
      t = term_s_41;
      k_72 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_41, term_s_41, i_72);
      t = r_9(j_72, k_72, i_72, t);
      _fail(t);
    }
  else
    {
      ATerm n_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_72 = ATgetFirst((ATermList) t);
          h_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_72;
      t = c_0(t);
      t = term_f_14;
      t = d_0(t);
      n_72 = t;
      t = (ATerm) ATinsert(CheckATermList(h_72), n_72);
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm p_72 = NULL;
  p_72 = t;
  if(match_string(t, "-o"))
    {
      t = p_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_72;
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  q_72 = t;
  t = term_e_29;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, q_72);
  t = t_9(r_72, q_72, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_72);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_t_41;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_11, p_11, q_11, t);
  return(t);
}
static ATerm r_9 (ATerm e_48, ATerm f_48, ATerm d_48, ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
  {
    ATerm u_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_41 = ATgetArgument(t, 0);
            ATerm y_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
        t = q_9(e_48, f_48, t);
        LocalPopChoice(w_41);
      }
    else
      {
        t = u_41;
        t = (ATerm) ATempty;
      }
  }
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_48, f_48, (ATerm) ATinsert(CheckATermList(u_72), d_48));
  t = lookup_table_0_1(e_48, t);
  x_72 = t;
  t = (ATerm) ATinsert(CheckATermList(u_72), d_48);
  v_72 = t;
  t = x_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(f_48, v_72, w_72, t);
  t = t_72;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
      t = term_f_14;
      t = n_0(t);
      i_73 = t;
      t = term_r_41;
      j_73 = t;
      t = term_s_41;
      k_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_41, term_s_41, i_73);
      t = r_9(j_73, k_73, i_73, t);
      _fail(t);
    }
  else
    {
      ATerm o_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_73 = ATgetFirst((ATermList) t);
          f_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_73;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_73 = ATgetFirst((ATermList) t);
          h_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_73;
      t = k_0(t);
      t = g_73;
      t = l_0(t);
      o_73 = t;
      t = (ATerm) ATinsert(CheckATermList(h_73), o_73);
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm q_73 = NULL;
  q_73 = t;
  if(match_string(t, "-i"))
    {
      t = q_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_73;
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL;
  r_73 = t;
  t = term_k_29;
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, r_73);
  t = t_9(s_73, r_73, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_73);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_z_41;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_11, s_11, t_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_14;
  t = whoami_0_0(t);
  t_73 = t;
  t = term_q_13;
  x_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_42), t_73);
  y_73 = t;
  t = SSL_printnl(x_73, y_73);
  t = term_m_15;
  w_73 = t;
  t = SSL_exit(w_73);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  t = term_k_15;
  z_73 = t;
  t = term_e_42;
  a_74 = t;
  t = term_f_42;
  t = q_9(z_73, a_74, t);
  return(t);
}
static ATerm l_9 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_45, e_45);
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      t = SSL_addr(d_45, e_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
  c_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_74;
      t = y_103(t);
    }
  else
    {
      ATerm h_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_74 = ATgetFirst((ATermList) t);
          e_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_74;
      t = foldr_2_0(y_103, z_103, t);
      h_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_74, h_74);
      t = z_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm d_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(d_28, g_28, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_74 = NULL,w_27 = NULL,x_27 = NULL;
  t = times_0_0(t);
  x_27 = t;
  t = SSL_explode_term(x_27);
  if(match_cons(t, sym__2))
    {
      ATerm j_42 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_27;
  t = foldr_2_0(u_11, v_11, t);
  k_74 = t;
  t = SSL_TicksToSeconds(k_74);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  v_74 = t;
  if(match_cons(t, sym__2))
    {
      w_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_74;
        if((w_74 != t))
          {
            _fail(t);
          }
        t = v_74;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATmakeAppl(sym__2, w_74, x_74);
        {
          ATerm m_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_74, x_74);
              LocalPopChoice(n_42);
            }
          else
            {
              t = m_42;
              t = SSL_gtr(w_74, x_74);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_74, x_74);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
        t = term_k_15;
        e_75 = t;
        t = term_h_15;
        f_75 = t;
        t = term_l_15;
        t = q_9(e_75, f_75, t);
        d_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_75, term_m_15);
        t = geq_0_0(t);
        t = b_75;
        t = p_108(t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = b_75;
      }
  }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,k_75 = NULL,l_75 = NULL;
  t = run_time_0_0(t);
  h_75 = t;
  t = term_f_14;
  t = whoami_0_0(t);
  i_75 = t;
  t = term_q_13;
  k_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_42), h_75), term_s_16), i_75);
  l_75 = t;
  t = SSL_printnl(k_75, l_75);
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_42), h_75), term_s_16), i_75));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_75 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_41;
  m_75 = t;
  t = SSL_exit(m_75);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL;
  x_75 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_75;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_75 = ATgetArgument(t, 0);
          {
            ATerm p_29 = NULL,t_12 = NULL;
            t = SSLgetAnnotations(x_75);
            p_29 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_75);
            t_12 = t;
            t = SSLsetAnnotations(t_12, p_29);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_75;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_75 = NULL,q_75 = NULL;
      t = term_k_15;
      p_75 = t;
      t = term_t_42;
      q_75 = t;
      t = term_u_42;
      t = q_9(p_75, q_75, t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      t = fetch_1_0(y_11, t);
    }
  t = u_112(t);
  return(t);
}
static ATerm u_9 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t)
{
  ATerm z_75 = NULL;
  t = SSL_hashtable_put(y_51, w_51, x_51);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_75);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_49, ATerm t)
{
  ATerm i_76 = NULL;
  t = table_hashtable_0_0(t);
  i_76 = t;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL;
        t = i_76;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_9(q_49, e_30, t);
        LocalPopChoice(w_42);
      }
    else
      {
        t = v_42;
        {
          ATerm t_30 = NULL;
          t = q_49;
          t = table_create_0_0(t);
          t = i_76;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_9(q_49, t_30, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm l_76 = NULL;
  t = SSL_hashtable_create(e_52, f_52);
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_76);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,q_76 = NULL,r_76 = NULL;
  m_76 = t;
  t = term_x_42;
  q_76 = t;
  t = term_y_42;
  r_76 = t;
  t = m_76;
  t = new_hashtable_0_2(q_76, r_76, t);
  n_76 = t;
  t = m_76;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(m_76, n_76, o_76, t);
  t = m_76;
  return(t);
}
static ATerm n_9 (ATerm b_52, ATerm c_52, ATerm t)
{
  ATerm s_76 = NULL;
  t = SSL_hashtable_remove(c_52, b_52);
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_76);
  return(t);
}
static ATerm o_9 (ATerm g_52, ATerm t)
{
  ATerm t_76 = NULL;
  t = SSL_hashtable_destroy(g_52);
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_76);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_76 = NULL;
  t = SSL_table_hashtable();
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_76);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
  v_76 = t;
  t = table_hashtable_0_0(t);
  w_76 = t;
  t = lookup_table_0_1(v_76, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(y_76, t);
  t = w_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_9(v_76, x_76, t);
  t = v_76;
  return(t);
}
ATerm map_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  static ATerm n_77 (ATerm t)
  {
    ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
    k_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_77;
      }
    else
      {
        ATerm z_30 = NULL,d_31 = NULL,e_31 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_77 = ATgetFirst((ATermList) t);
            m_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_77);
        z_30 = t;
        t = l_77;
        t = k_96(t);
        d_31 = t;
        t = m_77;
        t = n_77(t);
        e_31 = t;
        t = (ATerm) ATinsert(CheckATermList(e_31), d_31);
        d_13 = t;
        t = SSLsetAnnotations(d_13, z_30);
      }
    return(t);
  }
  t = n_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_77 = ATgetFirst((ATermList) t);
      r_77 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_77 = NULL,w_77 = NULL;
        static ATerm z_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_77)), not_null(w_77));
          return(t);
        }
        t = r_77;
        t = i_0(t);
        if(((v_77 != NULL) && (v_77 != t)))
          _fail(t);
        else
          v_77 = t;
        t = q_77;
        t = g_0(t);
        if(((w_77 != NULL) && (w_77 != t)))
          _fail(t);
        else
          w_77 = t;
        t = r_77;
        t = reverse_acc_2_0(g_0, z_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_13 = NULL;
  e_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_78);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_78);
  f_13 = t;
  t = SSLsetAnnotations(f_13, c_78);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_78), term_z_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL;
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_78 = NULL,b_78 = NULL;
      t = term_k_15;
      a_78 = t;
      t = term_e_42;
      b_78 = t;
      t = term_f_42;
      t = q_9(a_78, b_78, t);
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      t = fetch_1_0(c_12, t);
    }
  t = term_c_43;
  t = echo_0_0(t);
  t = term_r_41;
  y_77 = t;
  t = term_s_41;
  z_77 = t;
  t = term_d_43;
  t = q_9(y_77, z_77, t);
  t = reverse_acc_2_0(_id, d_12, t);
  t = map_1_0(e_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  static ATerm d_79 (ATerm t)
  {
    ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
    a_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_79 = ATgetFirst((ATermList) t);
        c_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_31 = NULL,j_32 = NULL,i_13 = NULL;
          t = SSLgetAnnotations(a_79);
          v_31 = t;
          t = b_79;
          t = u_96(t);
          j_32 = t;
          t = (ATerm) ATinsert(CheckATermList(c_79), j_32);
          i_13 = t;
          t = SSLsetAnnotations(i_13, v_31);
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          {
            ATerm i_33 = NULL,q_33 = NULL,z_13 = NULL;
            t = SSLgetAnnotations(a_79);
            i_33 = t;
            t = c_79;
            t = d_79(t);
            q_33 = t;
            t = (ATerm) ATinsert(CheckATermList(q_33), b_79);
            z_13 = t;
            t = SSLsetAnnotations(z_13, i_33);
          }
        }
    }
    return(t);
  }
  t = d_79(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  h_79 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_43 = ATgetFirst((ATermList) t);
                ATerm j_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_79;
          }
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATinsert(ATempty, h_79);
      }
  }
  i_79 = t;
  t = term_b_40;
  j_79 = t;
  t = SSL_printnl(j_79, i_79);
  t = h_79;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL;
  t = term_k_15;
  n_79 = t;
  t = term_e_42;
  o_79 = t;
  t = term_f_42;
  t = q_9(n_79, o_79, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_9 (ATerm z_51, ATerm a_52, ATerm t)
{
  t = SSL_hashtable_get(a_52, z_51);
  return(t);
}
static ATerm q_9 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm p_79 = NULL;
  t = lookup_table_0_1(x_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(y_49, p_79, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL;
  t = term_k_43;
  r_79 = t;
  t = term_f_14;
  s_79 = t;
  t = term_l_43;
  t = t_9(r_79, s_79, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_m_43;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
  t = term_k_43;
  v_79 = t;
  t = term_f_14;
  w_79 = t;
  t = term_l_43;
  t = t_9(v_79, w_79, t);
  t = term_n_43;
  t_79 = t;
  t = term_f_14;
  u_79 = t;
  t = term_o_43;
  t = t_9(t_79, u_79, t);
  t = term_p_43;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_12, g_12, k_12, t);
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
      t = Option_3_0(m_12, p_12, q_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,c_14 = NULL;
  c_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_79 = ATgetFirst((ATermList) t);
      z_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_80);
  x_79 = t;
  t = y_79;
  t = i_80(t);
  a_80 = t;
  t = z_79;
  t = j_80(t);
  b_80 = t;
  t = (ATerm) ATinsert(CheckATermList(b_80), a_80);
  c_14 = t;
  t = SSLsetAnnotations(c_14, x_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm h_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,o_80 = NULL,p_80 = NULL,g_14 = NULL;
  h_80 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_43;
        t = s_114(t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
      }
  }
  t = h_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_80 = ATgetFirst((ATermList) t);
      m_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_80);
  k_80 = t;
  t = term_e_42;
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_42, l_80);
  t = t_9(p_80, l_80, t);
  t = m_80;
  {
    static ATerm z_80 (ATerm t)
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_44 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_80 = NULL;
              s_80 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_80;
              LocalPopChoice(b_44);
            }
          else
            {
              t = a_44;
              t = s_114(t);
              t = Cons_2_0(_id, z_80, t);
            }
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm v_80 = NULL,w_80 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_80 = ATgetFirst((ATermList) t);
                w_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_80), (ATerm) ATmakeAppl(sym_Undefined_1, v_80));
          }
        }
      return(t);
    }
    t = z_80(t);
  }
  o_80 = t;
  t = (ATerm) ATinsert(CheckATermList(o_80), (ATerm) ATmakeAppl(sym_Program_1, l_80));
  g_14 = t;
  t = SSLsetAnnotations(g_14, k_80);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm m_81 = NULL;
  m_81 = t;
  if(match_string(t, "--help"))
    {
      t = m_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_81;
        }
    }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  t = term_t_42;
  n_81 = t;
  t = term_f_14;
  o_81 = t;
  t = term_c_44;
  t = t_9(n_81, o_81, t);
  t = term_d_44;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
  g_81 = t;
  t = term_r_41;
  h_81 = t;
  t = term_f_44;
  t = lookup_table_0_1(h_81, t);
  l_81 = t;
  t = term_s_41;
  i_81 = t;
  t = (ATerm) ATempty;
  j_81 = t;
  t = l_81;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(i_81, j_81, k_81, t);
  t = g_81;
  {
    static ATerm r_12 (ATerm t)
    {
      ATerm g_44 = t;
      int h_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_114(t);
          LocalPopChoice(h_44);
        }
      else
        {
          t = g_44;
          {
            ATerm i_44 = t;
            int j_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_12, v_12, w_12, t);
                LocalPopChoice(j_44);
              }
            else
              {
                t = i_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_12, t);
  }
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_81 = NULL;
        z_81 = t;
        {
          ATerm m_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_33 = NULL;
              t = z_81;
              {
                ATerm o_44 = t;
                int p_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_33 = NULL,z_33 = NULL;
                    t = term_k_15;
                    y_33 = t;
                    t = term_t_42;
                    z_33 = t;
                    t = term_u_42;
                    t = q_9(y_33, z_33, t);
                    LocalPopChoice(p_44);
                  }
                else
                  {
                    t = o_44;
                    t = fetch_1_0(x_12, t);
                  }
              }
              t = z_81;
              t = default_system_usage_0_0(t);
              t = term_e_41;
              x_33 = t;
              t = SSL_exit(x_33);
              LocalPopChoice(n_44);
            }
          else
            {
              t = m_44;
              {
                ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
                t = term_k_15;
                e_34 = t;
                t = term_k_43;
                f_34 = t;
                t = term_r_44;
                t = q_9(e_34, f_34, t);
                t = z_81;
                t = default_system_about_0_0(t);
                t = term_e_41;
                d_34 = t;
                t = SSL_exit(d_34);
              }
            }
        }
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        {
          ATerm s_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
              static ATerm z_12 (ATerm t)
              {
                ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,p_14 = NULL;
                f_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_82);
                d_82 = t;
                t = e_82;
                if(((e_81 != NULL) && (e_81 != t)))
                  _fail(t);
                else
                  e_81 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_82);
                p_14 = t;
                t = SSLsetAnnotations(p_14, d_82);
                return(t);
              }
              t = fetch_1_0(z_12, t);
              t = term_q_13;
              b_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_81)), term_x_44);
              c_82 = t;
              t = SSL_printnl(b_82, c_82);
              t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_81)), term_x_44));
              t = default_system_usage_0_0(t);
              t = term_m_15;
              a_82 = t;
              t = SSL_exit(a_82);
              LocalPopChoice(w_44);
            }
          else
            {
              t = s_44;
            }
        }
      }
  }
  f_81 = t;
  t = term_r_41;
  t = table_destroy_0_0(t);
  t = f_81;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  t = parse_options_1_0(w_112, t);
  k_82 = t;
  t = term_n_32;
  t = table_create_0_0(t);
  t = term_n_32;
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_32, term_r_32, k_82);
  t = lookup_table_0_1(l_82, t);
  o_82 = t;
  t = term_r_32;
  m_82 = t;
  t = o_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(m_82, k_82, n_82, t);
  t = k_82;
  t = y_112(t);
  {
    ATerm y_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_112, t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = y_44;
        {
          ATerm b_45 = t;
          int c_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_45);
            }
          else
            {
              t = b_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      {
        ATerm h_45 = t;
        int i_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_45);
          }
        else
          {
            t = h_45;
            {
              ATerm l_45 = t;
              int m_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_13, g_13, h_13, t);
                  LocalPopChoice(m_45);
                }
              else
                {
                  t = l_45;
                  {
                    ATerm o_45 = t;
                    int p_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(p_45);
                      }
                    else
                      {
                        t = o_45;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = input_1_0(j_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  t = term_f_40;
  q_82 = t;
  t = term_f_14;
  r_82 = t;
  t = term_q_45;
  t = t_9(q_82, r_82, t);
  t = term_s_45;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = output_1_0(k_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = ppgenerate_0_0(t);
  j_34 = t;
  t = term_u_45;
  h_34 = t;
  t = (ATerm) ATinsert(ATempty, j_34);
  i_34 = t;
  t = SSL_mkterm(h_34, i_34);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_13, default_usage_0_0, _id, c_13, t);
  return(t);
}

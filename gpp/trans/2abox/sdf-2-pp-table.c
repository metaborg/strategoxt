#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_KW_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_Arg_1;
Symbol sym_FBOX_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_char_class_1;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_alt_2;
Symbol sym_cf_1;
Symbol sym_lit_1;
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
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_char_class_1;
Symbol sym_alt_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_cf_1;
Symbol sym_prod_fun_4;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_context_free_syntax_1;
Symbol sym_appl_2;
Symbol sym_fun_1;
Symbol sym_uqlit_1;
Symbol sym_qlit_1;
Symbol sym_bracket_symbol_1;
static void init_module_constructors (void)
{
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
  ATprotectSymbol(sym_fun_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
}
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_r_46;
ATerm term_o_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_v_45;
ATerm term_p_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_q_44;
ATerm term_o_44;
ATerm term_h_44;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_m_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_j_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_p_38;
ATerm term_n_37;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_y_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_h_33;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_u_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_v_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_l_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_u_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_z_16, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_b_18, term_c_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_i_18, term_k_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_a_15, term_q_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_v_18, term_a_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_q_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_v_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_e_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_r_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_z_20, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_o_21, term_p_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_t_21, term_u_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_22, term_h_22, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_m_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_r_22, term_s_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_22, term_x_22, term_y_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_23, term_d_23, term_e_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_23, term_m_23, term_n_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_23, term_y_23, term_d_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_24, term_j_24, term_k_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_24, term_y_24, term_b_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_p_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_x_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_j_28);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_u_30);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_c_34);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Arg_1, term_z_16);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_SOpt_2, term_e_39, term_f_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_lit_1, term_y_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_lit_1, term_g_17);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_e_26);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_v_41);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_f_26);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_u_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_b_43, term_l_15);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_t_43);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_o_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_l_43);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_l_15);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym__2, term_l_45, term_l_15);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_l_15);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, (ATerm) ATempty);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_i_45);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym__2, term_v_41, term_l_15);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm o_1 (ATerm y_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm w_112 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm t);
static ATerm k_8 (ATerm n_104 (ATerm), ATerm e_30, ATerm q_254, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm z_104 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm p_112 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm f_62, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm n_8 (ATerm i_44, ATerm j_44, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t);
static ATerm o_8 (ATerm s_24, ATerm t_24, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm c_98 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_122 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_8 (ATerm q_29, ATerm r_29, ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm q_8 (ATerm t_60, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_119 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_119 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm s_8 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm t);
static ATerm t_8 (ATerm j_119 (ATerm), ATerm b_57, ATerm a_57, ATerm t);
static ATerm u_8 (ATerm c_62, ATerm d_62, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm z_26 (ATerm x_25, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm q_125 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
static ATerm v_8 (ATerm c_115 (ATerm), ATerm q_45, ATerm o_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm w_8 (ATerm z_55, ATerm a_56, ATerm t);
ATerm end_scope_1_0 (ATerm z_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_114 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_121 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm g_43 (ATerm y_36, ATerm z_36, ATerm a_37, ATerm e_37, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm y_8 (ATerm t_35, ATerm u_35, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm symbol2abox_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm _2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm p_62 (ATerm f_61, ATerm g_61, ATerm h_61, ATerm t);
ATerm number_node_1_0 (ATerm u_96 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm q_96 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm q_104 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm unquote_chars_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t);
static ATerm c_9 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t);
static ATerm d_9 (ATerm p_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t);
ATerm foldr_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
ATerm collect_om_2_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm e_71 (ATerm a_69, ATerm b_69, ATerm t);
static ATerm f_71 (ATerm h_69, ATerm i_69, ATerm t);
static ATerm g_71 (ATerm o_69, ATerm t);
static ATerm u_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm e_9 (ATerm j_62, ATerm k_62, ATerm t);
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm h_9 (ATerm n_99 (ATerm), ATerm d_223, ATerm k_28, ATerm t);
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm output_1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm o_72 (ATerm i_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm g_28, ATerm t);
static ATerm j_9 (ATerm x_42, ATerm y_42, ATerm t);
static ATerm k_9 (ATerm l_62, ATerm m_62, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_73 (ATerm y_72, ATerm t);
static ATerm a_74 (ATerm c_73, ATerm d_73, ATerm e_73, ATerm t);
static ATerm b_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm t);
static ATerm l_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_9 (ATerm z_60, ATerm a_61, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_9 (ATerm u_55, ATerm v_55, ATerm t_55, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t);
ATerm foldr_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_119 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm need_help_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm v_9 (ATerm m_60, ATerm n_60, ATerm o_60, ATerm t);
ATerm lookup_table_0_1 (ATerm g_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_60, ATerm v_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_9 (ATerm r_60, ATerm s_60, ATerm t);
static ATerm p_9 (ATerm w_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_9 (ATerm p_60, ATerm q_60, ATerm t);
static ATerm r_9 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_125 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm parse_options_1_0 (ATerm e_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm o_1 (ATerm y_0, ATerm t)
{
  ATerm a_1 = NULL;
  t = SSL_explode_term(y_0);
  if(match_cons(t, sym__2))
    {
      ATerm b_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t);
            static ATerm a_0 (ATerm t)
            {
              t = i_1;
              return(t);
            }
            t = g_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = o_1(l_1, t);
          }
      }
    }
  else
    {
      t = o_1(l_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = topdown_1_0(q_99, t);
    return(t);
  }
  t = q_99(t);
  t = SRTS_all(c_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    ATerm b_2 = NULL,h_2 = NULL,i_2 = NULL;
    i_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_2 = ATgetFirst((ATermList) t);
        h_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_0 = NULL,v_0 = NULL,b_0 = NULL;
          t = SSLgetAnnotations(i_2);
          k_0 = t;
          t = h_2;
          t = j_2(t);
          v_0 = t;
          t = (ATerm) ATinsert(CheckATermList(v_0), b_2);
          b_0 = t;
          t = SSLsetAnnotations(b_0, k_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        t = v_104(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_2 = NULL,x_2 = NULL,y_2 = NULL;
  q_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_2;
    }
  else
    {
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        t = not_null(y_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_2 = ATgetFirst((ATermList) t);
          if(((y_2 != NULL) && (y_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_2;
      t = at_end_1_0(e_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL;
  a_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_4 = ATgetFirst((ATermList) t);
          d_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,q_1 = NULL,z_1 = NULL,i_0 = NULL;
            t = SSLgetAnnotations(a_4);
            j_1 = t;
            t = b_4;
            t = w_112(t);
            q_1 = t;
            t = d_4;
            t = filter_1_0(w_112, t);
            z_1 = t;
            t = (ATerm) ATinsert(CheckATermList(z_1), q_1);
            i_0 = t;
            t = SSLsetAnnotations(i_0, j_1);
            LocalPopChoice(v_14);
          }
        else
          {
            t = t_14;
            t = d_4;
            t = filter_1_0(w_112, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  h_4 = t;
  t = l_99(t);
  i_4 = t;
  t = term_x_14;
  j_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), i_4);
  k_4 = t;
  t = SSL_printnl(j_4, k_4);
  t = h_4;
  return(t);
}
static ATerm k_8 (ATerm n_104 (ATerm), ATerm e_30, ATerm q_254, ATerm t)
{
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    ATerm m_4 = NULL;
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_30, m_4);
    t = n_104(t);
    t = m_4;
    return(t);
  }
  t = q_254;
  t = SRTS_one(f_0, t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      if((s_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      if((v_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      if((y_4 != ATgetArgument(t, 1)))
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
  ATerm o_4 = NULL;
  o_4 = t;
  if(match_int(t, 10))
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
          r_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
          t = k_8(n_0, o_4, r_4, t);
          t = o_4;
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          t = o_4;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
              t = k_8(s_0, o_4, u_4, t);
              t = o_4;
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = o_4;
            }
        }
      else
        {
          ATerm x_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
          t = k_8(x_0, o_4, x_4, t);
          t = o_4;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t);
  static ATerm c_6 (ATerm t)
  {
    ATerm e_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,l_2 = NULL,p_2 = NULL,s_1 = NULL;
        y_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_5 = ATgetFirst((ATermList) t);
            a_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_5);
        l_2 = t;
        t = a_6;
        t = c_6(t);
        p_2 = t;
        t = (ATerm) ATinsert(CheckATermList(p_2), z_5);
        s_1 = t;
        t = SSLsetAnnotations(s_1, l_2);
        LocalPopChoice(h_15);
      }
    else
      {
        t = e_15;
        t = d_105(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      w_2 = t;
      t = SSL_explode_string(w_2);
      t = rtrim_1_0(w_0, t);
      v_2 = t;
      t = SSL_implode_string(v_2);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm v_6 = NULL,f_3 = NULL;
        v_6 = t;
        t = (ATerm) ATinsert(CheckATermList(v_6), term_l_15);
        {
          static ATerm z_0 (ATerm t);
          static ATerm z_0 (ATerm t)
          {
            ATerm g_3 = NULL,j_3 = NULL;
            g_3 = t;
            {
              ATerm m_15 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_15;
                }
            }
            {
              ATerm n_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm l_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,u_1 = NULL;
                  r_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_3 = ATgetFirst((ATermList) t);
                      o_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_3);
                  l_3 = t;
                  t = n_3;
                  t = w_0(t);
                  q_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_3), q_3);
                  u_1 = t;
                  t = SSLsetAnnotations(u_1, l_3);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_15;
                }
            }
            t = g_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_3 = ATgetFirst((ATermList) t);
                {
                  ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, j_3);
            return(t);
          }
          t = at_suffix_rev_1_0(z_0, t);
        }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_16 = ATgetFirst((ATermList) t);
            f_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_3;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  static ATerm t_7 (ATerm t);
  static ATerm t_7 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,c_4 = NULL,n_4 = NULL,w_1 = NULL;
          p_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_7 = ATgetFirst((ATermList) t);
              r_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_7);
          c_4 = t;
          t = r_7;
          t = t_7(t);
          n_4 = t;
          t = (ATerm) ATinsert(CheckATermList(n_4), q_7);
          w_1 = t;
          t = SSLsetAnnotations(w_1, c_4);
        }
      }
    return(t);
  }
  t = t_7(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm h_8 = NULL;
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,d_10 = NULL;
    z_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_9;
      }
    else
      {
        ATerm h_5 = NULL,m_5 = NULL,y_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        h_5 = t;
        t = a_10;
        {
          ATerm i_16 = t;
          if((PushChoice() == 0))
            {
              t = p_112(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_16;
            }
        }
        m_5 = t;
        t = (ATerm) ATinsert(CheckATermList(d_10), m_5);
        y_1 = t;
        t = SSLsetAnnotations(y_1, h_5);
      }
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    return(t);
  }
  t = at_suffix_1_0(b_1, t);
  t = not_null(h_8);
  return(t);
}
ATerm ltrim_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,u_5 = NULL;
      u_5 = t;
      t = SSL_explode_string(u_5);
      t = ltrim_1_0(u_0, t);
      s_5 = t;
      t = SSL_implode_string(s_5);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = drop_while_1_0(u_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 = NULL,e_6 = NULL;
      e_6 = t;
      t = SSL_explode_string(e_6);
      t = trim_1_0(t_0, t);
      b_6 = t;
      t = SSL_implode_string(b_6);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = ltrim_1_0(t_0, t);
      t = rtrim_1_0(t_0, t);
    }
  return(t);
}
static ATerm l_8 (ATerm f_62, ATerm t)
{
  t = SSL_fgetc(f_62);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  h_10 = t;
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      ATerm n_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_10 = NULL,q_6 = NULL,r_6 = NULL,t_6 = NULL;
          r_10 = t;
          t = h_10;
          if(match_cons(t, sym_Stream_1))
            {
              t_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_8(t_6, t);
          q_6 = t;
          t = term_l_15;
          t = s_10(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
          LocalPopChoice(q_16);
        }
      else
        {
          t = n_16;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = s_10(t);
  }
  i_10 = t;
  t = SSL_implode_string(i_10);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,b_11 = NULL,c_11 = NULL;
  x_10 = t;
  t = term_r_16;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_r_16);
  t = k_9(x_10, c_11, t);
  y_10 = t;
  t = read_text_from_stream_0_0(t);
  b_11 = t;
  t = y_10;
  t = fclose_0_0(t);
  t = b_11;
  return(t);
}
static ATerm n_8 (ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_44, j_44);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = SSL_subtr(i_44, j_44);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  t = term_u_16;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,k_11 = NULL;
        t = term_x_16;
        h_11 = t;
        t = term_u_16;
        k_11 = t;
        t = term_y_16;
        t = r_9(h_11, k_11, t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = term_z_16;
      }
  }
  e_11 = t;
  t = term_z_16;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_16);
  t = n_8(e_11, g_11, t);
  f_11 = t;
  t = SSL_int_to_string(f_11);
  d_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_11), term_u_16);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm q_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_17);
      q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, (ATerm) ATinsert(ATempty, term_d_17));
      t = u_8(o_11, q_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          t_11 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(t_11, u_11, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL;
  s_11 = t;
  t = xtc_new_file_0_0(t);
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
  t = h_9(c_1, r_11, s_11, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_11);
  t = xtc_transform_file_2_0(e_121, f_121, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_8 (ATerm s_24, ATerm t_24, ATerm t)
{
  t = SSL_execvp(s_24, t_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,s_13 = NULL,t_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_13 = ATgetArgument(t, 0);
      {
        ATerm b_7 = NULL,f_7 = NULL;
        t = SSL_int_to_string(p_13);
        b_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), b_7), term_f_17);
        f_7 = t;
        t = SSL_concat_strings(f_7);
      }
    }
  else
    {
      ATerm y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_13 = ATgetArgument(t, 0);
          s_13 = ATgetArgument(t, 1);
          t_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_13);
      y_7 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_13), term_i_17), y_7), term_h_17), p_13);
      z_7 = t;
      t = SSL_concat_strings(z_7);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  {
    ATerm j_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_1 (ATerm t);
        static ATerm d_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_17 = ATgetArgument(t, 0);
              if((a_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), term_l_24), term_f_24), term_t_23), term_f_23), term_b_23), term_u_22), term_o_22), term_k_22), term_c_22), term_x_21), term_r_21), term_m_21), term_i_21), term_b_21), term_x_20), term_k_20), term_g_20), term_a_20), term_s_19), term_o_19), term_g_19), term_b_19), term_s_18), term_m_18), term_e_18), term_w_17), term_r_17);
        t = fetch_elem_1_0(d_1, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_14 = NULL,u_14 = NULL;
  h_14 = t;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            u_14 = ATgetArgument(t, 1);
            {
              ATerm m_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_25);
        {
          ATerm o_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_8 = NULL,r_8 = NULL,x_8 = NULL;
              t = u_14;
              {
                ATerm s_25 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_25;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              g_8 = t;
              t = term_x_14;
              r_8 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_8), term_v_25);
              x_8 = t;
              t = SSL_printnl(r_8, x_8);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, g_8), term_v_25));
              LocalPopChoice(q_25);
            }
          else
            {
              t = o_25;
              t = h_14;
            }
        }
      }
    else
      {
        t = i_25;
        t = h_14;
      }
  }
  t = h_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  g_15 = t;
  t = fork_0_0(t);
  f_15 = t;
  {
    ATerm w_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_15;
        t = c_98(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = w_25;
        t = SSL_waitpid(f_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_25 = ATgetArgument(t, 0);
            if(((ATgetType(z_25) != AT_INT) || (ATgetInt((ATermInt) z_25) != 0)))
              _fail(t);
            {
              ATerm a_26 = ATgetArgument(t, 1);
            }
            {
              ATerm b_26 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_15;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,p_15 = NULL;
  p_15 = t;
  t = f_122(t);
  t = xtc_find_0_0(t);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_15, p_15);
  {
    static ATerm e_1 (ATerm t);
    static ATerm e_1 (ATerm t)
    {
      ATerm q_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_15, p_15);
      t = o_8(i_15, p_15, t);
      t = term_c_26;
      q_15 = t;
      t = SSL_exit(q_15);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
  }
  t = p_15;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_15 = NULL,x_15 = NULL;
      t = s_15;
      t = xtc_new_file_0_0(t);
      u_15 = t;
      t = r_0(t);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_15, (ATerm) ATinsert(ATinsert(ATempty, u_15), term_e_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_15);
    }
  else
    {
      ATerm z_15 = NULL,a_16 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_15;
      t = xtc_new_file_0_0(t);
      z_15 = t;
      t = r_0(t);
      a_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_15), term_e_26), t_15), term_f_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
    }
  return(t);
}
static ATerm m_8 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  t = r_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_29;
    }
  else
    {
      ATerm e_10 = NULL,m_10 = NULL,c_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_17 = ATgetFirst((ATermList) t);
          b_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_29);
      e_10 = t;
      t = b_17;
      {
        static ATerm w_10 (ATerm t);
        static ATerm w_10 (ATerm t)
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL;
              o_10 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_10;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm t_10 = NULL;
                t = Cons_2_0(_id, w_10, t);
                t_10 = t;
                t = (ATerm) ATinsert(CheckATermList(t_10), q_29);
              }
            }
          return(t);
        }
        t = w_10(t);
      }
      m_10 = t;
      t = (ATerm) ATinsert(CheckATermList(m_10), a_17);
      c_3 = t;
      t = SSLsetAnnotations(c_3, e_10);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm y_17 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
      t = m_8(k_17, l_17, t);
      y_17 = t;
      t = (ATerm) ATinsert(CheckATermList(y_17), k_17);
    }
  return(t);
}
static ATerm q_8 (ATerm t_60, ATerm t)
{
  t = SSL_hashtable_keys(t_60);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm f_18 = NULL,h_18 = NULL;
    f_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), f_18);
    t = r_9(not_null(z_17), f_18, t);
    h_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_18, h_18);
    return(t);
  }
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = lookup_table_0_1(z_17, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(a_18, t);
  t = map_1_0(f_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL,o_18 = NULL,r_18 = NULL;
        t = term_x_16;
        o_18 = t;
        t = term_u_16;
        r_18 = t;
        t = term_y_16;
        t = r_9(o_18, r_18, t);
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_18, term_m_23);
        t = geq_0_0(t);
        t = l_18;
        t = g_119(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = l_18;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
        t = term_x_16;
        y_18 = t;
        t = term_u_16;
        z_18 = t;
        t = term_y_16;
        t = r_9(y_18, z_18, t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_18, term_i_20);
        t = geq_0_0(t);
        t = u_18;
        t = f_119(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = u_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  {
    ATerm u_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL,k_19 = NULL,m_19 = NULL;
        t = term_x_16;
        k_19 = t;
        t = term_u_16;
        m_19 = t;
        t = term_y_16;
        t = r_9(k_19, m_19, t);
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_19, term_i_18);
        t = geq_0_0(t);
        t = c_19;
        t = h_119(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = u_26;
        t = c_19;
      }
  }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      if((l_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,d_20 = NULL;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
  {
    ATerm x_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
        t = r_9(r_56, s_56, t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATempty;
      }
  }
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, t_56);
  t = d_9(h_1, y_19, t_56, t);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_56, s_56, x_19);
  t = lookup_table_0_1(r_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(s_56, x_19, d_20, t);
  t = w_19;
  return(t);
}
static ATerm t_8 (ATerm j_119 (ATerm), ATerm b_57, ATerm a_57, ATerm t)
{
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm o_20 = NULL,p_20 = NULL;
    if(match_cons(t, sym__2))
      {
        o_20 = ATgetArgument(t, 0);
        p_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_57, o_20, p_20);
    t = j_119(t);
    return(t);
  }
  t = a_57;
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm u_8 (ATerm c_62, ATerm d_62, ATerm t)
{
  t = SSL_access(c_62, d_62);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL,s_20 = NULL;
      q_20 = t;
      t = (ATerm) ATinsert(ATempty, term_p_27);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, (ATerm) ATinsert(ATempty, term_p_27));
      t = u_8(q_20, s_20, t);
      LocalPopChoice(i_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_27;
      {
        ATerm q_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_27 = t;
            if((PushChoice() == 0))
              {
                ATerm t_20 = NULL,u_20 = NULL;
                t_20 = t;
                t = (ATerm) ATinsert(ATempty, term_d_17);
                u_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_20, (ATerm) ATinsert(ATempty, term_d_17));
                t = u_8(t_20, u_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_27;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(t_27);
          }
        else
          {
            t = q_27;
            t = debug_1_0(n_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_23 = NULL,z_23 = NULL,a_24 = NULL;
  x_23 = t;
  t = term_x_14;
  z_23 = t;
  t = (ATerm) ATinsert(ATempty, term_z_27);
  a_24 = t;
  t = SSL_printnl(z_23, a_24);
  t = x_23;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_24 = NULL,g_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym__3))
    {
      b_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      h_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_8(b_24, g_24, h_24, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  t = term_x_14;
  n_24 = t;
  t = (ATerm) ATinsert(ATempty, term_c_28);
  o_24 = t;
  t = SSL_printnl(n_24, o_24);
  t = m_24;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,u_24 = NULL;
  p_24 = t;
  t = term_x_14;
  q_24 = t;
  t = (ATerm) ATinsert(ATempty, term_z_27);
  u_24 = t;
  t = SSL_printnl(q_24, u_24);
  t = p_24;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_20 = NULL,v_21 = NULL,w_21 = NULL,b_22 = NULL,e_22 = NULL,g_22 = NULL,v_22 = NULL,g_23 = NULL,i_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  v_20 = t;
  t = if_verbose5_1_0(p_1, t);
  {
    ATerm d_28 = t;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = term_h_28;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_20);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Imported_1, v_20));
        t = r_9(v_23, w_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_28;
      }
  }
  w_21 = t;
  t = term_h_28;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_j_28, (ATerm) ATinsert(ATempty, v_20));
  t = lookup_table_0_1(o_23, t);
  s_23 = t;
  t = term_j_28;
  p_23 = t;
  t = (ATerm) ATinsert(ATempty, v_20);
  q_23 = t;
  t = s_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(p_23, q_23, r_23, t);
  t = w_21;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(x_1, t);
  v_21 = t;
  t = term_h_28;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, v_21);
  t = t_8(a_2, i_23, v_21, t);
  t = if_verbose6_1_0(c_2, t);
  t = term_h_28;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_28, (ATerm)ATmakeAppl(sym_Imported_1, v_20), (ATerm) ATempty);
  t = lookup_table_0_1(b_22, t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_20);
  e_22 = t;
  t = (ATerm) ATempty;
  g_22 = t;
  t = g_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(e_22, g_22, v_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_28, (ATerm)ATmakeAppl(sym_Imported_1, v_20), (ATerm) ATempty);
  t = if_verbose4_1_0(d_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  static ATerm v_24 (ATerm t);
  static ATerm v_24 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_102(t);
        t = v_24(t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = j_102(t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,z_24 = NULL;
      t = term_x_16;
      w_24 = t;
      t = term_p_28;
      z_24 = t;
      t = term_r_28;
      t = r_9(w_24, z_24, t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_25 = NULL;
            t = term_u_28;
            a_25 = t;
            t = SSL_getenv(a_25);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_25 = NULL,n_25 = NULL;
  t = term_h_28;
  l_25 = t;
  t = term_x_28;
  n_25 = t;
  t = term_y_28;
  t = r_9(l_25, n_25, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_28;
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_25 = NULL;
  t = if_verbose5_1_0(e_2, t);
  c_25 = t;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,g_25 = NULL;
        t = term_h_28;
        d_25 = t;
        t = term_j_28;
        g_25 = t;
        t = term_e_29;
        t = r_9(d_25, g_25, t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm h_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_25 = t;
          t = repeat_2_0(g_2, _id, t);
          t = h_25;
        }
      }
  }
  t = c_25;
  t = if_verbose5_1_0(k_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_f_29;
  return(t);
}
static ATerm z_26 (ATerm x_25, ATerm t)
{
  ATerm d_26 = NULL,g_26 = NULL,h_26 = NULL;
  t = term_h_28;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_25);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Tool_1, x_25));
  t = r_9(g_26, h_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_29 = ATgetFirst((ATermList) t);
      if(match_cons(g_29, sym__2))
        {
          ATerm k_29 = ATgetArgument(g_29, 0);
          d_26 = ATgetArgument(g_29, 1);
        }
      else
        _fail(t);
      {
        ATerm h_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_f_29;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_h_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = if_verbose5_1_0(n_2, t);
      t = xtc_load_0_0(t);
      k_26 = t;
      if(match_cons(t, sym__2))
        {
          i_26 = ATgetArgument(t, 0);
          j_26 = ATgetArgument(t, 1);
          {
            ATerm o_29 = t;
            int p_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
                t = term_h_28;
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_26);
                r_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATmakeAppl(sym_Tool_1, i_26));
                t = r_9(q_26, r_26, t);
                {
                  static ATerm r_2 (ATerm t);
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((j_26 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(p_26);
                LocalPopChoice(p_29);
              }
            else
              {
                t = o_29;
                t = z_26(k_26, t);
              }
          }
        }
      else
        {
          t = z_26(k_26, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm y_26 = NULL,m_11 = NULL,v_11 = NULL;
        y_26 = t;
        t = term_x_14;
        m_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_29), y_26), term_s_29);
        v_11 = t;
        t = SSL_printnl(m_11, v_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_29), y_26), term_s_29);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm q_125 (ATerm), ATerm t)
{
  ATerm x_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      l_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          j_27 = ATgetArgument(t, 0);
          {
            ATerm z_11 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(l_27);
            z_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
            i_3 = t;
            t = SSLsetAnnotations(i_3, z_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_27;
        }
      LocalPopChoice(a_30);
      {
        static ATerm d_3 (ATerm t);
        static ATerm d_3 (ATerm t)
        {
          ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
          t = term_l_15;
          t = pass_verbose_0_0(t);
          m_27 = t;
          t = term_l_15;
          t = q_125(t);
          t = map_1_0(xtc_find_0_0, t);
          o_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_30, o_27);
          t = add_arg_flags_0_0(t);
          n_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(a_3, d_3, t);
      }
    }
  else
    {
      t = x_29;
      {
        static ATerm h_3 (ATerm t);
        static ATerm h_3 (ATerm t)
        {
          ATerm x_27 = NULL,y_27 = NULL,i_28 = NULL;
          t = term_l_15;
          t = pass_verbose_0_0(t);
          x_27 = t;
          t = term_l_15;
          t = q_125(t);
          t = map_1_0(xtc_find_0_0, t);
          i_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_30, i_28);
          t = add_arg_flags_0_0(t);
          y_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(e_3, h_3, t);
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_d_30;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_d_30;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_30), term_g_30);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29 = NULL,j_29 = NULL;
      j_29 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_29 = ATgetArgument(t, 0);
          {
            ATerm j_12 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(j_29);
            j_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_29);
            m_3 = t;
            t = SSLsetAnnotations(m_3, j_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_29;
        }
      LocalPopChoice(l_30);
      t = xtc_transform_file_2_0(k_3, pass_verbose_0_0, t);
    }
  else
    {
      t = j_30;
      t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
    }
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,z_29 = NULL;
        z_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_29 = ATgetArgument(t, 0);
            {
              ATerm v_12 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(z_29);
              v_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_29);
              p_3 = t;
              t = SSLsetAnnotations(p_3, v_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_29;
          }
        LocalPopChoice(o_30);
        t = xtc_transform_file_2_0(t_3, pass_verbose_0_0, t);
      }
    else
      {
        t = n_30;
        t = xtc_transform_term_2_0(v_3, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(w_3, t);
  {
    ATerm p_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_30 = NULL,m_30 = NULL;
        m_30 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_30 = ATgetArgument(t, 0);
            {
              ATerm g_13 = NULL,u_3 = NULL;
              t = SSLgetAnnotations(m_30);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_30);
              u_3 = t;
              t = SSLsetAnnotations(u_3, g_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_30;
          }
        LocalPopChoice(r_30);
        t = xtc_transform_file_2_0(x_3, pass_verbose_0_0, t);
      }
    else
      {
        t = p_30;
        t = xtc_transform_term_2_0(y_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm v_8 (ATerm c_115 (ATerm), ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  y_30 = t;
  t = c_115(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_30, q_45, o_45);
  t = s_9(v_30, q_45, o_45, t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL;
        t = term_u_30;
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, term_u_30);
        t = r_9(v_30, i_31, t);
        {
          ATerm z_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_30;
            }
        }
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_30, term_u_30, (ATerm) ATinsert(CheckATermList(x_30), (ATerm) ATinsert(CheckATermList(w_30), q_45)));
  t = lookup_table_0_1(v_30, t);
  d_31 = t;
  t = term_u_30;
  a_31 = t;
  t = (ATerm) ATinsert(CheckATermList(x_30), (ATerm) ATinsert(CheckATermList(w_30), q_45));
  b_31 = t;
  t = d_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(a_31, b_31, c_31, t);
  t = y_30;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_31 = NULL,r_13 = NULL;
      w_31 = t;
      t = term_h_31;
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_31, term_h_31);
      t = j_9(w_31, r_13, t);
      p_31 = t;
      t = SSL_mkstemp(p_31);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm x_31 = NULL;
        t = term_j_31;
        x_31 = t;
        t = SSL_perror(x_31);
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
static ATerm z_3 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = P__tmpdir_0_0(t);
  e_32 = t;
  t = term_l_31;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, term_l_31);
  t = j_9(e_32, f_32, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_15;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_32, term_l_15);
  t = v_8(z_3, a_32, b_32, t);
  t = SSL_close(z_31);
  t = a_32;
  return(t);
}
static ATerm w_8 (ATerm z_55, ATerm a_56, ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  h_32 = t;
  {
    ATerm m_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
        t = r_9(z_55, a_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_31 = ATgetFirst((ATermList) t);
            g_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_31);
        {
          ATerm i_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, z_55, a_56, g_32);
          t = lookup_table_0_1(z_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_9(a_56, g_32, i_32, t);
          t = (ATerm) ATmakeAppl(sym__3, z_55, a_56, g_32);
        }
      }
    else
      {
        t = m_31;
        {
          ATerm k_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
          t = lookup_table_0_1(z_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_9(a_56, k_32, t);
          t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
        }
      }
  }
  t = h_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  r_32 = t;
  t = z_114(t);
  q_32 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_32 = NULL;
        t = term_u_30;
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_u_30);
        t = r_9(q_32, v_32, t);
        {
          ATerm t_31 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_31;
            }
        }
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_32 = ATgetFirst((ATermList) t);
      o_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_32, term_u_30, o_32);
  t = lookup_table_0_1(q_32, t);
  u_32 = t;
  t = term_u_30;
  s_32 = t;
  t = u_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(s_32, o_32, t_32, t);
  t = p_32;
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      ATerm w_32 = NULL;
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, w_32);
      t = w_8(q_32, w_32, t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  t = r_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t)
{
  ATerm v_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_118(t);
      t = s_118(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = v_31;
      t = s_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  z_32 = t;
  t = y_114(t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, term_u_30);
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_32 = ATgetArgument(t, 0);
            ATerm l_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_30;
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_32, term_u_30);
        t = r_9(y_32, j_33, t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = (ATerm) ATempty;
      }
  }
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_32, term_u_30, (ATerm) ATinsert(CheckATermList(a_33), (ATerm) ATempty));
  t = lookup_table_0_1(y_32, t);
  e_33 = t;
  t = term_u_30;
  b_33 = t;
  t = (ATerm) ATinsert(CheckATermList(a_33), (ATerm) ATempty);
  c_33 = t;
  t = e_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(b_33, c_33, d_33, t);
  t = z_32;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_34);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = b_34;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_121 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  static ATerm l_4 (ATerm t);
  static ATerm l_4 (ATerm t)
  {
    ATerm p_33 = NULL;
    p_33 = t;
    {
      ATerm x_32 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = NULL,u_33 = NULL;
          t = term_k_31;
          r_33 = t;
          t = term_u_30;
          u_33 = t;
          t = term_h_33;
          t = r_9(r_33, u_33, t);
          LocalPopChoice(f_33);
        }
      else
        {
          t = x_32;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_33 != NULL) && (o_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_33 = ATgetFirst((ATermList) t);
        {
          ATerm i_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_33;
    t = map_1_0(p_4, t);
    t = p_33;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(g_4, t);
  t = restore_always_2_0(r_121, l_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_34 = NULL,q_34 = NULL,r_34 = NULL;
  r_34 = t;
  t = xtc_new_file_0_0(t);
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_34, r_34);
  t = h_9(w_4, q_34, r_34, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_34);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_34;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      if(match_cons(m_33, sym_Stream_1))
        {
          s_34 = ATgetArgument(m_33, 0);
        }
      else
        _fail(t);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(s_34, t_34, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm e_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = xtc_temp_files_1_0(t_4, t);
  e_34 = t;
  t = term_x_14;
  i_34 = t;
  t = (ATerm) ATinsert(ATempty, term_q_33);
  j_34 = t;
  t = SSL_printnl(i_34, j_34);
  t = e_34;
  t = debug_1_0(z_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  static ATerm w_34 (ATerm t);
  static ATerm w_34 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_100(t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = SRTS_one(w_34, t);
      }
    return(t);
  }
  t = w_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm c_35 = NULL,h_35 = NULL;
  t = term_y_33;
  c_35 = t;
  t = term_c_34;
  h_35 = t;
  t = term_d_34;
  t = r_9(c_35, h_35, t);
  return(t);
}
static ATerm g_43 (ATerm y_36, ATerm z_36, ATerm a_37, ATerm e_37, ATerm t)
{
  t = a_37;
  t = fetch_1_0(a_5, t);
  t = a_37;
  {
    ATerm g_34 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_34;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, y_36, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, z_36)), (ATerm) ATmakeAppl(sym_attrs_1, a_37));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL,t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,z_37 = NULL,a_38 = NULL;
  u_37 = t;
  if(match_cons(t, sym_prod_3))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
      z_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_37;
  if(match_cons(t, sym_attrs_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_38;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_37;
      {
        ATerm h_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm l_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(k_34);
            t = w_37;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_37 = ATgetFirst((ATermList) t);
                o_37 = (ATerm) ATgetNext((ATermList) t);
                t = o_37;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = l_37;
                    {
                      ATerm m_34 = t;
                      int o_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm p_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_34);
                          {
                            ATerm u_34 = t;
                            int v_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(b_5, t);
                                t = u_37;
                                LocalPopChoice(v_34);
                              }
                            else
                              {
                                t = u_34;
                                {
                                  ATerm x_34 = t;
                                  int y_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_38;
                                      t = fetch_1_0(c_5, t);
                                      t = u_37;
                                      LocalPopChoice(y_34);
                                    }
                                  else
                                    {
                                      t = x_34;
                                      t = u_37;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = m_34;
                          {
                            ATerm z_34 = t;
                            int a_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(d_5, t);
                                t = u_37;
                                LocalPopChoice(a_35);
                              }
                            else
                              {
                                t = z_34;
                                {
                                  ATerm b_35 = t;
                                  int d_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_38;
                                      t = fetch_1_0(f_5, t);
                                      t = u_37;
                                      LocalPopChoice(d_35);
                                    }
                                  else
                                    {
                                      t = b_35;
                                      t = a_38;
                                      t = fetch_1_0(i_5, t);
                                      t = u_37;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = l_37;
                    {
                      ATerm e_35 = t;
                      int f_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(j_5, t);
                          t = u_37;
                          LocalPopChoice(f_35);
                        }
                      else
                        {
                          t = e_35;
                          {
                            ATerm g_35 = t;
                            int i_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(k_5, t);
                                t = u_37;
                                LocalPopChoice(i_35);
                              }
                            else
                              {
                                t = g_35;
                                t = a_38;
                                t = fetch_1_0(l_5, t);
                                t = u_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(n_5, t);
                    t = u_37;
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    {
                      ATerm p_35 = t;
                      int q_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(o_5, t);
                          t = u_37;
                          LocalPopChoice(q_35);
                        }
                      else
                        {
                          t = p_35;
                          t = a_38;
                          t = fetch_1_0(p_5, t);
                          t = u_37;
                        }
                    }
                  }
              }
          }
        else
          {
            t = h_34;
            if(match_cons(t, sym_cf_1))
              {
                p_37 = ATgetArgument(t, 0);
                t = p_37;
                if(match_cons(t, sym_sort_1))
                  {
                    t_37 = ATgetArgument(t, 0);
                    t = w_37;
                    {
                      ATerm r_35 = t;
                      int s_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(q_5, t);
                          t = u_37;
                          LocalPopChoice(s_35);
                        }
                      else
                        {
                          t = r_35;
                          {
                            ATerm v_35 = t;
                            int w_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(r_5, t);
                                t = u_37;
                                LocalPopChoice(w_35);
                              }
                            else
                              {
                                t = v_35;
                                {
                                  ATerm x_35 = t;
                                  int y_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_43(w_37, t_37, a_38, u_37, t);
                                      LocalPopChoice(y_35);
                                    }
                                  else
                                    {
                                      t = x_35;
                                      t = a_38;
                                      t = fetch_1_0(v_5, t);
                                      t = u_37;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = w_37;
                    {
                      ATerm z_35 = t;
                      int a_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(k_6, t);
                          t = u_37;
                          LocalPopChoice(a_36);
                        }
                      else
                        {
                          t = z_35;
                          {
                            ATerm b_36 = t;
                            int c_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(s_6, t);
                                t = u_37;
                                LocalPopChoice(c_36);
                              }
                            else
                              {
                                t = b_36;
                                t = a_38;
                                t = fetch_1_0(u_6, t);
                                t = u_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = w_37;
                {
                  ATerm d_36 = t;
                  int e_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_38;
                      t = fetch_1_0(w_6, t);
                      t = u_37;
                      LocalPopChoice(e_36);
                    }
                  else
                    {
                      t = d_36;
                      {
                        ATerm f_36 = t;
                        int g_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_38;
                            t = fetch_1_0(x_6, t);
                            t = u_37;
                            LocalPopChoice(g_36);
                          }
                        else
                          {
                            t = f_36;
                            t = a_38;
                            t = fetch_1_0(y_6, t);
                            t = u_37;
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
      t = x_37;
      if(match_cons(t, sym_cf_1))
        {
          p_37 = ATgetArgument(t, 0);
          t = p_37;
          if(match_cons(t, sym_sort_1))
            {
              t_37 = ATgetArgument(t, 0);
              t = w_37;
              {
                ATerm h_36 = t;
                int i_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(z_6, t);
                    t = u_37;
                    LocalPopChoice(i_36);
                  }
                else
                  {
                    t = h_36;
                    {
                      ATerm j_36 = t;
                      int k_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(a_7, t);
                          t = u_37;
                          LocalPopChoice(k_36);
                        }
                      else
                        {
                          t = j_36;
                          {
                            ATerm l_36 = t;
                            int m_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = g_43(w_37, t_37, a_38, u_37, t);
                                LocalPopChoice(m_36);
                              }
                            else
                              {
                                t = l_36;
                                t = a_38;
                                t = fetch_1_0(c_7, t);
                                t = u_37;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = w_37;
              {
                ATerm n_36 = t;
                int o_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(d_7, t);
                    t = u_37;
                    LocalPopChoice(o_36);
                  }
                else
                  {
                    t = n_36;
                    {
                      ATerm p_36 = t;
                      int q_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(e_7, t);
                          t = u_37;
                          LocalPopChoice(q_36);
                        }
                      else
                        {
                          t = p_36;
                          t = a_38;
                          t = fetch_1_0(g_7, t);
                          t = u_37;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = w_37;
          {
            ATerm r_36 = t;
            int s_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_38;
                t = fetch_1_0(h_7, t);
                t = u_37;
                LocalPopChoice(s_36);
              }
            else
              {
                t = r_36;
                {
                  ATerm t_36 = t;
                  int u_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_38;
                      t = fetch_1_0(i_7, t);
                      t = u_37;
                      LocalPopChoice(u_36);
                    }
                  else
                    {
                      t = t_36;
                      t = a_38;
                      t = fetch_1_0(j_7, t);
                      t = u_37;
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm y_8 (ATerm t_35, ATerm u_35, ATerm t)
{
  t = SSL_mkterm(t_35, u_35);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm k_44 = NULL,n_44 = NULL,p_44 = NULL,r_44 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      p_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_44;
  if(match_cons(t, sym_alt_2))
    {
      k_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_44 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, k_44, n_44);
            t = flat_alt_0_0(t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), p_44);
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            t = (ATerm) ATinsert(ATinsert(ATempty, r_44), p_44);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, r_44), p_44);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  {
    ATerm x_36 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_43;
        {
          ATerm c_37 = t;
          if((PushChoice() == 0))
            {
              ATerm d_14 = NULL;
              d_14 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_14;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_37 = ATgetFirst((ATermList) t);
                      ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = d_14;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_37;
            }
        }
        t = (ATerm) ATinsert(ATempty, x_43);
        LocalPopChoice(b_37);
      }
    else
      {
        t = x_36;
        t = x_43;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(k_7, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          r_50 = ATgetArgument(t, 0);
          s_50 = ATgetArgument(t, 1);
          {
            ATerm i_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_37);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, r_50, s_50);
    }
  else
    {
      t = g_37;
      if(match_cons(t, sym_iter_n_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm j_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, r_50);
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym_Arg_1))
    {
      o_16 = ATgetArgument(t, 0);
      {
        ATerm k_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_17 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(p_16);
            t_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, o_16);
            e_5 = t;
            t = SSLsetAnnotations(e_5, t_17);
            t = term_n_37;
            LocalPopChoice(m_37);
          }
        else
          {
            t = k_37;
            t = p_16;
          }
      }
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,n_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  static ATerm f_53 (ATerm t);
  static ATerm f_53 (ATerm t)
  {
    static ATerm j_53 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t);
    static ATerm k_53 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm c_51, ATerm t);
    static ATerm j_53 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t)
    {
      ATerm y_49 = NULL,k_50 = NULL,f_4 = NULL;
      t = SSLgetAnnotations(u_49);
      y_49 = t;
      t = w_49;
      t = _2_0(_id, l_7, t);
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_49, k_50);
      f_4 = t;
      t = SSLsetAnnotations(f_4, y_49);
      t = f_53(t);
      return(t);
    }
    static ATerm k_53 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm c_51, ATerm t)
    {
      ATerm h_51 = NULL,i_51 = NULL,l_51 = NULL,n_51 = NULL,o_51 = NULL,r_51 = NULL;
      t = SSL_explode_term(c_51);
      if(match_cons(t, sym__2))
        {
          n_51 = ATgetArgument(t, 0);
          o_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, y_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, z_50, n_51)));
      t = conc_0_0(t);
      h_51 = t;
      t = o_51;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      r_51 = t;
      t = make_0_0(t);
      i_51 = t;
      t = r_51;
      {
        static ATerm m_7 (ATerm t);
        static ATerm m_7 (ATerm t)
        {
          ATerm v_51 = NULL;
          v_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_50, h_51), v_51);
          t = f_53(t);
          return(t);
        }
        t = map_1_0(m_7, t);
      }
      t = concat_0_0(t);
      l_51 = t;
      t = (ATerm) ATinsert(CheckATermList(l_51), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, x_50, h_51), i_51));
      return(t);
    }
    ATerm x_51 = NULL,c_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,l_52 = NULL,o_52 = NULL,r_52 = NULL,s_52 = NULL,v_52 = NULL,x_52 = NULL;
    g_52 = t;
    if(match_cons(t, sym__2))
      {
        l_52 = ATgetArgument(t, 0);
        s_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = s_52;
    {
      ATerm q_37 = t;
      int r_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm s_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(r_37);
          t = (ATerm) ATempty;
        }
      else
        {
          t = q_37;
          if(match_cons(t, sym__2))
            {
              v_52 = ATgetArgument(t, 0);
              x_52 = ATgetArgument(t, 1);
              t = x_52;
              {
                ATerm v_37 = t;
                int y_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm b_38 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_37);
                    t = l_52;
                    {
                      ATerm c_38 = t;
                      int d_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm e_38 = ATgetArgument(t, 0);
                              ATerm f_38 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_38);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = c_38;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = v_37;
                    {
                      ATerm g_38 = t;
                      int h_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm i_38 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_38);
                          t = l_52;
                          {
                            ATerm j_38 = t;
                            int k_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm l_38 = ATgetArgument(t, 0);
                                    ATerm m_38 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(k_38);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = j_38;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = g_38;
                          if(match_cons(t, sym_alt_2))
                            {
                              f_52 = ATgetArgument(t, 0);
                              x_51 = ATgetArgument(t, 1);
                              t = x_51;
                              if(match_cons(t, sym_alt_2))
                                {
                                  c_52 = ATgetArgument(t, 0);
                                  e_52 = ATgetArgument(t, 1);
                                  t = l_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      o_52 = ATgetArgument(t, 0);
                                      r_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_38 = t;
                                        int o_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_15 = NULL,r_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,g_5 = NULL;
                                            t = o_52;
                                            if(((l_47 != NULL) && (l_47 != t)))
                                              _fail(t);
                                            else
                                              l_47 = t;
                                            t = r_52;
                                            if(((n_47 != NULL) && (n_47 != t)))
                                              _fail(t);
                                            else
                                              n_47 = t;
                                            t = v_52;
                                            if(((p_47 != NULL) && (p_47 != t)))
                                              _fail(t);
                                            else
                                              p_47 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, f_52, (ATerm) ATmakeAppl(sym_alt_2, c_52, e_52));
                                            t = flat_alt_0_0(t);
                                            o_15 = t;
                                            t = term_p_38;
                                            v_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_p_38, o_15);
                                            t = y_8(v_15, o_15, t);
                                            r_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_52, r_52), (ATerm) ATmakeAppl(sym__2, v_52, r_15));
                                            t = f_53(t);
                                            e_16 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                b_16 = ATgetFirst((ATermList) t);
                                                c_16 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(e_16);
                                            w_15 = t;
                                            t = b_16;
                                            t = topdown_1_0(n_7, t);
                                            d_16 = t;
                                            t = (ATerm) ATinsert(CheckATermList(c_16), d_16);
                                            g_5 = t;
                                            t = SSLsetAnnotations(g_5, w_15);
                                            LocalPopChoice(o_38);
                                          }
                                        else
                                          {
                                            t = n_38;
                                            {
                                              ATerm q_38 = t;
                                              int r_38 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_53(g_52, l_52, s_52, t);
                                                  LocalPopChoice(r_38);
                                                }
                                              else
                                                {
                                                  t = q_38;
                                                  t = k_53(o_52, r_52, v_52, x_52, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_53(g_52, l_52, s_52, t);
                                    }
                                }
                              else
                                {
                                  t = l_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      o_52 = ATgetArgument(t, 0);
                                      r_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_38 = t;
                                        int t_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
                                            LocalPopChoice(t_38);
                                          }
                                        else
                                          {
                                            t = s_38;
                                            t = k_53(o_52, r_52, v_52, x_52, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_53(g_52, l_52, s_52, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  f_52 = ATgetArgument(t, 0);
                                  t = l_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      o_52 = ATgetArgument(t, 0);
                                      r_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm u_38 = t;
                                        int v_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
                                            LocalPopChoice(v_38);
                                          }
                                        else
                                          {
                                            t = u_38;
                                            {
                                              ATerm w_38 = t;
                                              int x_38 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_52, r_52), (ATerm) ATmakeAppl(sym__2, v_52, f_52));
                                                  t = f_53(t);
                                                  LocalPopChoice(x_38);
                                                }
                                              else
                                                {
                                                  t = w_38;
                                                  t = k_53(o_52, r_52, v_52, x_52, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_53(g_52, l_52, s_52, t);
                                    }
                                }
                              else
                                {
                                  t = l_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      o_52 = ATgetArgument(t, 0);
                                      r_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_38 = t;
                                        int z_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
                                            LocalPopChoice(z_38);
                                          }
                                        else
                                          {
                                            t = y_38;
                                            t = k_53(o_52, r_52, v_52, x_52, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_53(g_52, l_52, s_52, t);
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
              t = l_52;
              t = j_53(g_52, l_52, s_52, t);
            }
        }
    }
    return(t);
  }
  r_47 = t;
  t = term_l_15;
  t = r_96(t);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, r_47);
  t = f_53(t);
  return(t);
}
ATerm _2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,t_53 = NULL,w_53 = NULL,x_53 = NULL,t_5 = NULL;
  x_53 = t;
  if(match_cons(t, sym__2))
    {
      q_53 = ATgetArgument(t, 0);
      r_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_53);
  p_53 = t;
  t = q_53;
  t = p_80(t);
  t_53 = t;
  t = r_53;
  t = q_80(t);
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, w_53);
  t_5 = t;
  t = SSLsetAnnotations(t_5, p_53);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  d_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_54;
    }
  else
    {
      ATerm l_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_54 = ATgetFirst((ATermList) t);
          f_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_54;
      t = pair_0_0(t);
      l_54 = t;
      t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym__2, e_54, g_54));
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,b_58 = NULL,h_6 = NULL;
  z_57 = t;
  if(match_cons(t, sym_lit_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, y_57);
  h_6 = t;
  t = SSLsetAnnotations(h_6, x_57);
  if(match_cons(t, sym_lit_1))
    {
      b_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, b_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_58 = ATgetArgument(t, 0);
          {
            ATerm b_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, b_58);
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,p_6 = NULL,w_59 = NULL,e_59 = NULL,m_6 = NULL;
  c_59 = t;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_59);
  x_58 = t;
  t = y_58;
  if(match_cons(t, sym_lit_1))
    {
      b_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_58);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_59);
  m_6 = t;
  t = SSLsetAnnotations(m_6, a_59);
  if(match_cons(t, sym_lit_1))
    {
      e_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, e_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_59 = ATgetArgument(t, 0);
          {
            ATerm c_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_59);
    }
  v_58 = t;
  t = z_58;
  t = _2_0(_id, a_8, t);
  if(match_cons(t, sym_lit_1))
    {
      w_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, w_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_59 = ATgetArgument(t, 0);
          {
            ATerm d_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_59);
    }
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
  p_6 = t;
  t = SSLsetAnnotations(p_6, x_58);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_g_39), (ATerm) ATinsert(ATinsert(ATempty, w_58), v_58));
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      u_59 = ATgetArgument(t, 0);
      {
        ATerm u_19 = NULL,n_6 = NULL;
        t = SSLgetAnnotations(t_59);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, u_59);
        n_6 = t;
        t = SSLsetAnnotations(n_6, u_19);
      }
    }
  else
    {
      ATerm f_20 = NULL,o_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          u_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_59);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, u_59);
      o_6 = t;
      t = SSLsetAnnotations(o_6, f_20);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm b_60 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      b_60 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, b_60));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_60 = ATgetArgument(t, 0);
          {
            ATerm h_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, b_60);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,n_55 = NULL;
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_55 = NULL,w_55 = NULL,x_55 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,i_6 = NULL,t_57 = NULL,g_6 = NULL,q_57 = NULL,r_57 = NULL;
      t = reverse_acc_2_0(_id, o_7, t);
      i_56 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_55 = ATgetFirst((ATermList) t);
          b_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_56);
      w_55 = t;
      t = x_55;
      if(match_cons(t, sym__2))
        {
          f_56 = ATgetArgument(t, 0);
          g_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_55);
      e_56 = t;
      t = g_56;
      if(match_cons(t, sym_iter_1))
        {
          q_57 = ATgetArgument(t, 0);
          {
            ATerm d_18 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(g_56);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, q_57);
            w_5 = t;
            t = SSLsetAnnotations(w_5, d_18);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              q_57 = ATgetArgument(t, 0);
              {
                ATerm j_18 = NULL,x_5 = NULL;
                t = SSLgetAnnotations(g_56);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, q_57);
                x_5 = t;
                t = SSLsetAnnotations(x_5, j_18);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_57 = ATgetArgument(t, 0);
                  r_57 = ATgetArgument(t, 1);
                  {
                    ATerm w_18 = NULL,d_6 = NULL;
                    t = SSLgetAnnotations(g_56);
                    w_18 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_57, r_57);
                    d_6 = t;
                    t = SSLsetAnnotations(d_6, w_18);
                  }
                }
              else
                {
                  ATerm l_19 = NULL,f_6 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      q_57 = ATgetArgument(t, 0);
                      r_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_56);
                  l_19 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_57, r_57);
                  f_6 = t;
                  t = SSLsetAnnotations(f_6, l_19);
                }
            }
        }
      h_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_56, h_56);
      g_6 = t;
      t = SSLsetAnnotations(g_6, e_56);
      if(match_cons(t, sym_lit_1))
        {
          t_57 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, t_57));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              t_57 = ATgetArgument(t, 0);
              {
                ATerm k_39 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, t_57);
        }
      c_56 = t;
      t = b_56;
      t = map_1_0(s_7, t);
      d_56 = t;
      t = (ATerm) ATinsert(CheckATermList(d_56), c_56);
      i_6 = t;
      t = SSLsetAnnotations(i_6, w_55);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_39 = t;
        if((PushChoice() == 0))
          {
            ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_6 = NULL;
            i_58 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_58 = ATgetFirst((ATermList) t);
                h_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_58);
            f_58 = t;
            t = h_58;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_58), g_58);
            j_6 = t;
            t = SSLsetAnnotations(j_6, f_58);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_39;
          }
      }
      t = i_55;
      t = reverse_acc_2_0(_id, u_7, t);
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, o_55)));
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,l_6 = NULL,q_58 = NULL;
            t = reverse_acc_2_0(_id, v_7, t);
            n_58 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_58 = ATgetFirst((ATermList) t);
                m_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_58);
            k_58 = t;
            t = l_58;
            if(match_cons(t, sym_lit_1))
              {
                q_58 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_39, (ATerm) ATmakeAppl(sym_S_1, q_58));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    q_58 = ATgetArgument(t, 0);
                    {
                      ATerm o_39 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, q_58);
              }
            n_55 = t;
            t = m_58;
            {
              ATerm p_39 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_39;
                }
            }
            t = reverse_acc_2_0(_id, w_7, t);
            k_55 = t;
            t = (ATerm) ATinsert(CheckATermList(k_55), n_55);
            l_6 = t;
            t = SSLsetAnnotations(l_6, k_58);
            t = k_55;
            t = pair_0_0(t);
            t = map_1_0(x_7, t);
            l_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_55), l_55));
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            t = map_1_0(b_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm q_39 = t;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL,x_60 = NULL,y_60 = NULL,a_9 = NULL;
      y_60 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_60);
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_60);
      a_9 = t;
      t = SSLsetAnnotations(a_9, l_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_39;
    }
  return(t);
}
static ATerm p_62 (ATerm f_61, ATerm g_61, ATerm h_61, ATerm t)
{
  ATerm l_61 = NULL,q_9 = NULL;
  t = SSLgetAnnotations(f_61);
  l_61 = t;
  t = h_61;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_61, h_61);
  q_9 = t;
  t = SSLsetAnnotations(q_9, l_61);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm e_61 = NULL;
  static ATerm i_62 (ATerm t);
  static ATerm i_62 (ATerm t)
  {
    ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
    p_61 = t;
    if(match_cons(t, sym__2))
      {
        q_61 = ATgetArgument(t, 0);
        r_61 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_61 = ATgetFirst((ATermList) t);
        t_61 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_62(p_61, q_61, r_61, t);
              LocalPopChoice(s_39);
            }
          else
            {
              t = r_39;
              {
                ATerm t_39 = t;
                int u_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
                    t = s_61;
                    t = u_96(t);
                    t = term_z_16;
                    a_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_61, term_z_16);
                    t = m_9(q_61, a_62, t);
                    z_61 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_61, t_61);
                    t = i_62(t);
                    y_61 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_61), (ATerm) ATmakeAppl(sym__2, q_61, s_61));
                    LocalPopChoice(u_39);
                  }
                else
                  {
                    t = t_39;
                    {
                      ATerm h_62 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, q_61, t_61);
                      t = i_62(t);
                      h_62 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_62), s_61);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = p_62(p_61, q_61, r_61, t);
      }
    return(t);
  }
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, e_61);
  t = i_62(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  u_62 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm x_39 = ATgetArgument(t, 0);
            t_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_39);
        t = t_62;
      }
    else
      {
        t = v_39;
        t = u_62;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(c_8, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,e_63 = NULL;
  t = number_nonterminals_0_0(t);
  e_63 = t;
  t = make_0_0(t);
  y_62 = t;
  t = e_63;
  {
    static ATerm d_8 (ATerm t);
    static ATerm d_8 (ATerm t)
    {
      static ATerm e_8 (ATerm t);
      static ATerm e_8 (ATerm t)
      {
        ATerm f_63 = NULL;
        t = term_l_15;
        t = q_96(t);
        f_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_63, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(e_8, t);
      return(t);
    }
    t = map_1_0(d_8, t);
  }
  t = concat_0_0(t);
  z_62 = t;
  t = term_l_15;
  t = q_96(t);
  a_63 = t;
  t = (ATerm) ATinsert(CheckATermList(z_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, a_63), y_62));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm i_63 = NULL;
  static ATerm f_8 (ATerm t);
  static ATerm f_8 (ATerm t)
  {
    t = q_104(t);
    if(((i_63 != NULL) && (i_63 != t)))
      _fail(t);
    else
      i_63 = t;
    return(t);
  }
  t = fetch_1_0(f_8, t);
  t = not_null(i_63);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,z_63 = NULL,c_64 = NULL,d_64 = NULL;
  if(match_cons(t, sym_term_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_64;
  if(match_cons(t, sym_appl_2))
    {
      d_64 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
      {
        ATerm w_20 = NULL;
        t = d_64;
        if(match_cons(t, sym_uqlit_1))
          {
            s_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_63;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
          _fail(t);
        t = t_63;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_63 = ATgetFirst((ATermList) t);
            z_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_63;
        if(match_cons(t, sym_fun_1))
          {
            v_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_63;
        if(match_cons(t, sym_qlit_1))
          {
            w_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_63;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = SSL_explode_string(w_63);
        t = unquote_chars_2_0(j_8, p_8, t);
        w_20 = t;
        t = SSL_implode_string(w_20);
      }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          d_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_64;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(i_8, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,f_65 = NULL;
  b_65 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      c_65 = ATgetArgument(t, 0);
      d_65 = ATgetArgument(t, 1);
      f_65 = ATgetArgument(t, 2);
      a_65 = ATgetArgument(t, 3);
      {
        ATerm k_65 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_40)), d_65), (ATerm) ATinsert(ATinsert(ATempty, term_z_39), (ATerm) ATmakeAppl(sym_lit_1, c_65)));
        t = concat_0_0(t);
        k_65 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, k_65, f_65, a_65);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm e_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          c_65 = ATgetArgument(t, 0);
          {
            ATerm b_40 = ATgetArgument(t, 1);
          }
          f_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_65;
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = NULL;
            t = f_65;
            if(match_cons(t, sym_attrs_1))
              {
                f_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_21;
            t = get_cnstr_name_0_0(t);
            e_21 = t;
            LocalPopChoice(d_40);
            {
              static ATerm z_8 (ATerm t);
              static ATerm z_8 (ATerm t)
              {
                t = e_21;
                return(t);
              }
              t = c_65;
              t = symbols2pp_entries_1_0(z_8, t);
            }
          }
        else
          {
            t = c_40;
            {
              ATerm e_40 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(f_40);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = e_40;
                  {
                    ATerm g_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_40 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm g_21 = NULL;
                            g_21 = t;
                            t = term_j_40;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(b_9, t);
                            t = g_21;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = i_40;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(h_40);
                      }
                    else
                      {
                        t = g_40;
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
ATerm at_last_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  static ATerm h_66 (ATerm t);
  static ATerm h_66 (ATerm t)
  {
    ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
    e_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_66 = ATgetFirst((ATermList) t);
        g_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_40 = t;
      int l_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_21 = NULL,x_9 = NULL;
          t = SSLgetAnnotations(e_66);
          q_21 = t;
          t = g_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_66), f_66);
          x_9 = t;
          t = SSLsetAnnotations(x_9, q_21);
          t = g_105(t);
          LocalPopChoice(l_40);
        }
      else
        {
          t = k_40;
          {
            ATerm d_22 = NULL,i_22 = NULL,y_9 = NULL;
            t = SSLgetAnnotations(e_66);
            d_22 = t;
            t = g_66;
            t = h_66(t);
            i_22 = t;
            t = (ATerm) ATinsert(CheckATermList(i_22), f_66);
            y_9 = t;
            t = SSLsetAnnotations(y_9, d_22);
          }
        }
    }
    return(t);
  }
  t = h_66(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_66 = ATgetFirst((ATermList) t);
      o_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_66;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_66;
    }
  else
    {
      t = o_66;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm w_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_40 = ATgetFirst((ATermList) t);
      w_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_66;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_66 = ATgetFirst((ATermList) t);
      {
        ATerm n_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_66;
  t = b_114(t);
  t = t_66;
  t = last_0_0(t);
  t = c_114(t);
  t = t_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_40 = ATgetFirst((ATermList) t);
      u_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_66;
  t = at_last_1_0(n_9, t);
  return(t);
}
static ATerm c_9 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t)
{
  t = t_108(t);
  {
    static ATerm t_9 (ATerm t);
    static ATerm t_9 (ATerm t)
    {
      ATerm x_66 = NULL;
      x_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_35, x_66);
      t = s_108(t);
      return(t);
    }
    t = fetch_1_0(t_9, t);
  }
  t = n_35;
  return(t);
}
static ATerm d_9 (ATerm p_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t)
{
  static ATerm n_67 (ATerm t);
  static ATerm n_67 (ATerm t)
  {
    ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
    i_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_67 = ATgetFirst((ATermList) t);
            k_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_67;
              {
                static ATerm b_10 (ATerm t);
                static ATerm b_10 (ATerm t)
                {
                  t = j_35;
                  return(t);
                }
                t = c_9(p_108, b_10, j_67, k_67, t);
              }
              t = n_67(t);
              LocalPopChoice(q_40);
            }
          else
            {
              t = p_40;
              {
                ATerm q_22 = NULL,t_22 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(i_67);
                q_22 = t;
                t = k_67;
                t = n_67(t);
                t_22 = t;
                t = (ATerm) ATinsert(CheckATermList(t_22), j_67);
                k_10 = t;
                t = SSLsetAnnotations(k_10, q_22);
              }
            }
        }
      }
    return(t);
  }
  t = k_35;
  t = n_67(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_67;
      t = u_111(t);
    }
  else
    {
      ATerm v_67 = NULL,w_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_67 = ATgetFirst((ATermList) t);
          s_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_67;
      t = w_111(t);
      v_67 = t;
      t = s_67;
      t = foldr_3_0(u_111, v_111, w_111, t);
      w_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
      t = v_111(t);
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_68 = NULL;
      t = m_110(t);
      b_68 = t;
      t = (ATerm) ATinsert(ATempty, b_68);
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      {
        ATerm z_22 = NULL,a_23 = NULL;
        static ATerm f_10 (ATerm t);
        static ATerm f_10 (ATerm t)
        {
          t = collect_om_2_0(m_110, n_110, t);
          return(t);
        }
        a_23 = t;
        t = SSL_explode_term(a_23);
        if(match_cons(t, sym__2))
          {
            ATerm t_40 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_22;
        t = foldr_3_0(c_10, n_110, f_10, t);
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm p_68 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      p_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_68;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(l_10, q_68, r_68, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm s_68 = NULL;
  if(match_cons(t, sym__2))
    {
      s_68 = ATgetArgument(t, 0);
      if((s_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  u_69 = t;
  if(match_cons(t, sym_cons_1))
    {
      s_69 = ATgetArgument(t, 0);
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_23 = NULL,k_23 = NULL,l_23 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(u_69);
            h_23 = t;
            t = SSL_explode_string(s_69);
            t = unquote_chars_2_0(n_11, p_11, t);
            l_23 = t;
            t = SSL_implode_string(l_23);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, k_23);
            v_10 = t;
            t = SSLsetAnnotations(v_10, h_23);
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            t = u_69;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          s_69 = ATgetArgument(t, 0);
          t = s_69;
          if(match_cons(t, sym_qlit_1))
            {
              t_69 = ATgetArgument(t, 0);
              {
                ATerm w_40 = t;
                int x_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_71(u_69, s_69, t);
                    LocalPopChoice(x_40);
                  }
                else
                  {
                    t = w_40;
                    {
                      ATerm y_40 = t;
                      int z_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_71(t_69, t);
                          LocalPopChoice(z_40);
                        }
                      else
                        {
                          t = y_40;
                          t = u_69;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm a_41 = t;
              int b_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_71(u_69, s_69, t);
                  LocalPopChoice(b_41);
                }
              else
                {
                  t = a_41;
                  t = u_69;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              s_69 = ATgetArgument(t, 0);
              {
                ATerm c_41 = t;
                int d_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_71(u_69, s_69, t);
                    LocalPopChoice(d_41);
                  }
                else
                  {
                    t = c_41;
                    t = u_69;
                  }
              }
            }
          else
            {
              t = u_69;
            }
        }
    }
  return(t);
}
static ATerm e_71 (ATerm a_69, ATerm b_69, ATerm t)
{
  ATerm c_69 = NULL,e_69 = NULL,f_69 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(a_69);
  c_69 = t;
  t = SSL_explode_string(b_69);
  t = unquote_chars_2_0(u_10, z_10, t);
  f_69 = t;
  t = SSL_implode_string(f_69);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, e_69);
  p_10 = t;
  t = SSLsetAnnotations(p_10, c_69);
  return(t);
}
static ATerm f_71 (ATerm h_69, ATerm i_69, ATerm t)
{
  ATerm j_69 = NULL,l_69 = NULL,m_69 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(h_69);
  j_69 = t;
  t = SSL_explode_string(i_69);
  t = unquote_chars_2_0(a_11, i_11, t);
  m_69 = t;
  t = SSL_implode_string(m_69);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, l_69);
  q_10 = t;
  t = SSLsetAnnotations(q_10, j_69);
  return(t);
}
static ATerm g_71 (ATerm o_69, ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  t = SSL_explode_string(o_69);
  t = unquote_chars_2_0(j_11, l_11, t);
  r_69 = t;
  t = SSL_implode_string(r_69);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, q_69);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm e_41 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_41;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  y_70 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_70 = ATgetArgument(t, 0);
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL,e_24 = NULL,d_12 = NULL;
            t = SSLgetAnnotations(y_70);
            c_24 = t;
            t = SSL_int_to_string(x_70);
            e_24 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, e_24);
            d_12 = t;
            t = SSLsetAnnotations(d_12, c_24);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            t = y_70;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          x_70 = ATgetArgument(t, 0);
          w_70 = ATgetArgument(t, 1);
          {
            ATerm h_41 = t;
            int i_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_24 = NULL,e_25 = NULL,h_12 = NULL;
                t = SSLgetAnnotations(y_70);
                x_24 = t;
                t = SSL_int_to_string(x_70);
                e_25 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, e_25, w_70);
                h_12 = t;
                t = SSLsetAnnotations(h_12, x_24);
                LocalPopChoice(i_41);
              }
            else
              {
                t = h_41;
                t = y_70;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              x_70 = ATgetArgument(t, 0);
              {
                ATerm j_41 = t;
                int k_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL,i_12 = NULL;
                    t = SSLgetAnnotations(y_70);
                    p_25 = t;
                    t = SSL_explode_string(x_70);
                    t_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_25), term_l_41), (ATerm) ATinsert(ATempty, term_l_41));
                    t = conc_0_0(t);
                    u_25 = t;
                    t = SSL_implode_string(u_25);
                    r_25 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, r_25);
                    i_12 = t;
                    t = SSLsetAnnotations(i_12, p_25);
                    LocalPopChoice(k_41);
                  }
                else
                  {
                    t = j_41;
                    t = y_70;
                  }
              }
            }
          else
            {
              t = y_70;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm o_68 = NULL;
  t = collect_om_2_0(g_10, j_10, t);
  t = concat_0_0(t);
  t = topdown_1_0(n_10, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(w_11, t);
  t = concat_0_0(t);
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_68);
  t = topdown_1_0(x_11, t);
  return(t);
}
static ATerm e_9 (ATerm j_62, ATerm k_62, ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_fputc(j_62, k_62);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_71);
  return(t);
}
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm l_71 = NULL;
  t = SSL_write_term_to_stream_text(e_28, f_28);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_71);
  return(t);
}
static ATerm h_9 (ATerm n_99 (ATerm), ATerm d_223, ATerm k_28, ATerm t)
{
  ATerm m_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_223, term_m_41);
  t = l_9(t);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_71, k_28);
  t = n_99(t);
  t = fclose_0_0(t);
  t = k_28;
  return(t);
}
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm n_71 = NULL;
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_71);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(match_cons(n_41, sym_Stream_1))
        {
          u_71 = ATgetArgument(n_41, 0);
        }
      else
        _fail(t);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(u_71, v_71, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_41 = ATgetArgument(t, 0);
      if(match_cons(o_41, sym_Stream_1))
        {
          z_71 = ATgetArgument(o_41, 0);
        }
      else
        _fail(t);
      a_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(z_71, a_72, t);
  w_71 = t;
  t = term_h_22;
  x_71 = t;
  t = w_71;
  if(match_cons(t, sym_Stream_1))
    {
      y_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, w_71);
  t = e_9(x_71, y_71, t);
  return(t);
}
ATerm output_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  t = q_123(t);
  p_71 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_71 = NULL,r_71 = NULL;
        t = term_x_16;
        q_71 = t;
        t = term_e_26;
        r_71 = t;
        t = term_r_41;
        t = r_9(q_71, r_71, t);
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = term_s_41;
      }
  }
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_71, p_71);
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_71 = NULL,t_71 = NULL;
        t = term_x_16;
        s_71 = t;
        t = term_v_41;
        t_71 = t;
        t = term_w_41;
        t = r_9(s_71, t_71, t);
        t = (ATerm) ATmakeAppl(sym__2, o_71, p_71);
        LocalPopChoice(u_41);
        if(match_cons(t, sym__2))
          {
            ATerm x_41 = ATgetArgument(t, 0);
            ATerm y_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(y_11, o_71, p_71, t);
      }
    else
      {
        t = t_41;
        if(match_cons(t, sym__2))
          {
            ATerm z_41 = ATgetArgument(t, 0);
            ATerm a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(a_12, o_71, p_71, t);
      }
  }
  return(t);
}
static ATerm o_72 (ATerm i_72, ATerm t)
{
  t = SSL_fclose(i_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL;
  m_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_72 = ATgetArgument(t, 0);
      {
        ATerm b_42 = t;
        int c_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_72);
            LocalPopChoice(c_42);
          }
        else
          {
            t = b_42;
            t = o_72(m_72, t);
          }
      }
    }
  else
    {
      t = o_72(m_72, t);
    }
  return(t);
}
static ATerm i_9 (ATerm g_28, ATerm t)
{
  t = SSL_read_term_from_stream(g_28);
  return(t);
}
static ATerm j_9 (ATerm x_42, ATerm y_42, ATerm t)
{
  t = SSL_strcat(x_42, y_42);
  return(t);
}
static ATerm k_9 (ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm p_72 = NULL;
  t = SSL_fopen(l_62, m_62);
  p_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_stdin_stream();
  q_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_72 = NULL;
  t = SSL_stdout_stream();
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_72 = NULL;
  t = SSL_stderr_stream();
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_72);
  return(t);
}
static ATerm z_73 (ATerm y_72, ATerm t)
{
  ATerm z_72 = NULL;
  t = SSL_explode_term(y_72);
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_42 = ATgetArgument(t, 1);
        if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
          {
            z_72 = ATgetFirst((ATermList) e_42);
            {
              ATerm f_42 = (ATerm) ATgetNext((ATermList) e_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_74 (ATerm c_73, ATerm d_73, ATerm e_73, ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,k_73 = NULL,z_12 = NULL;
  t = SSLgetAnnotations(e_73);
  h_73 = t;
  t = c_73;
  if(match_cons(t, sym_Path_1))
    {
      k_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_73, d_73);
  z_12 = t;
  t = SSLsetAnnotations(z_12, h_73);
  if(match_cons(t, sym__2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(f_73, g_73, t);
  return(t);
}
static ATerm b_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,u_73 = NULL,c_13 = NULL;
  t = SSLgetAnnotations(o_73);
  r_73 = t;
  t = SSL_is_string(m_73);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_73, n_73);
  c_13 = t;
  t = SSLsetAnnotations(c_13, r_73);
  if(match_cons(t, sym__2))
    {
      p_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(p_73, q_73, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  if(match_cons(t, sym__2))
    {
      x_73 = ATgetArgument(t, 0);
      y_73 = ATgetArgument(t, 1);
      {
        ATerm g_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_73(w_73, t);
            LocalPopChoice(h_42);
          }
        else
          {
            t = g_42;
            {
              ATerm i_42 = t;
              int j_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_74(x_73, y_73, w_73, t);
                  LocalPopChoice(j_42);
                }
              else
                {
                  t = i_42;
                  t = b_74(x_73, y_73, w_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_73(w_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,k_74 = NULL;
  k_74 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_74, term_r_16);
        t = l_9(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        {
          ATerm v_26 = NULL,a_27 = NULL;
          t = term_m_42;
          a_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_42, k_74);
          t = j_9(a_27, k_74, t);
          v_26 = t;
          t = SSL_perror(v_26);
          _fail(t);
        }
      }
  }
  e_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(f_74, t);
  d_74 = t;
  t = e_74;
  t = fclose_0_0(t);
  t = d_74;
  return(t);
}
ATerm input_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_74 = NULL,o_74 = NULL;
      t = term_x_16;
      n_74 = t;
      t = term_f_26;
      o_74 = t;
      t = term_p_42;
      t = r_9(n_74, o_74, t);
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      t = term_c_17;
    }
  t = ReadFromFile_0_0(t);
  t = r_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
  p_74 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  q_74 = t;
  t = term_x_14;
  s_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_42), q_74), term_q_42);
  t_74 = t;
  t = SSL_printnl(s_74, t_74);
  t = term_z_16;
  r_74 = t;
  t = SSL_exit(r_74);
  t = p_74;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm v_74 = NULL;
  v_74 = t;
  if(match_string(t, "-k"))
    {
      t = v_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_74;
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
  w_74 = t;
  t = SSL_string_to_int(w_74);
  x_74 = t;
  t = term_s_42;
  y_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_42, x_74);
  t = u_9(y_74, x_74, t);
  t = w_74;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_12, c_12, e_12, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm a_75 = NULL;
  a_75 = t;
  if(match_string(t, "-S"))
    {
      t = a_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_75;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL;
  t = term_u_16;
  b_75 = t;
  t = term_u_42;
  c_75 = t;
  t = term_v_42;
  t = u_9(b_75, c_75, t);
  t = term_w_42;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
  d_75 = t;
  t = SSL_string_to_int(d_75);
  e_75 = t;
  t = term_u_16;
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, e_75);
  t = u_9(f_75, e_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_75);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL;
  t = term_b_43;
  g_75 = t;
  t = term_l_15;
  h_75 = t;
  t = term_c_43;
  t = u_9(g_75, h_75, t);
  t = term_d_43;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_e_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_12, g_12, k_12, t);
      LocalPopChoice(h_43);
    }
  else
    {
      t = f_43;
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_12, m_12, n_12, t);
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            t = Option_3_0(o_12, p_12, q_12, t);
          }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm z_60, ATerm a_61, ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  t = term_x_16;
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, z_60, a_61);
  t = lookup_table_0_1(i_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(z_60, a_61, j_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, z_60, a_61);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
      t = term_l_15;
      t = h_0(t);
      p_75 = t;
      t = term_k_43;
      q_75 = t;
      t = term_l_43;
      r_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, p_75);
      t = s_9(q_75, r_75, p_75, t);
      _fail(t);
    }
  else
    {
      ATerm u_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_75 = ATgetFirst((ATermList) t);
          o_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_75;
      t = d_0(t);
      t = term_l_15;
      t = g_0(t);
      u_75 = t;
      t = (ATerm) ATinsert(CheckATermList(o_75), u_75);
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm w_75 = NULL;
  w_75 = t;
  if(match_string(t, "-o"))
    {
      t = w_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_75;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  x_75 = t;
  t = term_e_26;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, x_75);
  t = u_9(y_75, x_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_75);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_12, s_12, t_12, t);
  return(t);
}
static ATerm s_9 (ATerm u_55, ATerm v_55, ATerm t_55, ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  a_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_55, v_55);
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_43 = ATgetArgument(t, 0);
            ATerm q_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_55, v_55);
        t = r_9(u_55, v_55, t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        t = (ATerm) ATempty;
      }
  }
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_55, v_55, (ATerm) ATinsert(CheckATermList(b_76), t_55));
  t = lookup_table_0_1(u_55, t);
  e_76 = t;
  t = (ATerm) ATinsert(CheckATermList(b_76), t_55);
  c_76 = t;
  t = e_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(v_55, c_76, d_76, t);
  t = a_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL;
      t = term_l_15;
      t = p_0(t);
      p_76 = t;
      t = term_k_43;
      q_76 = t;
      t = term_l_43;
      r_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, p_76);
      t = s_9(q_76, r_76, p_76, t);
      _fail(t);
    }
  else
    {
      ATerm v_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_76 = ATgetFirst((ATermList) t);
          m_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_76 = ATgetFirst((ATermList) t);
          o_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_76;
      t = m_0(t);
      t = n_76;
      t = o_0(t);
      v_76 = t;
      t = (ATerm) ATinsert(CheckATermList(o_76), v_76);
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  if(match_string(t, "-i"))
    {
      t = x_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_76;
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  y_76 = t;
  t = term_f_26;
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, y_76);
  t = u_9(z_76, y_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_76);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_12, w_12, x_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  t = whoami_0_0(t);
  a_77 = t;
  t = term_x_14;
  c_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_43), a_77);
  d_77 = t;
  t = SSL_printnl(c_77, d_77);
  t = term_z_16;
  b_77 = t;
  t = SSL_exit(b_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  t = term_x_16;
  e_77 = t;
  t = term_t_43;
  f_77 = t;
  t = term_u_43;
  t = r_9(e_77, f_77, t);
  return(t);
}
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_44, d_44);
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      t = SSL_addr(c_44, d_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_77;
      t = s_111(t);
    }
  else
    {
      ATerm m_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_77 = ATgetFirst((ATermList) t);
          j_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_77;
      t = foldr_2_0(s_111, t_111, t);
      m_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_77, m_77);
      t = t_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_u_42;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(r_27, s_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_77 = NULL,d_27 = NULL,k_27 = NULL;
  t = times_0_0(t);
  k_27 = t;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_27;
  t = foldr_2_0(y_12, a_13, t);
  p_77 = t;
  t = SSL_TicksToSeconds(p_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  a_78 = t;
  if(match_cons(t, sym__2))
    {
      b_78 = ATgetArgument(t, 0);
      c_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_78;
        if((b_78 != t))
          {
            _fail(t);
          }
        t = a_78;
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = (ATerm) ATmakeAppl(sym__2, b_78, c_78);
        {
          ATerm b_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_78, c_78);
              LocalPopChoice(e_44);
            }
          else
            {
              t = b_44;
              t = SSL_gtr(b_78, c_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_78, c_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
        t = term_x_16;
        l_78 = t;
        t = term_u_16;
        m_78 = t;
        t = term_y_16;
        t = r_9(l_78, m_78, t);
        k_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_78, term_z_16);
        t = geq_0_0(t);
        t = g_78;
        t = c_119(t);
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        t = g_78;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,r_78 = NULL,s_78 = NULL;
  t = run_time_0_0(t);
  o_78 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  p_78 = t;
  t = term_x_14;
  r_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_44), o_78), term_h_17), p_78);
  s_78 = t;
  t = SSL_printnl(r_78, s_78);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_44), o_78), term_h_17), p_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_42;
  t_78 = t;
  t = SSL_exit(t_78);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  e_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_79 = ATgetArgument(t, 0);
          {
            ATerm q_28 = NULL,j_13 = NULL;
            t = SSLgetAnnotations(e_79);
            q_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_79);
            j_13 = t;
            t = SSLsetAnnotations(j_13, q_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_78 = NULL,x_78 = NULL;
      t = term_x_16;
      w_78 = t;
      t = term_o_44;
      x_78 = t;
      t = term_q_44;
      t = r_9(w_78, x_78, t);
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      t = fetch_1_0(d_13, t);
    }
  t = h_123(t);
  return(t);
}
static ATerm v_9 (ATerm m_60, ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm g_79 = NULL;
  t = SSL_hashtable_put(o_60, m_60, n_60);
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_79);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_57, ATerm t)
{
  ATerm p_79 = NULL;
  t = table_hashtable_0_0(t);
  p_79 = t;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL;
        t = p_79;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_9(g_57, w_28, t);
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        {
          ATerm d_29 = NULL;
          t = g_57;
          t = table_create_0_0(t);
          t = p_79;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_9(g_57, d_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm s_79 = NULL;
  t = SSL_hashtable_create(u_60, v_60);
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_79);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,x_79 = NULL,y_79 = NULL;
  t_79 = t;
  t = term_u_44;
  x_79 = t;
  t = term_v_44;
  y_79 = t;
  t = t_79;
  t = new_hashtable_0_2(x_79, y_79, t);
  u_79 = t;
  t = t_79;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(t_79, u_79, v_79, t);
  t = t_79;
  return(t);
}
static ATerm o_9 (ATerm r_60, ATerm s_60, ATerm t)
{
  ATerm z_79 = NULL;
  t = SSL_hashtable_remove(s_60, r_60);
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_79);
  return(t);
}
static ATerm p_9 (ATerm w_60, ATerm t)
{
  ATerm a_80 = NULL;
  t = SSL_hashtable_destroy(w_60);
  a_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_80 = NULL;
  t = SSL_table_hashtable();
  b_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  c_80 = t;
  t = table_hashtable_0_0(t);
  d_80 = t;
  t = lookup_table_0_1(c_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(f_80, t);
  t = d_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(c_80, e_80, t);
  t = c_80;
  return(t);
}
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  static ATerm w_80 (ATerm t);
  static ATerm w_80 (ATerm t)
  {
    ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
    t_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_80;
      }
    else
      {
        ATerm v_29 = NULL,y_29 = NULL,b_30 = NULL,x_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_80 = ATgetFirst((ATermList) t);
            v_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_80);
        v_29 = t;
        t = u_80;
        t = e_104(t);
        y_29 = t;
        t = v_80;
        t = w_80(t);
        b_30 = t;
        t = (ATerm) ATinsert(CheckATermList(b_30), y_29);
        x_13 = t;
        t = SSLsetAnnotations(x_13, v_29);
      }
    return(t);
  }
  t = w_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_80 = ATgetFirst((ATermList) t);
      a_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_81 = NULL,f_81 = NULL;
        static ATerm e_13 (ATerm t);
        static ATerm e_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_81)), not_null(f_81));
          return(t);
        }
        t = a_81;
        t = l_0(t);
        if(((e_81 != NULL) && (e_81 != t)))
          _fail(t);
        else
          e_81 = t;
        t = z_80;
        t = j_0(t);
        if(((f_81 != NULL) && (f_81 != t)))
          _fail(t);
        else
          f_81 = t;
        t = a_81;
        t = reverse_acc_2_0(j_0, e_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,j_14 = NULL;
  n_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_81);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_81);
  j_14 = t;
  t = SSLsetAnnotations(j_14, l_81);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm p_81 = NULL;
  p_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_81), term_w_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_81 = NULL,k_81 = NULL;
      t = term_x_16;
      j_81 = t;
      t = term_t_43;
      k_81 = t;
      t = term_u_43;
      t = r_9(j_81, k_81, t);
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      t = fetch_1_0(f_13, t);
    }
  t = term_a_45;
  t = echo_0_0(t);
  t = term_k_43;
  h_81 = t;
  t = term_l_43;
  i_81 = t;
  t = term_b_45;
  t = r_9(h_81, i_81, t);
  t = reverse_acc_2_0(_id, h_13, t);
  t = map_1_0(i_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  static ATerm m_82 (ATerm t);
  static ATerm m_82 (ATerm t)
  {
    ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
    j_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_82 = ATgetFirst((ATermList) t);
        l_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_45 = t;
      int d_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_30 = NULL,e_31 = NULL,l_14 = NULL;
          t = SSLgetAnnotations(j_82);
          q_30 = t;
          t = k_82;
          t = o_104(t);
          e_31 = t;
          t = (ATerm) ATinsert(CheckATermList(l_82), e_31);
          l_14 = t;
          t = SSLsetAnnotations(l_14, q_30);
          LocalPopChoice(d_45);
        }
      else
        {
          t = c_45;
          {
            ATerm n_31 = NULL,u_31 = NULL,m_14 = NULL;
            t = SSLgetAnnotations(j_82);
            n_31 = t;
            t = l_82;
            t = m_82(t);
            u_31 = t;
            t = (ATerm) ATinsert(CheckATermList(u_31), k_82);
            m_14 = t;
            t = SSLsetAnnotations(m_14, n_31);
          }
        }
    }
    return(t);
  }
  t = m_82(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_45 = ATgetFirst((ATermList) t);
                ATerm h_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_82;
          }
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        t = (ATerm) ATinsert(ATempty, q_82);
      }
  }
  r_82 = t;
  t = term_s_41;
  s_82 = t;
  t = SSL_printnl(s_82, r_82);
  t = q_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL;
  t = term_x_16;
  w_82 = t;
  t = term_t_43;
  x_82 = t;
  t = term_u_43;
  t = r_9(w_82, x_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_9 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_hashtable_get(q_60, p_60);
  return(t);
}
static ATerm r_9 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm y_82 = NULL;
  t = lookup_table_0_1(n_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_9(o_57, y_82, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL;
  t = term_i_45;
  a_83 = t;
  t = term_l_15;
  b_83 = t;
  t = term_j_45;
  t = u_9(a_83, b_83, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  t = term_i_45;
  e_83 = t;
  t = term_l_15;
  f_83 = t;
  t = term_j_45;
  t = u_9(e_83, f_83, t);
  t = term_l_45;
  c_83 = t;
  t = term_l_15;
  d_83 = t;
  t = term_m_45;
  t = u_9(c_83, d_83, t);
  t = term_n_45;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_p_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_13, l_13, m_13, t);
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      t = Option_3_0(n_13, q_13, u_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,p_14 = NULL;
  l_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_83 = ATgetFirst((ATermList) t);
      i_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_83);
  g_83 = t;
  t = h_83;
  t = i_78(t);
  j_83 = t;
  t = i_83;
  t = j_78(t);
  k_83 = t;
  t = (ATerm) ATinsert(CheckATermList(k_83), j_83);
  p_14 = t;
  t = SSLsetAnnotations(p_14, g_83);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,v_83 = NULL,w_83 = NULL,s_14 = NULL;
  q_83 = t;
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_45;
        t = f_125(t);
        LocalPopChoice(u_45);
      }
    else
      {
        t = t_45;
      }
  }
  t = q_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_83 = ATgetFirst((ATermList) t);
      t_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_83);
  r_83 = t;
  t = term_t_43;
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_43, s_83);
  t = u_9(w_83, s_83, t);
  t = t_83;
  {
    static ATerm g_84 (ATerm t);
    static ATerm g_84 (ATerm t)
    {
      ATerm w_45 = t;
      int x_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_45 = t;
          int z_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_83 = NULL;
              z_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_83;
              LocalPopChoice(z_45);
            }
          else
            {
              t = y_45;
              t = f_125(t);
              t = Cons_2_0(_id, g_84, t);
            }
          LocalPopChoice(x_45);
        }
      else
        {
          t = w_45;
          {
            ATerm c_84 = NULL,d_84 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_84 = ATgetFirst((ATermList) t);
                d_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_84), (ATerm) ATmakeAppl(sym_Undefined_1, c_84));
          }
        }
      return(t);
    }
    t = g_84(t);
  }
  v_83 = t;
  t = (ATerm) ATinsert(CheckATermList(v_83), (ATerm) ATmakeAppl(sym_Program_1, s_83));
  s_14 = t;
  t = SSLsetAnnotations(s_14, r_83);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  if(match_string(t, "--help"))
    {
      t = t_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_84;
        }
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  t = term_o_44;
  u_84 = t;
  t = term_l_15;
  v_84 = t;
  t = term_a_46;
  t = u_9(u_84, v_84, t);
  t = term_b_46;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
  n_84 = t;
  t = term_k_43;
  o_84 = t;
  t = term_d_46;
  t = lookup_table_0_1(o_84, t);
  s_84 = t;
  t = term_l_43;
  p_84 = t;
  t = (ATerm) ATempty;
  q_84 = t;
  t = s_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(p_84, q_84, r_84, t);
  t = n_84;
  {
    static ATerm v_13 (ATerm t);
    static ATerm v_13 (ATerm t)
    {
      ATerm e_46 = t;
      int f_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_125(t);
          LocalPopChoice(f_46);
        }
      else
        {
          t = e_46;
          {
            ATerm g_46 = t;
            int h_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_13, y_13, z_13, t);
                LocalPopChoice(h_46);
              }
            else
              {
                t = g_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_13, t);
  }
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_85 = NULL;
        g_85 = t;
        {
          ATerm k_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_33 = NULL;
              t = g_85;
              {
                ATerm m_46 = t;
                int n_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_33 = NULL,l_33 = NULL;
                    t = term_x_16;
                    k_33 = t;
                    t = term_o_44;
                    l_33 = t;
                    t = term_q_44;
                    t = r_9(k_33, l_33, t);
                    LocalPopChoice(n_46);
                  }
                else
                  {
                    t = m_46;
                    t = fetch_1_0(b_14, t);
                  }
              }
              t = g_85;
              t = default_system_usage_0_0(t);
              t = term_u_42;
              g_33 = t;
              t = SSL_exit(g_33);
              LocalPopChoice(l_46);
            }
          else
            {
              t = k_46;
              {
                ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL;
                t = term_x_16;
                t_33 = t;
                t = term_i_45;
                v_33 = t;
                t = term_o_46;
                t = r_9(t_33, v_33, t);
                t = g_85;
                t = default_system_about_0_0(t);
                t = term_u_42;
                s_33 = t;
                t = SSL_exit(s_33);
              }
            }
        }
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
        {
          ATerm p_46 = t;
          int q_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
              static ATerm c_14 (ATerm t);
              static ATerm c_14 (ATerm t)
              {
                ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,w_14 = NULL;
                m_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_85);
                k_85 = t;
                t = l_85;
                if(((l_84 != NULL) && (l_84 != t)))
                  _fail(t);
                else
                  l_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_85);
                w_14 = t;
                t = SSLsetAnnotations(w_14, k_85);
                return(t);
              }
              t = fetch_1_0(c_14, t);
              t = term_x_14;
              i_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_r_46);
              j_85 = t;
              t = SSL_printnl(i_85, j_85);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_r_46));
              t = default_system_usage_0_0(t);
              t = term_z_16;
              h_85 = t;
              t = SSL_exit(h_85);
              LocalPopChoice(q_46);
            }
          else
            {
              t = p_46;
            }
        }
      }
  }
  m_84 = t;
  t = term_k_43;
  t = table_destroy_0_0(t);
  t = m_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t = parse_options_1_0(j_123, t);
  r_85 = t;
  t = term_y_33;
  t = table_create_0_0(t);
  t = term_y_33;
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_33, term_c_34, r_85);
  t = lookup_table_0_1(s_85, t);
  v_85 = t;
  t = term_c_34;
  t_85 = t;
  t = v_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(t_85, r_85, u_85, t);
  t = r_85;
  t = l_123(t);
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_123, t);
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        {
          ATerm u_46 = t;
          int v_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_46);
            }
          else
            {
              t = u_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        ATerm y_46 = t;
        int z_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_46);
          }
        else
          {
            t = y_46;
            {
              ATerm a_47 = t;
              int b_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_14, i_14, k_14, t);
                  LocalPopChoice(b_47);
                }
              else
                {
                  t = a_47;
                  {
                    ATerm c_47 = t;
                    int d_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_47);
                      }
                    else
                      {
                        t = c_47;
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
static ATerm f_14 (ATerm t)
{
  t = input_1_0(n_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL;
  t = term_v_41;
  x_85 = t;
  t = term_l_15;
  y_85 = t;
  t = term_e_47;
  t = u_9(x_85, y_85, t);
  t = term_f_47;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_g_47;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = output_1_0(o_14, t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,f_34 = NULL;
  t = ppgenerate_0_0(t);
  f_34 = t;
  t = term_h_47;
  z_33 = t;
  t = (ATerm) ATinsert(ATempty, f_34);
  a_34 = t;
  t = SSL_mkterm(z_33, a_34);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_14, default_usage_0_0, _id, f_14, t);
  return(t);
}

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
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_q_46;
ATerm term_n_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_y_45;
ATerm term_s_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_e_44;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_i_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_i_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_z_38;
ATerm term_o_38;
ATerm term_m_37;
ATerm term_c_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_f_33;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_t_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_p_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_v_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
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
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_q_16;
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
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_t_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(1);
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
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_b_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_u_17, term_v_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_c_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_l_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_a_15, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_z_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_k_19, term_n_19);
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
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_y_19, term_z_19);
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
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_q_20, term_s_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_e_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_22, term_g_22, term_j_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_o_22, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_22, term_t_22, term_u_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_22, term_y_22, term_z_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_23, term_f_23, term_g_23);
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
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_24, term_n_24, term_o_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_24, term_x_24, term_b_25);
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
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_o_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_x_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_e_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_t_30);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_y_33);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Arg_1, term_b_17);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_39, term_e_39);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_lit_1, term_x_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_lit_1, term_g_17);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_e_26);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_u_41);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_f_26);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_t_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_y_42, term_l_15);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_s_43);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_i_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_i_43, term_k_43);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_l_15);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_l_15);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_l_15);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym__3, term_i_43, term_k_43, (ATerm) ATempty);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_h_45);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_l_15);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm n_1 (ATerm x_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_100 (ATerm), ATerm t);
static ATerm j_8 (ATerm c_105 (ATerm), ATerm k_30, ATerm k_255, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm s_105 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm e_113 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm k_8 (ATerm o_62, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm m_8 (ATerm r_44, ATerm s_44, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t);
static ATerm n_8 (ATerm y_24, ATerm z_24, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm u_122 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm w_29, ATerm x_29, ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm p_8 (ATerm c_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_119 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm r_8 (ATerm a_57, ATerm b_57, ATerm c_57, ATerm t);
static ATerm s_8 (ATerm y_119 (ATerm), ATerm k_57, ATerm j_57, ATerm t);
static ATerm t_8 (ATerm l_62, ATerm m_62, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm z_26 (ATerm x_25, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
static ATerm u_8 (ATerm r_115 (ATerm), ATerm z_45, ATerm x_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm v_8 (ATerm i_56, ATerm j_56, ATerm t);
ATerm end_scope_1_0 (ATerm o_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_115 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm j_43 (ATerm u_36, ATerm v_36, ATerm w_36, ATerm e_37, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm x_8 (ATerm z_35, ATerm a_36, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm symbol2abox_1_0 (ATerm g_97 (ATerm), ATerm t);
ATerm _2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm f_62 (ATerm s_60, ATerm t_60, ATerm u_60, ATerm t);
ATerm number_node_1_0 (ATerm j_97 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm f_105 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm unquote_chars_2_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t);
static ATerm b_9 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm u_35, ATerm t_35, ATerm t);
static ATerm c_9 (ATerm e_109 (ATerm), ATerm q_35, ATerm p_35, ATerm t);
ATerm foldr_3_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
ATerm collect_om_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm f_71 (ATerm b_69, ATerm c_69, ATerm t);
static ATerm g_71 (ATerm i_69, ATerm j_69, ATerm t);
static ATerm h_71 (ATerm p_69, ATerm t);
static ATerm v_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm d_9 (ATerm s_62, ATerm t_62, ATerm t);
static ATerm e_9 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm g_9 (ATerm c_100 (ATerm), ATerm x_223, ATerm q_28, ATerm t);
static ATerm f_9 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm output_1_0 (ATerm f_124 (ATerm), ATerm t);
static ATerm p_72 (ATerm j_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_9 (ATerm m_28, ATerm t);
static ATerm i_9 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm j_9 (ATerm u_62, ATerm v_62, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_74 (ATerm z_72, ATerm t);
static ATerm b_74 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t);
static ATerm c_74 (ATerm n_73, ATerm o_73, ATerm p_73, ATerm t);
static ATerm k_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_9 (ATerm i_61, ATerm j_61, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_9 (ATerm d_56, ATerm e_56, ATerm c_56, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_9 (ATerm l_44, ATerm m_44, ATerm t);
ATerm foldr_2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_119 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm need_help_1_0 (ATerm w_123 (ATerm), ATerm t);
static ATerm u_9 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t);
ATerm lookup_table_0_1 (ATerm p_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_61, ATerm e_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_9 (ATerm a_61, ATerm b_61, ATerm t);
static ATerm o_9 (ATerm f_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_9 (ATerm y_60, ATerm z_60, ATerm t);
static ATerm q_9 (ATerm w_57, ATerm x_57, ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_125 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm parse_options_1_0 (ATerm t_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
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
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t);
            static ATerm a_0 (ATerm t)
            {
              t = h_1;
              return(t);
            }
            t = f_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
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
ATerm topdown_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  static ATerm e_0 (ATerm t);
  static ATerm e_0 (ATerm t)
  {
    t = topdown_1_0(f_100, t);
    return(t);
  }
  t = f_100(t);
  t = SRTS_all(e_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  static ATerm i_2 (ATerm t);
  static ATerm i_2 (ATerm t)
  {
    ATerm a_2 = NULL,g_2 = NULL,h_2 = NULL;
    h_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_2 = ATgetFirst((ATermList) t);
        g_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,w_0 = NULL,b_0 = NULL;
          t = SSLgetAnnotations(h_2);
          s_0 = t;
          t = g_2;
          t = i_2(t);
          w_0 = t;
          t = (ATerm) ATinsert(CheckATermList(w_0), a_2);
          b_0 = t;
          t = SSLsetAnnotations(b_0, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        t = k_105(t);
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
      static ATerm i_0 (ATerm t);
      static ATerm i_0 (ATerm t)
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
      t = at_end_1_0(i_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_113 (ATerm), ATerm t)
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
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,y_1 = NULL,z_1 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(z_3);
            j_1 = t;
            t = a_4;
            t = l_113(t);
            y_1 = t;
            t = c_4;
            t = filter_1_0(l_113, t);
            z_1 = t;
            t = (ATerm) ATinsert(CheckATermList(z_1), y_1);
            n_0 = t;
            t = SSLsetAnnotations(n_0, j_1);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = c_4;
            t = filter_1_0(l_113, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  g_4 = t;
  t = a_100(t);
  h_4 = t;
  t = term_x_14;
  i_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_4), h_4);
  j_4 = t;
  t = SSL_printnl(i_4, j_4);
  t = g_4;
  return(t);
}
static ATerm j_8 (ATerm c_105 (ATerm), ATerm k_30, ATerm k_255, ATerm t)
{
  static ATerm k_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm l_4 = NULL;
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_30, l_4);
    t = c_105(t);
    t = l_4;
    return(t);
  }
  t = k_255;
  t = SRTS_one(k_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
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
static ATerm v_0 (ATerm t)
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
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
          q_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
          t = j_8(u_0, n_4, q_4, t);
          t = n_4;
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          t = n_4;
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
              ATerm t_4 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
              t_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
              t = j_8(v_0, n_4, t_4, t);
              t = n_4;
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = n_4;
            }
        }
      else
        {
          ATerm w_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15);
          w_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15));
          t = j_8(y_0, n_4, w_4, t);
          t = n_4;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t);
  static ATerm b_6 (ATerm t)
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
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
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
        t = s_105(t);
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,b_3 = NULL;
      b_3 = t;
      t = SSL_explode_string(b_3);
      t = rtrim_1_0(t_0, t);
      v_2 = t;
      t = SSL_implode_string(v_2);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm u_6 = NULL,f_3 = NULL;
        u_6 = t;
        t = (ATerm) ATinsert(CheckATermList(u_6), term_l_15);
        {
          static ATerm a_1 (ATerm t);
          static ATerm a_1 (ATerm t)
          {
            ATerm i_3 = NULL,k_3 = NULL;
            i_3 = t;
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
                  t = t_0(t);
                  q_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_3), q_3);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, m_3);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_15;
                }
            }
            t = i_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_3 = ATgetFirst((ATermList) t);
                {
                  ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
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
ATerm at_suffix_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t);
  static ATerm s_7 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
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
ATerm drop_while_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm g_8 = NULL;
  static ATerm b_1 (ATerm t);
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
          ATerm i_16 = t;
          if((PushChoice() == 0))
            {
              t = e_113(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_16;
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
ATerm ltrim_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,w_5 = NULL;
      w_5 = t;
      t = SSL_explode_string(w_5);
      t = ltrim_1_0(r_0, t);
      t_5 = t;
      t = SSL_implode_string(t_5);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = drop_while_1_0(r_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL,g_6 = NULL;
      g_6 = t;
      t = SSL_explode_string(g_6);
      t = trim_1_0(q_0, t);
      d_6 = t;
      t = SSL_implode_string(d_6);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = ltrim_1_0(q_0, t);
      t = rtrim_1_0(q_0, t);
    }
  return(t);
}
static ATerm k_8 (ATerm o_62, ATerm t)
{
  t = SSL_fgetc(o_62);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      ATerm n_16 = t;
      int p_16 = stack_ptr;
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
          t = term_l_15;
          t = r_10(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
          LocalPopChoice(p_16);
        }
      else
        {
          t = n_16;
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
  ATerm w_10 = NULL,x_10 = NULL,a_11 = NULL,b_11 = NULL;
  w_10 = t;
  t = term_q_16;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, term_q_16);
  t = j_9(w_10, b_11, t);
  x_10 = t;
  t = read_text_from_stream_0_0(t);
  a_11 = t;
  t = x_10;
  t = fclose_0_0(t);
  t = a_11;
  return(t);
}
static ATerm m_8 (ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_44, s_44);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      t = SSL_subtr(r_44, s_44);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  t = term_t_16;
  {
    ATerm u_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,j_11 = NULL;
        t = term_x_16;
        g_11 = t;
        t = term_t_16;
        j_11 = t;
        t = term_y_16;
        t = q_9(g_11, j_11, t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = u_16;
        t = term_b_17;
      }
  }
  d_11 = t;
  t = term_b_17;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, term_b_17);
  t = m_8(d_11, f_11, t);
  e_11 = t;
  t = SSL_int_to_string(e_11);
  c_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_11), term_t_16);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_17);
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(ATempty, term_d_17));
      t = t_8(n_11, p_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          s_11 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(s_11, t_11, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  r_11 = t;
  t = xtc_new_file_0_0(t);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
  t = g_9(c_1, q_11, r_11, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_11);
  t = xtc_transform_file_2_0(t_121, u_121, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_8 (ATerm y_24, ATerm z_24, ATerm t)
{
  t = SSL_execvp(y_24, z_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,r_13 = NULL,s_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_13 = ATgetArgument(t, 0);
      {
        ATerm e_7 = NULL,f_7 = NULL;
        t = SSL_int_to_string(o_13);
        e_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), e_7), term_f_17);
        f_7 = t;
        t = SSL_concat_strings(f_7);
      }
    }
  else
    {
      ATerm y_7 = NULL,a_8 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
          s_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_13);
      y_7 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_13), term_i_17), y_7), term_h_17), o_13);
      a_8 = t;
      t = SSL_concat_strings(a_8);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_1 (ATerm t);
        static ATerm d_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_17 = ATgetArgument(t, 0);
              if((z_13 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_25), term_q_24), term_f_24), term_t_23), term_h_23), term_d_23), term_w_22), term_q_22), term_l_22), term_d_22), term_x_21), term_t_21), term_n_21), term_j_21), term_c_21), term_u_20), term_l_20), term_g_20), term_a_20), term_s_19), term_o_19), term_h_19), term_c_19), term_s_18), term_o_18), term_f_18), term_w_17), term_r_17);
        t = fetch_elem_1_0(d_1, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_13);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_14 = NULL,t_14 = NULL;
  g_14 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_25 = ATgetArgument(t, 0);
            t_14 = ATgetArgument(t, 1);
            {
              ATerm j_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_25);
        {
          ATerm l_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_8 = NULL,w_8 = NULL,y_8 = NULL;
              t = t_14;
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
              h_8 = t;
              t = term_x_14;
              w_8 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_8), term_v_25);
              y_8 = t;
              t = SSL_printnl(w_8, y_8);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, h_8), term_v_25));
              LocalPopChoice(p_25);
            }
          else
            {
              t = l_25;
              t = g_14;
            }
        }
      }
    else
      {
        t = g_25;
        t = g_14;
      }
  }
  t = g_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  f_15 = t;
  t = fork_0_0(t);
  e_15 = t;
  {
    ATerm w_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_15;
        t = r_98(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = w_25;
        t = SSL_waitpid(e_15);
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
        t = f_15;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,o_15 = NULL;
  o_15 = t;
  t = u_122(t);
  t = xtc_find_0_0(t);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_15, o_15);
  {
    static ATerm e_1 (ATerm t);
    static ATerm e_1 (ATerm t)
    {
      ATerm p_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_15, o_15);
      t = n_8(h_15, o_15, t);
      t = term_c_26;
      p_15 = t;
      t = SSL_exit(p_15);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
  }
  t = o_15;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_15 = NULL,w_15 = NULL;
      t = r_15;
      t = xtc_new_file_0_0(t);
      t_15 = t;
      t = p_0(t);
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(ATinsert(ATempty, t_15), term_e_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(o_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_15);
    }
  else
    {
      ATerm y_15 = NULL,z_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_15;
      t = xtc_new_file_0_0(t);
      y_15 = t;
      t = p_0(t);
      z_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_15), term_e_26), s_15), term_f_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(o_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_15);
    }
  return(t);
}
static ATerm l_8 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  t = x_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_29;
    }
  else
    {
      ATerm f_10 = NULL,n_10 = NULL,c_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_16 = ATgetFirst((ATermList) t);
          a_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_29);
      f_10 = t;
      t = a_17;
      {
        static ATerm y_10 (ATerm t);
        static ATerm y_10 (ATerm t)
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL;
              s_10 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_10;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm t_10 = NULL;
                t = Cons_2_0(_id, y_10, t);
                t_10 = t;
                t = (ATerm) ATinsert(CheckATermList(t_10), w_29);
              }
            }
          return(t);
        }
        t = y_10(t);
      }
      n_10 = t;
      t = (ATerm) ATinsert(CheckATermList(n_10), z_16);
      c_3 = t;
      t = SSLsetAnnotations(c_3, f_10);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm x_17 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_17, k_17);
      t = l_8(j_17, k_17, t);
      x_17 = t;
      t = (ATerm) ATinsert(CheckATermList(x_17), j_17);
    }
  return(t);
}
static ATerm p_8 (ATerm c_61, ATerm t)
{
  t = SSL_hashtable_keys(c_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  static ATerm g_1 (ATerm t);
  static ATerm g_1 (ATerm t)
  {
    ATerm e_18 = NULL,g_18 = NULL;
    e_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), e_18);
    t = q_9(not_null(y_17), e_18, t);
    g_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_18, g_18);
    return(t);
  }
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = lookup_table_0_1(y_17, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(z_17, t);
  t = map_1_0(g_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,n_18 = NULL,q_18 = NULL;
        t = term_x_16;
        n_18 = t;
        t = term_t_16;
        q_18 = t;
        t = term_y_16;
        t = q_9(n_18, q_18, t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_18, term_m_23);
        t = geq_0_0(t);
        t = k_18;
        t = v_119(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = k_18;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
        t = term_x_16;
        x_18 = t;
        t = term_t_16;
        y_18 = t;
        t = term_y_16;
        t = q_9(x_18, y_18, t);
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_18, term_i_20);
        t = geq_0_0(t);
        t = t_18;
        t = u_119(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = t_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  {
    ATerm u_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL,j_19 = NULL,m_19 = NULL;
        t = term_x_16;
        j_19 = t;
        t = term_t_16;
        m_19 = t;
        t = term_y_16;
        t = q_9(j_19, m_19, t);
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_19, term_i_18);
        t = geq_0_0(t);
        t = b_19;
        t = w_119(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = u_26;
        t = b_19;
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      if((k_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm a_57, ATerm b_57, ATerm c_57, ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,d_20 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
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
        t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
        t = q_9(a_57, b_57, t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATempty;
      }
  }
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_19, c_57);
  t = c_9(i_1, x_19, c_57, t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_57, b_57, w_19);
  t = lookup_table_0_1(a_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(b_57, w_19, d_20, t);
  t = v_19;
  return(t);
}
static ATerm s_8 (ATerm y_119 (ATerm), ATerm k_57, ATerm j_57, ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm n_20 = NULL,o_20 = NULL;
    if(match_cons(t, sym__2))
      {
        n_20 = ATgetArgument(t, 0);
        o_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, k_57, n_20, o_20);
    t = y_119(t);
    return(t);
  }
  t = j_57;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm t_8 (ATerm l_62, ATerm m_62, ATerm t)
{
  t = SSL_access(l_62, m_62);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm o_1 (ATerm t)
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
      ATerm p_20 = NULL,r_20 = NULL;
      p_20 = t;
      t = (ATerm) ATinsert(ATempty, term_p_27);
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATempty, term_p_27));
      t = t_8(p_20, r_20, t);
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
            ATerm v_27 = t;
            if((PushChoice() == 0))
              {
                ATerm x_20 = NULL,y_20 = NULL;
                x_20 = t;
                t = (ATerm) ATinsert(ATempty, term_d_17);
                y_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_20, (ATerm) ATinsert(ATempty, term_d_17));
                t = t_8(x_20, y_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_27;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(t_27);
          }
        else
          {
            t = q_27;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm x_23 = NULL,z_23 = NULL,a_24 = NULL;
  x_23 = t;
  t = term_x_14;
  z_23 = t;
  t = (ATerm) ATinsert(ATempty, term_y_27);
  a_24 = t;
  t = SSL_printnl(z_23, a_24);
  t = x_23;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_24 = NULL,g_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__3))
    {
      b_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      i_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_8(b_24, g_24, i_24, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  t = term_x_14;
  k_24 = t;
  t = (ATerm) ATinsert(ATempty, term_z_27);
  l_24 = t;
  t = SSL_printnl(k_24, l_24);
  t = j_24;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_24 = NULL,p_24 = NULL,s_24 = NULL;
  m_24 = t;
  t = term_x_14;
  p_24 = t;
  t = (ATerm) ATinsert(ATempty, term_y_27);
  s_24 = t;
  t = SSL_printnl(p_24, s_24);
  t = m_24;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,o_21 = NULL,b_22 = NULL,c_22 = NULL,h_22 = NULL,k_22 = NULL,m_22 = NULL,b_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  z_20 = t;
  t = if_verbose5_1_0(p_1, t);
  {
    ATerm b_28 = t;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = term_c_28;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_20);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATmakeAppl(sym_Imported_1, z_20));
        t = q_9(v_23, w_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_28;
      }
  }
  o_21 = t;
  t = term_c_28;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_e_28, (ATerm) ATinsert(ATempty, z_20));
  t = lookup_table_0_1(o_23, t);
  s_23 = t;
  t = term_e_28;
  p_23 = t;
  t = (ATerm) ATinsert(ATempty, z_20);
  q_23 = t;
  t = s_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(p_23, q_23, r_23, t);
  t = o_21;
  t = if_verbose4_1_0(s_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  a_21 = t;
  t = term_c_28;
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_28, a_21);
  t = s_8(b_2, b_23, a_21, t);
  t = if_verbose6_1_0(c_2, t);
  t = term_c_28;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_28, (ATerm)ATmakeAppl(sym_Imported_1, z_20), (ATerm) ATempty);
  t = lookup_table_0_1(b_22, t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, z_20);
  c_22 = t;
  t = (ATerm) ATempty;
  h_22 = t;
  t = m_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(c_22, h_22, k_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_28, (ATerm)ATmakeAppl(sym_Imported_1, z_20), (ATerm) ATempty);
  t = if_verbose4_1_0(d_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  static ATerm t_24 (ATerm t);
  static ATerm t_24 (ATerm t)
  {
    ATerm f_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_102(t);
        t = t_24(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = f_28;
        t = y_102(t);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_24 = NULL,w_24 = NULL;
      t = term_x_16;
      v_24 = t;
      t = term_o_28;
      w_24 = t;
      t = term_r_28;
      t = q_9(v_24, w_24, t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = j_28;
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
static ATerm j_2 (ATerm t)
{
  ATerm n_25 = NULL,r_25 = NULL;
  t = term_c_28;
  n_25 = t;
  t = term_x_28;
  r_25 = t;
  t = term_y_28;
  t = q_9(n_25, r_25, t);
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
        ATerm d_25 = NULL,k_25 = NULL;
        t = term_c_28;
        d_25 = t;
        t = term_e_28;
        k_25 = t;
        t = term_d_29;
        t = q_9(d_25, k_25, t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm m_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_25 = t;
          t = repeat_2_0(j_2, _id, t);
          t = m_25;
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
  t = term_e_29;
  return(t);
}
static ATerm z_26 (ATerm x_25, ATerm t)
{
  ATerm d_26 = NULL,g_26 = NULL,h_26 = NULL;
  t = term_c_28;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_25);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATmakeAppl(sym_Tool_1, x_25));
  t = q_9(g_26, h_26, t);
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
  t = term_e_29;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_c_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
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
                t = term_c_28;
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_26);
                r_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATmakeAppl(sym_Tool_1, i_26));
                t = q_9(q_26, r_26, t);
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
        ATerm y_26 = NULL,u_11 = NULL,v_11 = NULL;
        y_26 = t;
        t = term_x_14;
        u_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), y_26), term_q_29);
        v_11 = t;
        t = SSL_printnl(u_11, v_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), y_26), term_q_29);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      l_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          j_27 = ATgetArgument(t, 0);
          {
            ATerm z_11 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(l_27);
            z_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
            h_3 = t;
            t = SSLsetAnnotations(h_3, z_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_27;
        }
      LocalPopChoice(z_29);
      {
        static ATerm d_3 (ATerm t);
        static ATerm d_3 (ATerm t)
        {
          ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
          t = term_l_15;
          t = pass_verbose_0_0(t);
          m_27 = t;
          t = term_l_15;
          t = f_126(t);
          t = map_1_0(xtc_find_0_0, t);
          o_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_30, o_27);
          t = add_arg_flags_0_0(t);
          n_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(z_2, d_3, t);
      }
    }
  else
    {
      t = y_29;
      {
        static ATerm g_3 (ATerm t);
        static ATerm g_3 (ATerm t)
        {
          ATerm u_27 = NULL,a_28 = NULL,d_28 = NULL;
          t = term_l_15;
          t = pass_verbose_0_0(t);
          u_27 = t;
          t = term_l_15;
          t = f_126(t);
          t = map_1_0(xtc_find_0_0, t);
          d_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_30, d_28);
          t = add_arg_flags_0_0(t);
          a_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_27, a_28);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(e_3, g_3, t);
      }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_d_30;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_d_30;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_30);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_g_30;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm h_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29 = NULL,j_29 = NULL;
      j_29 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_29 = ATgetArgument(t, 0);
          {
            ATerm l_12 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(j_29);
            l_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_29);
            l_3 = t;
            t = SSLsetAnnotations(l_3, l_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_29;
        }
      LocalPopChoice(j_30);
      t = xtc_transform_file_2_0(j_3, pass_verbose_0_0, t);
    }
  else
    {
      t = h_30;
      t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
    }
  {
    ATerm l_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,s_29 = NULL;
        s_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_29 = ATgetArgument(t, 0);
            {
              ATerm v_12 = NULL,o_3 = NULL;
              t = SSLgetAnnotations(s_29);
              v_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_29);
              o_3 = t;
              t = SSLsetAnnotations(o_3, v_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_29;
          }
        LocalPopChoice(n_30);
        t = xtc_transform_file_2_0(u_3, pass_verbose_0_0, t);
      }
    else
      {
        t = l_30;
        t = xtc_transform_term_2_0(v_3, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(w_3, t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,m_30 = NULL;
        m_30 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_30 = ATgetArgument(t, 0);
            {
              ATerm g_13 = NULL,t_3 = NULL;
              t = SSLgetAnnotations(m_30);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_30);
              t_3 = t;
              t = SSLsetAnnotations(t_3, g_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_30;
          }
        LocalPopChoice(p_30);
        t = xtc_transform_file_2_0(x_3, pass_verbose_0_0, t);
      }
    else
      {
        t = o_30;
        t = xtc_transform_term_2_0(y_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm u_8 (ATerm r_115 (ATerm), ATerm z_45, ATerm x_45, ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  y_30 = t;
  t = r_115(t);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_30, z_45, x_45);
  t = r_9(s_30, z_45, x_45, t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL;
        t = term_t_30;
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_30, term_t_30);
        t = q_9(s_30, i_31, t);
        {
          ATerm w_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_30;
            }
        }
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_30, term_t_30, (ATerm) ATinsert(CheckATermList(x_30), (ATerm) ATinsert(CheckATermList(u_30), z_45)));
  t = lookup_table_0_1(s_30, t);
  d_31 = t;
  t = term_t_30;
  z_30 = t;
  t = (ATerm) ATinsert(CheckATermList(x_30), (ATerm) ATinsert(CheckATermList(u_30), z_45));
  b_31 = t;
  t = d_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(z_30, b_31, c_31, t);
  t = y_30;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm a_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_31 = NULL,u_13 = NULL;
      w_31 = t;
      t = term_g_31;
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_31, term_g_31);
      t = i_9(w_31, u_13, t);
      p_31 = t;
      t = SSL_mkstemp(p_31);
      LocalPopChoice(f_31);
    }
  else
    {
      t = a_31;
      {
        ATerm x_31 = NULL;
        t = term_h_31;
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
static ATerm b_4 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = P__tmpdir_0_0(t);
  e_32 = t;
  t = term_k_31;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, term_k_31);
  t = i_9(e_32, f_32, t);
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
  t = u_8(b_4, a_32, b_32, t);
  t = SSL_close(z_31);
  t = a_32;
  return(t);
}
static ATerm v_8 (ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  h_32 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_56, j_56);
        t = q_9(i_56, j_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_31 = ATgetFirst((ATermList) t);
            g_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_31);
        {
          ATerm i_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, i_56, j_56, g_32);
          t = lookup_table_0_1(i_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_9(j_56, g_32, i_32, t);
          t = (ATerm) ATmakeAppl(sym__3, i_56, j_56, g_32);
        }
      }
    else
      {
        t = l_31;
        {
          ATerm k_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, i_56, j_56);
          t = lookup_table_0_1(i_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_9(j_56, k_32, t);
          t = (ATerm) ATmakeAppl(sym__2, i_56, j_56);
        }
      }
  }
  t = h_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  r_32 = t;
  t = o_115(t);
  q_32 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_32 = NULL;
        t = term_t_30;
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_t_30);
        t = q_9(q_32, v_32, t);
        {
          ATerm s_31 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_31;
            }
        }
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
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
  t = (ATerm) ATmakeAppl(sym__3, q_32, term_t_30, o_32);
  t = lookup_table_0_1(q_32, t);
  u_32 = t;
  t = term_t_30;
  s_32 = t;
  t = u_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(s_32, o_32, t_32, t);
  t = p_32;
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm w_32 = NULL;
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, w_32);
      t = v_8(q_32, w_32, t);
      return(t);
    }
    t = map_1_0(d_4, t);
  }
  t = r_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm t_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_119(t);
      t = h_119(t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = t_31;
      t = h_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_115 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  z_32 = t;
  t = n_115(t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, term_t_30);
  {
    ATerm y_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_32 = ATgetArgument(t, 0);
            ATerm j_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_30;
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_32, term_t_30);
        t = q_9(y_32, j_33, t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
  }
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_32, term_t_30, (ATerm) ATinsert(CheckATermList(a_33), (ATerm) ATempty));
  t = lookup_table_0_1(y_32, t);
  e_33 = t;
  t = term_t_30;
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
  t = u_9(b_33, c_33, d_33, t);
  t = z_32;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_34);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = b_34;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm p_33 = NULL;
    p_33 = t;
    {
      ATerm n_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = NULL,u_33 = NULL;
          t = term_j_31;
          r_33 = t;
          t = term_t_30;
          u_33 = t;
          t = term_f_33;
          t = q_9(r_33, u_33, t);
          LocalPopChoice(x_32);
        }
      else
        {
          t = n_32;
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
          ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_33;
    t = map_1_0(o_4, t);
    t = p_33;
    t = end_scope_1_0(s_4, t);
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  t = restore_always_2_0(g_122, m_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm n_34 = NULL,q_34 = NULL,r_34 = NULL;
  r_34 = t;
  t = xtc_new_file_0_0(t);
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_34, r_34);
  t = g_9(y_4, q_34, r_34, t);
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
static ATerm y_4 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(match_cons(i_33, sym_Stream_1))
        {
          s_34 = ATgetArgument(i_33, 0);
        }
      else
        _fail(t);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(s_34, t_34, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm e_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = xtc_temp_files_1_0(v_4, t);
  e_34 = t;
  t = term_x_14;
  i_34 = t;
  t = (ATerm) ATinsert(ATempty, term_n_33);
  j_34 = t;
  t = SSL_printnl(i_34, j_34);
  t = e_34;
  t = debug_1_0(z_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  static ATerm w_34 (ATerm t);
  static ATerm w_34 (ATerm t)
  {
    ATerm q_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_101(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = q_33;
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
  t = term_x_33;
  c_35 = t;
  t = term_y_33;
  h_35 = t;
  t = term_c_34;
  t = q_9(c_35, h_35, t);
  return(t);
}
static ATerm j_43 (ATerm u_36, ATerm v_36, ATerm w_36, ATerm e_37, ATerm t)
{
  t = w_36;
  t = fetch_1_0(a_5, t);
  t = w_36;
  {
    ATerm d_34 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_34;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, u_36, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, v_36)), (ATerm) ATmakeAppl(sym_attrs_1, w_36));
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
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
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
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
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
static ATerm t_6 (ATerm t)
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
static ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL,t_37 = NULL,v_37 = NULL,x_37 = NULL,z_37 = NULL,a_38 = NULL;
  t_37 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_37 = ATgetArgument(t, 0);
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
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm k_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(h_34);
            t = v_37;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_37 = ATgetFirst((ATermList) t);
                o_37 = (ATerm) ATgetNext((ATermList) t);
                t = o_37;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = l_37;
                    {
                      ATerm l_34 = t;
                      int m_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm o_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_34);
                          {
                            ATerm p_34 = t;
                            int u_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(b_5, t);
                                t = t_37;
                                LocalPopChoice(u_34);
                              }
                            else
                              {
                                t = p_34;
                                {
                                  ATerm v_34 = t;
                                  int x_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_38;
                                      t = fetch_1_0(c_5, t);
                                      t = t_37;
                                      LocalPopChoice(x_34);
                                    }
                                  else
                                    {
                                      t = v_34;
                                      t = t_37;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = l_34;
                          {
                            ATerm y_34 = t;
                            int z_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(e_5, t);
                                t = t_37;
                                LocalPopChoice(z_34);
                              }
                            else
                              {
                                t = y_34;
                                {
                                  ATerm a_35 = t;
                                  int b_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_38;
                                      t = fetch_1_0(g_5, t);
                                      t = t_37;
                                      LocalPopChoice(b_35);
                                    }
                                  else
                                    {
                                      t = a_35;
                                      t = a_38;
                                      t = fetch_1_0(i_5, t);
                                      t = t_37;
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
                      ATerm d_35 = t;
                      int e_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(j_5, t);
                          t = t_37;
                          LocalPopChoice(e_35);
                        }
                      else
                        {
                          t = d_35;
                          {
                            ATerm f_35 = t;
                            int g_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(k_5, t);
                                t = t_37;
                                LocalPopChoice(g_35);
                              }
                            else
                              {
                                t = f_35;
                                t = a_38;
                                t = fetch_1_0(l_5, t);
                                t = t_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm i_35 = t;
                int j_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(n_5, t);
                    t = t_37;
                    LocalPopChoice(j_35);
                  }
                else
                  {
                    t = i_35;
                    {
                      ATerm k_35 = t;
                      int l_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(o_5, t);
                          t = t_37;
                          LocalPopChoice(l_35);
                        }
                      else
                        {
                          t = k_35;
                          t = a_38;
                          t = fetch_1_0(p_5, t);
                          t = t_37;
                        }
                    }
                  }
              }
          }
        else
          {
            t = g_34;
            if(match_cons(t, sym_cf_1))
              {
                p_37 = ATgetArgument(t, 0);
                t = p_37;
                if(match_cons(t, sym_sort_1))
                  {
                    s_37 = ATgetArgument(t, 0);
                    t = v_37;
                    {
                      ATerm m_35 = t;
                      int n_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(q_5, t);
                          t = t_37;
                          LocalPopChoice(n_35);
                        }
                      else
                        {
                          t = m_35;
                          {
                            ATerm o_35 = t;
                            int r_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(r_5, t);
                                t = t_37;
                                LocalPopChoice(r_35);
                              }
                            else
                              {
                                t = o_35;
                                {
                                  ATerm s_35 = t;
                                  int v_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_43(v_37, s_37, a_38, t_37, t);
                                      LocalPopChoice(v_35);
                                    }
                                  else
                                    {
                                      t = s_35;
                                      t = a_38;
                                      t = fetch_1_0(u_5, t);
                                      t = t_37;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = v_37;
                    {
                      ATerm w_35 = t;
                      int x_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(p_6, t);
                          t = t_37;
                          LocalPopChoice(x_35);
                        }
                      else
                        {
                          t = w_35;
                          {
                            ATerm y_35 = t;
                            int b_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_38;
                                t = fetch_1_0(s_6, t);
                                t = t_37;
                                LocalPopChoice(b_36);
                              }
                            else
                              {
                                t = y_35;
                                t = a_38;
                                t = fetch_1_0(t_6, t);
                                t = t_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = v_37;
                {
                  ATerm c_36 = t;
                  int d_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_38;
                      t = fetch_1_0(w_6, t);
                      t = t_37;
                      LocalPopChoice(d_36);
                    }
                  else
                    {
                      t = c_36;
                      {
                        ATerm e_36 = t;
                        int f_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_38;
                            t = fetch_1_0(x_6, t);
                            t = t_37;
                            LocalPopChoice(f_36);
                          }
                        else
                          {
                            t = e_36;
                            t = a_38;
                            t = fetch_1_0(y_6, t);
                            t = t_37;
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
              s_37 = ATgetArgument(t, 0);
              t = v_37;
              {
                ATerm g_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(z_6, t);
                    t = t_37;
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = g_36;
                    {
                      ATerm i_36 = t;
                      int j_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(a_7, t);
                          t = t_37;
                          LocalPopChoice(j_36);
                        }
                      else
                        {
                          t = i_36;
                          {
                            ATerm k_36 = t;
                            int l_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_43(v_37, s_37, a_38, t_37, t);
                                LocalPopChoice(l_36);
                              }
                            else
                              {
                                t = k_36;
                                t = a_38;
                                t = fetch_1_0(b_7, t);
                                t = t_37;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = v_37;
              {
                ATerm m_36 = t;
                int n_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38;
                    t = fetch_1_0(c_7, t);
                    t = t_37;
                    LocalPopChoice(n_36);
                  }
                else
                  {
                    t = m_36;
                    {
                      ATerm o_36 = t;
                      int p_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_38;
                          t = fetch_1_0(d_7, t);
                          t = t_37;
                          LocalPopChoice(p_36);
                        }
                      else
                        {
                          t = o_36;
                          t = a_38;
                          t = fetch_1_0(g_7, t);
                          t = t_37;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = v_37;
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_38;
                t = fetch_1_0(h_7, t);
                t = t_37;
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                {
                  ATerm s_36 = t;
                  int t_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_38;
                      t = fetch_1_0(i_7, t);
                      t = t_37;
                      LocalPopChoice(t_36);
                    }
                  else
                    {
                      t = s_36;
                      t = a_38;
                      t = fetch_1_0(j_7, t);
                      t = t_37;
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm x_8 (ATerm z_35, ATerm a_36, ATerm t)
{
  t = SSL_mkterm(z_35, a_36);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm g_44 = NULL,j_44 = NULL,n_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      n_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_44;
  if(match_cons(t, sym_alt_2))
    {
      g_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_44 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, g_44, j_44);
            t = flat_alt_0_0(t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), n_44);
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            t = (ATerm) ATinsert(ATinsert(ATempty, p_44), n_44);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, p_44), n_44);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_43;
        {
          ATerm b_37 = t;
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
                      ATerm c_37 = ATgetFirst((ATermList) t);
                      ATerm d_37 = (ATerm) ATgetNext((ATermList) t);
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
              t = b_37;
            }
        }
        t = (ATerm) ATinsert(ATempty, z_43);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = z_43;
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
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          r_50 = ATgetArgument(t, 0);
          s_50 = ATgetArgument(t, 1);
          {
            ATerm h_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_37);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, r_50, s_50);
    }
  else
    {
      t = f_37;
      if(match_cons(t, sym_iter_n_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm i_37 = ATgetArgument(t, 1);
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
  ATerm o_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Arg_1))
    {
      o_16 = ATgetArgument(t, 0);
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_17 = NULL,d_5 = NULL;
            t = SSLgetAnnotations(v_16);
            t_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, o_16);
            d_5 = t;
            t = SSLsetAnnotations(d_5, t_17);
            t = term_m_37;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = v_16;
          }
      }
    }
  else
    {
      t = v_16;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,n_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  static ATerm f_53 (ATerm t);
  static ATerm f_53 (ATerm t)
  {
    static ATerm j_53 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t);
    static ATerm k_53 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm c_51, ATerm t);
    static ATerm j_53 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t)
    {
      ATerm y_49 = NULL,k_50 = NULL,e_4 = NULL;
      t = SSLgetAnnotations(u_49);
      y_49 = t;
      t = w_49;
      t = _2_0(_id, l_7, t);
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_49, k_50);
      e_4 = t;
      t = SSLsetAnnotations(e_4, y_49);
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
      ATerm n_37 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm r_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(q_37);
          t = (ATerm) ATempty;
        }
      else
        {
          t = n_37;
          if(match_cons(t, sym__2))
            {
              v_52 = ATgetArgument(t, 0);
              x_52 = ATgetArgument(t, 1);
              t = x_52;
              {
                ATerm u_37 = t;
                int w_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm y_37 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_37);
                    t = l_52;
                    {
                      ATerm b_38 = t;
                      int c_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm d_38 = ATgetArgument(t, 0);
                              ATerm e_38 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_38);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = b_38;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = u_37;
                    {
                      ATerm f_38 = t;
                      int g_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm h_38 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(g_38);
                          t = l_52;
                          {
                            ATerm i_38 = t;
                            int j_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm k_38 = ATgetArgument(t, 0);
                                    ATerm l_38 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(j_38);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = i_38;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = f_38;
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
                                        ATerm m_38 = t;
                                        int n_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_15 = NULL,u_15 = NULL,v_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_5 = NULL;
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
                                            q_15 = t;
                                            t = term_o_38;
                                            v_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_o_38, q_15);
                                            t = x_8(v_15, q_15, t);
                                            u_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_52, r_52), (ATerm) ATmakeAppl(sym__2, v_52, u_15));
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
                                            a_16 = t;
                                            t = b_16;
                                            t = topdown_1_0(n_7, t);
                                            d_16 = t;
                                            t = (ATerm) ATinsert(CheckATermList(c_16), d_16);
                                            f_5 = t;
                                            t = SSLsetAnnotations(f_5, a_16);
                                            LocalPopChoice(n_38);
                                          }
                                        else
                                          {
                                            t = m_38;
                                            {
                                              ATerm p_38 = t;
                                              int q_38 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_53(g_52, l_52, s_52, t);
                                                  LocalPopChoice(q_38);
                                                }
                                              else
                                                {
                                                  t = p_38;
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
                                        ATerm r_38 = t;
                                        int s_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
                                            LocalPopChoice(s_38);
                                          }
                                        else
                                          {
                                            t = r_38;
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
                                        ATerm t_38 = t;
                                        int u_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
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
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_52, r_52), (ATerm) ATmakeAppl(sym__2, v_52, f_52));
                                                  t = f_53(t);
                                                  LocalPopChoice(w_38);
                                                }
                                              else
                                                {
                                                  t = v_38;
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
                                        ATerm x_38 = t;
                                        int y_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_53(g_52, l_52, s_52, t);
                                            LocalPopChoice(y_38);
                                          }
                                        else
                                          {
                                            t = x_38;
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
  t = g_97(t);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, r_47);
  t = f_53(t);
  return(t);
}
ATerm _2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,t_53 = NULL,w_53 = NULL,x_53 = NULL,s_5 = NULL;
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
  t = y_80(t);
  t_53 = t;
  t = r_53;
  t = z_80(t);
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, w_53);
  s_5 = t;
  t = SSLsetAnnotations(s_5, p_53);
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
static ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm v_57 = NULL,y_57 = NULL,z_57 = NULL,b_58 = NULL,h_6 = NULL;
  z_57 = t;
  if(match_cons(t, sym_lit_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, y_57);
  h_6 = t;
  t = SSLsetAnnotations(h_6, v_57);
  if(match_cons(t, sym_lit_1))
    {
      b_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, b_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_58 = ATgetArgument(t, 0);
          {
            ATerm a_39 = ATgetArgument(t, 1);
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
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,o_6 = NULL,w_59 = NULL,e_59 = NULL,l_6 = NULL;
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
  l_6 = t;
  t = SSLsetAnnotations(l_6, a_59);
  if(match_cons(t, sym_lit_1))
    {
      e_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, e_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_59 = ATgetArgument(t, 0);
          {
            ATerm b_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_59);
    }
  v_58 = t;
  t = z_58;
  t = _2_0(_id, z_7, t);
  if(match_cons(t, sym_lit_1))
    {
      w_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, w_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_59 = ATgetArgument(t, 0);
          {
            ATerm c_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_59);
    }
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
  o_6 = t;
  t = SSLsetAnnotations(o_6, x_58);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_39), (ATerm) ATinsert(ATinsert(ATempty, w_58), v_58));
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      u_59 = ATgetArgument(t, 0);
      {
        ATerm u_19 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(t_59);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, u_59);
        m_6 = t;
        t = SSLsetAnnotations(m_6, u_19);
      }
    }
  else
    {
      ATerm f_20 = NULL,n_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          u_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_59);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, u_59);
      n_6 = t;
      t = SSLsetAnnotations(n_6, f_20);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm b_60 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      b_60 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, b_60));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_60 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
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
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,w_55 = NULL,x_55 = NULL,f_56 = NULL,i_6 = NULL,n_57 = NULL,f_6 = NULL,g_57 = NULL,h_57 = NULL;
      t = reverse_acc_2_0(_id, r_7, t);
      f_56 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_55 = ATgetFirst((ATermList) t);
          q_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_56);
      o_55 = t;
      t = p_55;
      if(match_cons(t, sym__2))
        {
          u_55 = ATgetArgument(t, 0);
          w_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_55);
      t_55 = t;
      t = w_55;
      if(match_cons(t, sym_iter_1))
        {
          g_57 = ATgetArgument(t, 0);
          {
            ATerm d_18 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(w_55);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, g_57);
            v_5 = t;
            t = SSLsetAnnotations(v_5, d_18);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              g_57 = ATgetArgument(t, 0);
              {
                ATerm j_18 = NULL,a_6 = NULL;
                t = SSLgetAnnotations(w_55);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, g_57);
                a_6 = t;
                t = SSLsetAnnotations(a_6, j_18);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  g_57 = ATgetArgument(t, 0);
                  h_57 = ATgetArgument(t, 1);
                  {
                    ATerm a_19 = NULL,c_6 = NULL;
                    t = SSLgetAnnotations(w_55);
                    a_19 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, g_57, h_57);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, a_19);
                  }
                }
              else
                {
                  ATerm l_19 = NULL,e_6 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      g_57 = ATgetArgument(t, 0);
                      h_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_55);
                  l_19 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, g_57, h_57);
                  e_6 = t;
                  t = SSLsetAnnotations(e_6, l_19);
                }
            }
        }
      x_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_55, x_55);
      f_6 = t;
      t = SSLsetAnnotations(f_6, t_55);
      if(match_cons(t, sym_lit_1))
        {
          n_57 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, n_57));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              n_57 = ATgetArgument(t, 0);
              {
                ATerm j_39 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, n_57);
        }
      r_55 = t;
      t = q_55;
      t = map_1_0(t_7, t);
      s_55 = t;
      t = (ATerm) ATinsert(CheckATermList(s_55), r_55);
      i_6 = t;
      t = SSLsetAnnotations(i_6, o_55);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_39 = t;
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
            t = k_39;
          }
      }
      t = i_55;
      t = reverse_acc_2_0(_id, u_7, t);
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, n_55)));
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,k_6 = NULL,q_58 = NULL;
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
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_38, (ATerm) ATmakeAppl(sym_S_1, q_58));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    q_58 = ATgetArgument(t, 0);
                    {
                      ATerm n_39 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, q_58);
              }
            m_55 = t;
            t = m_58;
            {
              ATerm o_39 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_39;
                }
            }
            t = reverse_acc_2_0(_id, w_7, t);
            k_55 = t;
            t = (ATerm) ATinsert(CheckATermList(k_55), m_55);
            k_6 = t;
            t = SSLsetAnnotations(k_6, k_58);
            t = k_55;
            t = pair_0_0(t);
            t = map_1_0(x_7, t);
            l_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_55), l_55));
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            t = map_1_0(b_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm p_39 = t;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,z_8 = NULL;
      n_60 = t;
      if(match_cons(t, sym_lit_1))
        {
          m_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_60);
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, m_60);
      z_8 = t;
      t = SSLsetAnnotations(z_8, l_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
static ATerm f_62 (ATerm s_60, ATerm t_60, ATerm u_60, ATerm t)
{
  ATerm l_61 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(s_60);
  l_61 = t;
  t = u_60;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  p_9 = t;
  t = SSLsetAnnotations(p_9, l_61);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm r_60 = NULL;
  static ATerm e_62 (ATerm t);
  static ATerm e_62 (ATerm t)
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
          ATerm q_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_62(p_61, q_61, r_61, t);
              LocalPopChoice(r_39);
            }
          else
            {
              t = q_39;
              {
                ATerm s_39 = t;
                int t_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
                    t = s_61;
                    t = j_97(t);
                    t = term_b_17;
                    z_61 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_61, term_b_17);
                    t = l_9(q_61, z_61, t);
                    y_61 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_61, t_61);
                    t = e_62(t);
                    x_61 = t;
                    t = (ATerm) ATinsert(CheckATermList(x_61), (ATerm) ATmakeAppl(sym__2, q_61, s_61));
                    LocalPopChoice(t_39);
                  }
                else
                  {
                    t = s_39;
                    {
                      ATerm d_62 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, q_61, t_61);
                      t = e_62(t);
                      d_62 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_62), s_61);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = f_62(p_61, q_61, r_61, t);
      }
    return(t);
  }
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, r_60);
  t = e_62(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm k_62 = NULL,n_62 = NULL;
  n_62 = t;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm w_39 = ATgetArgument(t, 0);
            k_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_39);
        t = k_62;
      }
    else
      {
        t = u_39;
        t = n_62;
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
ATerm symbols2pp_entries_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
  t = number_nonterminals_0_0(t);
  b_63 = t;
  t = make_0_0(t);
  y_62 = t;
  t = b_63;
  {
    static ATerm d_8 (ATerm t);
    static ATerm d_8 (ATerm t)
    {
      static ATerm e_8 (ATerm t);
      static ATerm e_8 (ATerm t)
      {
        ATerm c_63 = NULL;
        t = term_l_15;
        t = f_97(t);
        c_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_63, (ATerm) ATempty);
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
  t = f_97(t);
  a_63 = t;
  t = (ATerm) ATinsert(CheckATermList(z_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, a_63), y_62));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm f_63 = NULL;
  static ATerm f_8 (ATerm t);
  static ATerm f_8 (ATerm t)
  {
    t = f_105(t);
    if(((f_63 != NULL) && (f_63 != t)))
      _fail(t);
    else
      f_63 = t;
    return(t);
  }
  t = fetch_1_0(f_8, t);
  t = not_null(f_63);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,y_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym_term_1))
    {
      a_64 = ATgetArgument(t, 0);
      t = a_64;
      if(match_cons(t, sym_appl_2))
        {
          y_63 = ATgetArgument(t, 0);
          s_63 = ATgetArgument(t, 1);
          {
            ATerm t_20 = NULL;
            t = y_63;
            if(match_cons(t, sym_uqlit_1))
              {
                r_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_63;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
              _fail(t);
            t = s_63;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_63 = ATgetFirst((ATermList) t);
                w_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_63;
            if(match_cons(t, sym_fun_1))
              {
                u_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_63;
            if(match_cons(t, sym_qlit_1))
              {
                v_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_63;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_explode_string(v_63);
            t = unquote_chars_2_0(o_8, q_8, t);
            t_20 = t;
            t = SSL_implode_string(t_20);
          }
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              y_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_63;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          a_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_64;
    }
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
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(i_8, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  x_64 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      d_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
      f_65 = ATgetArgument(t, 2);
      w_64 = ATgetArgument(t, 3);
      {
        ATerm k_65 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_39)), e_65), (ATerm) ATinsert(ATinsert(ATempty, term_y_39), (ATerm) ATmakeAppl(sym_lit_1, d_65)));
        t = concat_0_0(t);
        k_65 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, k_65, f_65, w_64);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm f_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          d_65 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
          f_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_64;
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL;
            t = f_65;
            if(match_cons(t, sym_attrs_1))
              {
                g_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_21;
            t = get_cnstr_name_0_0(t);
            f_21 = t;
            LocalPopChoice(c_40);
            {
              static ATerm a_9 (ATerm t);
              static ATerm a_9 (ATerm t)
              {
                t = f_21;
                return(t);
              }
              t = d_65;
              t = symbols2pp_entries_1_0(a_9, t);
            }
          }
        else
          {
            t = b_40;
            {
              ATerm d_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(e_40);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = d_40;
                  {
                    ATerm f_40 = t;
                    int g_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_40 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_21 = NULL;
                            h_21 = t;
                            t = term_i_40;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(m_9, t);
                            t = h_21;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_40;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(g_40);
                      }
                    else
                      {
                        t = f_40;
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
ATerm at_last_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  static ATerm i_66 (ATerm t);
  static ATerm i_66 (ATerm t)
  {
    ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
    f_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_66 = ATgetFirst((ATermList) t);
        h_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_40 = t;
      int k_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_21 = NULL,w_9 = NULL;
          t = SSLgetAnnotations(f_66);
          s_21 = t;
          t = h_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(h_66), g_66);
          w_9 = t;
          t = SSLsetAnnotations(w_9, s_21);
          t = v_105(t);
          LocalPopChoice(k_40);
        }
      else
        {
          t = j_40;
          {
            ATerm e_22 = NULL,i_22 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(f_66);
            e_22 = t;
            t = h_66;
            t = i_66(t);
            i_22 = t;
            t = (ATerm) ATinsert(CheckATermList(i_22), g_66);
            x_9 = t;
            t = SSLsetAnnotations(x_9, e_22);
          }
        }
    }
    return(t);
  }
  t = i_66(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_66 = ATgetFirst((ATermList) t);
      p_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_66;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_66;
    }
  else
    {
      t = p_66;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm x_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_40 = ATgetFirst((ATermList) t);
      x_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_66;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_66 = ATgetFirst((ATermList) t);
      {
        ATerm m_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_66;
  t = q_114(t);
  t = u_66;
  t = last_0_0(t);
  t = r_114(t);
  t = u_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_40 = ATgetFirst((ATermList) t);
      v_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_66;
  t = at_last_1_0(s_9, t);
  return(t);
}
static ATerm b_9 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm u_35, ATerm t_35, ATerm t)
{
  t = i_109(t);
  {
    static ATerm a_10 (ATerm t);
    static ATerm a_10 (ATerm t)
    {
      ATerm y_66 = NULL;
      y_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_35, y_66);
      t = h_109(t);
      return(t);
    }
    t = fetch_1_0(a_10, t);
  }
  t = t_35;
  return(t);
}
static ATerm c_9 (ATerm e_109 (ATerm), ATerm q_35, ATerm p_35, ATerm t)
{
  static ATerm o_67 (ATerm t);
  static ATerm o_67 (ATerm t)
  {
    ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
    j_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_67 = ATgetFirst((ATermList) t);
            l_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_40 = t;
          int p_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_67;
              {
                static ATerm b_10 (ATerm t);
                static ATerm b_10 (ATerm t)
                {
                  t = p_35;
                  return(t);
                }
                t = b_9(e_109, b_10, k_67, l_67, t);
              }
              t = o_67(t);
              LocalPopChoice(p_40);
            }
          else
            {
              t = o_40;
              {
                ATerm s_22 = NULL,v_22 = NULL,j_10 = NULL;
                t = SSLgetAnnotations(j_67);
                s_22 = t;
                t = l_67;
                t = o_67(t);
                v_22 = t;
                t = (ATerm) ATinsert(CheckATermList(v_22), k_67);
                j_10 = t;
                t = SSLsetAnnotations(j_10, s_22);
              }
            }
        }
      }
    return(t);
  }
  t = q_35;
  t = o_67(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  r_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_67;
      t = j_112(t);
    }
  else
    {
      ATerm w_67 = NULL,x_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_67 = ATgetFirst((ATermList) t);
          t_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_67;
      t = l_112(t);
      w_67 = t;
      t = t_67;
      t = foldr_3_0(j_112, k_112, l_112, t);
      x_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_67, x_67);
      t = k_112(t);
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_68 = NULL;
      t = b_111(t);
      a_68 = t;
      t = (ATerm) ATinsert(ATempty, a_68);
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
        ATerm a_23 = NULL,c_23 = NULL;
        static ATerm e_10 (ATerm t);
        static ATerm e_10 (ATerm t)
        {
          t = collect_om_2_0(b_111, c_111, t);
          return(t);
        }
        c_23 = t;
        t = SSL_explode_term(c_23);
        if(match_cons(t, sym__2))
          {
            ATerm s_40 = ATgetArgument(t, 0);
            a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_23;
        t = foldr_3_0(d_10, c_111, e_10, t);
      }
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm q_68 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_68;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL;
  if(match_cons(t, sym__2))
    {
      r_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(l_10, r_68, s_68, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      if((t_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  v_69 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_69 = ATgetArgument(t, 0);
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL,k_23 = NULL,l_23 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(v_69);
            i_23 = t;
            t = SSL_explode_string(t_69);
            t = unquote_chars_2_0(m_11, o_11, t);
            l_23 = t;
            t = SSL_implode_string(l_23);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, k_23);
            u_10 = t;
            t = SSLsetAnnotations(u_10, i_23);
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            t = v_69;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          t_69 = ATgetArgument(t, 0);
          t = t_69;
          if(match_cons(t, sym_qlit_1))
            {
              u_69 = ATgetArgument(t, 0);
              {
                ATerm v_40 = t;
                int w_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_71(v_69, t_69, t);
                    LocalPopChoice(w_40);
                  }
                else
                  {
                    t = v_40;
                    {
                      ATerm x_40 = t;
                      int y_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_71(u_69, t);
                          LocalPopChoice(y_40);
                        }
                      else
                        {
                          t = x_40;
                          t = v_69;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm z_40 = t;
              int a_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_71(v_69, t_69, t);
                  LocalPopChoice(a_41);
                }
              else
                {
                  t = z_40;
                  t = v_69;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              t_69 = ATgetArgument(t, 0);
              {
                ATerm b_41 = t;
                int c_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_71(v_69, t_69, t);
                    LocalPopChoice(c_41);
                  }
                else
                  {
                    t = b_41;
                    t = v_69;
                  }
              }
            }
          else
            {
              t = v_69;
            }
        }
    }
  return(t);
}
static ATerm f_71 (ATerm b_69, ATerm c_69, ATerm t)
{
  ATerm d_69 = NULL,f_69 = NULL,g_69 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(b_69);
  d_69 = t;
  t = SSL_explode_string(c_69);
  t = unquote_chars_2_0(v_10, z_10, t);
  g_69 = t;
  t = SSL_implode_string(g_69);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, f_69);
  o_10 = t;
  t = SSLsetAnnotations(o_10, d_69);
  return(t);
}
static ATerm g_71 (ATerm i_69, ATerm j_69, ATerm t)
{
  ATerm k_69 = NULL,m_69 = NULL,n_69 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(i_69);
  k_69 = t;
  t = SSL_explode_string(j_69);
  t = unquote_chars_2_0(h_11, i_11, t);
  n_69 = t;
  t = SSL_implode_string(n_69);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, m_69);
  p_10 = t;
  t = SSLsetAnnotations(p_10, k_69);
  return(t);
}
static ATerm h_71 (ATerm p_69, ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  t = SSL_explode_string(p_69);
  t = unquote_chars_2_0(k_11, l_11, t);
  s_69 = t;
  t = SSL_implode_string(s_69);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, r_69);
  return(t);
}
static ATerm v_10 (ATerm t)
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
static ATerm h_11 (ATerm t)
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
static ATerm k_11 (ATerm t)
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
static ATerm m_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm d_41 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_41;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  z_70 = t;
  if(match_cons(t, sym_Arg_1))
    {
      y_70 = ATgetArgument(t, 0);
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL,e_24 = NULL,c_12 = NULL;
            t = SSLgetAnnotations(z_70);
            c_24 = t;
            t = SSL_int_to_string(y_70);
            e_24 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, e_24);
            c_12 = t;
            t = SSLsetAnnotations(c_12, c_24);
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            t = z_70;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          y_70 = ATgetArgument(t, 0);
          x_70 = ATgetArgument(t, 1);
          {
            ATerm g_41 = t;
            int h_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_24 = NULL,e_25 = NULL,g_12 = NULL;
                t = SSLgetAnnotations(z_70);
                u_24 = t;
                t = SSL_int_to_string(y_70);
                e_25 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, e_25, x_70);
                g_12 = t;
                t = SSLsetAnnotations(g_12, u_24);
                LocalPopChoice(h_41);
              }
            else
              {
                t = g_41;
                t = z_70;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              y_70 = ATgetArgument(t, 0);
              {
                ATerm i_41 = t;
                int j_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_25 = NULL,q_25 = NULL,t_25 = NULL,u_25 = NULL,h_12 = NULL;
                    t = SSLgetAnnotations(z_70);
                    o_25 = t;
                    t = SSL_explode_string(y_70);
                    t_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_25), term_k_41), (ATerm) ATinsert(ATempty, term_k_41));
                    t = conc_0_0(t);
                    u_25 = t;
                    t = SSL_implode_string(u_25);
                    q_25 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, q_25);
                    h_12 = t;
                    t = SSLsetAnnotations(h_12, o_25);
                    LocalPopChoice(j_41);
                  }
                else
                  {
                    t = i_41;
                    t = z_70;
                  }
              }
            }
          else
            {
              t = z_70;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm p_68 = NULL;
  t = collect_om_2_0(i_10, k_10, t);
  t = concat_0_0(t);
  t = topdown_1_0(m_10, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(w_11, t);
  t = concat_0_0(t);
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, p_68);
  t = topdown_1_0(x_11, t);
  return(t);
}
static ATerm d_9 (ATerm s_62, ATerm t_62, ATerm t)
{
  ATerm l_71 = NULL;
  t = SSL_fputc(s_62, t_62);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_71);
  return(t);
}
static ATerm e_9 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm m_71 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_71);
  return(t);
}
static ATerm g_9 (ATerm c_100 (ATerm), ATerm x_223, ATerm q_28, ATerm t)
{
  ATerm n_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_223, term_l_41);
  t = k_9(t);
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_71, q_28);
  t = c_100(t);
  t = fclose_0_0(t);
  t = q_28;
  return(t);
}
static ATerm f_9 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm o_71 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_71);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(match_cons(m_41, sym_Stream_1))
        {
          v_71 = ATgetArgument(m_41, 0);
        }
      else
        _fail(t);
      w_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(v_71, w_71, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(match_cons(n_41, sym_Stream_1))
        {
          a_72 = ATgetArgument(n_41, 0);
        }
      else
        _fail(t);
      b_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9(a_72, b_72, t);
  x_71 = t;
  t = term_g_22;
  y_71 = t;
  t = x_71;
  if(match_cons(t, sym_Stream_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, x_71);
  t = d_9(y_71, z_71, t);
  return(t);
}
ATerm output_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL;
  t = f_124(t);
  q_71 = t;
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_71 = NULL,s_71 = NULL;
        t = term_x_16;
        r_71 = t;
        t = term_e_26;
        s_71 = t;
        t = term_q_41;
        t = q_9(r_71, s_71, t);
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = term_r_41;
      }
  }
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_71, q_71);
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_71 = NULL,u_71 = NULL;
        t = term_x_16;
        t_71 = t;
        t = term_u_41;
        u_71 = t;
        t = term_v_41;
        t = q_9(t_71, u_71, t);
        t = (ATerm) ATmakeAppl(sym__2, p_71, q_71);
        LocalPopChoice(t_41);
        if(match_cons(t, sym__2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            ATerm x_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_9(y_11, p_71, q_71, t);
      }
    else
      {
        t = s_41;
        if(match_cons(t, sym__2))
          {
            ATerm y_41 = ATgetArgument(t, 0);
            ATerm z_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_9(a_12, p_71, q_71, t);
      }
  }
  return(t);
}
static ATerm p_72 (ATerm j_72, ATerm t)
{
  t = SSL_fclose(j_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  n_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_72 = ATgetArgument(t, 0);
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_72);
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            t = p_72(n_72, t);
          }
      }
    }
  else
    {
      t = p_72(n_72, t);
    }
  return(t);
}
static ATerm h_9 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm i_9 (ATerm d_43, ATerm e_43, ATerm t)
{
  t = SSL_strcat(d_43, e_43);
  return(t);
}
static ATerm j_9 (ATerm u_62, ATerm v_62, ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_fopen(u_62, v_62);
  q_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_72 = NULL;
  t = SSL_stdin_stream();
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_72 = NULL;
  t = SSL_stdout_stream();
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_72 = NULL;
  t = SSL_stderr_stream();
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_72);
  return(t);
}
static ATerm a_74 (ATerm z_72, ATerm t)
{
  ATerm a_73 = NULL;
  t = SSL_explode_term(z_72);
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            a_73 = ATgetFirst((ATermList) d_42);
            {
              ATerm e_42 = (ATerm) ATgetNext((ATermList) d_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_74 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,l_73 = NULL,y_12 = NULL;
  t = SSLgetAnnotations(f_73);
  i_73 = t;
  t = d_73;
  if(match_cons(t, sym_Path_1))
    {
      l_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_73, e_73);
  y_12 = t;
  t = SSLsetAnnotations(y_12, i_73);
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(g_73, h_73, t);
  return(t);
}
static ATerm c_74 (ATerm n_73, ATerm o_73, ATerm p_73, ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,v_73 = NULL,b_13 = NULL;
  t = SSLgetAnnotations(p_73);
  s_73 = t;
  t = SSL_is_string(n_73);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_73, o_73);
  b_13 = t;
  t = SSLsetAnnotations(b_13, s_73);
  if(match_cons(t, sym__2))
    {
      q_73 = ATgetArgument(t, 0);
      r_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(q_73, r_73, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
  x_73 = t;
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_74(x_73, t);
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            {
              ATerm h_42 = t;
              int i_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_74(y_73, z_73, x_73, t);
                  LocalPopChoice(i_42);
                }
              else
                {
                  t = h_42;
                  t = c_74(y_73, z_73, x_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_74(x_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,l_74 = NULL;
  l_74 = t;
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_74, term_q_16);
        t = k_9(t);
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        {
          ATerm v_26 = NULL,a_27 = NULL;
          t = term_l_42;
          a_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_42, l_74);
          t = i_9(a_27, l_74, t);
          v_26 = t;
          t = SSL_perror(v_26);
          _fail(t);
        }
      }
  }
  f_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(g_74, t);
  e_74 = t;
  t = f_74;
  t = fclose_0_0(t);
  t = e_74;
  return(t);
}
ATerm input_1_0 (ATerm g_124 (ATerm), ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_74 = NULL,p_74 = NULL;
      t = term_x_16;
      o_74 = t;
      t = term_f_26;
      p_74 = t;
      t = term_o_42;
      t = q_9(o_74, p_74, t);
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      t = term_c_17;
    }
  t = ReadFromFile_0_0(t);
  t = g_124(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  q_74 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  r_74 = t;
  t = term_x_14;
  t_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_42), r_74), term_p_42);
  u_74 = t;
  t = SSL_printnl(t_74, u_74);
  t = term_b_17;
  s_74 = t;
  t = SSL_exit(s_74);
  t = q_74;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  if(match_string(t, "-k"))
    {
      t = w_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_74;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  t = SSL_string_to_int(x_74);
  y_74 = t;
  t = term_r_42;
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, y_74);
  t = t_9(z_74, y_74, t);
  t = x_74;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_12, d_12, e_12, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  if(match_string(t, "-S"))
    {
      t = b_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_75;
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  t = term_t_16;
  c_75 = t;
  t = term_t_42;
  d_75 = t;
  t = term_u_42;
  t = t_9(c_75, d_75, t);
  t = term_v_42;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  t = SSL_string_to_int(e_75);
  f_75 = t;
  t = term_t_16;
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, f_75);
  t = t_9(g_75, f_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_75);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_x_42;
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
  ATerm h_75 = NULL,i_75 = NULL;
  t = term_y_42;
  h_75 = t;
  t = term_l_15;
  i_75 = t;
  t = term_z_42;
  t = t_9(h_75, i_75, t);
  t = term_a_43;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_12, i_12, j_12, t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = c_43;
      {
        ATerm g_43 = t;
        int h_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_12, m_12, n_12, t);
            LocalPopChoice(h_43);
          }
        else
          {
            t = g_43;
            t = Option_3_0(o_12, p_12, q_12, t);
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_x_16;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, i_61, j_61);
  t = lookup_table_0_1(j_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(i_61, j_61, k_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, i_61, j_61);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
      t = term_l_15;
      t = f_0(t);
      q_75 = t;
      t = term_i_43;
      r_75 = t;
      t = term_k_43;
      s_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_43, term_k_43, q_75);
      t = r_9(r_75, s_75, q_75, t);
      _fail(t);
    }
  else
    {
      ATerm v_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_75 = ATgetFirst((ATermList) t);
          p_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_75;
      t = c_0(t);
      t = term_l_15;
      t = d_0(t);
      v_75 = t;
      t = (ATerm) ATinsert(CheckATermList(p_75), v_75);
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  if(match_string(t, "-o"))
    {
      t = x_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_75;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  y_75 = t;
  t = term_e_26;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, y_75);
  t = t_9(z_75, y_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_75);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_l_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_12, s_12, t_12, t);
  return(t);
}
static ATerm r_9 (ATerm d_56, ATerm e_56, ATerm c_56, ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL;
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_43 = ATgetArgument(t, 0);
            ATerm p_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
        t = q_9(d_56, e_56, t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = (ATerm) ATempty;
      }
  }
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_56, e_56, (ATerm) ATinsert(CheckATermList(c_76), c_56));
  t = lookup_table_0_1(d_56, t);
  f_76 = t;
  t = (ATerm) ATinsert(CheckATermList(c_76), c_56);
  d_76 = t;
  t = f_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(e_56, d_76, e_76, t);
  t = b_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
      t = term_l_15;
      t = m_0(t);
      q_76 = t;
      t = term_i_43;
      r_76 = t;
      t = term_k_43;
      s_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_43, term_k_43, q_76);
      t = r_9(r_76, s_76, q_76, t);
      _fail(t);
    }
  else
    {
      ATerm w_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_76 = ATgetFirst((ATermList) t);
          n_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_76 = ATgetFirst((ATermList) t);
          p_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_76;
      t = j_0(t);
      t = o_76;
      t = l_0(t);
      w_76 = t;
      t = (ATerm) ATinsert(CheckATermList(p_76), w_76);
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm y_76 = NULL;
  y_76 = t;
  if(match_string(t, "-i"))
    {
      t = y_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_76;
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL;
  z_76 = t;
  t = term_f_26;
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, z_76);
  t = t_9(a_77, z_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_76);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_12, w_12, x_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  t = whoami_0_0(t);
  b_77 = t;
  t = term_x_14;
  d_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_43), b_77);
  e_77 = t;
  t = SSL_printnl(d_77, e_77);
  t = term_b_17;
  c_77 = t;
  t = SSL_exit(c_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL;
  t = term_x_16;
  f_77 = t;
  t = term_s_43;
  g_77 = t;
  t = term_t_43;
  t = q_9(f_77, g_77, t);
  return(t);
}
static ATerm l_9 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_44, m_44);
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      t = SSL_addr(l_44, m_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  i_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_77;
      t = h_112(t);
    }
  else
    {
      ATerm n_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_77 = ATgetFirst((ATermList) t);
          k_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_77;
      t = foldr_2_0(h_112, i_112, t);
      n_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_77, n_77);
      t = i_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_t_42;
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
  t = l_9(r_27, s_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_77 = NULL,d_27 = NULL,k_27 = NULL;
  t = times_0_0(t);
  k_27 = t;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm w_43 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_27;
  t = foldr_2_0(z_12, a_13, t);
  q_77 = t;
  t = SSL_TicksToSeconds(q_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_78;
        if((c_78 != t))
          {
            _fail(t);
          }
        t = b_78;
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = (ATerm) ATmakeAppl(sym__2, c_78, d_78);
        {
          ATerm a_44 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_78, d_78);
              LocalPopChoice(b_44);
            }
          else
            {
              t = a_44;
              t = SSL_gtr(c_78, d_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_78, d_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm h_78 = NULL;
  h_78 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
        t = term_x_16;
        k_78 = t;
        t = term_t_16;
        l_78 = t;
        t = term_y_16;
        t = q_9(k_78, l_78, t);
        j_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_78, term_b_17);
        t = geq_0_0(t);
        t = h_78;
        t = r_119(t);
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        t = h_78;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,q_78 = NULL,t_78 = NULL;
  t = run_time_0_0(t);
  n_78 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  o_78 = t;
  t = term_x_14;
  q_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_44), n_78), term_h_17), o_78);
  t_78 = t;
  t = SSL_printnl(q_78, t_78);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_44), n_78), term_h_17), o_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_42;
  u_78 = t;
  t = SSL_exit(u_78);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  f_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_79 = ATgetArgument(t, 0);
          {
            ATerm p_28 = NULL,i_13 = NULL;
            t = SSLgetAnnotations(f_79);
            p_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_79);
            i_13 = t;
            t = SSLsetAnnotations(i_13, p_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm f_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_78 = NULL,y_78 = NULL;
      t = term_x_16;
      x_78 = t;
      t = term_i_44;
      y_78 = t;
      t = term_k_44;
      t = q_9(x_78, y_78, t);
      LocalPopChoice(h_44);
    }
  else
    {
      t = f_44;
      t = fetch_1_0(d_13, t);
    }
  t = w_123(t);
  return(t);
}
static ATerm u_9 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm h_79 = NULL;
  t = SSL_hashtable_put(x_60, v_60, w_60);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_79);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_57, ATerm t)
{
  ATerm q_79 = NULL;
  t = table_hashtable_0_0(t);
  q_79 = t;
  {
    ATerm o_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL;
        t = q_79;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_9(p_57, w_28, t);
        LocalPopChoice(q_44);
      }
    else
      {
        t = o_44;
        {
          ATerm f_29 = NULL;
          t = p_57;
          t = table_create_0_0(t);
          t = q_79;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_9(p_57, f_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm t_79 = NULL;
  t = SSL_hashtable_create(d_61, e_61);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_79);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,y_79 = NULL,z_79 = NULL;
  u_79 = t;
  t = term_t_44;
  y_79 = t;
  t = term_u_44;
  z_79 = t;
  t = u_79;
  t = new_hashtable_0_2(y_79, z_79, t);
  v_79 = t;
  t = u_79;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(u_79, v_79, w_79, t);
  t = u_79;
  return(t);
}
static ATerm n_9 (ATerm a_61, ATerm b_61, ATerm t)
{
  ATerm a_80 = NULL;
  t = SSL_hashtable_remove(b_61, a_61);
  a_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_80);
  return(t);
}
static ATerm o_9 (ATerm f_61, ATerm t)
{
  ATerm b_80 = NULL;
  t = SSL_hashtable_destroy(f_61);
  b_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_80 = NULL;
  t = SSL_table_hashtable();
  c_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  d_80 = t;
  t = table_hashtable_0_0(t);
  e_80 = t;
  t = lookup_table_0_1(d_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(g_80, t);
  t = e_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_9(d_80, f_80, t);
  t = d_80;
  return(t);
}
ATerm map_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  static ATerm v_80 (ATerm t);
  static ATerm v_80 (ATerm t)
  {
    ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
    s_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_80;
      }
    else
      {
        ATerm v_29 = NULL,b_30 = NULL,c_30 = NULL,w_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_80 = ATgetFirst((ATermList) t);
            u_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_80);
        v_29 = t;
        t = t_80;
        t = t_104(t);
        b_30 = t;
        t = u_80;
        t = v_80(t);
        c_30 = t;
        t = (ATerm) ATinsert(CheckATermList(c_30), b_30);
        w_13 = t;
        t = SSLsetAnnotations(w_13, v_29);
      }
    return(t);
  }
  t = v_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_81 = ATgetFirst((ATermList) t);
      b_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_81 = NULL,g_81 = NULL;
        static ATerm e_13 (ATerm t);
        static ATerm e_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_81)), not_null(g_81));
          return(t);
        }
        t = b_81;
        t = h_0(t);
        if(((f_81 != NULL) && (f_81 != t)))
          _fail(t);
        else
          f_81 = t;
        t = a_81;
        t = g_0(t);
        if(((g_81 != NULL) && (g_81 != t)))
          _fail(t);
        else
          g_81 = t;
        t = b_81;
        t = reverse_acc_2_0(g_0, e_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_15;
      t = h_0(t);
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,i_14 = NULL;
  o_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_81);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_81);
  i_14 = t;
  t = SSLsetAnnotations(i_14, m_81);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm q_81 = NULL;
  q_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_81), term_v_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  ATerm w_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_81 = NULL,l_81 = NULL;
      t = term_x_16;
      k_81 = t;
      t = term_s_43;
      l_81 = t;
      t = term_t_43;
      t = q_9(k_81, l_81, t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = w_44;
      t = fetch_1_0(f_13, t);
    }
  t = term_z_44;
  t = echo_0_0(t);
  t = term_i_43;
  i_81 = t;
  t = term_k_43;
  j_81 = t;
  t = term_a_45;
  t = q_9(i_81, j_81, t);
  t = reverse_acc_2_0(_id, h_13, t);
  t = map_1_0(j_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm n_82 (ATerm t);
  static ATerm n_82 (ATerm t)
  {
    ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
    k_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_82 = ATgetFirst((ATermList) t);
        m_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_45 = t;
      int c_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_30 = NULL,e_31 = NULL,l_14 = NULL;
          t = SSLgetAnnotations(k_82);
          v_30 = t;
          t = l_82;
          t = d_105(t);
          e_31 = t;
          t = (ATerm) ATinsert(CheckATermList(m_82), e_31);
          l_14 = t;
          t = SSLsetAnnotations(l_14, v_30);
          LocalPopChoice(c_45);
        }
      else
        {
          t = b_45;
          {
            ATerm n_31 = NULL,u_31 = NULL,m_14 = NULL;
            t = SSLgetAnnotations(k_82);
            n_31 = t;
            t = m_82;
            t = n_82(t);
            u_31 = t;
            t = (ATerm) ATinsert(CheckATermList(u_31), l_82);
            m_14 = t;
            t = SSLsetAnnotations(m_14, n_31);
          }
        }
    }
    return(t);
  }
  t = n_82(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
  r_82 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_45 = ATgetFirst((ATermList) t);
                ATerm g_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_82;
          }
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATinsert(ATempty, r_82);
      }
  }
  s_82 = t;
  t = term_r_41;
  t_82 = t;
  t = SSL_printnl(t_82, s_82);
  t = r_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL;
  t = term_x_16;
  x_82 = t;
  t = term_s_43;
  y_82 = t;
  t = term_t_43;
  t = q_9(x_82, y_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_9 (ATerm y_60, ATerm z_60, ATerm t)
{
  t = SSL_hashtable_get(z_60, y_60);
  return(t);
}
static ATerm q_9 (ATerm w_57, ATerm x_57, ATerm t)
{
  ATerm z_82 = NULL;
  t = lookup_table_0_1(w_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(x_57, z_82, t);
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
  ATerm b_83 = NULL,c_83 = NULL;
  t = term_h_45;
  b_83 = t;
  t = term_l_15;
  c_83 = t;
  t = term_i_45;
  t = t_9(b_83, c_83, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL;
  t = term_h_45;
  f_83 = t;
  t = term_l_15;
  g_83 = t;
  t = term_i_45;
  t = t_9(f_83, g_83, t);
  t = term_k_45;
  d_83 = t;
  t = term_l_15;
  e_83 = t;
  t = term_l_45;
  t = t_9(d_83, e_83, t);
  t = term_m_45;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_13, l_13, m_13, t);
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
      t = Option_3_0(p_13, q_13, t_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,p_14 = NULL;
  m_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_83 = ATgetFirst((ATermList) t);
      j_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_83);
  h_83 = t;
  t = i_83;
  t = r_78(t);
  k_83 = t;
  t = j_83;
  t = s_78(t);
  l_83 = t;
  t = (ATerm) ATinsert(CheckATermList(l_83), k_83);
  p_14 = t;
  t = SSLsetAnnotations(p_14, h_83);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_125 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,w_83 = NULL,x_83 = NULL,s_14 = NULL;
  r_83 = t;
  {
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_45;
        t = u_125(t);
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
      }
  }
  t = r_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_83 = ATgetFirst((ATermList) t);
      u_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_83);
  s_83 = t;
  t = term_s_43;
  x_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_43, t_83);
  t = t_9(x_83, t_83, t);
  t = u_83;
  {
    static ATerm h_84 (ATerm t);
    static ATerm h_84 (ATerm t)
    {
      ATerm t_45 = t;
      int u_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_84 = NULL;
              a_84 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_84;
              LocalPopChoice(w_45);
            }
          else
            {
              t = v_45;
              t = u_125(t);
              t = Cons_2_0(_id, h_84, t);
            }
          LocalPopChoice(u_45);
        }
      else
        {
          t = t_45;
          {
            ATerm d_84 = NULL,e_84 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_84 = ATgetFirst((ATermList) t);
                e_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_84), (ATerm) ATmakeAppl(sym_Undefined_1, d_84));
          }
        }
      return(t);
    }
    t = h_84(t);
  }
  w_83 = t;
  t = (ATerm) ATinsert(CheckATermList(w_83), (ATerm) ATmakeAppl(sym_Program_1, t_83));
  s_14 = t;
  t = SSLsetAnnotations(s_14, s_83);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm u_84 = NULL;
  u_84 = t;
  if(match_string(t, "--help"))
    {
      t = u_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_84;
        }
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL;
  t = term_i_44;
  v_84 = t;
  t = term_l_15;
  w_84 = t;
  t = term_y_45;
  t = t_9(v_84, w_84, t);
  t = term_a_46;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_125 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  o_84 = t;
  t = term_i_43;
  p_84 = t;
  t = term_c_46;
  t = lookup_table_0_1(p_84, t);
  t_84 = t;
  t = term_k_43;
  q_84 = t;
  t = (ATerm) ATempty;
  r_84 = t;
  t = t_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(q_84, r_84, s_84, t);
  t = o_84;
  {
    static ATerm v_13 (ATerm t);
    static ATerm v_13 (ATerm t)
    {
      ATerm d_46 = t;
      int e_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_125(t);
          LocalPopChoice(e_46);
        }
      else
        {
          t = d_46;
          {
            ATerm f_46 = t;
            int g_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_13, y_13, a_14, t);
                LocalPopChoice(g_46);
              }
            else
              {
                t = f_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_13, t);
  }
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_85 = NULL;
        h_85 = t;
        {
          ATerm j_46 = t;
          int k_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_33 = NULL;
              t = h_85;
              {
                ATerm l_46 = t;
                int m_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_33 = NULL,l_33 = NULL;
                    t = term_x_16;
                    k_33 = t;
                    t = term_i_44;
                    l_33 = t;
                    t = term_k_44;
                    t = q_9(k_33, l_33, t);
                    LocalPopChoice(m_46);
                  }
                else
                  {
                    t = l_46;
                    t = fetch_1_0(b_14, t);
                  }
              }
              t = h_85;
              t = default_system_usage_0_0(t);
              t = term_t_42;
              g_33 = t;
              t = SSL_exit(g_33);
              LocalPopChoice(k_46);
            }
          else
            {
              t = j_46;
              {
                ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL;
                t = term_x_16;
                t_33 = t;
                t = term_h_45;
                v_33 = t;
                t = term_n_46;
                t = q_9(t_33, v_33, t);
                t = h_85;
                t = default_system_about_0_0(t);
                t = term_t_42;
                s_33 = t;
                t = SSL_exit(s_33);
              }
            }
        }
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        {
          ATerm o_46 = t;
          int p_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
              static ATerm c_14 (ATerm t);
              static ATerm c_14 (ATerm t)
              {
                ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,w_14 = NULL;
                n_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_85);
                l_85 = t;
                t = m_85;
                if(((m_84 != NULL) && (m_84 != t)))
                  _fail(t);
                else
                  m_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_85);
                w_14 = t;
                t = SSLsetAnnotations(w_14, l_85);
                return(t);
              }
              t = fetch_1_0(c_14, t);
              t = term_x_14;
              j_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_84)), term_q_46);
              k_85 = t;
              t = SSL_printnl(j_85, k_85);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_84)), term_q_46));
              t = default_system_usage_0_0(t);
              t = term_b_17;
              i_85 = t;
              t = SSL_exit(i_85);
              LocalPopChoice(p_46);
            }
          else
            {
              t = o_46;
            }
        }
      }
  }
  n_84 = t;
  t = term_i_43;
  t = table_destroy_0_0(t);
  t = n_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL;
  t = parse_options_1_0(y_123, t);
  s_85 = t;
  t = term_x_33;
  t = table_create_0_0(t);
  t = term_x_33;
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_33, term_y_33, s_85);
  t = lookup_table_0_1(t_85, t);
  w_85 = t;
  t = term_y_33;
  u_85 = t;
  t = w_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(u_85, s_85, v_85, t);
  t = s_85;
  t = a_124(t);
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_123, t);
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
              t = b_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_46);
            }
          else
            {
              t = t_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(y_46);
          }
        else
          {
            t = x_46;
            {
              ATerm z_46 = t;
              int a_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_14, j_14, k_14, t);
                  LocalPopChoice(a_47);
                }
              else
                {
                  t = z_46;
                  {
                    ATerm b_47 = t;
                    int c_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_47);
                      }
                    else
                      {
                        t = b_47;
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
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL;
  t = term_u_41;
  y_85 = t;
  t = term_l_15;
  z_85 = t;
  t = term_d_47;
  t = t_9(y_85, z_85, t);
  t = term_e_47;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_f_47;
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
  t = term_g_47;
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

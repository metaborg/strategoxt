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
Symbol sym_WaitStatus_3;
Symbol sym_Path_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
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
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_x_46;
ATerm term_u_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_b_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_p_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_q_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
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
ATerm term_p_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_e_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_d_38;
ATerm term_j_37;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_n_32;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_d_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_l_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_f_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_a_15;
ATerm term_i_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_v_15);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_h_16, term_z_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_x_17, term_z_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_g_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_o_18, term_s_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_y_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_c_19, term_d_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_b_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_i_20, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_t_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_e_21, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_i_21, term_j_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_t_21, term_u_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_21, term_y_21, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_22, term_c_22, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_22, term_k_22, term_l_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_22, term_r_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_x_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_c_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_23, term_i_23, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_23, term_n_23, term_t_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_23, term_w_23, term_y_23);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_24, term_m_24, term_n_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_q_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_w_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_l_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_d_30);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_l_33);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Arg_1, term_h_16);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_SOpt_2, term_u_38, term_v_38);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_lit_1, term_t_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_lit_1, term_n_16);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_q_25);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_y_41);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_r_25);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_x_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_42);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_a_15);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_u_43);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_u_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_l_43);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym__2, term_p_45, term_a_15);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_t_45, term_a_15);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_u_44, term_a_15);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, (ATerm) ATempty);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_p_45);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_a_15);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm l_1 (ATerm x_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_122 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm b_106 (ATerm), ATerm t);
ATerm at_suffix_rev_1_0 (ATerm a_123 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm w_122 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm g_125 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm g_8 (ATerm t_63, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm i_8 (ATerm a_37, ATerm b_37, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm t);
static ATerm j_8 (ATerm s_33, ATerm t_33, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm a_107 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm z_126 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm j_64, ATerm k_64, ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm l_8 (ATerm l_44, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm m_107 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm l_107 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm n_107 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm n_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm o_8 (ATerm l_110 (ATerm), ATerm t_40, ATerm s_40, ATerm t);
static ATerm p_8 (ATerm n_63, ATerm o_63, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm c_26 (ATerm b_25, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm a_101 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
static ATerm q_8 (ATerm d_110 (ATerm), ATerm i_38, ATerm g_38, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm r_8 (ATerm r_39, ATerm s_39, ATerm t);
ATerm end_scope_1_0 (ATerm a_110 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_126 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm e_34 (ATerm w_33, ATerm t);
static ATerm q_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm o_43 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm i_36, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm t_8 (ATerm c_61, ATerm d_61, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm symbol2abox_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm _2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm i_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm t);
ATerm number_node_1_0 (ATerm t_100 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm n_122 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm d_123 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t);
static ATerm x_8 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm x_60, ATerm w_60, ATerm t);
static ATerm y_8 (ATerm k_116 (ATerm), ATerm t_60, ATerm s_60, ATerm t);
ATerm foldr_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
ATerm collect_om_2_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm w_70 (ATerm i_68, ATerm j_68, ATerm t);
static ATerm x_70 (ATerm s_68, ATerm u_68, ATerm t);
static ATerm y_70 (ATerm a_69, ATerm t);
static ATerm s_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm z_8 (ATerm x_63, ATerm y_63, ATerm t);
static ATerm a_9 (ATerm e_30, ATerm f_30, ATerm t);
static ATerm c_9 (ATerm d_106 (ATerm), ATerm d_261, ATerm k_30, ATerm t);
static ATerm b_9 (ATerm a_30, ATerm b_30, ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm output_1_0 (ATerm k_128 (ATerm), ATerm t);
static ATerm g_72 (ATerm a_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_9 (ATerm g_30, ATerm t);
static ATerm e_9 (ATerm a_29, ATerm b_29, ATerm t);
static ATerm f_9 (ATerm z_63, ATerm a_64, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_73 (ATerm q_72, ATerm t);
static ATerm s_73 (ATerm u_72, ATerm v_72, ATerm w_72, ATerm t);
static ATerm t_73 (ATerm e_73, ATerm f_73, ATerm g_73, ATerm t);
static ATerm g_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_9 (ATerm y_33, ATerm z_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_9 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_9 (ATerm u_36, ATerm v_36, ATerm t);
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_107 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm need_help_1_0 (ATerm b_128 (ATerm), ATerm t);
static ATerm q_9 (ATerm e_44, ATerm f_44, ATerm g_44, ATerm t);
ATerm lookup_table_0_1 (ATerm y_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_44, ATerm n_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_9 (ATerm j_44, ATerm k_44, ATerm t);
static ATerm k_9 (ATerm o_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_122 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_9 (ATerm h_44, ATerm i_44, ATerm t);
static ATerm m_9 (ATerm f_41, ATerm g_41, ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm t);
static ATerm n_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_1 (ATerm x_0, ATerm t)
{
  ATerm c_1 = NULL;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      ATerm b_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t);
            static ATerm a_0 (ATerm t)
            {
              t = h_1;
              return(t);
            }
            t = g_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = l_1(i_1, t);
          }
      }
    }
  else
    {
      t = l_1(i_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = topdown_1_0(t_102, t);
    return(t);
  }
  t = t_102(t);
  t = SRTS_all(c_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_122 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL,i_2 = NULL;
    i_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_2 = ATgetFirst((ATermList) t);
        e_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_0 = NULL,w_0 = NULL,b_0 = NULL;
          t = SSLgetAnnotations(i_2);
          n_0 = t;
          t = e_2;
          t = j_2(t);
          w_0 = t;
          t = (ATerm) ATinsert(CheckATermList(w_0), d_2);
          b_0 = t;
          t = SSLsetAnnotations(b_0, n_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        t = s_122(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_2;
    }
  else
    {
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        t = not_null(w_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_2 = ATgetFirst((ATermList) t);
          if(((w_2 != NULL) && (w_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_2;
      t = at_end_1_0(e_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
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
          b_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL,w_1 = NULL,y_1 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(z_3);
            n_1 = t;
            t = a_4;
            t = b_119(t);
            w_1 = t;
            t = b_4;
            t = filter_1_0(b_119, t);
            y_1 = t;
            t = (ATerm) ATinsert(CheckATermList(y_1), w_1);
            k_0 = t;
            t = SSLsetAnnotations(k_0, n_1);
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            t = b_4;
            t = filter_1_0(b_119, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL;
  f_4 = t;
  t = b_106(t);
  g_4 = t;
  t = term_i_14;
  i_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_4), g_4);
  j_4 = t;
  t = SSL_printnl(i_4, j_4);
  t = f_4;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  static ATerm a_5 (ATerm t);
  static ATerm a_5 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,m_2 = NULL,p_2 = NULL,q_1 = NULL;
        v_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_4 = ATgetFirst((ATermList) t);
            x_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_4);
        m_2 = t;
        t = x_4;
        t = a_5(t);
        p_2 = t;
        t = (ATerm) ATinsert(CheckATermList(p_2), w_4);
        q_1 = t;
        t = SSLsetAnnotations(q_1, m_2);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = a_123(t);
      }
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm r_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 = NULL,c_3 = NULL;
      b_6 = t;
      t = (ATerm) ATinsert(CheckATermList(b_6), term_a_15);
      {
        static ATerm i_0 (ATerm t);
        static ATerm i_0 (ATerm t)
        {
          ATerm d_3 = NULL,f_3 = NULL;
          d_3 = t;
          {
            ATerm b_15 = t;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_15;
              }
          }
          {
            ATerm c_15 = t;
            if((PushChoice() == 0))
              {
                ATerm h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,s_1 = NULL;
                m_3 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_3 = ATgetFirst((ATermList) t);
                    k_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_3);
                h_3 = t;
                t = j_3;
                t = u_0(t);
                l_3 = t;
                t = (ATerm) ATinsert(CheckATermList(k_3), l_3);
                s_1 = t;
                t = SSLsetAnnotations(s_1, h_3);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_15;
              }
          }
          t = d_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_3 = ATgetFirst((ATermList) t);
              {
                ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, f_3);
          return(t);
        }
        t = at_suffix_rev_1_0(i_0, t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_15 = ATgetFirst((ATermList) t);
          c_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_3;
      LocalPopChoice(y_14);
    }
  else
    {
      t = r_14;
      {
        ATerm o_3 = NULL,p_3 = NULL;
        p_3 = t;
        t = SSL_explode_string(p_3);
        t = rtrim_1_0(u_0, t);
        o_3 = t;
        t = SSL_implode_string(o_3);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  static ATerm z_6 (ATerm t);
  static ATerm z_6 (ATerm t)
  {
    ATerm f_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = f_15;
        {
          ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,h_4 = NULL,m_4 = NULL,u_1 = NULL;
          w_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_6 = ATgetFirst((ATermList) t);
              y_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_6);
          h_4 = t;
          t = y_6;
          t = z_6(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), x_6);
          u_1 = t;
          t = SSLsetAnnotations(u_1, h_4);
        }
      }
    return(t);
  }
  t = z_6(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm g_125 (ATerm), ATerm t)
{
  ATerm f_7 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm x_7 = NULL,c_8 = NULL,d_8 = NULL;
    x_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_7;
      }
    else
      {
        ATerm i_5 = NULL,m_5 = NULL,c_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_8 = ATgetFirst((ATermList) t);
            d_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_7);
        i_5 = t;
        t = c_8;
        {
          ATerm i_15 = t;
          if((PushChoice() == 0))
            {
              t = g_125(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_15;
            }
        }
        m_5 = t;
        t = (ATerm) ATinsert(CheckATermList(d_8), m_5);
        c_2 = t;
        t = SSLsetAnnotations(c_2, i_5);
      }
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    return(t);
  }
  t = at_suffix_1_0(s_0, t);
  t = not_null(f_7);
  return(t);
}
ATerm ltrim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = drop_while_1_0(t_0, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm x_5 = NULL,z_5 = NULL;
        z_5 = t;
        t = SSL_explode_string(z_5);
        t = ltrim_1_0(t_0, t);
        x_5 = t;
        t = SSL_implode_string(x_5);
      }
    }
  return(t);
}
ATerm trim_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ltrim_1_0(r_0, t);
      t = rtrim_1_0(r_0, t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = l_15;
      {
        ATerm e_6 = NULL,f_6 = NULL;
        f_6 = t;
        t = SSL_explode_string(f_6);
        t = trim_1_0(r_0, t);
        e_6 = t;
        t = SSL_implode_string(e_6);
      }
    }
  return(t);
}
static ATerm g_8 (ATerm t_63, ATerm t)
{
  t = SSL_fgetc(t_63);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm w_8 = NULL,i_9 = NULL;
  w_8 = t;
  {
    static ATerm z_9 (ATerm t);
    static ATerm z_9 (ATerm t)
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_9 = NULL,n_6 = NULL,p_6 = NULL,s_6 = NULL;
          x_9 = t;
          t = w_8;
          if(match_cons(t, sym_Stream_1))
            {
              s_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(s_6, t);
          n_6 = t;
          t = term_a_15;
          t = z_9(t);
          p_6 = t;
          t = (ATerm) ATinsert(CheckATermList(p_6), n_6);
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = z_9(t);
  }
  i_9 = t;
  t = SSL_implode_string(i_9);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  b_10 = t;
  t = term_r_15;
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_10, term_r_15);
  t = f_9(b_10, e_10, t);
  c_10 = t;
  t = read_text_from_stream_0_0(t);
  d_10 = t;
  t = c_10;
  t = fclose_0_0(t);
  t = d_10;
  return(t);
}
static ATerm i_8 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(a_37, b_37);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      t = SSL_subtr(a_37, b_37);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  t = term_v_15;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,p_10 = NULL;
        t = term_a_16;
        m_10 = t;
        t = term_v_15;
        p_10 = t;
        t = term_g_16;
        t = m_9(m_10, p_10, t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = term_h_16;
      }
  }
  j_10 = t;
  t = term_h_16;
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_h_16);
  t = i_8(j_10, l_10, t);
  k_10 = t;
  t = SSL_int_to_string(k_10);
  h_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_10), term_v_15);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_16;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_16);
      x_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, (ATerm) ATinsert(ATempty, term_j_16));
      t = p_8(t_10, x_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(match_cons(k_16, sym_Stream_1))
        {
          a_11 = ATgetArgument(k_16, 0);
        }
      else
        _fail(t);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9(a_11, b_11, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  z_10 = t;
  t = xtc_new_file_0_0(t);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
  t = c_9(v_0, y_10, z_10, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_10);
  t = xtc_transform_file_2_0(v_125, w_125, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_8 (ATerm s_33, ATerm t_33, ATerm t)
{
  t = SSL_execvp(s_33, t_33);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_12 = NULL,j_12 = NULL,l_12 = NULL,o_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_12 = ATgetArgument(t, 0);
      {
        ATerm d_7 = NULL,e_7 = NULL;
        t = SSL_int_to_string(j_12);
        d_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), d_7), term_l_16);
        e_7 = t;
        t = SSL_concat_strings(e_7);
      }
    }
  else
    {
      ATerm y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_12 = ATgetArgument(t, 0);
          l_12 = ATgetArgument(t, 1);
          o_12 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_12);
      y_7 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_12), term_r_16), y_7), term_o_16), j_12);
      z_7 = t;
      t = SSL_concat_strings(z_7);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t);
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm u_16 = ATgetArgument(t, 0);
              if((u_12 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm v_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_24), term_f_24), term_u_23), term_k_23), term_e_23), term_y_22), term_t_22), term_p_22), term_g_22), term_a_22), term_v_21), term_r_21), term_n_21), term_g_21), term_u_20), term_k_20), term_d_20), term_r_19), term_j_19), term_e_19), term_z_18), term_t_18), term_k_18), term_d_18), term_v_17), term_p_17), term_i_17), term_c_17);
        t = fetch_elem_1_0(y_0, t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_13 = NULL,v_13 = NULL;
  e_13 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_24 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
            {
              ATerm t_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        {
          ATerm u_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_8 = NULL,v_8 = NULL,v_9 = NULL;
              t = v_13;
              {
                ATerm x_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_24;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              s_8 = t;
              t = term_i_14;
              v_8 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_8), term_y_24);
              v_9 = t;
              t = SSL_printnl(v_8, v_9);
              t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, s_8), term_y_24));
              LocalPopChoice(w_24);
            }
          else
            {
              t = u_24;
              t = e_13;
            }
        }
      }
    else
      {
        t = p_24;
        t = e_13;
      }
  }
  t = e_13;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  k_14 = t;
  t = fork_0_0(t);
  j_14 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_14;
        t = a_107(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = SSL_waitpid(j_14);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_25 = ATgetArgument(t, 0);
            if(((ATgetType(c_25) != AT_INT) || (ATgetInt((ATermInt) c_25) != 0)))
              _fail(t);
            {
              ATerm d_25 = ATgetArgument(t, 1);
            }
            {
              ATerm f_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_14;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  p_14 = t;
  t = z_126(t);
  t = xtc_find_0_0(t);
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
  {
    static ATerm z_0 (ATerm t);
    static ATerm z_0 (ATerm t)
    {
      ATerm s_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
      t = j_8(o_14, p_14, t);
      t = term_p_25;
      s_14 = t;
      t = SSL_exit(s_14);
      return(t);
    }
    t = fork_and_wait_1_0(z_0, t);
  }
  t = p_14;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_14 = NULL,x_14 = NULL;
      t = u_14;
      t = xtc_new_file_0_0(t);
      w_14 = t;
      t = q_0(t);
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_14, (ATerm) ATinsert(ATinsert(ATempty, w_14), term_q_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_14);
    }
  else
    {
      ATerm z_14 = NULL,g_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_14;
      t = xtc_new_file_0_0(t);
      z_14 = t;
      t = q_0(t);
      g_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_14), term_q_25), v_14), term_r_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_14);
    }
  return(t);
}
static ATerm h_8 (ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  t = k_64;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_64;
    }
  else
    {
      ATerm i_10 = NULL,q_10 = NULL,e_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_64);
      i_10 = t;
      t = c_16;
      {
        static ATerm c_11 (ATerm t);
        static ATerm c_11 (ATerm t)
        {
          ATerm s_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_10 = NULL;
              r_10 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_10;
              LocalPopChoice(w_25);
            }
          else
            {
              t = s_25;
              {
                ATerm u_10 = NULL;
                t = Cons_2_0(_id, c_11, t);
                u_10 = t;
                t = (ATerm) ATinsert(CheckATermList(u_10), j_64);
              }
            }
          return(t);
        }
        t = c_11(t);
      }
      q_10 = t;
      t = (ATerm) ATinsert(CheckATermList(q_10), b_16);
      e_3 = t;
      t = SSLsetAnnotations(e_3, i_10);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm m_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm w_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_16, q_16);
      t = h_8(m_16, q_16, t);
      w_16 = t;
      t = (ATerm) ATinsert(CheckATermList(w_16), m_16);
    }
  return(t);
}
static ATerm l_8 (ATerm l_44, ATerm t)
{
  t = SSL_hashtable_keys(l_44);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  static ATerm a_1 (ATerm t);
  static ATerm a_1 (ATerm t)
  {
    ATerm e_17 = NULL,f_17 = NULL;
    e_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), e_17);
    t = m_9(not_null(a_17), e_17, t);
    f_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
    return(t);
  }
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  t = lookup_table_0_1(a_17, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(b_17, t);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm j_17 = NULL;
  j_17 = t;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL,o_17 = NULL,r_17 = NULL;
        t = term_a_16;
        o_17 = t;
        t = term_v_15;
        r_17 = t;
        t = term_g_16;
        t = m_9(o_17, r_17, t);
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_17, term_i_23);
        t = geq_0_0(t);
        t = j_17;
        t = m_107(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = j_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
        t = term_a_16;
        b_18 = t;
        t = term_v_15;
        c_18 = t;
        t = term_g_16;
        t = m_9(b_18, c_18, t);
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_18, term_u_19);
        t = geq_0_0(t);
        t = y_17;
        t = l_107(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = y_17;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,m_18 = NULL,n_18 = NULL;
        t = term_a_16;
        m_18 = t;
        t = term_v_15;
        n_18 = t;
        t = term_g_16;
        t = m_9(m_18, n_18, t);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_t_17);
        t = geq_0_0(t);
        t = f_18;
        t = n_107(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = f_18;
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      if((f_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL,w_18 = NULL;
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
        t = m_9(j_40, k_40, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, l_40);
  t = y_8(b_1, u_18, l_40, t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_40, k_40, r_18);
  t = lookup_table_0_1(j_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(k_40, r_18, w_18, t);
  t = q_18;
  return(t);
}
static ATerm o_8 (ATerm l_110 (ATerm), ATerm t_40, ATerm s_40, ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL;
    if(match_cons(t, sym__2))
      {
        k_19 = ATgetArgument(t, 0);
        l_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_40, k_19, l_19);
    t = l_110(t);
    return(t);
  }
  t = s_40;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm p_8 (ATerm n_63, ATerm o_63, ATerm t)
{
  t = SSL_access(n_63, o_63);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_j_26;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,s_19 = NULL;
      n_19 = t;
      t = (ATerm) ATinsert(ATempty, term_n_26);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATinsert(ATempty, term_n_26));
      t = p_8(n_19, s_19, t);
      LocalPopChoice(m_26);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_26 = t;
            if((PushChoice() == 0))
              {
                ATerm v_19 = NULL,w_19 = NULL;
                v_19 = t;
                t = (ATerm) ATinsert(ATempty, term_j_16);
                w_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATinsert(ATempty, term_j_16));
                t = p_8(v_19, w_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_26;
              }
            t = debug_1_0(e_1, t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = debug_1_0(f_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  t = term_i_14;
  c_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_27);
  d_21 = t;
  t = SSL_printnl(c_21, d_21);
  t = b_21;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__3))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
      j_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_8(d_22, e_22, j_22, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,d_23 = NULL;
  m_22 = t;
  t = term_i_14;
  o_22 = t;
  t = (ATerm) ATinsert(ATempty, term_g_27);
  d_23 = t;
  t = SSL_printnl(o_22, d_23);
  t = m_22;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm o_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  t = term_i_14;
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, term_e_27);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = o_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,c_20 = NULL,e_20 = NULL,f_20 = NULL,h_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL,w_20 = NULL;
  x_19 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm h_27 = t;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL,a_21 = NULL;
        t = term_i_27;
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_19);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATmakeAppl(sym_Imported_1, x_19));
        t = m_9(x_20, a_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_27;
      }
  }
  z_19 = t;
  t = term_i_27;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_l_27, (ATerm) ATinsert(ATempty, x_19));
  t = lookup_table_0_1(q_20, t);
  w_20 = t;
  t = term_l_27;
  r_20 = t;
  t = (ATerm) ATinsert(ATempty, x_19);
  s_20 = t;
  t = w_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(r_20, s_20, v_20, t);
  t = z_19;
  t = if_verbose4_1_0(m_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_1, t);
  y_19 = t;
  t = term_i_27;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_27, y_19);
  t = o_8(r_1, p_20, y_19, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_i_27;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_27, (ATerm)ATmakeAppl(sym_Imported_1, x_19), (ATerm) ATempty);
  t = lookup_table_0_1(c_20, t);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_19);
  e_20 = t;
  t = (ATerm) ATempty;
  f_20 = t;
  t = o_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(e_20, f_20, h_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_27, (ATerm)ATmakeAppl(sym_Imported_1, x_19), (ATerm) ATempty);
  t = if_verbose4_1_0(v_1, t);
  return(t);
}
ATerm repeat_2_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm t)
{
  static ATerm x_23 (ATerm t);
  static ATerm x_23 (ATerm t)
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_120(t);
        t = x_23(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = m_120(t);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL,a_24 = NULL;
      t = term_a_16;
      z_23 = t;
      t = term_q_27;
      a_24 = t;
      t = term_r_27;
      t = m_9(z_23, a_24, t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = NULL;
            t = term_u_27;
            b_24 = t;
            t = SSL_getenv(b_24);
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  t = term_i_27;
  j_24 = t;
  t = term_w_27;
  k_24 = t;
  t = term_z_27;
  t = m_9(j_24, k_24, t);
  t = filter_1_0(xtc_read_0_0, t);
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
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_24 = NULL;
  t = if_verbose5_1_0(x_1, t);
  d_24 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,h_24 = NULL;
        t = term_i_27;
        e_24 = t;
        t = term_l_27;
        h_24 = t;
        t = term_e_28;
        t = m_9(e_24, h_24, t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm i_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_24 = t;
          t = repeat_2_0(a_2, _id, t);
          t = i_24;
        }
      }
  }
  t = d_24;
  t = if_verbose5_1_0(b_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_f_28;
  return(t);
}
static ATerm c_26 (ATerm b_25, ATerm t)
{
  ATerm g_25 = NULL,i_25 = NULL,l_25 = NULL;
  t = term_i_27;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_25);
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATmakeAppl(sym_Tool_1, b_25));
  t = m_9(i_25, l_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_28 = ATgetFirst((ATermList) t);
      if(match_cons(g_28, sym__2))
        {
          ATerm k_28 = ATgetArgument(g_28, 0);
          g_25 = ATgetArgument(g_28, 1);
        }
      else
        _fail(t);
      {
        ATerm j_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_f_28;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_i_27;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      o_25 = t;
      if(match_cons(t, sym__2))
        {
          m_25 = ATgetArgument(t, 0);
          n_25 = ATgetArgument(t, 1);
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                t = term_i_27;
                u_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_25);
                v_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATmakeAppl(sym_Tool_1, m_25));
                t = m_9(u_25, v_25, t);
                {
                  static ATerm k_2 (ATerm t);
                  static ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_25 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                }
                t = not_null(t_25);
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
                t = c_26(o_25, t);
              }
          }
        }
      else
        {
          t = c_26(o_25, t);
        }
      t = if_verbose5_1_0(l_2, t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm b_26 = NULL,q_11 = NULL,r_11 = NULL;
        b_26 = t;
        t = term_i_14;
        q_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), b_26), term_t_28);
        r_11 = t;
        t = SSL_printnl(q_11, r_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), b_26), term_t_28);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_26 = NULL,r_26 = NULL;
      r_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_26 = ATgetArgument(t, 0);
          {
            ATerm b_12 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(r_26);
            b_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_26);
            i_3 = t;
            t = SSLsetAnnotations(i_3, b_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_26;
        }
      LocalPopChoice(x_28);
      {
        static ATerm s_2 (ATerm t);
        static ATerm s_2 (ATerm t)
        {
          ATerm s_26 = NULL,t_26 = NULL,y_26 = NULL;
          t = term_a_15;
          t = pass_verbose_0_0(t);
          s_26 = t;
          t = term_a_15;
          t = a_101(t);
          t = map_1_0(xtc_find_0_0, t);
          y_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_28, y_26);
          t = add_arg_flags_0_0(t);
          t_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_2, s_2, t);
      }
    }
  else
    {
      t = w_28;
      {
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          ATerm c_27 = NULL,d_27 = NULL,f_27 = NULL;
          t = term_a_15;
          t = pass_verbose_0_0(t);
          c_27 = t;
          t = term_a_15;
          t = a_101(t);
          t = map_1_0(xtc_find_0_0, t);
          f_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_28, f_27);
          t = add_arg_flags_0_0(t);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_27, d_27);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_2, x_2, t);
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_29);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_n_29;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm o_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_27 = NULL,y_27 = NULL;
      y_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_27 = ATgetArgument(t, 0);
          {
            ATerm k_12 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(y_27);
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_27);
            r_3 = t;
            t = SSLsetAnnotations(r_3, k_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_27;
        }
      LocalPopChoice(r_29);
      t = xtc_transform_file_2_0(y_2, pass_verbose_0_0, t);
    }
  else
    {
      t = o_29;
      t = xtc_transform_term_2_0(z_2, pass_verbose_0_0, t);
    }
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_28 = NULL,i_28 = NULL;
        i_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_28 = ATgetArgument(t, 0);
            {
              ATerm w_12 = NULL,t_3 = NULL;
              t = SSLgetAnnotations(i_28);
              w_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_28);
              t_3 = t;
              t = SSLsetAnnotations(t_3, w_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_28;
          }
        LocalPopChoice(u_29);
        t = xtc_transform_file_2_0(a_3, pass_verbose_0_0, t);
      }
    else
      {
        t = t_29;
        t = xtc_transform_term_2_0(g_3, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(n_3, t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL,s_28 = NULL;
        s_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_28 = ATgetArgument(t, 0);
            {
              ATerm d_13 = NULL,u_3 = NULL;
              t = SSLgetAnnotations(s_28);
              d_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_28);
              u_3 = t;
              t = SSLsetAnnotations(u_3, d_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_28;
          }
        LocalPopChoice(w_29);
        t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
      }
    else
      {
        t = v_29;
        t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm q_8 (ATerm d_110 (ATerm), ATerm i_38, ATerm g_38, ATerm t)
{
  ATerm z_28 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  g_29 = t;
  t = d_110(t);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_28, i_38, g_38);
  t = n_9(z_28, i_38, g_38, t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL;
        t = term_d_30;
        q_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_28, term_d_30);
        t = m_9(z_28, q_29, t);
        {
          ATerm h_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_30;
            }
        }
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_29 = ATgetFirst((ATermList) t);
      f_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_28, term_d_30, (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATinsert(CheckATermList(d_29), i_38)));
  t = lookup_table_0_1(z_28, t);
  l_29 = t;
  t = term_d_30;
  i_29 = t;
  t = (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATinsert(CheckATermList(d_29), i_38));
  j_29 = t;
  t = l_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(i_29, j_29, k_29, t);
  t = g_29;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm s_29 = NULL;
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_30 = NULL,o_13 = NULL;
      i_30 = t;
      t = term_o_30;
      o_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, term_o_30);
      t = e_9(i_30, o_13, t);
      s_29 = t;
      t = SSL_mkstemp(s_29);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm l_30 = NULL;
        t = term_p_30;
        l_30 = t;
        t = SSL_perror(l_30);
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
static ATerm v_3 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  t = P__tmpdir_0_0(t);
  v_30 = t;
  t = term_r_30;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, term_r_30);
  t = e_9(v_30, w_30, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_15;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_30, term_a_15);
  t = q_8(v_3, t_30, u_30, t);
  t = SSL_close(s_30);
  t = t_30;
  return(t);
}
static ATerm r_8 (ATerm r_39, ATerm s_39, ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL;
  c_31 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        t = m_9(r_39, s_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_31 = ATgetFirst((ATermList) t);
            a_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_30);
        {
          ATerm d_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, a_31);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_9(s_39, a_31, d_31, t);
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, a_31);
        }
      }
    else
      {
        t = x_30;
        {
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_9(s_39, g_31, t);
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        }
      }
  }
  t = c_31;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  o_31 = t;
  t = a_110(t);
  n_31 = t;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL;
        t = term_d_30;
        s_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_31, term_d_30);
        t = m_9(n_31, s_31, t);
        {
          ATerm i_31 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_31;
            }
        }
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_31 = ATgetFirst((ATermList) t);
      l_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_31, term_d_30, l_31);
  t = lookup_table_0_1(n_31, t);
  r_31 = t;
  t = term_d_30;
  p_31 = t;
  t = r_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(p_31, l_31, q_31, t);
  t = m_31;
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm t_31 = NULL;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_31, t_31);
      t = r_8(n_31, t_31, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = o_31;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_120(t);
      t = i_120(t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = i_120(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  w_31 = t;
  t = z_109(t);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_31, term_d_30);
  {
    ATerm u_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_32 = ATgetArgument(t, 0);
            ATerm e_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_30;
        g_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_31, term_d_30);
        t = m_9(v_31, g_32, t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATempty;
      }
  }
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_31, term_d_30, (ATerm) ATinsert(CheckATermList(x_31), (ATerm) ATempty));
  t = lookup_table_0_1(v_31, t);
  b_32 = t;
  t = term_d_30;
  y_31 = t;
  t = (ATerm) ATinsert(CheckATermList(x_31), (ATerm) ATempty);
  z_31 = t;
  t = b_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(y_31, z_31, a_32, t);
  t = w_31;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  {
    ATerm f_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_32);
        LocalPopChoice(h_32);
      }
    else
      {
        t = f_32;
        t = s_32;
      }
  }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm l_32 = NULL;
  static ATerm y_3 (ATerm t);
  static ATerm y_3 (ATerm t)
  {
    ATerm m_32 = NULL;
    m_32 = t;
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_32 = NULL,p_32 = NULL;
          t = term_q_30;
          o_32 = t;
          t = term_d_30;
          p_32 = t;
          t = term_n_32;
          t = m_9(o_32, p_32, t);
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
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
          ATerm q_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_32;
    t = map_1_0(c_4, t);
    t = m_32;
    t = end_scope_1_0(d_4, t);
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  t = restore_always_2_0(i_126, y_3, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = xtc_new_file_0_0(t);
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_33, n_33);
  t = c_9(l_4, i_33, n_33, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_33);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_33;
  t = read_text_file_0_0(t);
  t = trim_1_0(p_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(match_cons(r_32, sym_Stream_1))
        {
          p_33 = ATgetArgument(r_32, 0);
        }
      else
        _fail(t);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9(p_33, q_33, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  if(match_int(t, 10))
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_34(b_34, t);
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          t = b_34;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm v_32 = t;
          int x_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_34(b_34, t);
              LocalPopChoice(x_32);
            }
          else
            {
              t = v_32;
              t = b_34;
            }
        }
      else
        {
          t = e_34(b_34, t);
        }
    }
  return(t);
}
static ATerm e_34 (ATerm w_33, ATerm t)
{
  t = w_33;
  if(match_int(t, 9))
    {
      t = w_33;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = w_33;
    }
  t = w_33;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  t = xtc_temp_files_1_0(k_4, t);
  e_33 = t;
  t = term_i_14;
  f_33 = t;
  t = (ATerm) ATinsert(ATempty, term_z_32);
  g_33 = t;
  t = SSL_printnl(f_33, g_33);
  t = e_33;
  t = debug_1_0(q_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  static ATerm f_34 (ATerm t);
  static ATerm f_34 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_103(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = SRTS_one(f_34, t);
      }
    return(t);
  }
  t = f_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  t = term_c_33;
  x_34 = t;
  t = term_l_33;
  y_34 = t;
  t = term_m_33;
  t = m_9(x_34, y_34, t);
  return(t);
}
static ATerm o_43 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm i_36, ATerm t)
{
  t = e_36;
  t = fetch_1_0(r_4, t);
  t = e_36;
  {
    ATerm o_33 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, c_36, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, d_36)), (ATerm) ATmakeAppl(sym_attrs_1, e_36));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
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
static ATerm e_5 (ATerm t)
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
static ATerm h_5 (ATerm t)
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
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
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
static ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm p_36 = NULL,s_36 = NULL,t_36 = NULL,z_36 = NULL,c_37 = NULL,e_37 = NULL,f_37 = NULL,h_37 = NULL,i_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym_prod_3))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      h_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_37;
  if(match_cons(t, sym_attrs_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_37;
      {
        ATerm x_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm c_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_34);
            t = e_37;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_36 = ATgetFirst((ATermList) t);
                s_36 = (ATerm) ATgetNext((ATermList) t);
                t = s_36;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = p_36;
                    {
                      ATerm i_34 = t;
                      int j_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm k_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_34);
                          {
                            ATerm l_34 = t;
                            int m_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_37;
                                t = fetch_1_0(t_4, t);
                                t = c_37;
                                LocalPopChoice(m_34);
                              }
                            else
                              {
                                t = l_34;
                                {
                                  ATerm n_34 = t;
                                  int o_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_37;
                                      t = fetch_1_0(y_4, t);
                                      t = c_37;
                                      LocalPopChoice(o_34);
                                    }
                                  else
                                    {
                                      t = n_34;
                                      t = c_37;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = i_34;
                          {
                            ATerm p_34 = t;
                            int q_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_37;
                                t = fetch_1_0(z_4, t);
                                t = c_37;
                                LocalPopChoice(q_34);
                              }
                            else
                              {
                                t = p_34;
                                {
                                  ATerm r_34 = t;
                                  int s_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_37;
                                      t = fetch_1_0(b_5, t);
                                      t = c_37;
                                      LocalPopChoice(s_34);
                                    }
                                  else
                                    {
                                      t = r_34;
                                      t = i_37;
                                      t = fetch_1_0(d_5, t);
                                      t = c_37;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = p_36;
                    {
                      ATerm t_34 = t;
                      int u_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(e_5, t);
                          t = c_37;
                          LocalPopChoice(u_34);
                        }
                      else
                        {
                          t = t_34;
                          {
                            ATerm v_34 = t;
                            int w_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_37;
                                t = fetch_1_0(f_5, t);
                                t = c_37;
                                LocalPopChoice(w_34);
                              }
                            else
                              {
                                t = v_34;
                                t = i_37;
                                t = fetch_1_0(h_5, t);
                                t = c_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm z_34 = t;
                int a_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_37;
                    t = fetch_1_0(j_5, t);
                    t = c_37;
                    LocalPopChoice(a_35);
                  }
                else
                  {
                    t = z_34;
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(k_5, t);
                          t = c_37;
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          t = i_37;
                          t = fetch_1_0(n_5, t);
                          t = c_37;
                        }
                    }
                  }
              }
          }
        else
          {
            t = x_33;
            if(match_cons(t, sym_cf_1))
              {
                t_36 = ATgetArgument(t, 0);
                t = t_36;
                if(match_cons(t, sym_sort_1))
                  {
                    z_36 = ATgetArgument(t, 0);
                    t = e_37;
                    {
                      ATerm d_35 = t;
                      int e_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(o_5, t);
                          t = c_37;
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
                                t = i_37;
                                t = fetch_1_0(q_5, t);
                                t = c_37;
                                LocalPopChoice(g_35);
                              }
                            else
                              {
                                t = f_35;
                                {
                                  ATerm h_35 = t;
                                  int i_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_43(e_37, z_36, i_37, c_37, t);
                                      LocalPopChoice(i_35);
                                    }
                                  else
                                    {
                                      t = h_35;
                                      t = i_37;
                                      t = fetch_1_0(t_5, t);
                                      t = c_37;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = e_37;
                    {
                      ATerm j_35 = t;
                      int k_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(d_6, t);
                          t = c_37;
                          LocalPopChoice(k_35);
                        }
                      else
                        {
                          t = j_35;
                          {
                            ATerm l_35 = t;
                            int m_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_37;
                                t = fetch_1_0(g_6, t);
                                t = c_37;
                                LocalPopChoice(m_35);
                              }
                            else
                              {
                                t = l_35;
                                t = i_37;
                                t = fetch_1_0(h_6, t);
                                t = c_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = e_37;
                {
                  ATerm n_35 = t;
                  int o_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_37;
                      t = fetch_1_0(i_6, t);
                      t = c_37;
                      LocalPopChoice(o_35);
                    }
                  else
                    {
                      t = n_35;
                      {
                        ATerm p_35 = t;
                        int q_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_37;
                            t = fetch_1_0(j_6, t);
                            t = c_37;
                            LocalPopChoice(q_35);
                          }
                        else
                          {
                            t = p_35;
                            t = i_37;
                            t = fetch_1_0(k_6, t);
                            t = c_37;
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
      t = f_37;
      if(match_cons(t, sym_cf_1))
        {
          t_36 = ATgetArgument(t, 0);
          t = t_36;
          if(match_cons(t, sym_sort_1))
            {
              z_36 = ATgetArgument(t, 0);
              t = e_37;
              {
                ATerm r_35 = t;
                int s_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_37;
                    t = fetch_1_0(l_6, t);
                    t = c_37;
                    LocalPopChoice(s_35);
                  }
                else
                  {
                    t = r_35;
                    {
                      ATerm t_35 = t;
                      int u_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(m_6, t);
                          t = c_37;
                          LocalPopChoice(u_35);
                        }
                      else
                        {
                          t = t_35;
                          {
                            ATerm v_35 = t;
                            int w_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_43(e_37, z_36, i_37, c_37, t);
                                LocalPopChoice(w_35);
                              }
                            else
                              {
                                t = v_35;
                                t = i_37;
                                t = fetch_1_0(o_6, t);
                                t = c_37;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = e_37;
              {
                ATerm x_35 = t;
                int y_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_37;
                    t = fetch_1_0(q_6, t);
                    t = c_37;
                    LocalPopChoice(y_35);
                  }
                else
                  {
                    t = x_35;
                    {
                      ATerm z_35 = t;
                      int a_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_37;
                          t = fetch_1_0(r_6, t);
                          t = c_37;
                          LocalPopChoice(a_36);
                        }
                      else
                        {
                          t = z_35;
                          t = i_37;
                          t = fetch_1_0(t_6, t);
                          t = c_37;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = e_37;
          {
            ATerm b_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_37;
                t = fetch_1_0(u_6, t);
                t = c_37;
                LocalPopChoice(f_36);
              }
            else
              {
                t = b_36;
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_37;
                      t = fetch_1_0(v_6, t);
                      t = c_37;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = i_37;
                      t = fetch_1_0(a_7, t);
                      t = c_37;
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm t_8 (ATerm c_61, ATerm d_61, ATerm t)
{
  t = SSL_mkterm(c_61, d_61);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm d_45 = NULL,g_45 = NULL,i_45 = NULL,k_45 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      i_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_45;
  if(match_cons(t, sym_alt_2))
    {
      d_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_45 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, d_45, g_45);
            t = flat_alt_0_0(t);
            q_45 = t;
            t = (ATerm) ATinsert(CheckATermList(q_45), i_45);
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            t = (ATerm) ATinsert(ATinsert(ATempty, k_45), i_45);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, k_45), i_45);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_44;
        {
          ATerm n_36 = t;
          if((PushChoice() == 0))
            {
              ATerm c_14 = NULL;
              c_14 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_14;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm o_36 = ATgetFirst((ATermList) t);
                      ATerm q_36 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_14;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_36;
            }
        }
        t = (ATerm) ATinsert(ATempty, s_44);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = s_44;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(b_7, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  ATerm r_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          y_50 = ATgetArgument(t, 0);
          z_50 = ATgetArgument(t, 1);
          {
            ATerm x_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_36);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, y_50, z_50);
    }
  else
    {
      t = r_36;
      if(match_cons(t, sym_iter_n_2))
        {
          y_50 = ATgetArgument(t, 0);
          {
            ATerm y_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, y_50);
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm p_16 = NULL,x_16 = NULL;
  x_16 = t;
  if(match_cons(t, sym_Arg_1))
    {
      p_16 = ATgetArgument(t, 0);
      {
        ATerm d_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_17 = NULL,n_4 = NULL;
            t = SSLgetAnnotations(x_16);
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, p_16);
            n_4 = t;
            t = SSLsetAnnotations(n_4, s_17);
            t = term_j_37;
            LocalPopChoice(g_37);
          }
        else
          {
            t = d_37;
            t = x_16;
          }
      }
    }
  else
    {
      t = x_16;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,w_47 = NULL,x_47 = NULL,a_48 = NULL;
  static ATerm o_53 (ATerm t);
  static ATerm o_53 (ATerm t)
  {
    static ATerm q_53 (ATerm b_50, ATerm c_50, ATerm e_50, ATerm t);
    static ATerm t_53 (ATerm d_51, ATerm e_51, ATerm f_51, ATerm i_51, ATerm t);
    static ATerm q_53 (ATerm b_50, ATerm c_50, ATerm e_50, ATerm t)
    {
      ATerm f_50 = NULL,r_50 = NULL,e_4 = NULL;
      t = SSLgetAnnotations(b_50);
      f_50 = t;
      t = e_50;
      t = _2_0(_id, c_7, t);
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_50, r_50);
      e_4 = t;
      t = SSLsetAnnotations(e_4, f_50);
      t = o_53(t);
      return(t);
    }
    static ATerm t_53 (ATerm d_51, ATerm e_51, ATerm f_51, ATerm i_51, ATerm t)
    {
      ATerm n_51 = NULL,o_51 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL,x_51 = NULL;
      t = SSL_explode_term(i_51);
      if(match_cons(t, sym__2))
        {
          t_51 = ATgetArgument(t, 0);
          u_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, e_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, f_51, t_51)));
      t = conc_0_0(t);
      n_51 = t;
      t = u_51;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      x_51 = t;
      t = make_0_0(t);
      o_51 = t;
      t = x_51;
      {
        static ATerm g_7 (ATerm t);
        static ATerm g_7 (ATerm t)
        {
          ATerm b_52 = NULL;
          b_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_51, n_51), b_52);
          t = o_53(t);
          return(t);
        }
        t = map_1_0(g_7, t);
      }
      t = concat_0_0(t);
      r_51 = t;
      t = (ATerm) ATinsert(CheckATermList(r_51), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, d_51, n_51), o_51));
      return(t);
    }
    ATerm d_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,r_52 = NULL,u_52 = NULL,x_52 = NULL,y_52 = NULL,b_53 = NULL,d_53 = NULL,e_53 = NULL;
    r_52 = t;
    if(match_cons(t, sym__2))
      {
        u_52 = ATgetArgument(t, 0);
        b_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_53;
    {
      ATerm k_37 = t;
      int l_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm m_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(l_37);
          t = (ATerm) ATempty;
        }
      else
        {
          t = k_37;
          if(match_cons(t, sym__2))
            {
              d_53 = ATgetArgument(t, 0);
              e_53 = ATgetArgument(t, 1);
              t = e_53;
              {
                ATerm n_37 = t;
                int o_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm p_37 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_37);
                    t = u_52;
                    {
                      ATerm q_37 = t;
                      int r_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm s_37 = ATgetArgument(t, 0);
                              ATerm t_37 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_37);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = q_37;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = n_37;
                    {
                      ATerm u_37 = t;
                      int v_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm w_37 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(v_37);
                          t = u_52;
                          {
                            ATerm x_37 = t;
                            int y_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm z_37 = ATgetArgument(t, 0);
                                    ATerm a_38 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(y_37);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = x_37;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = u_37;
                          if(match_cons(t, sym_alt_2))
                            {
                              m_52 = ATgetArgument(t, 0);
                              d_52 = ATgetArgument(t, 1);
                              t = d_52;
                              if(match_cons(t, sym_alt_2))
                                {
                                  k_52 = ATgetArgument(t, 0);
                                  l_52 = ATgetArgument(t, 1);
                                  t = u_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_52 = ATgetArgument(t, 0);
                                      y_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm b_38 = t;
                                        int c_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_15 = NULL,n_15 = NULL,u_15 = NULL,y_15 = NULL,z_15 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,o_4 = NULL;
                                            t = x_52;
                                            if(((t_47 != NULL) && (t_47 != t)))
                                              _fail(t);
                                            else
                                              t_47 = t;
                                            t = y_52;
                                            if(((u_47 != NULL) && (u_47 != t)))
                                              _fail(t);
                                            else
                                              u_47 = t;
                                            t = d_53;
                                            if(((w_47 != NULL) && (w_47 != t)))
                                              _fail(t);
                                            else
                                              w_47 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, m_52, (ATerm) ATmakeAppl(sym_alt_2, k_52, l_52));
                                            t = flat_alt_0_0(t);
                                            m_15 = t;
                                            t = term_d_38;
                                            u_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_d_38, m_15);
                                            t = t_8(u_15, m_15, t);
                                            n_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_52, y_52), (ATerm) ATmakeAppl(sym__2, d_53, n_15));
                                            t = o_53(t);
                                            f_16 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                z_15 = ATgetFirst((ATermList) t);
                                                d_16 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(f_16);
                                            y_15 = t;
                                            t = z_15;
                                            t = topdown_1_0(h_7, t);
                                            e_16 = t;
                                            t = (ATerm) ATinsert(CheckATermList(d_16), e_16);
                                            o_4 = t;
                                            t = SSLsetAnnotations(o_4, y_15);
                                            LocalPopChoice(c_38);
                                          }
                                        else
                                          {
                                            t = b_38;
                                            {
                                              ATerm e_38 = t;
                                              int f_38 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = q_53(r_52, u_52, b_53, t);
                                                  LocalPopChoice(f_38);
                                                }
                                              else
                                                {
                                                  t = e_38;
                                                  t = t_53(x_52, y_52, d_53, e_53, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_53(r_52, u_52, b_53, t);
                                    }
                                }
                              else
                                {
                                  t = u_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_52 = ATgetArgument(t, 0);
                                      y_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_38 = t;
                                        int j_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_53(r_52, u_52, b_53, t);
                                            LocalPopChoice(j_38);
                                          }
                                        else
                                          {
                                            t = h_38;
                                            t = t_53(x_52, y_52, d_53, e_53, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_53(r_52, u_52, b_53, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  m_52 = ATgetArgument(t, 0);
                                  t = u_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_52 = ATgetArgument(t, 0);
                                      y_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm k_38 = t;
                                        int l_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_53(r_52, u_52, b_53, t);
                                            LocalPopChoice(l_38);
                                          }
                                        else
                                          {
                                            t = k_38;
                                            {
                                              ATerm m_38 = t;
                                              int n_38 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_52, y_52), (ATerm) ATmakeAppl(sym__2, d_53, m_52));
                                                  t = o_53(t);
                                                  LocalPopChoice(n_38);
                                                }
                                              else
                                                {
                                                  t = m_38;
                                                  t = t_53(x_52, y_52, d_53, e_53, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_53(r_52, u_52, b_53, t);
                                    }
                                }
                              else
                                {
                                  t = u_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      x_52 = ATgetArgument(t, 0);
                                      y_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm o_38 = t;
                                        int p_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_53(r_52, u_52, b_53, t);
                                            LocalPopChoice(p_38);
                                          }
                                        else
                                          {
                                            t = o_38;
                                            t = t_53(x_52, y_52, d_53, e_53, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_53(r_52, u_52, b_53, t);
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
              t = u_52;
              t = q_53(r_52, u_52, b_53, t);
            }
        }
    }
    return(t);
  }
  a_48 = t;
  t = term_a_15;
  t = q_100(t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_47, a_48);
  t = o_53(t);
  return(t);
}
ATerm _2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,z_53 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,s_4 = NULL;
  e_54 = t;
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      z_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_54);
  w_53 = t;
  t = x_53;
  t = y_88(t);
  c_54 = t;
  t = z_53;
  t = z_88(t);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_54, d_54);
  s_4 = t;
  t = SSLsetAnnotations(s_4, w_53);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  k_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_54;
    }
  else
    {
      ATerm s_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_54 = ATgetFirst((ATermList) t);
          m_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_54 = ATgetFirst((ATermList) t);
          o_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_54;
      t = pair_0_0(t);
      s_54 = t;
      t = (ATerm) ATinsert(CheckATermList(s_54), (ATerm) ATmakeAppl(sym__2, l_54, n_54));
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,i_57 = NULL,r_5 = NULL;
  g_57 = t;
  if(match_cons(t, sym_lit_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, f_57);
  r_5 = t;
  t = SSLsetAnnotations(r_5, e_57);
  if(match_cons(t, sym_lit_1))
    {
      i_57 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, i_57));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_57 = ATgetArgument(t, 0);
          {
            ATerm r_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_57);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,c_6 = NULL,d_59 = NULL,l_58 = NULL,w_5 = NULL;
  j_58 = t;
  if(match_cons(t, sym__2))
    {
      f_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_58);
  e_58 = t;
  t = f_58;
  if(match_cons(t, sym_lit_1))
    {
      i_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_58);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, i_58);
  w_5 = t;
  t = SSLsetAnnotations(w_5, h_58);
  if(match_cons(t, sym_lit_1))
    {
      l_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, l_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          l_58 = ATgetArgument(t, 0);
          {
            ATerm s_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, l_58);
    }
  c_58 = t;
  t = g_58;
  t = _2_0(_id, q_7, t);
  if(match_cons(t, sym_lit_1))
    {
      d_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, d_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_59 = ATgetArgument(t, 0);
          {
            ATerm t_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, d_59);
    }
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_58, d_58);
  c_6 = t;
  t = SSLsetAnnotations(c_6, e_58);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_w_38), (ATerm) ATinsert(ATinsert(ATempty, d_58), c_58));
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  a_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_59 = ATgetArgument(t, 0);
      {
        ATerm a_20 = NULL,y_5 = NULL;
        t = SSLgetAnnotations(a_59);
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, b_59);
        y_5 = t;
        t = SSLsetAnnotations(y_5, a_20);
      }
    }
  else
    {
      ATerm l_20 = NULL,a_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_59);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, b_59);
      a_6 = t;
      t = SSLsetAnnotations(a_6, l_20);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_59 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      i_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, i_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_59 = ATgetArgument(t, 0);
          {
            ATerm x_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_59);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,s_5 = NULL,a_57 = NULL,p_5 = NULL,x_56 = NULL,y_56 = NULL;
      t = reverse_acc_2_0(_id, i_7, t);
      e_56 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_55 = ATgetFirst((ATermList) t);
          x_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_56);
      v_55 = t;
      t = w_55;
      if(match_cons(t, sym__2))
        {
          b_56 = ATgetArgument(t, 0);
          c_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_55);
      a_56 = t;
      t = c_56;
      if(match_cons(t, sym_iter_1))
        {
          x_56 = ATgetArgument(t, 0);
          {
            ATerm i_18 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(c_56);
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, x_56);
            u_4 = t;
            t = SSLsetAnnotations(u_4, i_18);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              x_56 = ATgetArgument(t, 0);
              {
                ATerm p_18 = NULL,c_5 = NULL;
                t = SSLgetAnnotations(c_56);
                p_18 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, x_56);
                c_5 = t;
                t = SSLsetAnnotations(c_5, p_18);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                  {
                    ATerm a_19 = NULL,g_5 = NULL;
                    t = SSLgetAnnotations(c_56);
                    a_19 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, x_56, y_56);
                    g_5 = t;
                    t = SSLsetAnnotations(g_5, a_19);
                  }
                }
              else
                {
                  ATerm m_19 = NULL,l_5 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      x_56 = ATgetArgument(t, 0);
                      y_56 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_56);
                  m_19 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, x_56, y_56);
                  l_5 = t;
                  t = SSLsetAnnotations(l_5, m_19);
                }
            }
        }
      d_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_56, d_56);
      p_5 = t;
      t = SSLsetAnnotations(p_5, a_56);
      if(match_cons(t, sym_lit_1))
        {
          a_57 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, a_57));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              a_57 = ATgetArgument(t, 0);
              {
                ATerm a_39 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, a_57);
        }
      y_55 = t;
      t = x_55;
      t = map_1_0(k_7, t);
      z_55 = t;
      t = (ATerm) ATinsert(CheckATermList(z_55), y_55);
      s_5 = t;
      t = SSLsetAnnotations(s_5, v_55);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_39 = t;
        if((PushChoice() == 0))
          {
            ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,u_5 = NULL;
            p_57 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_57 = ATgetFirst((ATermList) t);
                o_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_57);
            m_57 = t;
            t = o_57;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_57), n_57);
            u_5 = t;
            t = SSLsetAnnotations(u_5, m_57);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_39;
          }
      }
      t = p_55;
      t = reverse_acc_2_0(_id, l_7, t);
      u_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, u_55)));
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_5 = NULL,x_57 = NULL;
            t = reverse_acc_2_0(_id, n_7, t);
            u_57 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_57 = ATgetFirst((ATermList) t);
                t_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_57);
            r_57 = t;
            t = s_57;
            if(match_cons(t, sym_lit_1))
              {
                x_57 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_38, (ATerm) ATmakeAppl(sym_S_1, x_57));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    x_57 = ATgetArgument(t, 0);
                    {
                      ATerm e_39 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, x_57);
              }
            t_55 = t;
            t = t_57;
            {
              ATerm f_39 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_39;
                }
            }
            t = reverse_acc_2_0(_id, o_7, t);
            r_55 = t;
            t = (ATerm) ATinsert(CheckATermList(r_55), t_55);
            v_5 = t;
            t = SSLsetAnnotations(v_5, r_57);
            t = r_55;
            t = pair_0_0(t);
            t = map_1_0(p_7, t);
            s_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_55), s_55));
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            t = map_1_0(r_7, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm g_39 = t;
  if((PushChoice() == 0))
    {
      ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,j_7 = NULL;
      u_59 = t;
      if(match_cons(t, sym_lit_1))
        {
          t_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_59);
      s_59 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, t_59);
      j_7 = t;
      t = SSLsetAnnotations(j_7, s_59);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_39;
    }
  return(t);
}
static ATerm i_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm t)
{
  ATerm f_60 = NULL,m_7 = NULL;
  t = SSLgetAnnotations(z_59);
  f_60 = t;
  t = b_60;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
  m_7 = t;
  t = SSLsetAnnotations(m_7, f_60);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm y_59 = NULL;
  static ATerm h_61 (ATerm t);
  static ATerm h_61 (ATerm t)
  {
    ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
    j_60 = t;
    if(match_cons(t, sym__2))
      {
        k_60 = ATgetArgument(t, 0);
        l_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_60 = ATgetFirst((ATermList) t);
        n_60 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_61(j_60, k_60, l_60, t);
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
              {
                ATerm j_39 = t;
                int k_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_60 = NULL,u_60 = NULL,v_60 = NULL;
                    t = m_60;
                    t = t_100(t);
                    t = term_h_16;
                    v_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_60, term_h_16);
                    t = h_9(k_60, v_60, t);
                    u_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_60, n_60);
                    t = h_61(t);
                    r_60 = t;
                    t = (ATerm) ATinsert(CheckATermList(r_60), (ATerm) ATmakeAppl(sym__2, k_60, m_60));
                    LocalPopChoice(k_39);
                  }
                else
                  {
                    t = j_39;
                    {
                      ATerm g_61 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, k_60, n_60);
                      t = h_61(t);
                      g_61 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_61), m_60);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = i_61(j_60, k_60, l_60, t);
      }
    return(t);
  }
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, y_59);
  t = h_61(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  n_61 = t;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            m_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_39);
        t = m_61;
      }
    else
      {
        t = o_39;
        t = n_61;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(s_7, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  t = number_nonterminals_0_0(t);
  u_61 = t;
  t = make_0_0(t);
  r_61 = t;
  t = u_61;
  {
    static ATerm t_7 (ATerm t);
    static ATerm t_7 (ATerm t)
    {
      static ATerm u_7 (ATerm t);
      static ATerm u_7 (ATerm t)
      {
        ATerm v_61 = NULL;
        t = term_a_15;
        t = p_100(t);
        v_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_61, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(u_7, t);
      return(t);
    }
    t = map_1_0(t_7, t);
  }
  t = concat_0_0(t);
  s_61 = t;
  t = term_a_15;
  t = p_100(t);
  t_61 = t;
  t = (ATerm) ATinsert(CheckATermList(s_61), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, t_61), r_61));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm y_61 = NULL;
  static ATerm a_8 (ATerm t);
  static ATerm a_8 (ATerm t)
  {
    t = n_122(t);
    if(((y_61 != NULL) && (y_61 != t)))
      _fail(t);
    else
      y_61 = t;
    return(t);
  }
  t = fetch_1_0(a_8, t);
  t = not_null(y_61);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,p_62 = NULL;
  if(match_cons(t, sym_term_1))
    {
      p_62 = ATgetArgument(t, 0);
      t = p_62;
      if(match_cons(t, sym_appl_2))
        {
          n_62 = ATgetArgument(t, 0);
          i_62 = ATgetArgument(t, 1);
          {
            ATerm y_20 = NULL;
            t = n_62;
            if(match_cons(t, sym_uqlit_1))
              {
                h_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_62;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
              _fail(t);
            t = i_62;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_62 = ATgetFirst((ATermList) t);
                m_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_62;
            if(match_cons(t, sym_fun_1))
              {
                k_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_62;
            if(match_cons(t, sym_qlit_1))
              {
                l_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_62;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_explode_string(l_62);
            t = unquote_chars_2_0(e_8, f_8, t);
            y_20 = t;
            t = SSL_implode_string(y_20);
          }
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              n_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_62;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          p_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_62;
    }
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
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(b_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
  j_63 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      k_63 = ATgetArgument(t, 0);
      l_63 = ATgetArgument(t, 1);
      m_63 = ATgetArgument(t, 2);
      i_63 = ATgetArgument(t, 3);
      {
        ATerm u_63 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_39)), l_63), (ATerm) ATinsert(ATinsert(ATempty, term_u_39), (ATerm) ATmakeAppl(sym_lit_1, k_63)));
        t = concat_0_0(t);
        u_63 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, u_63, m_63, i_63);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm k_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          k_63 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
          m_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_63;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL;
            t = m_63;
            if(match_cons(t, sym_attrs_1))
              {
                l_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_21;
            t = get_cnstr_name_0_0(t);
            k_21 = t;
            LocalPopChoice(y_39);
            {
              static ATerm k_8 (ATerm t);
              static ATerm k_8 (ATerm t)
              {
                t = k_21;
                return(t);
              }
              t = k_63;
              t = symbols2pp_entries_1_0(k_8, t);
            }
          }
        else
          {
            t = x_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(a_40);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = z_39;
                  {
                    ATerm b_40 = t;
                    int c_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_40 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_21 = NULL;
                            m_21 = t;
                            t = term_e_40;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(m_8, t);
                            t = m_21;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = d_40;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(c_40);
                      }
                    else
                      {
                        t = b_40;
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
ATerm at_last_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  static ATerm f_65 (ATerm t);
  static ATerm f_65 (ATerm t)
  {
    ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
    c_65 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_65 = ATgetFirst((ATermList) t);
        e_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_40 = t;
      int g_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_21 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(c_65);
          w_21 = t;
          t = e_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(e_65), d_65);
          v_7 = t;
          t = SSLsetAnnotations(v_7, w_21);
          t = d_123(t);
          LocalPopChoice(g_40);
        }
      else
        {
          t = f_40;
          {
            ATerm i_22 = NULL,n_22 = NULL,w_7 = NULL;
            t = SSLgetAnnotations(c_65);
            i_22 = t;
            t = e_65;
            t = f_65(t);
            n_22 = t;
            t = (ATerm) ATinsert(CheckATermList(n_22), d_65);
            w_7 = t;
            t = SSLsetAnnotations(w_7, i_22);
          }
        }
    }
    return(t);
  }
  t = f_65(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_65 = ATgetFirst((ATermList) t);
      o_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_65;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_65;
    }
  else
    {
      t = o_65;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm a_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_40 = ATgetFirst((ATermList) t);
      a_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_66;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_65 = ATgetFirst((ATermList) t);
      {
        ATerm i_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_65;
  t = b_102(t);
  t = x_65;
  t = last_0_0(t);
  t = c_102(t);
  t = x_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_40 = ATgetFirst((ATermList) t);
      y_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_65;
  t = at_last_1_0(u_8, t);
  return(t);
}
static ATerm x_8 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm x_60, ATerm w_60, ATerm t)
{
  t = o_116(t);
  {
    static ATerm l_9 (ATerm t);
    static ATerm l_9 (ATerm t)
    {
      ATerm b_66 = NULL;
      b_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_60, b_66);
      t = n_116(t);
      return(t);
    }
    t = fetch_1_0(l_9, t);
  }
  t = w_60;
  return(t);
}
static ATerm y_8 (ATerm k_116 (ATerm), ATerm t_60, ATerm s_60, ATerm t)
{
  static ATerm s_66 (ATerm t);
  static ATerm s_66 (ATerm t)
  {
    ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
    m_66 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_60;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_66 = ATgetFirst((ATermList) t);
            o_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_66;
              {
                static ATerm s_9 (ATerm t);
                static ATerm s_9 (ATerm t)
                {
                  t = s_60;
                  return(t);
                }
                t = x_8(k_116, s_9, n_66, o_66, t);
              }
              t = s_66(t);
              LocalPopChoice(o_40);
            }
          else
            {
              t = n_40;
              {
                ATerm w_22 = NULL,z_22 = NULL,o_9 = NULL;
                t = SSLgetAnnotations(m_66);
                w_22 = t;
                t = o_66;
                t = s_66(t);
                z_22 = t;
                t = (ATerm) ATinsert(CheckATermList(z_22), n_66);
                o_9 = t;
                t = SSLsetAnnotations(o_9, w_22);
              }
            }
        }
      }
    return(t);
  }
  t = t_60;
  t = s_66(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  v_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_66;
      t = l_124(t);
    }
  else
    {
      ATerm a_67 = NULL,b_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_66 = ATgetFirst((ATermList) t);
          x_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_66;
      t = n_124(t);
      a_67 = t;
      t = x_66;
      t = foldr_3_0(l_124, m_124, n_124, t);
      b_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_67, b_67);
      t = m_124(t);
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_67 = NULL;
      t = h_118(t);
      f_67 = t;
      t = (ATerm) ATinsert(ATempty, f_67);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm f_23 = NULL,g_23 = NULL;
        static ATerm y_9 (ATerm t);
        static ATerm y_9 (ATerm t)
        {
          t = collect_om_2_0(h_118, i_118, t);
          return(t);
        }
        g_23 = t;
        t = SSL_explode_term(g_23);
        if(match_cons(t, sym__2))
          {
            ATerm r_40 = ATgetArgument(t, 0);
            f_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_23;
        t = foldr_3_0(w_9, i_118, y_9, t);
      }
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm w_67 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      w_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_67;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  if(match_cons(t, sym__2))
    {
      x_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8(n_10, x_67, y_67, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      z_67 = ATgetArgument(t, 0);
      if((z_67 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  l_69 = t;
  if(match_cons(t, sym_cons_1))
    {
      j_69 = ATgetArgument(t, 0);
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL,a_10 = NULL;
            t = SSLgetAnnotations(l_69);
            m_23 = t;
            t = SSL_explode_string(j_69);
            t = unquote_chars_2_0(g_11, h_11, t);
            q_23 = t;
            t = SSL_implode_string(q_23);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, p_23);
            a_10 = t;
            t = SSLsetAnnotations(a_10, m_23);
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            t = l_69;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          j_69 = ATgetArgument(t, 0);
          t = j_69;
          if(match_cons(t, sym_qlit_1))
            {
              k_69 = ATgetArgument(t, 0);
              {
                ATerm w_40 = t;
                int x_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_70(l_69, j_69, t);
                    LocalPopChoice(x_40);
                  }
                else
                  {
                    t = w_40;
                    {
                      ATerm z_40 = t;
                      int a_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_70(k_69, t);
                          LocalPopChoice(a_41);
                        }
                      else
                        {
                          t = z_40;
                          t = l_69;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm b_41 = t;
              int c_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_70(l_69, j_69, t);
                  LocalPopChoice(c_41);
                }
              else
                {
                  t = b_41;
                  t = l_69;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              j_69 = ATgetArgument(t, 0);
              {
                ATerm d_41 = t;
                int e_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_70(l_69, j_69, t);
                    LocalPopChoice(e_41);
                  }
                else
                  {
                    t = d_41;
                    t = l_69;
                  }
              }
            }
          else
            {
              t = l_69;
            }
        }
    }
  return(t);
}
static ATerm w_70 (ATerm i_68, ATerm j_68, ATerm t)
{
  ATerm m_68 = NULL,p_68 = NULL,q_68 = NULL,t_9 = NULL;
  t = SSLgetAnnotations(i_68);
  m_68 = t;
  t = SSL_explode_string(j_68);
  t = unquote_chars_2_0(s_10, v_10, t);
  q_68 = t;
  t = SSL_implode_string(q_68);
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, p_68);
  t_9 = t;
  t = SSLsetAnnotations(t_9, m_68);
  return(t);
}
static ATerm x_70 (ATerm s_68, ATerm u_68, ATerm t)
{
  ATerm v_68 = NULL,x_68 = NULL,y_68 = NULL,u_9 = NULL;
  t = SSLgetAnnotations(s_68);
  v_68 = t;
  t = SSL_explode_string(u_68);
  t = unquote_chars_2_0(w_10, d_11, t);
  y_68 = t;
  t = SSL_implode_string(y_68);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, x_68);
  u_9 = t;
  t = SSLsetAnnotations(u_9, v_68);
  return(t);
}
static ATerm y_70 (ATerm a_69, ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  t = SSL_explode_string(a_69);
  t = unquote_chars_2_0(e_11, f_11, t);
  i_69 = t;
  t = SSL_implode_string(i_69);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, h_69);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
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
static ATerm l_11 (ATerm t)
{
  ATerm h_41 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_41;
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  q_70 = t;
  if(match_cons(t, sym_Arg_1))
    {
      p_70 = ATgetArgument(t, 0);
      {
        ATerm i_41 = t;
        int j_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL,g_24 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(q_70);
            c_24 = t;
            t = SSL_int_to_string(p_70);
            g_24 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, g_24);
            i_11 = t;
            t = SSLsetAnnotations(i_11, c_24);
            LocalPopChoice(j_41);
          }
        else
          {
            t = i_41;
            t = q_70;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          p_70 = ATgetArgument(t, 0);
          o_70 = ATgetArgument(t, 1);
          {
            ATerm k_41 = t;
            int l_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_24 = NULL,v_24 = NULL,j_11 = NULL;
                t = SSLgetAnnotations(q_70);
                s_24 = t;
                t = SSL_int_to_string(p_70);
                v_24 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, v_24, o_70);
                j_11 = t;
                t = SSLsetAnnotations(j_11, s_24);
                LocalPopChoice(l_41);
              }
            else
              {
                t = k_41;
                t = q_70;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              p_70 = ATgetArgument(t, 0);
              {
                ATerm m_41 = t;
                int n_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL,k_11 = NULL;
                    t = SSLgetAnnotations(q_70);
                    e_25 = t;
                    t = SSL_explode_string(p_70);
                    j_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_25), term_o_41), (ATerm) ATinsert(ATempty, term_o_41));
                    t = conc_0_0(t);
                    k_25 = t;
                    t = SSL_implode_string(k_25);
                    h_25 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, h_25);
                    k_11 = t;
                    t = SSLsetAnnotations(k_11, e_25);
                    LocalPopChoice(n_41);
                  }
                else
                  {
                    t = m_41;
                    t = q_70;
                  }
              }
            }
          else
            {
              t = q_70;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm v_67 = NULL;
  t = collect_om_2_0(f_10, g_10, t);
  t = concat_0_0(t);
  t = topdown_1_0(o_10, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(l_11, t);
  t = concat_0_0(t);
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, v_67);
  t = topdown_1_0(m_11, t);
  return(t);
}
static ATerm z_8 (ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm c_71 = NULL;
  t = SSL_fputc(x_63, y_63);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_71);
  return(t);
}
static ATerm a_9 (ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm d_71 = NULL;
  t = SSL_write_term_to_stream_text(e_30, f_30);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_71);
  return(t);
}
static ATerm c_9 (ATerm d_106 (ATerm), ATerm d_261, ATerm k_30, ATerm t)
{
  ATerm e_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_261, term_p_41);
  t = g_9(t);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_71, k_30);
  t = d_106(t);
  t = fclose_0_0(t);
  t = k_30;
  return(t);
}
static ATerm b_9 (ATerm a_30, ATerm b_30, ATerm t)
{
  ATerm f_71 = NULL;
  t = SSL_write_term_to_stream_baf(a_30, b_30);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_71);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(match_cons(q_41, sym_Stream_1))
        {
          m_71 = ATgetArgument(q_41, 0);
        }
      else
        _fail(t);
      n_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9(m_71, n_71, t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_41 = ATgetArgument(t, 0);
      if(match_cons(r_41, sym_Stream_1))
        {
          r_71 = ATgetArgument(r_41, 0);
        }
      else
        _fail(t);
      s_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(r_71, s_71, t);
  o_71 = t;
  t = term_c_22;
  p_71 = t;
  t = o_71;
  if(match_cons(t, sym_Stream_1))
    {
      q_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, o_71);
  t = z_8(p_71, q_71, t);
  return(t);
}
ATerm output_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL;
  t = k_128(t);
  h_71 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_71 = NULL,j_71 = NULL;
        t = term_a_16;
        i_71 = t;
        t = term_q_25;
        j_71 = t;
        t = term_u_41;
        t = m_9(i_71, j_71, t);
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = term_v_41;
      }
  }
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_71, h_71);
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_71 = NULL,l_71 = NULL;
        t = term_a_16;
        k_71 = t;
        t = term_y_41;
        l_71 = t;
        t = term_z_41;
        t = m_9(k_71, l_71, t);
        t = (ATerm) ATmakeAppl(sym__2, g_71, h_71);
        LocalPopChoice(x_41);
        if(match_cons(t, sym__2))
          {
            ATerm a_42 = ATgetArgument(t, 0);
            ATerm b_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_9(n_11, g_71, h_71, t);
      }
    else
      {
        t = w_41;
        if(match_cons(t, sym__2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            ATerm d_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_9(o_11, g_71, h_71, t);
      }
  }
  return(t);
}
static ATerm g_72 (ATerm a_72, ATerm t)
{
  t = SSL_fclose(a_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL;
  e_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_72 = ATgetArgument(t, 0);
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_72);
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            t = g_72(e_72, t);
          }
      }
    }
  else
    {
      t = g_72(e_72, t);
    }
  return(t);
}
static ATerm d_9 (ATerm g_30, ATerm t)
{
  t = SSL_read_term_from_stream(g_30);
  return(t);
}
static ATerm e_9 (ATerm a_29, ATerm b_29, ATerm t)
{
  t = SSL_strcat(a_29, b_29);
  return(t);
}
static ATerm f_9 (ATerm z_63, ATerm a_64, ATerm t)
{
  ATerm h_72 = NULL;
  t = SSL_fopen(z_63, a_64);
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_72 = NULL;
  t = SSL_stdin_stream();
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_72 = NULL;
  t = SSL_stdout_stream();
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_72 = NULL;
  t = SSL_stderr_stream();
  k_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_72);
  return(t);
}
static ATerm r_73 (ATerm q_72, ATerm t)
{
  ATerm r_72 = NULL;
  t = SSL_explode_term(q_72);
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_42 = ATgetArgument(t, 1);
        if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
          {
            r_72 = ATgetFirst((ATermList) h_42);
            {
              ATerm i_42 = (ATerm) ATgetNext((ATermList) h_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_73 (ATerm u_72, ATerm v_72, ATerm w_72, ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,c_73 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(w_72);
  z_72 = t;
  t = u_72;
  if(match_cons(t, sym_Path_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_73, v_72);
  v_11 = t;
  t = SSLsetAnnotations(v_11, z_72);
  if(match_cons(t, sym__2))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(x_72, y_72, t);
  return(t);
}
static ATerm t_73 (ATerm e_73, ATerm f_73, ATerm g_73, ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,m_73 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(g_73);
  j_73 = t;
  t = SSL_is_string(e_73);
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_73, f_73);
  w_11 = t;
  t = SSLsetAnnotations(w_11, j_73);
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(h_73, i_73, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  if(match_cons(t, sym__2))
    {
      p_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_73(o_73, t);
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            {
              ATerm l_42 = t;
              int m_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_73(p_73, q_73, o_73, t);
                  LocalPopChoice(m_42);
                }
              else
                {
                  t = l_42;
                  t = t_73(p_73, q_73, o_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_73(o_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,c_74 = NULL;
  c_74 = t;
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_74, term_r_15);
        t = g_9(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        {
          ATerm v_26 = NULL,w_26 = NULL;
          t = term_p_42;
          w_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_42, c_74);
          t = e_9(w_26, c_74, t);
          v_26 = t;
          t = SSL_perror(v_26);
          _fail(t);
        }
      }
  }
  w_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_9(x_73, t);
  v_73 = t;
  t = w_73;
  t = fclose_0_0(t);
  t = v_73;
  return(t);
}
ATerm input_1_0 (ATerm l_128 (ATerm), ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_74 = NULL,g_74 = NULL;
      t = term_a_16;
      f_74 = t;
      t = term_r_25;
      g_74 = t;
      t = term_s_42;
      t = m_9(f_74, g_74, t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      t = term_i_16;
    }
  t = ReadFromFile_0_0(t);
  t = l_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL;
  h_74 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  i_74 = t;
  t = term_i_14;
  k_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_42), i_74), term_t_42);
  l_74 = t;
  t = SSL_printnl(k_74, l_74);
  t = term_h_16;
  j_74 = t;
  t = SSL_exit(j_74);
  t = h_74;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm n_74 = NULL;
  n_74 = t;
  if(match_string(t, "-k"))
    {
      t = n_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_74;
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  t = SSL_string_to_int(o_74);
  p_74 = t;
  t = term_v_42;
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_42, p_74);
  t = p_9(q_74, p_74, t);
  t = o_74;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_11, s_11, t_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  if(match_string(t, "-S"))
    {
      t = s_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_74;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_v_15;
  t_74 = t;
  t = term_x_42;
  u_74 = t;
  t = term_y_42;
  t = p_9(t_74, u_74, t);
  t = term_z_42;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  v_74 = t;
  t = SSL_string_to_int(v_74);
  w_74 = t;
  t = term_v_15;
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_15, w_74);
  t = p_9(x_74, w_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_74);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_b_43;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  t = term_c_43;
  y_74 = t;
  t = term_a_15;
  z_74 = t;
  t = term_d_43;
  t = p_9(y_74, z_74, t);
  t = term_e_43;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_11, x_11, y_11, t);
      LocalPopChoice(h_43);
    }
  else
    {
      t = g_43;
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_11, c_12, d_12, t);
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            t = Option_3_0(e_12, f_12, g_12, t);
          }
      }
    }
  return(t);
}
static ATerm p_9 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL;
  t = term_a_16;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_16, y_33, z_33);
  t = lookup_table_0_1(a_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(y_33, z_33, b_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_16, y_33, z_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
      t = term_a_15;
      t = g_0(t);
      h_75 = t;
      t = term_k_43;
      i_75 = t;
      t = term_l_43;
      j_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, h_75);
      t = n_9(i_75, j_75, h_75, t);
      _fail(t);
    }
  else
    {
      ATerm m_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_75 = ATgetFirst((ATermList) t);
          g_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_75;
      t = d_0(t);
      t = term_a_15;
      t = f_0(t);
      m_75 = t;
      t = (ATerm) ATinsert(CheckATermList(g_75), m_75);
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm o_75 = NULL;
  o_75 = t;
  if(match_string(t, "-o"))
    {
      t = o_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_75;
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  p_75 = t;
  t = term_q_25;
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, p_75);
  t = p_9(q_75, p_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_75);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_12, m_12, n_12, t);
  return(t);
}
static ATerm n_9 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  s_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
  {
    ATerm n_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_43 = ATgetArgument(t, 0);
            ATerm r_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
        t = m_9(m_39, n_39, t);
        LocalPopChoice(p_43);
      }
    else
      {
        t = n_43;
        t = (ATerm) ATempty;
      }
  }
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_39, n_39, (ATerm) ATinsert(CheckATermList(t_75), l_39));
  t = lookup_table_0_1(m_39, t);
  w_75 = t;
  t = (ATerm) ATinsert(CheckATermList(t_75), l_39);
  u_75 = t;
  t = w_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(n_39, u_75, v_75, t);
  t = s_75;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
      t = term_a_15;
      t = o_0(t);
      h_76 = t;
      t = term_k_43;
      i_76 = t;
      t = term_l_43;
      j_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, h_76);
      t = n_9(i_76, j_76, h_76, t);
      _fail(t);
    }
  else
    {
      ATerm n_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_76 = ATgetFirst((ATermList) t);
          e_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_76 = ATgetFirst((ATermList) t);
          g_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_76;
      t = l_0(t);
      t = f_76;
      t = m_0(t);
      n_76 = t;
      t = (ATerm) ATinsert(CheckATermList(g_76), n_76);
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm p_76 = NULL;
  p_76 = t;
  if(match_string(t, "-i"))
    {
      t = p_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_76;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  q_76 = t;
  t = term_r_25;
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, q_76);
  t = p_9(r_76, q_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_76);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_12, q_12, r_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_15;
  t = whoami_0_0(t);
  s_76 = t;
  t = term_i_14;
  u_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_43), s_76);
  v_76 = t;
  t = SSL_printnl(u_76, v_76);
  t = term_h_16;
  t_76 = t;
  t = SSL_exit(t_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL;
  t = term_a_16;
  w_76 = t;
  t = term_u_43;
  x_76 = t;
  t = term_v_43;
  t = m_9(w_76, x_76, t);
  return(t);
}
static ATerm h_9 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_36, v_36);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      t = SSL_addr(u_36, v_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  z_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_76;
      t = j_124(t);
    }
  else
    {
      ATerm e_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_77 = ATgetFirst((ATermList) t);
          b_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_77;
      t = foldr_2_0(j_124, k_124, t);
      e_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_77, e_77);
      t = k_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_x_42;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9(j_27, k_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_77 = NULL,a_27 = NULL,b_27 = NULL;
  t = times_0_0(t);
  b_27 = t;
  t = SSL_explode_term(b_27);
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  t = foldr_2_0(t_12, v_12, t);
  h_77 = t;
  t = SSL_TicksToSeconds(h_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
  s_77 = t;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77;
        if((t_77 != t))
          {
            _fail(t);
          }
        t = s_77;
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = (ATerm) ATmakeAppl(sym__2, t_77, u_77);
        {
          ATerm b_44 = t;
          int c_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_77, u_77);
              LocalPopChoice(c_44);
            }
          else
            {
              t = b_44;
              t = SSL_gtr(t_77, u_77);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_77, u_77);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm y_77 = NULL;
  y_77 = t;
  {
    ATerm d_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
        t = term_a_16;
        b_78 = t;
        t = term_v_15;
        c_78 = t;
        t = term_g_16;
        t = m_9(b_78, c_78, t);
        a_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_78, term_h_16);
        t = geq_0_0(t);
        t = y_77;
        t = i_107(t);
        LocalPopChoice(p_44);
      }
    else
      {
        t = d_44;
        t = y_77;
      }
  }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL,h_78 = NULL,i_78 = NULL;
  t = run_time_0_0(t);
  e_78 = t;
  t = term_a_15;
  t = whoami_0_0(t);
  f_78 = t;
  t = term_i_14;
  h_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_44), e_78), term_o_16), f_78);
  i_78 = t;
  t = SSL_printnl(h_78, i_78);
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_44), e_78), term_o_16), f_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_42;
  j_78 = t;
  t = SSL_exit(j_78);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  u_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_78 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,a_12 = NULL;
            t = SSLgetAnnotations(u_78);
            m_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_78);
            a_12 = t;
            t = SSLsetAnnotations(a_12, m_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm r_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_78 = NULL,n_78 = NULL;
      t = term_a_16;
      m_78 = t;
      t = term_u_44;
      n_78 = t;
      t = term_v_44;
      t = m_9(m_78, n_78, t);
      LocalPopChoice(t_44);
    }
  else
    {
      t = r_44;
      t = fetch_1_0(y_12, t);
    }
  t = b_128(t);
  return(t);
}
static ATerm q_9 (ATerm e_44, ATerm f_44, ATerm g_44, ATerm t)
{
  ATerm w_78 = NULL;
  t = SSL_hashtable_put(g_44, e_44, f_44);
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_78);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_40, ATerm t)
{
  ATerm f_79 = NULL;
  t = table_hashtable_0_0(t);
  f_79 = t;
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        t = f_79;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_9(y_40, e_29, t);
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        {
          ATerm p_29 = NULL;
          t = y_40;
          t = table_create_0_0(t);
          t = f_79;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_9(y_40, p_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm i_79 = NULL;
  t = SSL_hashtable_create(m_44, n_44);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_79);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,n_79 = NULL,o_79 = NULL;
  j_79 = t;
  t = term_y_44;
  n_79 = t;
  t = term_z_44;
  o_79 = t;
  t = j_79;
  t = new_hashtable_0_2(n_79, o_79, t);
  k_79 = t;
  t = j_79;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(j_79, k_79, l_79, t);
  t = j_79;
  return(t);
}
static ATerm j_9 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm p_79 = NULL;
  t = SSL_hashtable_remove(k_44, j_44);
  p_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_79);
  return(t);
}
static ATerm k_9 (ATerm o_44, ATerm t)
{
  ATerm q_79 = NULL;
  t = SSL_hashtable_destroy(o_44);
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_79);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_79 = NULL;
  t = SSL_table_hashtable();
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_79);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  s_79 = t;
  t = table_hashtable_0_0(t);
  t_79 = t;
  t = lookup_table_0_1(s_79, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_9(v_79, t);
  t = t_79;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_9(s_79, u_79, t);
  t = s_79;
  return(t);
}
ATerm map_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  static ATerm k_80 (ATerm t);
  static ATerm k_80 (ATerm t)
  {
    ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
    h_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_80;
      }
    else
      {
        ATerm x_29 = NULL,c_30 = NULL,j_30 = NULL,s_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_80 = ATgetFirst((ATermList) t);
            j_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_80);
        x_29 = t;
        t = i_80;
        t = b_122(t);
        c_30 = t;
        t = j_80;
        t = k_80(t);
        j_30 = t;
        t = (ATerm) ATinsert(CheckATermList(j_30), c_30);
        s_12 = t;
        t = SSLsetAnnotations(s_12, x_29);
      }
    return(t);
  }
  t = k_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_80 = ATgetFirst((ATermList) t);
      o_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_80 = NULL,t_80 = NULL;
        static ATerm z_12 (ATerm t);
        static ATerm z_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_80)), not_null(t_80));
          return(t);
        }
        t = o_80;
        t = j_0(t);
        if(((s_80 != NULL) && (s_80 != t)))
          _fail(t);
        else
          s_80 = t;
        t = n_80;
        t = h_0(t);
        if(((t_80 != NULL) && (t_80 != t)))
          _fail(t);
        else
          t_80 = t;
        t = o_80;
        t = reverse_acc_2_0(h_0, z_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,j_13 = NULL;
  b_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_81);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_81);
  j_13 = t;
  t = SSLsetAnnotations(j_13, z_80);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm d_81 = NULL;
  d_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_81), term_a_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL;
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_80 = NULL,y_80 = NULL;
      t = term_a_16;
      x_80 = t;
      t = term_u_43;
      y_80 = t;
      t = term_v_43;
      t = m_9(x_80, y_80, t);
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      t = fetch_1_0(a_13, t);
    }
  t = term_e_45;
  t = echo_0_0(t);
  t = term_k_43;
  v_80 = t;
  t = term_l_43;
  w_80 = t;
  t = term_f_45;
  t = m_9(v_80, w_80, t);
  t = reverse_acc_2_0(_id, b_13, t);
  t = map_1_0(c_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  static ATerm c_82 (ATerm t);
  static ATerm c_82 (ATerm t)
  {
    ATerm x_81 = NULL,y_81 = NULL,b_82 = NULL;
    x_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_81 = ATgetFirst((ATermList) t);
        b_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_45 = t;
      int j_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_30 = NULL,h_31 = NULL,p_13 = NULL;
          t = SSLgetAnnotations(x_81);
          z_30 = t;
          t = y_81;
          t = l_122(t);
          h_31 = t;
          t = (ATerm) ATinsert(CheckATermList(b_82), h_31);
          p_13 = t;
          t = SSLsetAnnotations(p_13, z_30);
          LocalPopChoice(j_45);
        }
      else
        {
          t = h_45;
          {
            ATerm k_32 = NULL,w_32 = NULL,q_13 = NULL;
            t = SSLgetAnnotations(x_81);
            k_32 = t;
            t = b_82;
            t = c_82(t);
            w_32 = t;
            t = (ATerm) ATinsert(CheckATermList(w_32), y_81);
            q_13 = t;
            t = SSLsetAnnotations(q_13, k_32);
          }
        }
    }
    return(t);
  }
  t = c_82(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
  g_82 = t;
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_45 = ATgetFirst((ATermList) t);
                ATerm o_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_82;
          }
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = (ATerm) ATinsert(ATempty, g_82);
      }
  }
  h_82 = t;
  t = term_v_41;
  i_82 = t;
  t = SSL_printnl(i_82, h_82);
  t = g_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  t = term_a_16;
  m_82 = t;
  t = term_u_43;
  n_82 = t;
  t = term_v_43;
  t = m_9(m_82, n_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_9 (ATerm h_44, ATerm i_44, ATerm t)
{
  t = SSL_hashtable_get(i_44, h_44);
  return(t);
}
static ATerm m_9 (ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm o_82 = NULL;
  t = lookup_table_0_1(f_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_9(g_41, o_82, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  t = term_p_45;
  q_82 = t;
  t = term_a_15;
  r_82 = t;
  t = term_r_45;
  t = p_9(q_82, r_82, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_s_45;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  t = term_p_45;
  u_82 = t;
  t = term_a_15;
  v_82 = t;
  t = term_r_45;
  t = p_9(u_82, v_82, t);
  t = term_t_45;
  s_82 = t;
  t = term_a_15;
  t_82 = t;
  t = term_u_45;
  t = p_9(s_82, t_82, t);
  t = term_v_45;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_w_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_13, g_13, h_13, t);
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      t = Option_3_0(i_13, k_13, l_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,l_14 = NULL;
  b_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_82 = ATgetFirst((ATermList) t);
      y_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_83);
  w_82 = t;
  t = x_82;
  t = z_81(t);
  z_82 = t;
  t = y_82;
  t = a_82(t);
  a_83 = t;
  t = (ATerm) ATinsert(CheckATermList(a_83), z_82);
  l_14 = t;
  t = SSLsetAnnotations(l_14, w_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,l_83 = NULL,m_83 = NULL,q_14 = NULL;
  g_83 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_46;
        t = z_129(t);
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
      }
  }
  t = g_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_83 = ATgetFirst((ATermList) t);
      j_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_83);
  h_83 = t;
  t = term_u_43;
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_43, i_83);
  t = p_9(m_83, i_83, t);
  t = j_83;
  {
    static ATerm w_83 (ATerm t);
    static ATerm w_83 (ATerm t)
    {
      ATerm c_46 = t;
      int d_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_46 = t;
          int f_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_83 = NULL;
              p_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_83;
              LocalPopChoice(f_46);
            }
          else
            {
              t = e_46;
              t = z_129(t);
              t = Cons_2_0(_id, w_83, t);
            }
          LocalPopChoice(d_46);
        }
      else
        {
          t = c_46;
          {
            ATerm s_83 = NULL,t_83 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_83 = ATgetFirst((ATermList) t);
                t_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_83), (ATerm) ATmakeAppl(sym_Undefined_1, s_83));
          }
        }
      return(t);
    }
    t = w_83(t);
  }
  l_83 = t;
  t = (ATerm) ATinsert(CheckATermList(l_83), (ATerm) ATmakeAppl(sym_Program_1, i_83));
  q_14 = t;
  t = SSLsetAnnotations(q_14, h_83);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  if(match_string(t, "--help"))
    {
      t = j_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_84;
        }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  t = term_u_44;
  k_84 = t;
  t = term_a_15;
  l_84 = t;
  t = term_g_46;
  t = p_9(k_84, l_84, t);
  t = term_h_46;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  d_84 = t;
  t = term_k_43;
  e_84 = t;
  t = term_j_46;
  t = lookup_table_0_1(e_84, t);
  i_84 = t;
  t = term_l_43;
  f_84 = t;
  t = (ATerm) ATempty;
  g_84 = t;
  t = i_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(f_84, g_84, h_84, t);
  t = d_84;
  {
    static ATerm m_13 (ATerm t);
    static ATerm m_13 (ATerm t)
    {
      ATerm k_46 = t;
      int l_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_129(t);
          LocalPopChoice(l_46);
        }
      else
        {
          t = k_46;
          {
            ATerm m_46 = t;
            int n_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_13, r_13, s_13, t);
                LocalPopChoice(n_46);
              }
            else
              {
                t = m_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_13, t);
  }
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_84 = NULL;
        w_84 = t;
        {
          ATerm q_46 = t;
          int r_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_33 = NULL;
              t = w_84;
              {
                ATerm s_46 = t;
                int t_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_33 = NULL,k_33 = NULL;
                    t = term_a_16;
                    j_33 = t;
                    t = term_u_44;
                    k_33 = t;
                    t = term_v_44;
                    t = m_9(j_33, k_33, t);
                    LocalPopChoice(t_46);
                  }
                else
                  {
                    t = s_46;
                    t = fetch_1_0(t_13, t);
                  }
              }
              t = w_84;
              t = default_system_usage_0_0(t);
              t = term_x_42;
              d_33 = t;
              t = SSL_exit(d_33);
              LocalPopChoice(r_46);
            }
          else
            {
              t = q_46;
              {
                ATerm r_33 = NULL,u_33 = NULL,v_33 = NULL;
                t = term_a_16;
                u_33 = t;
                t = term_p_45;
                v_33 = t;
                t = term_u_46;
                t = m_9(u_33, v_33, t);
                t = w_84;
                t = default_system_about_0_0(t);
                t = term_x_42;
                r_33 = t;
                t = SSL_exit(r_33);
              }
            }
        }
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        {
          ATerm v_46 = t;
          int w_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
              static ATerm u_13 (ATerm t);
              static ATerm u_13 (ATerm t)
              {
                ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,t_14 = NULL;
                c_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_85);
                a_85 = t;
                t = b_85;
                if(((b_84 != NULL) && (b_84 != t)))
                  _fail(t);
                else
                  b_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_85);
                t_14 = t;
                t = SSLsetAnnotations(t_14, a_85);
                return(t);
              }
              t = fetch_1_0(u_13, t);
              t = term_i_14;
              y_84 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), term_x_46);
              z_84 = t;
              t = SSL_printnl(y_84, z_84);
              t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), term_x_46));
              t = default_system_usage_0_0(t);
              t = term_h_16;
              x_84 = t;
              t = SSL_exit(x_84);
              LocalPopChoice(w_46);
            }
          else
            {
              t = v_46;
            }
        }
      }
  }
  c_84 = t;
  t = term_k_43;
  t = table_destroy_0_0(t);
  t = c_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
  t = parse_options_1_0(d_128, t);
  h_85 = t;
  t = term_c_33;
  t = table_create_0_0(t);
  t = term_c_33;
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_33, term_l_33, h_85);
  t = lookup_table_0_1(i_85, t);
  l_85 = t;
  t = term_l_33;
  j_85 = t;
  t = l_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(j_85, h_85, k_85, t);
  t = h_85;
  t = f_128(t);
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_128, t);
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
              t = g_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_47);
            }
          else
            {
              t = a_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
      {
        ATerm e_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_47);
          }
        else
          {
            t = e_47;
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_13, z_13, a_14, t);
                  LocalPopChoice(h_47);
                }
              else
                {
                  t = g_47;
                  {
                    ATerm i_47 = t;
                    int j_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_47);
                      }
                    else
                      {
                        t = i_47;
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
static ATerm x_13 (ATerm t)
{
  t = input_1_0(b_14, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL;
  t = term_y_41;
  n_85 = t;
  t = term_a_15;
  o_85 = t;
  t = term_k_47;
  t = p_9(n_85, o_85, t);
  t = term_l_47;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = output_1_0(d_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL,h_34 = NULL;
  t = ppgenerate_0_0(t);
  h_34 = t;
  t = term_n_47;
  d_34 = t;
  t = (ATerm) ATinsert(ATempty, h_34);
  g_34 = t;
  t = SSL_mkterm(d_34, g_34);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_13, default_usage_0_0, _id, x_13, t);
  return(t);
}

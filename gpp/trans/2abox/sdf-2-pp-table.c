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
Symbol sym_no_attrs_0;
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
Symbol sym_no_attrs_0;
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
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
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
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
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
ATerm term_n_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_t_45;
ATerm term_p_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_v_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_h_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_q_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_h_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_x_36;
ATerm term_d_36;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_q_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_x_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_r_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_r_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_w_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_p_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_w_15, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_b_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_z_13, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_t_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_z_18, term_a_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_f_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_l_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_s_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_x_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_h_21, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_f_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_k_22, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_o_22, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_22, term_t_22, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_22, term_x_22, term_y_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_23, term_c_23, term_e_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_g_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_x_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_g_26);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_x_29);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_r_32);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Arg_1, term_w_15);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_SOpt_2, term_t_37, term_w_37);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_lit_1, term_w_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_lit_1, term_w_16);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_n_29);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_w_40);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_u_29);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_y_41);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_r_14);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_u_42);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_k_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_m_42);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_r_14);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym__2, term_n_44, term_r_14);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_r_14);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__3, term_l_42, term_m_42, (ATerm) ATempty);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_k_44);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_r_14);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm o_1 (ATerm y_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_112 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_99 (ATerm), ATerm t);
static ATerm k_8 (ATerm i_104 (ATerm), ATerm e_30, ATerm e_254, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm k_112 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm d_62, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm n_8 (ATerm i_44, ATerm j_44, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_8 (ATerm q_29, ATerm r_29, ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm l_125 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
static ATerm o_8 (ATerm s_24, ATerm t_24, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_97 (ATerm), ATerm t);
static ATerm q_8 (ATerm r_60, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_119 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm s_8 (ATerm p_56, ATerm q_56, ATerm r_56, ATerm t);
static ATerm t_8 (ATerm e_119 (ATerm), ATerm z_56, ATerm y_56, ATerm t);
static ATerm u_8 (ATerm a_62, ATerm b_62, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_29 (ATerm i_28, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm a_122 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm v_8 (ATerm x_114 (ATerm), ATerm q_45, ATerm o_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm w_8 (ATerm x_55, ATerm y_55, ATerm t);
ATerm end_scope_1_0 (ATerm u_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_114 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_121 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm y_8 (ATerm t_35, ATerm u_35, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm symbol2abox_1_0 (ATerm m_96 (ATerm), ATerm t);
ATerm _2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm d_60 (ATerm d_59, ATerm e_59, ATerm f_59, ATerm t);
ATerm number_node_1_0 (ATerm p_96 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm l_96 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
static ATerm c_9 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t);
static ATerm d_9 (ATerm k_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t);
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
ATerm collect_om_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm x_68 (ATerm r_66, ATerm s_66, ATerm t);
static ATerm y_68 (ATerm y_66, ATerm z_66, ATerm t);
static ATerm z_68 (ATerm f_67, ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm e_9 (ATerm h_62, ATerm i_62, ATerm t);
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm h_9 (ATerm i_99 (ATerm), ATerm r_222, ATerm k_28, ATerm t);
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm output_1_0 (ATerm l_123 (ATerm), ATerm t);
static ATerm h_70 (ATerm b_70, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm g_28, ATerm t);
static ATerm j_9 (ATerm x_42, ATerm y_42, ATerm t);
static ATerm k_9 (ATerm j_62, ATerm k_62, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_71 (ATerm r_70, ATerm t);
static ATerm t_71 (ATerm v_70, ATerm w_70, ATerm x_70, ATerm t);
static ATerm u_71 (ATerm f_71, ATerm g_71, ATerm h_71, ATerm t);
static ATerm l_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm m_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_9 (ATerm x_60, ATerm y_60, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_9 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t);
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm need_help_1_0 (ATerm c_123 (ATerm), ATerm t);
static ATerm v_9 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t);
ATerm lookup_table_0_1 (ATerm e_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_9 (ATerm p_60, ATerm q_60, ATerm t);
static ATerm p_9 (ATerm u_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_9 (ATerm n_60, ATerm o_60, ATerm t);
static ATerm r_9 (ATerm l_57, ATerm m_57, ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_125 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm parse_options_1_0 (ATerm z_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm o_13 (ATerm t);
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
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = i_1;
              return(t);
            }
            t = g_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
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
ATerm topdown_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t)
  {
    t = topdown_1_0(l_99, t);
    return(t);
  }
  t = l_99(t);
  t = SRTS_all(c_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm t)
{
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
        t = q_104(t);
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
ATerm filter_1_0 (ATerm r_112 (ATerm), ATerm t)
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
        ATerm t_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,q_1 = NULL,z_1 = NULL,i_0 = NULL;
            t = SSLgetAnnotations(a_4);
            j_1 = t;
            t = b_4;
            t = r_112(t);
            q_1 = t;
            t = d_4;
            t = filter_1_0(r_112, t);
            z_1 = t;
            t = (ATerm) ATinsert(CheckATermList(z_1), q_1);
            i_0 = t;
            t = SSLsetAnnotations(i_0, j_1);
            LocalPopChoice(v_13);
          }
        else
          {
            t = t_13;
            t = d_4;
            t = filter_1_0(r_112, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  h_4 = t;
  t = g_99(t);
  i_4 = t;
  t = term_w_13;
  j_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), i_4);
  k_4 = t;
  t = SSL_printnl(j_4, k_4);
  t = h_4;
  return(t);
}
static ATerm k_8 (ATerm i_104 (ATerm), ATerm e_30, ATerm e_254, ATerm t)
{
  static ATerm f_0 (ATerm t)
  {
    ATerm m_4 = NULL;
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_30, m_4);
    t = i_104(t);
    t = m_4;
    return(t);
  }
  t = e_254;
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
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13);
          r_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13));
          t = k_8(n_0, o_4, r_4, t);
          t = o_4;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          t = o_4;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm f_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13));
              t = k_8(s_0, o_4, u_4, t);
              t = o_4;
              LocalPopChoice(j_14);
            }
          else
            {
              t = f_14;
              t = o_4;
            }
        }
      else
        {
          ATerm x_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_b_14), term_z_13));
          t = k_8(x_0, o_4, x_4, t);
          t = o_4;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
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
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = y_104(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm n_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      w_2 = t;
      t = SSL_explode_string(w_2);
      t = rtrim_1_0(w_0, t);
      v_2 = t;
      t = SSL_implode_string(v_2);
      LocalPopChoice(q_14);
    }
  else
    {
      t = n_14;
      {
        ATerm v_6 = NULL,f_3 = NULL;
        v_6 = t;
        t = (ATerm) ATinsert(CheckATermList(v_6), term_r_14);
        {
          static ATerm z_0 (ATerm t)
          {
            ATerm g_3 = NULL,j_3 = NULL;
            g_3 = t;
            {
              ATerm t_14 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_14;
                }
            }
            {
              ATerm u_14 = t;
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
                  t = u_14;
                }
            }
            t = g_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_3 = ATgetFirst((ATermList) t);
                {
                  ATerm w_14 = (ATerm) ATgetNext((ATermList) t);
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
            ATerm x_14 = ATgetFirst((ATermList) t);
            f_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_3;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  static ATerm t_7 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
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
ATerm drop_while_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm h_8 = NULL;
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
          ATerm a_15 = t;
          if((PushChoice() == 0))
            {
              t = k_112(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_15;
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
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,u_5 = NULL;
      u_5 = t;
      t = SSL_explode_string(u_5);
      t = ltrim_1_0(u_0, t);
      s_5 = t;
      t = SSL_implode_string(s_5);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      t = drop_while_1_0(u_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 = NULL,e_6 = NULL;
      e_6 = t;
      t = SSL_explode_string(e_6);
      t = trim_1_0(t_0, t);
      b_6 = t;
      t = SSL_implode_string(b_6);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      t = ltrim_1_0(t_0, t);
      t = rtrim_1_0(t_0, t);
    }
  return(t);
}
static ATerm l_8 (ATerm d_62, ATerm t)
{
  t = SSL_fgetc(d_62);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  h_10 = t;
  {
    static ATerm s_10 (ATerm t)
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
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
          t = term_r_14;
          t = s_10(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
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
  t = term_j_15;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_j_15);
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
  ATerm l_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_44, j_44);
      LocalPopChoice(n_15);
    }
  else
    {
      t = l_15;
      t = SSL_subtr(i_44, j_44);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  t = term_p_15;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,k_11 = NULL;
        t = term_u_15;
        h_11 = t;
        t = term_p_15;
        k_11 = t;
        t = term_v_15;
        t = r_9(h_11, k_11, t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = term_w_15;
      }
  }
  e_11 = t;
  t = term_w_15;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, term_w_15);
  t = n_8(e_11, g_11, t);
  f_11 = t;
  t = SSL_int_to_string(f_11);
  d_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_11), term_p_15);
  return(t);
}
static ATerm m_8 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm f_12 = NULL,h_12 = NULL;
  t = r_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_29;
    }
  else
    {
      ATerm b_7 = NULL,h_7 = NULL,c_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_12 = ATgetFirst((ATermList) t);
          h_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_29);
      b_7 = t;
      t = h_12;
      {
        static ATerm u_7 (ATerm t)
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL;
              k_7 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_7;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              {
                ATerm o_7 = NULL;
                t = Cons_2_0(_id, u_7, t);
                o_7 = t;
                t = (ATerm) ATinsert(CheckATermList(o_7), q_29);
              }
            }
          return(t);
        }
        t = u_7(t);
      }
      h_7 = t;
      t = (ATerm) ATinsert(CheckATermList(h_7), f_12);
      c_3 = t;
      t = SSLsetAnnotations(c_3, b_7);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm o_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm i_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_12, s_12);
      t = m_8(o_12, s_12, t);
      i_13 = t;
      t = (ATerm) ATinsert(CheckATermList(i_13), o_12);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_z_15;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL,g_14 = NULL;
      g_14 = t;
      if(match_cons(t, sym_FILE_1))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm b_8 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(g_14);
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
            i_3 = t;
            t = SSLsetAnnotations(i_3, b_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_14;
        }
      LocalPopChoice(b_16);
      {
        static ATerm d_1 (ATerm t)
        {
          ATerm h_14 = NULL,i_14 = NULL,m_14 = NULL;
          t = term_r_14;
          t = pass_verbose_0_0(t);
          h_14 = t;
          t = term_r_14;
          t = l_125(t);
          t = map_1_0(xtc_find_0_0, t);
          m_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_16, m_14);
          t = add_arg_flags_0_0(t);
          i_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_14, i_14);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(c_1, d_1, t);
      }
    }
  else
    {
      t = a_16;
      {
        static ATerm f_1 (ATerm t)
        {
          ATerm o_14 = NULL,p_14 = NULL,s_14 = NULL;
          t = term_r_14;
          t = pass_verbose_0_0(t);
          o_14 = t;
          t = term_r_14;
          t = l_125(t);
          t = map_1_0(xtc_find_0_0, t);
          s_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_16, s_14);
          t = add_arg_flags_0_0(t);
          p_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(e_1, f_1, t);
      }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_16), term_h_16);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL,r_15 = NULL;
      r_15 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_15 = ATgetArgument(t, 0);
          {
            ATerm r_8 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(r_15);
            r_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_15);
            m_3 = t;
            t = SSLsetAnnotations(m_3, r_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_15;
        }
      LocalPopChoice(l_16);
      t = xtc_transform_file_2_0(h_1, pass_verbose_0_0, t);
    }
  else
    {
      t = k_16;
      t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
    }
  {
    ATerm m_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_16 = NULL,e_16 = NULL;
        e_16 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_16 = ATgetArgument(t, 0);
            {
              ATerm g_10 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(e_16);
              g_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_16);
              p_3 = t;
              t = SSLsetAnnotations(p_3, g_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_16;
          }
        LocalPopChoice(p_16);
        t = xtc_transform_file_2_0(m_1, pass_verbose_0_0, t);
      }
    else
      {
        t = m_16;
        t = xtc_transform_term_2_0(n_1, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(p_1, t);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 = NULL,o_16 = NULL;
        o_16 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_16 = ATgetArgument(t, 0);
            {
              ATerm z_10 = NULL,u_3 = NULL;
              t = SSLgetAnnotations(o_16);
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_16);
              u_3 = t;
              t = SSLsetAnnotations(u_3, z_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_16;
          }
        LocalPopChoice(r_16);
        t = xtc_transform_file_2_0(r_1, pass_verbose_0_0, t);
      }
    else
      {
        t = q_16;
        t = xtc_transform_term_2_0(t_1, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_16;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_17 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_16);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATempty, term_t_16));
      t = u_8(a_17, c_17, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(match_cons(u_16, sym_Stream_1))
        {
          f_17 = ATgetArgument(u_16, 0);
        }
      else
        _fail(t);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(f_17, j_17, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  e_17 = t;
  t = xtc_new_file_0_0(t);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_17, e_17);
  t = h_9(v_1, d_17, e_17, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_17);
  t = xtc_transform_file_2_0(z_120, a_121, t);
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
  ATerm o_18 = NULL,s_18 = NULL,u_18 = NULL,v_18 = NULL;
  o_18 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_18 = ATgetArgument(t, 0);
      {
        ATerm p_11 = NULL,x_11 = NULL;
        t = SSL_int_to_string(s_18);
        p_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_16), p_11), term_v_16);
        x_11 = t;
        t = SSL_concat_strings(x_11);
      }
    }
  else
    {
      ATerm r_12 = NULL,t_12 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_18 = ATgetArgument(t, 0);
          u_18 = ATgetArgument(t, 1);
          v_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_18);
      r_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_18), term_y_16), r_12), term_x_16), s_18);
      t_12 = t;
      t = SSL_concat_strings(t_12);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  {
    ATerm b_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_17 = ATgetArgument(t, 0);
              if((y_18 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), term_z_22), term_v_22), term_r_22), term_m_22), term_h_22), term_c_22), term_s_21), term_o_21), term_k_21), term_d_21), term_z_20), term_u_20), term_m_20), term_h_20), term_a_20), term_v_19), term_r_19), term_l_19), term_h_19), term_c_19), term_w_18), term_p_18), term_k_18), term_h_18), term_d_18), term_x_17), term_t_17);
        t = fetch_elem_1_0(x_1, t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_18);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_19 = NULL,m_19 = NULL;
  d_19 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            m_19 = ATgetArgument(t, 1);
            {
              ATerm m_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_23);
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_13 = NULL,g_13 = NULL,h_13 = NULL;
              t = m_19;
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
              e_13 = t;
              t = term_w_13;
              g_13 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_13), term_r_23);
              h_13 = t;
              t = SSL_printnl(g_13, h_13);
              t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, e_13), term_r_23));
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              t = d_19;
            }
        }
      }
    else
      {
        t = h_23;
        t = d_19;
      }
  }
  t = d_19;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  e_20 = t;
  t = fork_0_0(t);
  d_20 = t;
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_20;
        t = x_97(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        t = SSL_waitpid(d_20);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            if(((ATgetType(z_23) != AT_INT) || (ATgetInt((ATermInt) z_23) != 0)))
              _fail(t);
            {
              ATerm a_24 = ATgetArgument(t, 1);
            }
            {
              ATerm b_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_20;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm r_60, ATerm t)
{
  t = SSL_hashtable_keys(r_60);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_20 = NULL,n_20 = NULL;
  static ATerm a_2 (ATerm t)
  {
    ATerm o_20 = NULL,p_20 = NULL;
    o_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), o_20);
    t = r_9(not_null(k_20), o_20, t);
    p_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = lookup_table_0_1(k_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(n_20, t);
  t = map_1_0(a_2, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  {
    ATerm c_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL,v_21 = NULL,w_21 = NULL;
        t = term_u_15;
        v_21 = t;
        t = term_p_15;
        w_21 = t;
        t = term_v_15;
        t = r_9(v_21, w_21, t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, term_o_22);
        t = geq_0_0(t);
        t = g_21;
        t = b_119(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = c_24;
        t = g_21;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,j_23 = NULL,k_23 = NULL;
        t = term_u_15;
        j_23 = t;
        t = term_p_15;
        k_23 = t;
        t = term_v_15;
        t = r_9(j_23, k_23, t);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_t_19);
        t = geq_0_0(t);
        t = g_22;
        t = a_119(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = g_22;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
        t = term_u_15;
        x_23 = t;
        t = term_p_15;
        y_23 = t;
        t = term_v_15;
        t = r_9(x_23, y_23, t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_f_18);
        t = geq_0_0(t);
        t = u_23;
        t = c_119(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = u_23;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm v_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      if((v_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm p_56, ATerm q_56, ATerm r_56, ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL;
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_24 = ATgetArgument(t, 0);
            ATerm r_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = r_9(p_56, q_56, t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATempty;
      }
  }
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_24, r_56);
  t = d_9(c_2, g_24, r_56, t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, f_24);
  t = lookup_table_0_1(p_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(q_56, f_24, i_24, t);
  t = d_24;
  return(t);
}
static ATerm t_8 (ATerm e_119 (ATerm), ATerm z_56, ATerm y_56, ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    ATerm y_24 = NULL,z_24 = NULL;
    if(match_cons(t, sym__2))
      {
        y_24 = ATgetArgument(t, 0);
        z_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, z_56, y_24, z_24);
    t = e_119(t);
    return(t);
  }
  t = y_56;
  t = map_1_0(d_2, t);
  return(t);
}
static ATerm u_8 (ATerm a_62, ATerm b_62, ATerm t)
{
  t = SSL_access(a_62, b_62);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_25 = NULL,b_25 = NULL;
      a_25 = t;
      t = (ATerm) ATinsert(ATempty, term_o_25);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, term_o_25));
      t = u_8(a_25, b_25, t);
      LocalPopChoice(n_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_25;
      {
        ATerm p_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_25 = t;
            if((PushChoice() == 0))
              {
                ATerm c_25 = NULL,f_25 = NULL;
                c_25 = t;
                t = (ATerm) ATinsert(ATempty, term_t_16);
                f_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, term_t_16));
                t = u_8(c_25, f_25, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_25;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = p_25;
            t = debug_1_0(f_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_v_25;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL;
  p_26 = t;
  t = term_w_13;
  q_26 = t;
  t = (ATerm) ATinsert(ATempty, term_w_25);
  t_26 = t;
  t = SSL_printnl(q_26, t_26);
  t = p_26;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  if(match_cons(t, sym__3))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
      w_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_8(u_26, v_26, w_26, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  t = term_w_13;
  y_26 = t;
  t = (ATerm) ATinsert(ATempty, term_x_25);
  z_26 = t;
  t = SSL_printnl(y_26, z_26);
  t = x_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  t = term_w_13;
  b_27 = t;
  t = (ATerm) ATinsert(ATempty, term_w_25);
  c_27 = t;
  t = SSL_printnl(b_27, c_27);
  t = a_27;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,h_26 = NULL,j_26 = NULL,m_26 = NULL;
  h_25 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm a_26 = t;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,o_26 = NULL;
        t = term_f_26;
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_25);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_26, (ATerm) ATmakeAppl(sym_Imported_1, h_25));
        t = r_9(n_26, o_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_26;
      }
  }
  j_25 = t;
  t = term_f_26;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, (ATerm) ATinsert(ATempty, h_25));
  t = lookup_table_0_1(c_26, t);
  m_26 = t;
  t = term_g_26;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, h_25);
  h_26 = t;
  t = m_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(d_26, h_26, j_26, t);
  t = j_25;
  t = if_verbose4_1_0(m_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_2, t);
  i_25 = t;
  t = term_f_26;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, i_25);
  t = t_8(r_2, b_26, i_25, t);
  t = if_verbose6_1_0(s_2, t);
  t = term_f_26;
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_26, (ATerm)ATmakeAppl(sym_Imported_1, h_25), (ATerm) ATempty);
  t = lookup_table_0_1(k_25, t);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_25);
  l_25 = t;
  t = (ATerm) ATempty;
  m_25 = t;
  t = z_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(l_25, m_25, y_25, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_26, (ATerm)ATmakeAppl(sym_Imported_1, h_25), (ATerm) ATempty);
  t = if_verbose4_1_0(t_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  static ATerm d_27 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_102(t);
        t = d_27(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = e_102(t);
      }
    return(t);
  }
  t = d_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_27 = NULL,f_27 = NULL;
      t = term_u_15;
      e_27 = t;
      t = term_g_27;
      f_27 = t;
      t = term_i_27;
      t = r_9(e_27, f_27, t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm o_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = NULL;
            t = term_v_27;
            h_27 = t;
            t = SSL_getenv(h_27);
            LocalPopChoice(u_27);
          }
        else
          {
            t = o_27;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_27 = NULL,t_27 = NULL;
  t = term_f_26;
  p_27 = t;
  t = term_x_27;
  t_27 = t;
  t = term_y_27;
  t = r_9(p_27, t_27, t);
  t = filter_1_0(xtc_read_0_0, t);
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
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = if_verbose5_1_0(u_2, t);
  k_27 = t;
  {
    ATerm d_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,m_27 = NULL;
        t = term_f_26;
        l_27 = t;
        t = term_g_26;
        m_27 = t;
        t = term_j_28;
        t = r_9(l_27, m_27, t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = d_28;
        {
          ATerm n_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_27 = t;
          t = repeat_2_0(a_3, _id, t);
          t = n_27;
        }
      }
  }
  t = k_27;
  t = if_verbose5_1_0(d_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm m_29 (ATerm i_28, ATerm t)
{
  ATerm o_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = term_f_26;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_28);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, (ATerm) ATmakeAppl(sym_Tool_1, i_28));
  t = r_9(q_28, r_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_28 = ATgetFirst((ATermList) t);
      if(match_cons(m_28, sym__2))
        {
          ATerm w_28 = ATgetArgument(m_28, 0);
          o_28 = ATgetArgument(m_28, 1);
        }
      else
        _fail(t);
      {
        ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_28;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_26;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
      t = if_verbose5_1_0(h_3, t);
      t = xtc_load_0_0(t);
      v_28 = t;
      if(match_cons(t, sym__2))
        {
          t_28 = ATgetArgument(t, 0);
          u_28 = ATgetArgument(t, 1);
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_29 = NULL,d_29 = NULL,e_29 = NULL;
                t = term_f_26;
                d_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_28);
                e_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_26, (ATerm) ATmakeAppl(sym_Tool_1, t_28));
                t = r_9(d_29, e_29, t);
                {
                  static ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_28 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_29 != NULL) && (b_29 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_3, t);
                }
                t = not_null(b_29);
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
                t = m_29(v_28, t);
              }
          }
        }
      else
        {
          t = m_29(v_28, t);
        }
      t = if_verbose5_1_0(t_3, t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = y_28;
      {
        ATerm l_29 = NULL,m_13 = NULL,n_13 = NULL;
        l_29 = t;
        t = term_w_13;
        m_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_29), l_29), term_h_29);
        n_13 = t;
        t = SSL_printnl(m_13, n_13);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_29), l_29), term_h_29);
        t = if_verbose5_1_0(w_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_122 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  p_29 = t;
  t = a_122(t);
  t = xtc_find_0_0(t);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm s_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
      t = o_8(o_29, p_29, t);
      t = term_k_29;
      s_29 = t;
      t = SSL_exit(s_29);
      return(t);
    }
    t = fork_and_wait_1_0(y_3, t);
  }
  t = p_29;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_30 = NULL,g_30 = NULL;
      t = b_30;
      t = xtc_new_file_0_0(t);
      d_30 = t;
      t = r_0(t);
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_30, (ATerm) ATinsert(ATinsert(ATempty, d_30), term_n_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_30);
    }
  else
    {
      ATerm l_30 = NULL,m_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_30;
      t = xtc_new_file_0_0(t);
      l_30 = t;
      t = r_0(t);
      m_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_30), term_n_29), c_30), term_u_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_30);
    }
  return(t);
}
static ATerm v_8 (ATerm x_114 (ATerm), ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,r_30 = NULL,s_30 = NULL,u_30 = NULL,w_30 = NULL,z_30 = NULL,a_31 = NULL;
  s_30 = t;
  t = x_114(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_30, q_45, o_45);
  t = s_9(n_30, q_45, o_45, t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL;
        t = term_x_29;
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_30, term_x_29);
        t = r_9(n_30, b_31, t);
        {
          ATerm y_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_29;
            }
        }
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_30 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_30, term_x_29, (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATinsert(CheckATermList(o_30), q_45)));
  t = lookup_table_0_1(n_30, t);
  a_31 = t;
  t = term_x_29;
  u_30 = t;
  t = (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATinsert(CheckATermList(o_30), q_45));
  w_30 = t;
  t = a_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(u_30, w_30, z_30, t);
  t = s_30;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_31 = NULL,s_13 = NULL;
      m_31 = t;
      t = term_f_30;
      s_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_31, term_f_30);
      t = j_9(m_31, s_13, t);
      e_31 = t;
      t = SSL_mkstemp(e_31);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm t_31 = NULL;
        t = term_h_30;
        t_31 = t;
        t = SSL_perror(t_31);
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
  t = term_i_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = P__tmpdir_0_0(t);
  d_32 = t;
  t = term_j_30;
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_32, term_j_30);
  t = j_9(d_32, e_32, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_14;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_32, term_r_14);
  t = v_8(z_3, b_32, c_32, t);
  t = SSL_close(v_31);
  t = b_32;
  return(t);
}
static ATerm w_8 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  g_32 = t;
  {
    ATerm k_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        t = r_9(x_55, y_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_30 = ATgetFirst((ATermList) t);
            f_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_30);
        {
          ATerm j_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, x_55, y_55, f_32);
          t = lookup_table_0_1(x_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_9(y_55, f_32, j_32, t);
          t = (ATerm) ATmakeAppl(sym__3, x_55, y_55, f_32);
        }
      }
    else
      {
        t = k_30;
        {
          ATerm l_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
          t = lookup_table_0_1(x_55, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_9(y_55, l_32, t);
          t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        }
      }
  }
  t = g_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  t_32 = t;
  t = u_114(t);
  q_32 = t;
  {
    ATerm v_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL;
        t = term_x_29;
        x_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_x_29);
        t = r_9(q_32, x_32, t);
        {
          ATerm y_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_30;
            }
        }
        LocalPopChoice(x_30);
      }
    else
      {
        t = v_30;
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
  t = (ATerm) ATmakeAppl(sym__3, q_32, term_x_29, o_32);
  t = lookup_table_0_1(q_32, t);
  w_32 = t;
  t = term_x_29;
  u_32 = t;
  t = w_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(u_32, o_32, v_32, t);
  t = p_32;
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm y_32 = NULL;
      y_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, y_32);
      t = w_8(q_32, y_32, t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  t = t_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  ATerm d_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_118(t);
      t = n_118(t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = d_31;
      t = n_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  b_33 = t;
  t = t_114(t);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_33, term_x_29);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_31 = ATgetArgument(t, 0);
            ATerm j_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_29;
        l_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_x_29);
        t = r_9(a_33, l_33, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATempty;
      }
  }
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_33, term_x_29, (ATerm) ATinsert(CheckATermList(c_33), (ATerm) ATempty));
  t = lookup_table_0_1(a_33, t);
  g_33 = t;
  t = term_x_29;
  d_33 = t;
  t = (ATerm) ATinsert(CheckATermList(c_33), (ATerm) ATempty);
  e_33 = t;
  t = g_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(d_33, e_33, f_33, t);
  t = b_33;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  {
    ATerm k_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_33);
        LocalPopChoice(n_31);
      }
    else
      {
        t = k_31;
        t = y_33;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  static ATerm l_4 (ATerm t)
  {
    ATerm q_33 = NULL;
    q_33 = t;
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_33 = NULL,t_33 = NULL;
          t = term_i_30;
          s_33 = t;
          t = term_x_29;
          t_33 = t;
          t = term_q_31;
          t = r_9(s_33, t_33, t);
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_33 != NULL) && (p_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_33 = ATgetFirst((ATermList) t);
        {
          ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_33;
    t = map_1_0(p_4, t);
    t = q_33;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(g_4, t);
  t = restore_always_2_0(m_121, l_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  m_34 = t;
  t = xtc_new_file_0_0(t);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_34, m_34);
  t = h_9(w_4, l_34, m_34, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_34);
  {
    ATerm u_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL,x_34 = NULL,f_4 = NULL;
        x_34 = t;
        if(match_cons(t, sym_FILE_1))
          {
            ATerm z_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_34);
        p_34 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_34);
        f_4 = t;
        t = SSLsetAnnotations(f_4, p_34);
        LocalPopChoice(w_31);
        t = xtc_transform_file_2_0(z_4, a_5, t);
      }
    else
      {
        t = u_31;
        t = xtc_transform_term_2_0(b_5, c_5, t);
      }
  }
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_34;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      if(match_cons(a_32, sym_Stream_1))
        {
          n_34 = ATgetArgument(a_32, 0);
        }
      else
        _fail(t);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(n_34, o_34, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,i_34 = NULL;
  t = xtc_temp_files_1_0(t_4, t);
  b_34 = t;
  t = term_w_13;
  c_34 = t;
  t = (ATerm) ATinsert(ATempty, term_i_32);
  i_34 = t;
  t = SSL_printnl(c_34, i_34);
  t = b_34;
  t = debug_1_0(d_5, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  static ATerm y_34 (ATerm t)
  {
    ATerm k_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_100(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = k_32;
        t = SRTS_one(y_34, t);
      }
    return(t);
  }
  t = y_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm a_35 = NULL,d_35 = NULL;
  t = term_n_32;
  a_35 = t;
  t = term_r_32;
  d_35 = t;
  t = term_s_32;
  t = r_9(a_35, d_35, t);
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
static ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_14 = NULL,b_15 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(match_cons(h_33, sym_appl_2))
        {
          ATerm i_33 = ATgetArgument(h_33, 0);
          if(match_cons(i_33, sym_uqlit_1))
            {
              ATerm k_33 = ATgetArgument(i_33, 0);
              if((ATgetSymbol((ATermAppl) k_33) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm j_33 = ATgetArgument(h_33, 1);
            if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
              {
                ATerm m_33 = ATgetFirst((ATermList) j_33);
                if(match_cons(m_33, sym_fun_1))
                  {
                    ATerm r_33 = ATgetArgument(m_33, 0);
                    if(match_cons(r_33, sym_qlit_1))
                      {
                        v_14 = ATgetArgument(r_33, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm o_33 = (ATerm) ATgetNext((ATermList) j_33);
                  if(((ATgetType(o_33) != AT_LIST) || !(ATisEmpty(o_33))))
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
  t = SSL_explode_string(v_14);
  t = unquote_chars_2_0(n_5, o_5, t);
  b_15 = t;
  t = SSL_implode_string(b_15);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
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
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
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
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm f_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,r_37 = NULL,u_37 = NULL,v_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym_prod_3))
    {
      m_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      u_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_37;
  if(match_cons(t, sym_attrs_1))
    {
      v_37 = ATgetArgument(t, 0);
      t = r_37;
      if(match_cons(t, sym_cf_1))
        {
          j_37 = ATgetArgument(t, 0);
          t = j_37;
          if(match_cons(t, sym_sort_1))
            {
              k_37 = ATgetArgument(t, 0);
              t = m_37;
              {
                ATerm u_33 = t;
                int v_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_37;
                    t = fetch_1_0(e_5, t);
                    t = l_37;
                    LocalPopChoice(v_33);
                  }
                else
                  {
                    t = u_33;
                    {
                      ATerm w_33 = t;
                      int x_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_37;
                          t = fetch_1_0(f_5, t);
                          t = l_37;
                          LocalPopChoice(x_33);
                        }
                      else
                        {
                          t = w_33;
                          {
                            ATerm z_33 = t;
                            int a_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_37;
                                t = fetch_1_0(i_5, t);
                                t = v_37;
                                {
                                  ATerm d_34 = t;
                                  if((PushChoice() == 0))
                                    {
                                      t = fetch_elem_1_0(l_5, t);
                                      PopChoice();
                                      _fail(t);
                                    }
                                  else
                                    {
                                      t = d_34;
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_prod_3, m_37, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, k_37)), (ATerm) ATmakeAppl(sym_attrs_1, v_37));
                                LocalPopChoice(a_34);
                              }
                            else
                              {
                                t = z_33;
                                t = v_37;
                                t = fetch_1_0(p_5, t);
                                t = l_37;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = m_37;
              {
                ATerm e_34 = t;
                int f_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_37;
                    t = fetch_1_0(q_5, t);
                    t = l_37;
                    LocalPopChoice(f_34);
                  }
                else
                  {
                    t = e_34;
                    {
                      ATerm h_34 = t;
                      int j_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_37;
                          t = fetch_1_0(r_5, t);
                          t = l_37;
                          LocalPopChoice(j_34);
                        }
                      else
                        {
                          t = h_34;
                          t = v_37;
                          t = fetch_1_0(t_5, t);
                          t = l_37;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = m_37;
          {
            ATerm r_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_37;
                t = fetch_1_0(v_5, t);
                t = l_37;
                LocalPopChoice(s_34);
              }
            else
              {
                t = r_34;
                {
                  ATerm t_34 = t;
                  int u_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_37;
                      t = fetch_1_0(x_5, t);
                      t = l_37;
                      LocalPopChoice(u_34);
                    }
                  else
                    {
                      t = t_34;
                      t = v_37;
                      t = fetch_1_0(k_6, t);
                      t = l_37;
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
      t = r_37;
      if(match_cons(t, sym_sort_1))
        {
          ATerm v_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      if(match_cons(t, sym_sort_1))
        {
          ATerm w_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_37;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_37;
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
  ATerm t_40 = NULL,u_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_41;
  if(match_cons(t, sym_alt_2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_41 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, t_40, u_40);
            t = flat_alt_0_0(t);
            e_41 = t;
            t = (ATerm) ATinsert(CheckATermList(e_41), z_40);
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_41), z_40);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, a_41), z_40);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  {
    ATerm g_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_40;
        {
          ATerm s_35 = t;
          if((PushChoice() == 0))
            {
              ATerm g_15 = NULL;
              g_15 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_15;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_35 = ATgetFirst((ATermList) t);
                      ATerm w_35 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_15;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_35;
            }
        }
        t = (ATerm) ATinsert(ATempty, n_40);
        LocalPopChoice(m_35);
      }
    else
      {
        t = g_35;
        t = n_40;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(s_6, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          b_47 = ATgetArgument(t, 0);
          c_47 = ATgetArgument(t, 1);
          {
            ATerm z_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_35);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, b_47, c_47);
    }
  else
    {
      t = x_35;
      if(match_cons(t, sym_iter_n_2))
        {
          b_47 = ATgetArgument(t, 0);
          {
            ATerm a_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, b_47);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm a_18 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_Arg_1))
    {
      a_18 = ATgetArgument(t, 0);
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(c_18);
            b_19 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, a_18);
            j_5 = t;
            t = SSLsetAnnotations(j_5, b_19);
            t = term_d_36;
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            t = c_18;
          }
      }
    }
  else
    {
      t = c_18;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,s_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL;
  static ATerm v_49 (ATerm t)
  {
    static ATerm x_49 (ATerm j_46, ATerm k_46, ATerm l_46, ATerm t)
    {
      ATerm m_46 = NULL,s_46 = NULL,g_5 = NULL;
      t = SSLgetAnnotations(j_46);
      m_46 = t;
      t = l_46;
      t = _2_0(_id, w_6, t);
      s_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_46, s_46);
      g_5 = t;
      t = SSLsetAnnotations(g_5, m_46);
      t = v_49(t);
      return(t);
    }
    static ATerm y_49 (ATerm o_47, ATerm p_47, ATerm q_47, ATerm r_47, ATerm t)
    {
      ATerm w_47 = NULL,z_47 = NULL,a_48 = NULL,f_48 = NULL,g_48 = NULL,j_48 = NULL;
      t = SSL_explode_term(r_47);
      if(match_cons(t, sym__2))
        {
          f_48 = ATgetArgument(t, 0);
          g_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, p_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, q_47, f_48)));
      t = conc_0_0(t);
      w_47 = t;
      t = g_48;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      j_48 = t;
      t = make_0_0(t);
      z_47 = t;
      t = j_48;
      {
        static ATerm x_6 (ATerm t)
        {
          ATerm l_48 = NULL;
          l_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_47, w_47), l_48);
          t = v_49(t);
          return(t);
        }
        t = map_1_0(x_6, t);
      }
      t = concat_0_0(t);
      a_48 = t;
      t = (ATerm) ATinsert(CheckATermList(a_48), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, o_47, w_47), z_47));
      return(t);
    }
    ATerm q_48 = NULL,s_48 = NULL,w_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,h_49 = NULL;
    z_48 = t;
    if(match_cons(t, sym__2))
      {
        a_49 = ATgetArgument(t, 0);
        d_49 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = d_49;
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm g_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(f_36);
          t = (ATerm) ATempty;
        }
      else
        {
          t = e_36;
          if(match_cons(t, sym__2))
            {
              e_49 = ATgetArgument(t, 0);
              h_49 = ATgetArgument(t, 1);
              t = h_49;
              {
                ATerm h_36 = t;
                int i_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm j_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_36);
                    t = a_49;
                    {
                      ATerm k_36 = t;
                      int l_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm m_36 = ATgetArgument(t, 0);
                              ATerm n_36 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_36);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = k_36;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = h_36;
                    {
                      ATerm o_36 = t;
                      int p_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm q_36 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_36);
                          t = a_49;
                          {
                            ATerm r_36 = t;
                            int s_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm t_36 = ATgetArgument(t, 0);
                                    ATerm u_36 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(s_36);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = r_36;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = o_36;
                          if(match_cons(t, sym_alt_2))
                            {
                              x_48 = ATgetArgument(t, 0);
                              q_48 = ATgetArgument(t, 1);
                              t = q_48;
                              if(match_cons(t, sym_alt_2))
                                {
                                  s_48 = ATgetArgument(t, 0);
                                  w_48 = ATgetArgument(t, 1);
                                  t = a_49;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_49 = ATgetArgument(t, 0);
                                      c_49 = ATgetArgument(t, 1);
                                      {
                                        ATerm v_36 = t;
                                        int w_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_16 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,q_17 = NULL,k_5 = NULL;
                                            t = b_49;
                                            if(((p_43 != NULL) && (p_43 != t)))
                                              _fail(t);
                                            else
                                              p_43 = t;
                                            t = c_49;
                                            if(((s_43 != NULL) && (s_43 != t)))
                                              _fail(t);
                                            else
                                              s_43 = t;
                                            t = e_49;
                                            if(((u_43 != NULL) && (u_43 != t)))
                                              _fail(t);
                                            else
                                              u_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, x_48, (ATerm) ATmakeAppl(sym_alt_2, s_48, w_48));
                                            t = flat_alt_0_0(t);
                                            z_16 = t;
                                            t = term_x_36;
                                            h_17 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_x_36, z_16);
                                            t = y_8(h_17, z_16, t);
                                            g_17 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_49, c_49), (ATerm) ATmakeAppl(sym__2, e_49, g_17));
                                            t = v_49(t);
                                            q_17 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                k_17 = ATgetFirst((ATermList) t);
                                                l_17 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(q_17);
                                            i_17 = t;
                                            t = k_17;
                                            t = topdown_1_0(y_6, t);
                                            m_17 = t;
                                            t = (ATerm) ATinsert(CheckATermList(l_17), m_17);
                                            k_5 = t;
                                            t = SSLsetAnnotations(k_5, i_17);
                                            LocalPopChoice(w_36);
                                          }
                                        else
                                          {
                                            t = v_36;
                                            {
                                              ATerm y_36 = t;
                                              int z_36 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = x_49(z_48, a_49, d_49, t);
                                                  LocalPopChoice(z_36);
                                                }
                                              else
                                                {
                                                  t = y_36;
                                                  t = y_49(b_49, c_49, e_49, h_49, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = x_49(z_48, a_49, d_49, t);
                                    }
                                }
                              else
                                {
                                  t = a_49;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_49 = ATgetArgument(t, 0);
                                      c_49 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_37 = t;
                                        int b_37 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_49(z_48, a_49, d_49, t);
                                            LocalPopChoice(b_37);
                                          }
                                        else
                                          {
                                            t = a_37;
                                            t = y_49(b_49, c_49, e_49, h_49, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = x_49(z_48, a_49, d_49, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  x_48 = ATgetArgument(t, 0);
                                  t = a_49;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_49 = ATgetArgument(t, 0);
                                      c_49 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_37 = t;
                                        int d_37 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_49(z_48, a_49, d_49, t);
                                            LocalPopChoice(d_37);
                                          }
                                        else
                                          {
                                            t = c_37;
                                            {
                                              ATerm e_37 = t;
                                              int g_37 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_49, c_49), (ATerm) ATmakeAppl(sym__2, e_49, x_48));
                                                  t = v_49(t);
                                                  LocalPopChoice(g_37);
                                                }
                                              else
                                                {
                                                  t = e_37;
                                                  t = y_49(b_49, c_49, e_49, h_49, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = x_49(z_48, a_49, d_49, t);
                                    }
                                }
                              else
                                {
                                  t = a_49;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_49 = ATgetArgument(t, 0);
                                      c_49 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_37 = t;
                                        int n_37 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_49(z_48, a_49, d_49, t);
                                            LocalPopChoice(n_37);
                                          }
                                        else
                                          {
                                            t = h_37;
                                            t = y_49(b_49, c_49, e_49, h_49, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = x_49(z_48, a_49, d_49, t);
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
              t = a_49;
              t = x_49(z_48, a_49, d_49, t);
            }
        }
    }
    return(t);
  }
  x_43 = t;
  t = term_r_14;
  t = m_96(t);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
  t = v_49(t);
  return(t);
}
ATerm _2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL,m_50 = NULL,w_5 = NULL;
  m_50 = t;
  if(match_cons(t, sym__2))
    {
      f_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_50);
  e_50 = t;
  t = f_50;
  t = k_80(t);
  i_50 = t;
  t = h_50;
  t = l_80(t);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, l_50);
  w_5 = t;
  t = SSLsetAnnotations(w_5, e_50);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,a_51 = NULL;
  u_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_50;
    }
  else
    {
      ATerm g_51 = NULL;
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
          a_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_51;
      t = pair_0_0(t);
      g_51 = t;
      t = (ATerm) ATinsert(CheckATermList(g_51), (ATerm) ATmakeAppl(sym__2, v_50, x_50));
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,u_55 = NULL,j_6 = NULL;
  i_55 = t;
  if(match_cons(t, sym_lit_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_55);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, h_55);
  j_6 = t;
  t = SSLsetAnnotations(j_6, g_55);
  if(match_cons(t, sym_lit_1))
    {
      u_55 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, u_55));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          u_55 = ATgetArgument(t, 0);
          {
            ATerm p_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, u_55);
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,c_57 = NULL,d_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,n_57 = NULL,z_6 = NULL,h_58 = NULL,p_57 = NULL,o_6 = NULL;
  n_57 = t;
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_57);
  c_57 = t;
  t = d_57;
  if(match_cons(t, sym_lit_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_57);
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, k_57);
  o_6 = t;
  t = SSLsetAnnotations(o_6, j_57);
  if(match_cons(t, sym_lit_1))
    {
      p_57 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, p_57));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_57 = ATgetArgument(t, 0);
          {
            ATerm q_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_57);
    }
  w_56 = t;
  t = i_57;
  t = _2_0(_id, i_7, t);
  if(match_cons(t, sym_lit_1))
    {
      h_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, h_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          h_58 = ATgetArgument(t, 0);
          {
            ATerm s_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, h_58);
    }
  x_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
  z_6 = t;
  t = SSLsetAnnotations(z_6, c_57);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_x_37), (ATerm) ATinsert(ATinsert(ATempty, x_56), w_56));
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  e_58 = t;
  if(match_cons(t, sym_iter_1))
    {
      f_58 = ATgetArgument(t, 0);
      {
        ATerm y_20 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(e_58);
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, f_58);
        p_6 = t;
        t = SSLsetAnnotations(p_6, y_20);
      }
    }
  else
    {
      ATerm f_21 = NULL,u_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          f_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_58);
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, f_58);
      u_6 = t;
      t = SSLsetAnnotations(u_6, f_21);
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      m_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, m_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          m_58 = ATgetArgument(t, 0);
          {
            ATerm y_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, m_58);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm u_52 = NULL,a_53 = NULL,b_53 = NULL,g_53 = NULL,h_53 = NULL;
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,w_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,l_6 = NULL,c_55 = NULL,i_6 = NULL,z_54 = NULL,a_55 = NULL;
      t = reverse_acc_2_0(_id, a_7, t);
      a_54 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_53 = ATgetFirst((ATermList) t);
          o_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_54);
      m_53 = t;
      t = n_53;
      if(match_cons(t, sym__2))
        {
          w_53 = ATgetArgument(t, 0);
          y_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_53);
      t_53 = t;
      t = y_53;
      if(match_cons(t, sym_iter_1))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm q_19 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(y_53);
            q_19 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, z_54);
            d_6 = t;
            t = SSLsetAnnotations(d_6, q_19);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              z_54 = ATgetArgument(t, 0);
              {
                ATerm y_19 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(y_53);
                y_19 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, z_54);
                f_6 = t;
                t = SSLsetAnnotations(f_6, y_19);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  z_54 = ATgetArgument(t, 0);
                  a_55 = ATgetArgument(t, 1);
                  {
                    ATerm g_20 = NULL,g_6 = NULL;
                    t = SSLgetAnnotations(y_53);
                    g_20 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, z_54, a_55);
                    g_6 = t;
                    t = SSLsetAnnotations(g_6, g_20);
                  }
                }
              else
                {
                  ATerm r_20 = NULL,h_6 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      z_54 = ATgetArgument(t, 0);
                      a_55 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_53);
                  r_20 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, z_54, a_55);
                  h_6 = t;
                  t = SSLsetAnnotations(h_6, r_20);
                }
            }
        }
      z_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_53, z_53);
      i_6 = t;
      t = SSLsetAnnotations(i_6, t_53);
      if(match_cons(t, sym_lit_1))
        {
          c_55 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, c_55));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              c_55 = ATgetArgument(t, 0);
              {
                ATerm b_38 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, c_55);
        }
      r_53 = t;
      t = o_53;
      t = map_1_0(c_7, t);
      s_53 = t;
      t = (ATerm) ATinsert(CheckATermList(s_53), r_53);
      l_6 = t;
      t = SSLsetAnnotations(l_6, m_53);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_53 = ATgetFirst((ATermList) t);
          u_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_38 = t;
        if((PushChoice() == 0))
          {
            ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,m_6 = NULL;
            e_56 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_56 = ATgetFirst((ATermList) t);
                d_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_56);
            b_56 = t;
            t = d_56;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_56), c_56);
            m_6 = t;
            t = SSLsetAnnotations(m_6, b_56);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_38;
          }
      }
      t = u_52;
      t = reverse_acc_2_0(_id, d_7, t);
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_53), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, l_53)));
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,n_6 = NULL,m_56 = NULL;
            t = reverse_acc_2_0(_id, e_7, t);
            j_56 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_56 = ATgetFirst((ATermList) t);
                i_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_56);
            g_56 = t;
            t = h_56;
            if(match_cons(t, sym_lit_1))
              {
                m_56 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_37, (ATerm) ATmakeAppl(sym_S_1, m_56));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    m_56 = ATgetArgument(t, 0);
                    {
                      ATerm f_38 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, m_56);
              }
            h_53 = t;
            t = i_56;
            {
              ATerm g_38 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_38;
                }
            }
            t = reverse_acc_2_0(_id, f_7, t);
            b_53 = t;
            t = (ATerm) ATinsert(CheckATermList(b_53), h_53);
            n_6 = t;
            t = SSLsetAnnotations(n_6, g_56);
            t = b_53;
            t = pair_0_0(t);
            t = map_1_0(g_7, t);
            g_53 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_53), g_53));
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = map_1_0(j_7, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,q_9 = NULL;
      y_58 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_58);
      w_58 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_58);
      q_9 = t;
      t = SSLsetAnnotations(q_9, w_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_38;
    }
  return(t);
}
static ATerm d_60 (ATerm d_59, ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm j_59 = NULL,x_9 = NULL;
  t = SSLgetAnnotations(d_59);
  j_59 = t;
  t = f_59;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_59, f_59);
  x_9 = t;
  t = SSLsetAnnotations(x_9, j_59);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm c_59 = NULL;
  static ATerm c_60 (ATerm t)
  {
    ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
    n_59 = t;
    if(match_cons(t, sym__2))
      {
        o_59 = ATgetArgument(t, 0);
        p_59 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_59 = ATgetFirst((ATermList) t);
        r_59 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_60(n_59, o_59, p_59, t);
              LocalPopChoice(j_38);
            }
          else
            {
              t = i_38;
              {
                ATerm k_38 = t;
                int l_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
                    t = q_59;
                    t = p_96(t);
                    t = term_w_15;
                    x_59 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_59, term_w_15);
                    t = m_9(o_59, x_59, t);
                    w_59 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_59, r_59);
                    t = c_60(t);
                    v_59 = t;
                    t = (ATerm) ATinsert(CheckATermList(v_59), (ATerm) ATmakeAppl(sym__2, o_59, q_59));
                    LocalPopChoice(l_38);
                  }
                else
                  {
                    t = k_38;
                    {
                      ATerm b_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, o_59, r_59);
                      t = c_60(t);
                      b_60 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_60), q_59);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = d_60(n_59, o_59, p_59, t);
      }
    return(t);
  }
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, c_59);
  t = c_60(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  i_60 = t;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm o_38 = ATgetArgument(t, 0);
            h_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_38);
        t = h_60;
      }
    else
      {
        t = m_38;
        t = i_60;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(l_7, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  t = number_nonterminals_0_0(t);
  c_61 = t;
  t = make_0_0(t);
  z_60 = t;
  t = c_61;
  {
    static ATerm m_7 (ATerm t)
    {
      static ATerm n_7 (ATerm t)
      {
        ATerm d_61 = NULL;
        t = term_r_14;
        t = l_96(t);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_61, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(n_7, t);
      return(t);
    }
    t = map_1_0(m_7, t);
  }
  t = concat_0_0(t);
  a_61 = t;
  t = term_r_14;
  t = l_96(t);
  b_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, b_61), z_60));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm g_61 = NULL;
  static ATerm s_7 (ATerm t)
  {
    t = l_104(t);
    if(((g_61 != NULL) && (g_61 != t)))
      _fail(t);
    else
      g_61 = t;
    return(t);
  }
  t = fetch_1_0(s_7, t);
  t = not_null(g_61);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm z_21 = NULL,j_22 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(match_cons(p_38, sym_appl_2))
        {
          ATerm q_38 = ATgetArgument(p_38, 0);
          if(match_cons(q_38, sym_uqlit_1))
            {
              ATerm s_38 = ATgetArgument(q_38, 0);
              if((ATgetSymbol((ATermAppl) s_38) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm r_38 = ATgetArgument(p_38, 1);
            if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
              {
                ATerm t_38 = ATgetFirst((ATermList) r_38);
                if(match_cons(t_38, sym_fun_1))
                  {
                    ATerm v_38 = ATgetArgument(t_38, 0);
                    if(match_cons(v_38, sym_qlit_1))
                      {
                        z_21 = ATgetArgument(v_38, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm u_38 = (ATerm) ATgetNext((ATermList) r_38);
                  if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
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
  t = SSL_explode_string(z_21);
  t = unquote_chars_2_0(w_7, x_7, t);
  j_22 = t;
  t = SSL_implode_string(j_22);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,c_62 = NULL,e_62 = NULL;
  y_61 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      z_61 = ATgetArgument(t, 0);
      c_62 = ATgetArgument(t, 1);
      e_62 = ATgetArgument(t, 2);
      x_61 = ATgetArgument(t, 3);
      {
        ATerm p_62 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_38)), c_62), (ATerm) ATinsert(ATinsert(ATempty, term_x_38), (ATerm) ATmakeAppl(sym_lit_1, z_61)));
        t = concat_0_0(t);
        p_62 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, p_62, e_62, x_61);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm x_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          z_61 = ATgetArgument(t, 0);
          {
            ATerm z_38 = ATgetArgument(t, 1);
          }
          e_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_61;
      {
        ATerm a_39 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = NULL;
            t = e_62;
            if(match_cons(t, sym_attrs_1))
              {
                y_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_21;
            t = fetch_elem_1_0(v_7, t);
            x_21 = t;
            LocalPopChoice(b_39);
            {
              static ATerm y_7 (ATerm t)
              {
                t = x_21;
                return(t);
              }
              t = z_61;
              t = symbols2pp_entries_1_0(y_7, t);
            }
          }
        else
          {
            t = a_39;
            {
              ATerm c_39 = t;
              int d_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(d_39);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = c_39;
                  {
                    ATerm e_39 = t;
                    int f_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_39 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_22 = NULL;
                            a_22 = t;
                            t = term_h_39;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(z_7, t);
                            t = a_22;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = g_39;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(f_39);
                      }
                    else
                      {
                        t = e_39;
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
ATerm at_last_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  static ATerm q_63 (ATerm t)
  {
    ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
    n_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_63 = ATgetFirst((ATermList) t);
        p_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_39 = t;
      int j_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(n_63);
          p_22 = t;
          t = p_63;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(p_63), o_63);
          f_10 = t;
          t = SSLsetAnnotations(f_10, p_22);
          t = b_105(t);
          LocalPopChoice(j_39);
        }
      else
        {
          t = i_39;
          {
            ATerm a_23 = NULL,d_23 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(n_63);
            a_23 = t;
            t = p_63;
            t = q_63(t);
            d_23 = t;
            t = (ATerm) ATinsert(CheckATermList(d_23), o_63);
            j_10 = t;
            t = SSLsetAnnotations(j_10, a_23);
          }
        }
    }
    return(t);
  }
  t = q_63(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_63 = NULL,a_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_63 = ATgetFirst((ATermList) t);
      a_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_64;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_63;
    }
  else
    {
      t = a_64;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm j_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_39 = ATgetFirst((ATermList) t);
      j_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_64;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_64 = ATgetFirst((ATermList) t);
      {
        ATerm l_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_64;
  t = w_113(t);
  t = g_64;
  t = last_0_0(t);
  t = x_113(t);
  t = g_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_39 = ATgetFirst((ATermList) t);
      h_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_64;
  t = at_last_1_0(a_8, t);
  return(t);
}
static ATerm c_9 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t)
{
  t = o_108(t);
  {
    static ATerm c_8 (ATerm t)
    {
      ATerm k_64 = NULL;
      k_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_35, k_64);
      t = n_108(t);
      return(t);
    }
    t = fetch_1_0(c_8, t);
  }
  t = n_35;
  return(t);
}
static ATerm d_9 (ATerm k_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t)
{
  static ATerm g_65 (ATerm t)
  {
    ATerm a_65 = NULL,b_65 = NULL,d_65 = NULL;
    a_65 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_65 = ATgetFirst((ATermList) t);
            d_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_39 = t;
          int o_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_65;
              {
                static ATerm d_8 (ATerm t)
                {
                  t = j_35;
                  return(t);
                }
                t = c_9(k_108, d_8, b_65, d_65, t);
              }
              t = g_65(t);
              LocalPopChoice(o_39);
            }
          else
            {
              t = n_39;
              {
                ATerm p_23 = NULL,s_23 = NULL,p_10 = NULL;
                t = SSLgetAnnotations(a_65);
                p_23 = t;
                t = d_65;
                t = g_65(t);
                s_23 = t;
                t = (ATerm) ATinsert(CheckATermList(s_23), b_65);
                p_10 = t;
                t = SSLsetAnnotations(p_10, p_23);
              }
            }
        }
      }
    return(t);
  }
  t = k_35;
  t = g_65(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_65;
      t = p_111(t);
    }
  else
    {
      ATerm o_65 = NULL,p_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_65 = ATgetFirst((ATermList) t);
          l_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_65;
      t = r_111(t);
      o_65 = t;
      t = l_65;
      t = foldr_3_0(p_111, q_111, r_111, t);
      p_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_65, p_65);
      t = q_111(t);
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_65 = NULL;
      t = h_110(t);
      s_65 = t;
      t = (ATerm) ATinsert(ATempty, s_65);
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      {
        ATerm e_24 = NULL,h_24 = NULL;
        static ATerm f_8 (ATerm t)
        {
          t = collect_om_2_0(h_110, i_110, t);
          return(t);
        }
        h_24 = t;
        t = SSL_explode_term(h_24);
        if(match_cons(t, sym__2))
          {
            ATerm r_39 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_24;
        t = foldr_3_0(e_8, i_110, f_8, t);
      }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm g_66 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      g_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_66;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(j_8, h_66, i_66, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm j_66 = NULL;
  if(match_cons(t, sym__2))
    {
      j_66 = ATgetArgument(t, 0);
      if((j_66 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  l_67 = t;
  if(match_cons(t, sym_cons_1))
    {
      j_67 = ATgetArgument(t, 0);
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL,x_24 = NULL,d_25 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(l_67);
            u_24 = t;
            t = SSL_explode_string(j_67);
            t = unquote_chars_2_0(y_9, b_10, t);
            d_25 = t;
            t = SSL_implode_string(d_25);
            x_24 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, x_24);
            r_11 = t;
            t = SSLsetAnnotations(r_11, u_24);
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            t = l_67;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          j_67 = ATgetArgument(t, 0);
          t = j_67;
          if(match_cons(t, sym_qlit_1))
            {
              k_67 = ATgetArgument(t, 0);
              {
                ATerm u_39 = t;
                int v_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_68(l_67, j_67, t);
                    LocalPopChoice(v_39);
                  }
                else
                  {
                    t = u_39;
                    {
                      ATerm w_39 = t;
                      int x_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_68(k_67, t);
                          LocalPopChoice(x_39);
                        }
                      else
                        {
                          t = w_39;
                          t = l_67;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_68(l_67, j_67, t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  t = l_67;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              j_67 = ATgetArgument(t, 0);
              {
                ATerm a_40 = t;
                int b_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_68(l_67, j_67, t);
                    LocalPopChoice(b_40);
                  }
                else
                  {
                    t = a_40;
                    t = l_67;
                  }
              }
            }
          else
            {
              t = l_67;
            }
        }
    }
  return(t);
}
static ATerm x_68 (ATerm r_66, ATerm s_66, ATerm t)
{
  ATerm t_66 = NULL,v_66 = NULL,w_66 = NULL,v_10 = NULL;
  t = SSLgetAnnotations(r_66);
  t_66 = t;
  t = SSL_explode_string(s_66);
  t = unquote_chars_2_0(x_8, z_8, t);
  w_66 = t;
  t = SSL_implode_string(w_66);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, v_66);
  v_10 = t;
  t = SSLsetAnnotations(v_10, t_66);
  return(t);
}
static ATerm y_68 (ATerm y_66, ATerm z_66, ATerm t)
{
  ATerm a_67 = NULL,c_67 = NULL,d_67 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(y_66);
  a_67 = t;
  t = SSL_explode_string(z_66);
  t = unquote_chars_2_0(a_9, b_9, t);
  d_67 = t;
  t = SSL_implode_string(d_67);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, c_67);
  q_11 = t;
  t = SSLsetAnnotations(q_11, a_67);
  return(t);
}
static ATerm z_68 (ATerm f_67, ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL;
  t = SSL_explode_string(f_67);
  t = unquote_chars_2_0(n_9, t_9, t);
  i_67 = t;
  t = SSL_implode_string(i_67);
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, h_67);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
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
static ATerm b_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm c_40 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_40;
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
  r_68 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_68 = ATgetArgument(t, 0);
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_25 = NULL,s_25 = NULL,s_11 = NULL;
            t = SSLgetAnnotations(r_68);
            q_25 = t;
            t = SSL_int_to_string(q_68);
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_25);
            s_11 = t;
            t = SSLsetAnnotations(s_11, q_25);
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            t = r_68;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          q_68 = ATgetArgument(t, 0);
          p_68 = ATgetArgument(t, 1);
          {
            ATerm f_40 = t;
            int g_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_26 = NULL,i_26 = NULL,t_11 = NULL;
                t = SSLgetAnnotations(r_68);
                e_26 = t;
                t = SSL_int_to_string(q_68);
                i_26 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, i_26, p_68);
                t_11 = t;
                t = SSLsetAnnotations(t_11, e_26);
                LocalPopChoice(g_40);
              }
            else
              {
                t = f_40;
                t = r_68;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              q_68 = ATgetArgument(t, 0);
              {
                ATerm h_40 = t;
                int i_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,u_11 = NULL;
                    t = SSLgetAnnotations(r_68);
                    j_27 = t;
                    t = SSL_explode_string(q_68);
                    r_27 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_27), term_j_40), (ATerm) ATinsert(ATempty, term_j_40));
                    t = conc_0_0(t);
                    s_27 = t;
                    t = SSL_implode_string(s_27);
                    q_27 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, q_27);
                    u_11 = t;
                    t = SSLsetAnnotations(u_11, j_27);
                    LocalPopChoice(i_40);
                  }
                else
                  {
                    t = h_40;
                    t = r_68;
                  }
              }
            }
          else
            {
              t = r_68;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm f_66 = NULL;
  t = collect_om_2_0(g_8, i_8, t);
  t = concat_0_0(t);
  t = topdown_1_0(p_8, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(c_10, t);
  t = concat_0_0(t);
  f_66 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, f_66);
  t = topdown_1_0(e_10, t);
  return(t);
}
static ATerm e_9 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm d_69 = NULL;
  t = SSL_fputc(h_62, i_62);
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_69);
  return(t);
}
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm e_69 = NULL;
  t = SSL_write_term_to_stream_text(e_28, f_28);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_69);
  return(t);
}
static ATerm h_9 (ATerm i_99 (ATerm), ATerm r_222, ATerm k_28, ATerm t)
{
  ATerm f_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_222, term_k_40);
  t = l_9(t);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, k_28);
  t = i_99(t);
  t = fclose_0_0(t);
  t = k_28;
  return(t);
}
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm g_69 = NULL;
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_69);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      if(match_cons(l_40, sym_Stream_1))
        {
          n_69 = ATgetArgument(l_40, 0);
        }
      else
        _fail(t);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(n_69, o_69, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      if(match_cons(m_40, sym_Stream_1))
        {
          s_69 = ATgetArgument(m_40, 0);
        }
      else
        _fail(t);
      t_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(s_69, t_69, t);
  p_69 = t;
  t = term_m_21;
  q_69 = t;
  t = p_69;
  if(match_cons(t, sym_Stream_1))
    {
      r_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, p_69);
  t = e_9(q_69, r_69, t);
  return(t);
}
ATerm output_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  t = l_123(t);
  i_69 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_69 = NULL,k_69 = NULL;
        t = term_u_15;
        j_69 = t;
        t = term_n_29;
        k_69 = t;
        t = term_q_40;
        t = r_9(j_69, k_69, t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = term_r_40;
      }
  }
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
  {
    ATerm s_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_69 = NULL,m_69 = NULL;
        t = term_u_15;
        l_69 = t;
        t = term_w_40;
        m_69 = t;
        t = term_x_40;
        t = r_9(l_69, m_69, t);
        t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
        LocalPopChoice(v_40);
        if(match_cons(t, sym__2))
          {
            ATerm y_40 = ATgetArgument(t, 0);
            ATerm b_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(k_10, h_69, i_69, t);
      }
    else
      {
        t = s_40;
        if(match_cons(t, sym__2))
          {
            ATerm c_41 = ATgetArgument(t, 0);
            ATerm d_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(l_10, h_69, i_69, t);
      }
  }
  return(t);
}
static ATerm h_70 (ATerm b_70, ATerm t)
{
  t = SSL_fclose(b_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL;
  f_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_70 = ATgetArgument(t, 0);
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_70);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            t = h_70(f_70, t);
          }
      }
    }
  else
    {
      t = h_70(f_70, t);
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
static ATerm k_9 (ATerm j_62, ATerm k_62, ATerm t)
{
  ATerm i_70 = NULL;
  t = SSL_fopen(j_62, k_62);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_70 = NULL;
  t = SSL_stdin_stream();
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_70);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_70 = NULL;
  t = SSL_stdout_stream();
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_70);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_70 = NULL;
  t = SSL_stderr_stream();
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_70);
  return(t);
}
static ATerm s_71 (ATerm r_70, ATerm t)
{
  ATerm s_70 = NULL;
  t = SSL_explode_term(r_70);
  if(match_cons(t, sym__2))
    {
      ATerm h_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_41 = ATgetArgument(t, 1);
        if(((ATgetType(i_41) == AT_LIST) && !(ATisEmpty(i_41))))
          {
            s_70 = ATgetFirst((ATermList) i_41);
            {
              ATerm j_41 = (ATerm) ATgetNext((ATermList) i_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_71 (ATerm v_70, ATerm w_70, ATerm x_70, ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,d_71 = NULL,k_12 = NULL;
  t = SSLgetAnnotations(x_70);
  a_71 = t;
  t = v_70;
  if(match_cons(t, sym_Path_1))
    {
      d_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_71, w_70);
  k_12 = t;
  t = SSLsetAnnotations(k_12, a_71);
  if(match_cons(t, sym__2))
    {
      y_70 = ATgetArgument(t, 0);
      z_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(y_70, z_70, t);
  return(t);
}
static ATerm u_71 (ATerm f_71, ATerm g_71, ATerm h_71, ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL,n_71 = NULL,v_12 = NULL;
  t = SSLgetAnnotations(h_71);
  k_71 = t;
  t = SSL_is_string(f_71);
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_71, g_71);
  v_12 = t;
  t = SSLsetAnnotations(v_12, k_71);
  if(match_cons(t, sym__2))
    {
      i_71 = ATgetArgument(t, 0);
      j_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(i_71, j_71, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
  p_71 = t;
  if(match_cons(t, sym__2))
    {
      q_71 = ATgetArgument(t, 0);
      r_71 = ATgetArgument(t, 1);
      {
        ATerm k_41 = t;
        int l_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_71(p_71, t);
            LocalPopChoice(l_41);
          }
        else
          {
            t = k_41;
            {
              ATerm m_41 = t;
              int n_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_71(q_71, r_71, p_71, t);
                  LocalPopChoice(n_41);
                }
              else
                {
                  t = m_41;
                  t = u_71(q_71, r_71, p_71, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_71(p_71, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,d_72 = NULL;
  d_72 = t;
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_72, term_j_15);
        t = l_9(t);
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        {
          ATerm p_28 = NULL,s_28 = NULL;
          t = term_q_41;
          s_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_41, d_72);
          t = j_9(s_28, d_72, t);
          p_28 = t;
          t = SSL_perror(p_28);
          _fail(t);
        }
      }
  }
  x_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(y_71, t);
  w_71 = t;
  t = x_71;
  t = fclose_0_0(t);
  t = w_71;
  return(t);
}
ATerm input_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_72 = NULL,h_72 = NULL;
      t = term_u_15;
      g_72 = t;
      t = term_u_29;
      h_72 = t;
      t = term_t_41;
      t = r_9(g_72, h_72, t);
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      t = term_s_16;
    }
  t = ReadFromFile_0_0(t);
  t = m_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL;
  i_72 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  j_72 = t;
  t = term_w_13;
  l_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_41), j_72), term_u_41);
  m_72 = t;
  t = SSL_printnl(l_72, m_72);
  t = term_w_15;
  k_72 = t;
  t = SSL_exit(k_72);
  t = i_72;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_72 = NULL;
  o_72 = t;
  if(match_string(t, "-k"))
    {
      t = o_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_72;
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  p_72 = t;
  t = SSL_string_to_int(p_72);
  q_72 = t;
  t = term_w_41;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_41, q_72);
  t = u_9(r_72, q_72, t);
  t = p_72;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, n_10, o_10, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm t_72 = NULL;
  t_72 = t;
  if(match_string(t, "-S"))
    {
      t = t_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_72;
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  t = term_p_15;
  u_72 = t;
  t = term_y_41;
  v_72 = t;
  t = term_z_41;
  t = u_9(u_72, v_72, t);
  t = term_a_42;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
  w_72 = t;
  t = SSL_string_to_int(w_72);
  x_72 = t;
  t = term_p_15;
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, x_72);
  t = u_9(y_72, x_72, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_72);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  t = term_d_42;
  z_72 = t;
  t = term_r_14;
  a_73 = t;
  t = term_e_42;
  t = u_9(z_72, a_73, t);
  t = term_f_42;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_10, t_10, u_10, t);
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_10, a_11, i_11, t);
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            t = Option_3_0(j_11, l_11, m_11, t);
          }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL;
  t = term_u_15;
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_15, x_60, y_60);
  t = lookup_table_0_1(b_73, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(x_60, y_60, c_73, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_15, x_60, y_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
      t = term_r_14;
      t = h_0(t);
      i_73 = t;
      t = term_l_42;
      j_73 = t;
      t = term_m_42;
      k_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_42, term_m_42, i_73);
      t = s_9(j_73, k_73, i_73, t);
      _fail(t);
    }
  else
    {
      ATerm n_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_73 = ATgetFirst((ATermList) t);
          h_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_73;
      t = d_0(t);
      t = term_r_14;
      t = g_0(t);
      n_73 = t;
      t = (ATerm) ATinsert(CheckATermList(h_73), n_73);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm p_73 = NULL;
  p_73 = t;
  if(match_string(t, "-o"))
    {
      t = p_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_73;
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  q_73 = t;
  t = term_n_29;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, q_73);
  t = u_9(r_73, q_73, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_73);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_n_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_11, o_11, v_11, t);
  return(t);
}
static ATerm s_9 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_42 = ATgetArgument(t, 0);
            ATerm r_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        t = r_9(s_55, t_55, t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = (ATerm) ATempty;
      }
  }
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, t_55, (ATerm) ATinsert(CheckATermList(u_73), r_55));
  t = lookup_table_0_1(s_55, t);
  x_73 = t;
  t = (ATerm) ATinsert(CheckATermList(u_73), r_55);
  v_73 = t;
  t = x_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(t_55, v_73, w_73, t);
  t = t_73;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
      t = term_r_14;
      t = p_0(t);
      i_74 = t;
      t = term_l_42;
      j_74 = t;
      t = term_m_42;
      k_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_42, term_m_42, i_74);
      t = s_9(j_74, k_74, i_74, t);
      _fail(t);
    }
  else
    {
      ATerm o_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_74 = ATgetFirst((ATermList) t);
          f_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_74 = ATgetFirst((ATermList) t);
          h_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_74;
      t = m_0(t);
      t = g_74;
      t = o_0(t);
      o_74 = t;
      t = (ATerm) ATinsert(CheckATermList(h_74), o_74);
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm q_74 = NULL;
  q_74 = t;
  if(match_string(t, "-i"))
    {
      t = q_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_74;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  r_74 = t;
  t = term_u_29;
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, r_74);
  t = u_9(s_74, r_74, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_74);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, y_11, z_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_14;
  t = whoami_0_0(t);
  t_74 = t;
  t = term_w_13;
  v_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_42), t_74);
  w_74 = t;
  t = SSL_printnl(v_74, w_74);
  t = term_w_15;
  u_74 = t;
  t = SSL_exit(u_74);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL;
  t = term_u_15;
  x_74 = t;
  t = term_u_42;
  y_74 = t;
  t = term_v_42;
  t = r_9(x_74, y_74, t);
  return(t);
}
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm w_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_44, d_44);
      LocalPopChoice(z_42);
    }
  else
    {
      t = w_42;
      t = SSL_addr(c_44, d_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_75;
      t = n_111(t);
    }
  else
    {
      ATerm f_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_75 = ATgetFirst((ATermList) t);
          c_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_75;
      t = foldr_2_0(n_111, o_111, t);
      f_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_75, f_75);
      t = o_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm i_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__2))
    {
      i_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(i_29, t_29, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_75 = NULL,z_28 = NULL,a_29 = NULL;
  t = times_0_0(t);
  a_29 = t;
  t = SSL_explode_term(a_29);
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_28;
  t = foldr_2_0(a_12, b_12, t);
  i_75 = t;
  t = SSL_TicksToSeconds(i_75);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t_75 = t;
  if(match_cons(t, sym__2))
    {
      u_75 = ATgetArgument(t, 0);
      v_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_75;
        if((u_75 != t))
          {
            _fail(t);
          }
        t = t_75;
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
        t = (ATerm) ATmakeAppl(sym__2, u_75, v_75);
        {
          ATerm d_43 = t;
          int e_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_75, v_75);
              LocalPopChoice(e_43);
            }
          else
            {
              t = d_43;
              t = SSL_gtr(u_75, v_75);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_75, v_75);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm z_75 = NULL;
  z_75 = t;
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
        t = term_u_15;
        c_76 = t;
        t = term_p_15;
        d_76 = t;
        t = term_v_15;
        t = r_9(c_76, d_76, t);
        b_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_76, term_w_15);
        t = geq_0_0(t);
        t = z_75;
        t = x_118(t);
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = z_75;
      }
  }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,i_76 = NULL,j_76 = NULL;
  t = run_time_0_0(t);
  f_76 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  g_76 = t;
  t = term_w_13;
  i_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_43), f_76), term_x_16), g_76);
  j_76 = t;
  t = SSL_printnl(i_76, j_76);
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_43), f_76), term_x_16), g_76));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_41;
  k_76 = t;
  t = SSL_exit(k_76);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL;
  v_76 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_76;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_76 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,p_13 = NULL;
            t = SSLgetAnnotations(v_76);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_76);
            p_13 = t;
            t = SSLsetAnnotations(p_13, p_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_76;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_76 = NULL,o_76 = NULL;
      t = term_u_15;
      n_76 = t;
      t = term_k_43;
      o_76 = t;
      t = term_l_43;
      t = r_9(n_76, o_76, t);
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
      t = fetch_1_0(d_12, t);
    }
  t = c_123(t);
  return(t);
}
static ATerm v_9 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm x_76 = NULL;
  t = SSL_hashtable_put(m_60, k_60, l_60);
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_76);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_57, ATerm t)
{
  ATerm g_77 = NULL;
  t = table_hashtable_0_0(t);
  g_77 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL;
        t = g_77;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_9(e_57, c_31, t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        {
          ATerm l_31 = NULL;
          t = e_57;
          t = table_create_0_0(t);
          t = g_77;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_9(e_57, l_31, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm j_77 = NULL;
  t = SSL_hashtable_create(s_60, t_60);
  j_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_77);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,o_77 = NULL,p_77 = NULL;
  k_77 = t;
  t = term_o_43;
  o_77 = t;
  t = term_q_43;
  p_77 = t;
  t = k_77;
  t = new_hashtable_0_2(o_77, p_77, t);
  l_77 = t;
  t = k_77;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(k_77, l_77, m_77, t);
  t = k_77;
  return(t);
}
static ATerm o_9 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm q_77 = NULL;
  t = SSL_hashtable_remove(q_60, p_60);
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_77);
  return(t);
}
static ATerm p_9 (ATerm u_60, ATerm t)
{
  ATerm r_77 = NULL;
  t = SSL_hashtable_destroy(u_60);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_77);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_77 = NULL;
  t = SSL_table_hashtable();
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_77);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  t_77 = t;
  t = table_hashtable_0_0(t);
  u_77 = t;
  t = lookup_table_0_1(t_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(w_77, t);
  t = u_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(t_77, v_77, t);
  t = t_77;
  return(t);
}
ATerm map_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  static ATerm n_78 (ATerm t)
  {
    ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
    k_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_78;
      }
    else
      {
        ATerm r_31 = NULL,x_31 = NULL,y_31 = NULL,u_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_78 = ATgetFirst((ATermList) t);
            m_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_78);
        r_31 = t;
        t = l_78;
        t = z_103(t);
        x_31 = t;
        t = m_78;
        t = n_78(t);
        y_31 = t;
        t = (ATerm) ATinsert(CheckATermList(y_31), x_31);
        u_13 = t;
        t = SSLsetAnnotations(u_13, r_31);
      }
    return(t);
  }
  t = n_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_78 = ATgetFirst((ATermList) t);
      r_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_78 = NULL,w_78 = NULL;
        static ATerm e_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_78)), not_null(w_78));
          return(t);
        }
        t = r_78;
        t = l_0(t);
        if(((v_78 != NULL) && (v_78 != t)))
          _fail(t);
        else
          v_78 = t;
        t = q_78;
        t = j_0(t);
        if(((w_78 != NULL) && (w_78 != t)))
          _fail(t);
        else
          w_78 = t;
        t = r_78;
        t = reverse_acc_2_0(j_0, e_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_14;
      t = l_0(t);
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,a_14 = NULL;
  e_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_79);
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_79);
  a_14 = t;
  t = SSLsetAnnotations(a_14, c_79);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm g_79 = NULL;
  g_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_79), term_r_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  ATerm t_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_79 = NULL,b_79 = NULL;
      t = term_u_15;
      a_79 = t;
      t = term_u_42;
      b_79 = t;
      t = term_v_42;
      t = r_9(a_79, b_79, t);
      LocalPopChoice(v_43);
    }
  else
    {
      t = t_43;
      t = fetch_1_0(g_12, t);
    }
  t = term_y_43;
  t = echo_0_0(t);
  t = term_l_42;
  y_78 = t;
  t = term_m_42;
  z_78 = t;
  t = term_z_43;
  t = r_9(y_78, z_78, t);
  t = reverse_acc_2_0(_id, i_12, t);
  t = map_1_0(j_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  static ATerm d_80 (ATerm t)
  {
    ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
    a_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_80 = ATgetFirst((ATermList) t);
        c_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_32 = NULL,n_33 = NULL,d_14 = NULL;
          t = SSLgetAnnotations(a_80);
          z_32 = t;
          t = b_80;
          t = j_104(t);
          n_33 = t;
          t = (ATerm) ATinsert(CheckATermList(c_80), n_33);
          d_14 = t;
          t = SSLsetAnnotations(d_14, z_32);
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          {
            ATerm g_34 = NULL,q_34 = NULL,e_14 = NULL;
            t = SSLgetAnnotations(a_80);
            g_34 = t;
            t = c_80;
            t = d_80(t);
            q_34 = t;
            t = (ATerm) ATinsert(CheckATermList(q_34), b_80);
            e_14 = t;
            t = SSLsetAnnotations(e_14, g_34);
          }
        }
    }
    return(t);
  }
  t = d_80(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
  h_80 = t;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_80;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_44 = ATgetFirst((ATermList) t);
                ATerm h_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_80;
          }
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATinsert(ATempty, h_80);
      }
  }
  i_80 = t;
  t = term_r_40;
  j_80 = t;
  t = SSL_printnl(j_80, i_80);
  t = h_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL;
  t = term_u_15;
  p_80 = t;
  t = term_u_42;
  q_80 = t;
  t = term_v_42;
  t = r_9(p_80, q_80, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_9 (ATerm n_60, ATerm o_60, ATerm t)
{
  t = SSL_hashtable_get(o_60, n_60);
  return(t);
}
static ATerm r_9 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm r_80 = NULL;
  t = lookup_table_0_1(l_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_9(m_57, r_80, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL;
  t = term_k_44;
  t_80 = t;
  t = term_r_14;
  u_80 = t;
  t = term_l_44;
  t = u_9(t_80, u_80, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_m_44;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  t = term_k_44;
  x_80 = t;
  t = term_r_14;
  y_80 = t;
  t = term_l_44;
  t = u_9(x_80, y_80, t);
  t = term_n_44;
  v_80 = t;
  t = term_r_14;
  w_80 = t;
  t = term_o_44;
  t = u_9(v_80, w_80, t);
  t = term_p_44;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_12, m_12, n_12, t);
      LocalPopChoice(s_44);
    }
  else
    {
      t = r_44;
      t = Option_3_0(p_12, q_12, u_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,k_15 = NULL;
  e_81 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_81 = ATgetFirst((ATermList) t);
      b_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_81);
  z_80 = t;
  t = a_81;
  t = d_78(t);
  c_81 = t;
  t = b_81;
  t = e_78(t);
  d_81 = t;
  t = (ATerm) ATinsert(CheckATermList(d_81), c_81);
  k_15 = t;
  t = SSLsetAnnotations(k_15, z_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,o_81 = NULL,p_81 = NULL,m_15 = NULL;
  j_81 = t;
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_44;
        t = a_125(t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
      }
  }
  t = j_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_81 = ATgetFirst((ATermList) t);
      m_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_81);
  k_81 = t;
  t = term_u_42;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_42, l_81);
  t = u_9(p_81, l_81, t);
  t = m_81;
  {
    static ATerm z_81 (ATerm t)
    {
      ATerm w_44 = t;
      int x_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_44 = t;
          int z_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_81 = NULL;
              s_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_81;
              LocalPopChoice(z_44);
            }
          else
            {
              t = y_44;
              t = a_125(t);
              t = Cons_2_0(_id, z_81, t);
            }
          LocalPopChoice(x_44);
        }
      else
        {
          t = w_44;
          {
            ATerm v_81 = NULL,w_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_81 = ATgetFirst((ATermList) t);
                w_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_81), (ATerm) ATmakeAppl(sym_Undefined_1, v_81));
          }
        }
      return(t);
    }
    t = z_81(t);
  }
  o_81 = t;
  t = (ATerm) ATinsert(CheckATermList(o_81), (ATerm) ATmakeAppl(sym_Program_1, l_81));
  m_15 = t;
  t = SSLsetAnnotations(m_15, k_81);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm m_82 = NULL;
  m_82 = t;
  if(match_string(t, "--help"))
    {
      t = m_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_82;
        }
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL;
  t = term_k_43;
  n_82 = t;
  t = term_r_14;
  o_82 = t;
  t = term_a_45;
  t = u_9(n_82, o_82, t);
  t = term_b_45;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_124 (ATerm), ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL;
  g_82 = t;
  t = term_l_42;
  h_82 = t;
  t = term_d_45;
  t = lookup_table_0_1(h_82, t);
  l_82 = t;
  t = term_m_42;
  i_82 = t;
  t = (ATerm) ATempty;
  j_82 = t;
  t = l_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(i_82, j_82, k_82, t);
  t = g_82;
  {
    static ATerm w_12 (ATerm t)
    {
      ATerm e_45 = t;
      int f_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_124(t);
          LocalPopChoice(f_45);
        }
      else
        {
          t = e_45;
          {
            ATerm g_45 = t;
            int h_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_12, y_12, z_12, t);
                LocalPopChoice(h_45);
              }
            else
              {
                t = g_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_12, t);
  }
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_82 = NULL;
        z_82 = t;
        {
          ATerm k_45 = t;
          int l_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_34 = NULL;
              t = z_82;
              {
                ATerm m_45 = t;
                int n_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_35 = NULL,c_35 = NULL;
                    t = term_u_15;
                    b_35 = t;
                    t = term_k_43;
                    c_35 = t;
                    t = term_l_43;
                    t = r_9(b_35, c_35, t);
                    LocalPopChoice(n_45);
                  }
                else
                  {
                    t = m_45;
                    t = fetch_1_0(a_13, t);
                  }
              }
              t = z_82;
              t = default_system_usage_0_0(t);
              t = term_y_41;
              z_34 = t;
              t = SSL_exit(z_34);
              LocalPopChoice(l_45);
            }
          else
            {
              t = k_45;
              {
                ATerm h_35 = NULL,i_35 = NULL,l_35 = NULL;
                t = term_u_15;
                i_35 = t;
                t = term_k_44;
                l_35 = t;
                t = term_p_45;
                t = r_9(i_35, l_35, t);
                t = z_82;
                t = default_system_about_0_0(t);
                t = term_y_41;
                h_35 = t;
                t = SSL_exit(h_35);
              }
            }
        }
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        {
          ATerm r_45 = t;
          int s_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
              static ATerm b_13 (ATerm t)
              {
                ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,o_15 = NULL;
                f_83 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_83);
                d_83 = t;
                t = e_83;
                if(((e_82 != NULL) && (e_82 != t)))
                  _fail(t);
                else
                  e_82 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_83);
                o_15 = t;
                t = SSLsetAnnotations(o_15, d_83);
                return(t);
              }
              t = fetch_1_0(b_13, t);
              t = term_w_13;
              b_83 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_82)), term_t_45);
              c_83 = t;
              t = SSL_printnl(b_83, c_83);
              t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_82)), term_t_45));
              t = default_system_usage_0_0(t);
              t = term_w_15;
              a_83 = t;
              t = SSL_exit(a_83);
              LocalPopChoice(s_45);
            }
          else
            {
              t = r_45;
            }
        }
      }
  }
  f_82 = t;
  t = term_l_42;
  t = table_destroy_0_0(t);
  t = f_82;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
  t = parse_options_1_0(e_123, t);
  k_83 = t;
  t = term_n_32;
  t = table_create_0_0(t);
  t = term_n_32;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_32, term_r_32, k_83);
  t = lookup_table_0_1(l_83, t);
  o_83 = t;
  t = term_r_32;
  m_83 = t;
  t = o_83;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(m_83, k_83, n_83, t);
  t = k_83;
  t = g_123(t);
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_123, t);
        LocalPopChoice(v_45);
      }
    else
      {
        t = u_45;
        {
          ATerm w_45 = t;
          int x_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_45);
            }
          else
            {
              t = w_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      {
        ATerm a_46 = t;
        int b_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_46);
          }
        else
          {
            t = a_46;
            {
              ATerm c_46 = t;
              int d_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_13, j_13, k_13, t);
                  LocalPopChoice(d_46);
                }
              else
                {
                  t = c_46;
                  {
                    ATerm e_46 = t;
                    int f_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(f_46);
                      }
                    else
                      {
                        t = e_46;
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
static ATerm d_13 (ATerm t)
{
  t = input_1_0(l_13, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL;
  t = term_w_40;
  q_83 = t;
  t = term_r_14;
  r_83 = t;
  t = term_g_46;
  t = u_9(q_83, r_83, t);
  t = term_h_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = output_1_0(o_13, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  t = ppgenerate_0_0(t);
  r_35 = t;
  t = term_n_46;
  p_35 = t;
  t = (ATerm) ATinsert(ATempty, r_35);
  q_35 = t;
  t = SSL_mkterm(p_35, q_35);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_13, default_usage_0_0, _id, d_13, t);
  return(t);
}

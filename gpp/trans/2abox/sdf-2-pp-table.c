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
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_b_47;
ATerm term_y_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_f_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_w_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_t_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_k_39;
ATerm term_z_38;
ATerm term_f_38;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_u_33;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_k_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_g_25;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_s_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_t_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_z_16, term_m_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_e_15, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_a_20, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_h_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_m_20, term_q_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_y_20, term_z_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_h_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_x_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_21, term_a_22, term_b_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_22, term_h_22, term_i_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_22, term_l_22, term_m_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_22, term_q_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_w_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_b_23, term_c_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_23, term_l_23, term_m_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_23, term_p_23, term_q_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_23, term_z_23, term_a_24);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_24, term_e_24, term_h_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_24, term_l_24, term_n_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_z_28);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_j_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_p_28);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_k_31);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_u_34);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_Arg_1, term_z_16);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_SOpt_2, term_o_39, term_p_39);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_lit_1, term_i_40);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_lit_1, term_d_18);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_f_31);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_f_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_g_31);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_h_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_43);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_m_43, term_s_15);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_g_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_b_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_u_43, term_v_43);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_s_15);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_x_45, term_s_15);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_s_15);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, (ATerm) ATempty);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_u_45);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym__2, term_f_42, term_s_15);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm o_1 (ATerm y_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_112 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_99 (ATerm), ATerm t);
static ATerm k_8 (ATerm i_104 (ATerm), ATerm e_30, ATerm p_254, ATerm t);
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
static ATerm g_43 (ATerm a_37, ATerm b_37, ATerm c_37, ATerm d_37, ATerm t);
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
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
static ATerm y_8 (ATerm t_35, ATerm u_35, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm symbol2abox_1_0 (ATerm m_96 (ATerm), ATerm t);
ATerm _2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm t_62 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t);
ATerm number_node_1_0 (ATerm p_96 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm l_96 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm unquote_chars_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
static ATerm c_9 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t);
static ATerm d_9 (ATerm k_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t);
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
ATerm collect_om_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm i_71 (ATerm e_69, ATerm f_69, ATerm t);
static ATerm j_71 (ATerm l_69, ATerm m_69, ATerm t);
static ATerm k_71 (ATerm s_69, ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
static ATerm e_9 (ATerm h_62, ATerm i_62, ATerm t);
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm h_9 (ATerm i_99 (ATerm), ATerm c_223, ATerm k_28, ATerm t);
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm output_1_0 (ATerm l_123 (ATerm), ATerm t);
static ATerm s_72 (ATerm m_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm g_28, ATerm t);
static ATerm j_9 (ATerm x_42, ATerm y_42, ATerm t);
static ATerm k_9 (ATerm j_62, ATerm k_62, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_74 (ATerm c_73, ATerm t);
static ATerm e_74 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t);
static ATerm f_74 (ATerm q_73, ATerm r_73, ATerm s_73, ATerm t);
static ATerm l_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm m_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_9 (ATerm x_60, ATerm y_60, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_9 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t);
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
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
static ATerm f_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_9 (ATerm n_60, ATerm o_60, ATerm t);
static ATerm r_9 (ATerm l_57, ATerm m_57, ATerm t);
static ATerm l_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_125 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm parse_options_1_0 (ATerm z_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
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
        ATerm v_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = i_1;
              return(t);
            }
            t = g_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = v_14;
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
        ATerm z_14 = t;
        int a_15 = stack_ptr;
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
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
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
  t = term_b_15;
  j_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), i_4);
  k_4 = t;
  t = SSL_printnl(j_4, k_4);
  t = h_4;
  return(t);
}
static ATerm k_8 (ATerm i_104 (ATerm), ATerm e_30, ATerm p_254, ATerm t)
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
  t = p_254;
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
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15);
          r_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15));
          t = k_8(n_0, o_4, r_4, t);
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
      if(match_int(t, 13))
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15));
              t = k_8(s_0, o_4, u_4, t);
              t = o_4;
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              t = o_4;
            }
        }
      else
        {
          ATerm x_4 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_e_15));
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
    ATerm l_15 = t;
    int n_15 = stack_ptr;
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
        LocalPopChoice(n_15);
      }
    else
      {
        t = l_15;
        t = y_104(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      w_2 = t;
      t = SSL_explode_string(w_2);
      t = rtrim_1_0(w_0, t);
      v_2 = t;
      t = SSL_implode_string(v_2);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm v_6 = NULL,f_3 = NULL;
        v_6 = t;
        t = (ATerm) ATinsert(CheckATermList(v_6), term_s_15);
        {
          static ATerm z_0 (ATerm t)
          {
            ATerm g_3 = NULL,j_3 = NULL;
            g_3 = t;
            {
              ATerm y_15 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_15;
                }
            }
            {
              ATerm z_15 = t;
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
                  t = z_15;
                }
            }
            t = g_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_3 = ATgetFirst((ATermList) t);
                {
                  ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
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
            ATerm b_16 = ATgetFirst((ATermList) t);
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
    ATerm c_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = c_16;
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
          ATerm g_16 = t;
          if((PushChoice() == 0))
            {
              t = k_112(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_16;
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
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,u_5 = NULL;
      u_5 = t;
      t = SSL_explode_string(u_5);
      t = ltrim_1_0(u_0, t);
      s_5 = t;
      t = SSL_implode_string(s_5);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = drop_while_1_0(u_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 = NULL,e_6 = NULL;
      e_6 = t;
      t = SSL_explode_string(e_6);
      t = trim_1_0(t_0, t);
      b_6 = t;
      t = SSL_implode_string(b_6);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
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
      ATerm l_16 = t;
      int m_16 = stack_ptr;
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
          t = term_s_15;
          t = s_10(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_6), q_6);
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
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
  t = term_p_16;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, term_p_16);
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
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_44, j_44);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      t = SSL_subtr(i_44, j_44);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  t = term_t_16;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,k_11 = NULL;
        t = term_x_16;
        h_11 = t;
        t = term_t_16;
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
  t = (ATerm) ATinsert(ATinsert(ATempty, d_11), term_t_16);
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
          ATerm b_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL;
              k_7 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_7;
              LocalPopChoice(g_17);
            }
          else
            {
              t = b_17;
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
  t = term_h_17;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm i_17 = t;
  int k_17 = stack_ptr;
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
      LocalPopChoice(k_17);
      {
        static ATerm d_1 (ATerm t)
        {
          ATerm h_14 = NULL,i_14 = NULL,m_14 = NULL;
          t = term_s_15;
          t = pass_verbose_0_0(t);
          h_14 = t;
          t = term_s_15;
          t = l_125(t);
          t = map_1_0(xtc_find_0_0, t);
          m_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_17, m_14);
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
      t = i_17;
      {
        static ATerm f_1 (ATerm t)
        {
          ATerm o_14 = NULL,p_14 = NULL,s_14 = NULL;
          t = term_s_15;
          t = pass_verbose_0_0(t);
          o_14 = t;
          t = term_s_15;
          t = l_125(t);
          t = map_1_0(xtc_find_0_0, t);
          s_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_17, s_14);
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
  t = term_m_17;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_n_17;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_n_17;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_17), term_o_17);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_q_17;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
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
      LocalPopChoice(t_17);
      t = xtc_transform_file_2_0(h_1, pass_verbose_0_0, t);
    }
  else
    {
      t = s_17;
      t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
    }
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
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
        LocalPopChoice(v_17);
        t = xtc_transform_file_2_0(m_1, pass_verbose_0_0, t);
      }
    else
      {
        t = u_17;
        t = xtc_transform_term_2_0(n_1, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(p_1, t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
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
        LocalPopChoice(x_17);
        t = xtc_transform_file_2_0(r_1, pass_verbose_0_0, t);
      }
    else
      {
        t = w_17;
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
      t = term_y_17;
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
      t = (ATerm) ATinsert(ATempty, term_z_17);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATempty, term_z_17));
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
      ATerm a_18 = ATgetArgument(t, 0);
      if(match_cons(a_18, sym_Stream_1))
        {
          f_17 = ATgetArgument(a_18, 0);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_18), p_11), term_b_18);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_18), term_f_18), r_12), term_e_18), s_18);
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
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_18 = ATgetArgument(t, 0);
              if((y_18 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_24), term_j_24), term_b_24), term_s_23), term_n_23), term_d_23), term_z_22), term_t_22), term_n_22), term_j_22), term_d_22), term_y_21), term_s_21), term_n_21), term_j_21), term_d_21), term_w_20), term_r_20), term_i_20), term_c_20), term_x_19), term_t_19), term_p_19), term_j_19), term_g_19), term_b_19), term_w_18), term_n_18);
        t = fetch_elem_1_0(x_1, t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
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
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            m_19 = ATgetArgument(t, 1);
            {
              ATerm w_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        {
          ATerm x_24 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_13 = NULL,g_13 = NULL,h_13 = NULL;
              t = m_19;
              {
                ATerm e_25 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_25;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_13 = t;
              t = term_b_15;
              g_13 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_13), term_g_25);
              h_13 = t;
              t = SSL_printnl(g_13, h_13);
              t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATempty, e_13), term_g_25));
              LocalPopChoice(d_25);
            }
          else
            {
              t = x_24;
              t = d_19;
            }
        }
      }
    else
      {
        t = p_24;
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
    ATerm o_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_20;
        t = x_97(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = o_25;
        t = SSL_waitpid(d_20);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            if(((ATgetType(t_25) != AT_INT) || (ATgetInt((ATermInt) t_25) != 0)))
              _fail(t);
            {
              ATerm u_25 = ATgetArgument(t, 1);
            }
            {
              ATerm v_25 = ATgetArgument(t, 2);
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
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL,v_21 = NULL,w_21 = NULL;
        t = term_x_16;
        v_21 = t;
        t = term_t_16;
        w_21 = t;
        t = term_y_16;
        t = r_9(v_21, w_21, t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, term_p_23);
        t = geq_0_0(t);
        t = g_21;
        t = b_119(t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
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
    ATerm a_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,j_23 = NULL,k_23 = NULL;
        t = term_x_16;
        j_23 = t;
        t = term_t_16;
        k_23 = t;
        t = term_y_16;
        t = r_9(j_23, k_23, t);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_u_20);
        t = geq_0_0(t);
        t = g_22;
        t = a_119(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = a_26;
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
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
        t = term_x_16;
        x_23 = t;
        t = term_t_16;
        y_23 = t;
        t = term_y_16;
        t = r_9(x_23, y_23, t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_e_19);
        t = geq_0_0(t);
        t = u_23;
        t = c_119(t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
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
    ATerm i_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            ATerm j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = r_9(p_56, q_56, t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = i_26;
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
  t = term_r_27;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_25 = NULL,b_25 = NULL;
      a_25 = t;
      t = (ATerm) ATinsert(ATempty, term_w_27);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, term_w_27));
      t = u_8(a_25, b_25, t);
      LocalPopChoice(v_27);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_27 = t;
            if((PushChoice() == 0))
              {
                ATerm c_25 = NULL,f_25 = NULL;
                c_25 = t;
                t = (ATerm) ATinsert(ATempty, term_z_17);
                f_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, term_z_17));
                t = u_8(c_25, f_25, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_27;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
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
  t = term_c_28;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL;
  p_26 = t;
  t = term_b_15;
  q_26 = t;
  t = (ATerm) ATinsert(ATempty, term_h_28);
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
  t = term_b_15;
  y_26 = t;
  t = (ATerm) ATinsert(ATempty, term_j_28);
  z_26 = t;
  t = SSL_printnl(y_26, z_26);
  t = x_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  t = term_b_15;
  b_27 = t;
  t = (ATerm) ATinsert(ATempty, term_h_28);
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
    ATerm m_28 = t;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,o_26 = NULL;
        t = term_n_28;
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_25);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATmakeAppl(sym_Imported_1, h_25));
        t = r_9(n_26, o_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_28;
      }
  }
  j_25 = t;
  t = term_n_28;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, term_p_28, (ATerm) ATinsert(ATempty, h_25));
  t = lookup_table_0_1(c_26, t);
  m_26 = t;
  t = term_p_28;
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
  t = term_n_28;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, i_25);
  t = t_8(r_2, b_26, i_25, t);
  t = if_verbose6_1_0(s_2, t);
  t = term_n_28;
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, (ATerm)ATmakeAppl(sym_Imported_1, h_25), (ATerm) ATempty);
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
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, (ATerm)ATmakeAppl(sym_Imported_1, h_25), (ATerm) ATempty);
  t = if_verbose4_1_0(t_2, t);
  return(t);
}
ATerm repeat_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  static ATerm d_27 (ATerm t)
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_102(t);
        t = d_27(t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        t = e_102(t);
      }
    return(t);
  }
  t = d_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_27 = NULL,f_27 = NULL;
      t = term_x_16;
      e_27 = t;
      t = term_z_28;
      f_27 = t;
      t = term_c_29;
      t = r_9(e_27, f_27, t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = NULL;
            t = term_h_29;
            h_27 = t;
            t = SSL_getenv(h_27);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
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
  t = term_i_29;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_27 = NULL,t_27 = NULL;
  t = term_n_28;
  p_27 = t;
  t = term_j_29;
  t_27 = t;
  t = term_k_29;
  t = r_9(p_27, t_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_29;
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
  t = term_t_29;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = if_verbose5_1_0(u_2, t);
  k_27 = t;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,m_27 = NULL;
        t = term_n_28;
        l_27 = t;
        t = term_p_28;
        m_27 = t;
        t = term_x_29;
        t = r_9(l_27, m_27, t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
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
  t = term_y_29;
  return(t);
}
static ATerm m_29 (ATerm i_28, ATerm t)
{
  ATerm o_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = term_n_28;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_28);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATmakeAppl(sym_Tool_1, i_28));
  t = r_9(q_28, r_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_30 = ATgetFirst((ATermList) t);
      if(match_cons(a_30, sym__2))
        {
          ATerm j_30 = ATgetArgument(a_30, 0);
          o_28 = ATgetArgument(a_30, 1);
        }
      else
        _fail(t);
      {
        ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_y_29;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_n_28;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
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
            ATerm t_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_29 = NULL,d_29 = NULL,e_29 = NULL;
                t = term_n_28;
                d_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_28);
                e_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATmakeAppl(sym_Tool_1, t_28));
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
                LocalPopChoice(v_30);
              }
            else
              {
                t = t_30;
                t = m_29(v_28, t);
              }
          }
        }
      else
        {
          t = m_29(v_28, t);
        }
      t = if_verbose5_1_0(t_3, t);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm l_29 = NULL,m_13 = NULL,n_13 = NULL;
        l_29 = t;
        t = term_b_15;
        m_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_30), l_29), term_x_30);
        n_13 = t;
        t = SSL_printnl(m_13, n_13);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_30), l_29), term_x_30);
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
      t = term_d_31;
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
      t = (ATerm) ATmakeAppl(sym__2, g_30, (ATerm) ATinsert(ATinsert(ATempty, d_30), term_f_31));
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
      t = (ATerm) ATmakeAppl(sym__2, m_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_30), term_f_31), c_30), term_g_31));
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
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL;
        t = term_k_31;
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_30, term_k_31);
        t = r_9(n_30, b_31, t);
        {
          ATerm l_31 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_31;
            }
        }
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
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
  t = (ATerm) ATmakeAppl(sym__3, n_30, term_k_31, (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATinsert(CheckATermList(o_30), q_45)));
  t = lookup_table_0_1(n_30, t);
  a_31 = t;
  t = term_k_31;
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
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_31 = NULL,s_13 = NULL;
      m_31 = t;
      t = term_p_31;
      s_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_31, term_p_31);
      t = j_9(m_31, s_13, t);
      e_31 = t;
      t = SSL_mkstemp(e_31);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm t_31 = NULL;
        t = term_q_31;
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
  t = term_r_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = P__tmpdir_0_0(t);
  d_32 = t;
  t = term_u_31;
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_32, term_u_31);
  t = j_9(d_32, e_32, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_15;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_32, term_s_15);
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
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        t = r_9(x_55, y_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_31 = ATgetFirst((ATermList) t);
            f_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_31);
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
        t = w_31;
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
    ATerm a_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL;
        t = term_k_31;
        x_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_k_31);
        t = r_9(q_32, x_32, t);
        {
          ATerm i_32 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_32;
            }
        }
        LocalPopChoice(h_32);
      }
    else
      {
        t = a_32;
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
  t = (ATerm) ATmakeAppl(sym__3, q_32, term_k_31, o_32);
  t = lookup_table_0_1(q_32, t);
  w_32 = t;
  t = term_k_31;
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
  ATerm k_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_118(t);
      t = n_118(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = k_32;
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
  t = (ATerm) ATmakeAppl(sym__2, a_33, term_k_31);
  {
    ATerm n_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_33 = ATgetArgument(t, 0);
            ATerm i_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_31;
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_k_31);
        t = r_9(a_33, k_33, t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATempty;
      }
  }
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_33, term_k_31, (ATerm) ATinsert(CheckATermList(c_33), (ATerm) ATempty));
  t = lookup_table_0_1(a_33, t);
  g_33 = t;
  t = term_k_31;
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
  t = term_r_31;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  {
    ATerm j_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_33);
        LocalPopChoice(m_33);
      }
    else
      {
        t = j_33;
        t = x_33;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  static ATerm l_4 (ATerm t)
  {
    ATerm q_33 = NULL;
    q_33 = t;
    {
      ATerm n_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = NULL,t_33 = NULL;
          t = term_r_31;
          r_33 = t;
          t = term_k_31;
          t_33 = t;
          t = term_u_33;
          t = r_9(r_33, t_33, t);
          LocalPopChoice(p_33);
        }
      else
        {
          t = n_33;
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
          ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_33;
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  l_34 = t;
  t = xtc_new_file_0_0(t);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_34, l_34);
  t = h_9(w_4, k_34, l_34, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL,w_34 = NULL,f_4 = NULL;
        w_34 = t;
        if(match_cons(t, sym_FILE_1))
          {
            ATerm d_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_34);
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
        f_4 = t;
        t = SSLsetAnnotations(f_4, o_34);
        LocalPopChoice(z_33);
        t = xtc_transform_file_2_0(z_4, a_5, t);
      }
    else
      {
        t = y_33;
        t = xtc_transform_term_2_0(b_5, c_5, t);
      }
  }
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_34;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(match_cons(i_34, sym_Stream_1))
        {
          m_34 = ATgetArgument(i_34, 0);
        }
      else
        _fail(t);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(m_34, n_34, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,h_34 = NULL;
  t = xtc_temp_files_1_0(t_4, t);
  a_34 = t;
  t = term_b_15;
  b_34 = t;
  t = (ATerm) ATinsert(ATempty, term_q_34);
  h_34 = t;
  t = SSL_printnl(b_34, h_34);
  t = a_34;
  t = debug_1_0(d_5, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  static ATerm x_34 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_100(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = SRTS_one(x_34, t);
      }
    return(t);
  }
  t = x_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  t = term_t_34;
  b_35 = t;
  t = term_u_34;
  c_35 = t;
  t = term_v_34;
  t = r_9(b_35, c_35, t);
  return(t);
}
static ATerm g_43 (ATerm a_37, ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  t = c_37;
  t = fetch_1_0(e_5, t);
  t = c_37;
  {
    ATerm y_34 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_34;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, a_37, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, b_37)), (ATerm) ATmakeAppl(sym_attrs_1, c_37));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
static ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
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
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
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
static ATerm e_7 (ATerm t)
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
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm j_37 = NULL,p_37 = NULL,r_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL;
  u_37 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      z_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_37;
  if(match_cons(t, sym_attrs_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_38;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_37;
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm d_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_35);
            t = v_37;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_37 = ATgetFirst((ATermList) t);
                p_37 = (ATerm) ATgetNext((ATermList) t);
                t = p_37;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = j_37;
                    {
                      ATerm e_35 = t;
                      int f_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm g_35 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_35);
                          {
                            ATerm h_35 = t;
                            int i_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = b_38;
                                t = fetch_1_0(f_5, t);
                                t = u_37;
                                LocalPopChoice(i_35);
                              }
                            else
                              {
                                t = h_35;
                                {
                                  ATerm l_35 = t;
                                  int m_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_38;
                                      t = fetch_1_0(i_5, t);
                                      t = u_37;
                                      LocalPopChoice(m_35);
                                    }
                                  else
                                    {
                                      t = l_35;
                                      t = u_37;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = e_35;
                          {
                            ATerm p_35 = t;
                            int q_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = b_38;
                                t = fetch_1_0(l_5, t);
                                t = u_37;
                                LocalPopChoice(q_35);
                              }
                            else
                              {
                                t = p_35;
                                {
                                  ATerm r_35 = t;
                                  int s_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_38;
                                      t = fetch_1_0(n_5, t);
                                      t = u_37;
                                      LocalPopChoice(s_35);
                                    }
                                  else
                                    {
                                      t = r_35;
                                      t = b_38;
                                      t = fetch_1_0(o_5, t);
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
                    t = j_37;
                    {
                      ATerm v_35 = t;
                      int w_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38;
                          t = fetch_1_0(p_5, t);
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
                                t = b_38;
                                t = fetch_1_0(q_5, t);
                                t = u_37;
                                LocalPopChoice(y_35);
                              }
                            else
                              {
                                t = x_35;
                                t = b_38;
                                t = fetch_1_0(r_5, t);
                                t = u_37;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm z_35 = t;
                int a_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_38;
                    t = fetch_1_0(t_5, t);
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
                          t = b_38;
                          t = fetch_1_0(v_5, t);
                          t = u_37;
                          LocalPopChoice(c_36);
                        }
                      else
                        {
                          t = b_36;
                          t = b_38;
                          t = fetch_1_0(x_5, t);
                          t = u_37;
                        }
                    }
                  }
              }
          }
        else
          {
            t = z_34;
            if(match_cons(t, sym_cf_1))
              {
                r_37 = ATgetArgument(t, 0);
                t = r_37;
                if(match_cons(t, sym_sort_1))
                  {
                    t_37 = ATgetArgument(t, 0);
                    t = v_37;
                    {
                      ATerm d_36 = t;
                      int e_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38;
                          t = fetch_1_0(k_6, t);
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
                                t = b_38;
                                t = fetch_1_0(s_6, t);
                                t = u_37;
                                LocalPopChoice(g_36);
                              }
                            else
                              {
                                t = f_36;
                                {
                                  ATerm h_36 = t;
                                  int i_36 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_43(v_37, t_37, b_38, u_37, t);
                                      LocalPopChoice(i_36);
                                    }
                                  else
                                    {
                                      t = h_36;
                                      t = b_38;
                                      t = fetch_1_0(w_6, t);
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
                    t = v_37;
                    {
                      ATerm j_36 = t;
                      int k_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38;
                          t = fetch_1_0(x_6, t);
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
                                t = b_38;
                                t = fetch_1_0(y_6, t);
                                t = u_37;
                                LocalPopChoice(m_36);
                              }
                            else
                              {
                                t = l_36;
                                t = b_38;
                                t = fetch_1_0(a_7, t);
                                t = u_37;
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
                  ATerm n_36 = t;
                  int o_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_38;
                      t = fetch_1_0(c_7, t);
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
                            t = b_38;
                            t = fetch_1_0(d_7, t);
                            t = u_37;
                            LocalPopChoice(q_36);
                          }
                        else
                          {
                            t = p_36;
                            t = b_38;
                            t = fetch_1_0(e_7, t);
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
      t = y_37;
      if(match_cons(t, sym_cf_1))
        {
          r_37 = ATgetArgument(t, 0);
          t = r_37;
          if(match_cons(t, sym_sort_1))
            {
              t_37 = ATgetArgument(t, 0);
              t = v_37;
              {
                ATerm r_36 = t;
                int s_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_38;
                    t = fetch_1_0(f_7, t);
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
                          t = b_38;
                          t = fetch_1_0(g_7, t);
                          t = u_37;
                          LocalPopChoice(u_36);
                        }
                      else
                        {
                          t = t_36;
                          {
                            ATerm v_36 = t;
                            int w_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = g_43(v_37, t_37, b_38, u_37, t);
                                LocalPopChoice(w_36);
                              }
                            else
                              {
                                t = v_36;
                                t = b_38;
                                t = fetch_1_0(i_7, t);
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
              t = v_37;
              {
                ATerm x_36 = t;
                int y_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_38;
                    t = fetch_1_0(j_7, t);
                    t = u_37;
                    LocalPopChoice(y_36);
                  }
                else
                  {
                    t = x_36;
                    {
                      ATerm z_36 = t;
                      int e_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38;
                          t = fetch_1_0(l_7, t);
                          t = u_37;
                          LocalPopChoice(e_37);
                        }
                      else
                        {
                          t = z_36;
                          t = b_38;
                          t = fetch_1_0(m_7, t);
                          t = u_37;
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
            ATerm f_37 = t;
            int g_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_38;
                t = fetch_1_0(n_7, t);
                t = u_37;
                LocalPopChoice(g_37);
              }
            else
              {
                t = f_37;
                {
                  ATerm h_37 = t;
                  int i_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_38;
                      t = fetch_1_0(s_7, t);
                      t = u_37;
                      LocalPopChoice(i_37);
                    }
                  else
                    {
                      t = h_37;
                      t = b_38;
                      t = fetch_1_0(v_7, t);
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
  ATerm m_44 = NULL,n_44 = NULL,p_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      p_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_44;
  if(match_cons(t, sym_alt_2))
    {
      m_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_44 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, m_44, n_44);
            t = flat_alt_0_0(t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), p_44);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = (ATerm) ATinsert(ATinsert(ATempty, s_44), p_44);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, s_44), p_44);
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_44;
        {
          ATerm o_37 = t;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              e_14 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_14;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm q_37 = ATgetFirst((ATermList) t);
                      ATerm s_37 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_14;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_37;
            }
        }
        t = (ATerm) ATinsert(ATempty, a_44);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = a_44;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(w_7, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          p_50 = ATgetArgument(t, 0);
          q_50 = ATgetArgument(t, 1);
          {
            ATerm a_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_37);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, p_50, q_50);
    }
  else
    {
      t = w_37;
      if(match_cons(t, sym_iter_n_2))
        {
          p_50 = ATgetArgument(t, 0);
          {
            ATerm c_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, p_50);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm q_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_16 = ATgetArgument(t, 0);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_17 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(u_16);
            r_17 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, q_16);
            j_5 = t;
            t = SSLsetAnnotations(j_5, r_17);
            t = term_f_38;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = u_16;
          }
      }
    }
  else
    {
      t = u_16;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL,s_47 = NULL;
  static ATerm j_53 (ATerm t)
  {
    static ATerm n_53 (ATerm t_49, ATerm u_49, ATerm y_49, ATerm t)
    {
      ATerm z_49 = NULL,h_50 = NULL,g_5 = NULL;
      t = SSLgetAnnotations(t_49);
      z_49 = t;
      t = y_49;
      t = _2_0(_id, x_7, t);
      h_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_49, h_50);
      g_5 = t;
      t = SSLsetAnnotations(g_5, z_49);
      t = j_53(t);
      return(t);
    }
    static ATerm o_53 (ATerm w_50, ATerm a_51, ATerm b_51, ATerm c_51, ATerm t)
    {
      ATerm h_51 = NULL,k_51 = NULL,l_51 = NULL,n_51 = NULL,q_51 = NULL,r_51 = NULL;
      t = SSL_explode_term(c_51);
      if(match_cons(t, sym__2))
        {
          n_51 = ATgetArgument(t, 0);
          q_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, a_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, b_51, n_51)));
      t = conc_0_0(t);
      h_51 = t;
      t = q_51;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      r_51 = t;
      t = make_0_0(t);
      k_51 = t;
      t = r_51;
      {
        static ATerm y_7 (ATerm t)
        {
          ATerm t_51 = NULL;
          t_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_50, h_51), t_51);
          t = j_53(t);
          return(t);
        }
        t = map_1_0(y_7, t);
      }
      t = concat_0_0(t);
      l_51 = t;
      t = (ATerm) ATinsert(CheckATermList(l_51), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, w_50, h_51), k_51));
      return(t);
    }
    ATerm w_51 = NULL,x_51 = NULL,a_52 = NULL,c_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,q_52 = NULL;
    e_52 = t;
    if(match_cons(t, sym__2))
      {
        f_52 = ATgetArgument(t, 0);
        k_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = k_52;
    {
      ATerm g_38 = t;
      int h_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm i_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(h_38);
          t = (ATerm) ATempty;
        }
      else
        {
          t = g_38;
          if(match_cons(t, sym__2))
            {
              l_52 = ATgetArgument(t, 0);
              q_52 = ATgetArgument(t, 1);
              t = q_52;
              {
                ATerm j_38 = t;
                int k_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm l_38 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_38);
                    t = f_52;
                    {
                      ATerm m_38 = t;
                      int n_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm o_38 = ATgetArgument(t, 0);
                              ATerm p_38 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(n_38);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = m_38;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = j_38;
                    {
                      ATerm q_38 = t;
                      int r_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm s_38 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_38);
                          t = f_52;
                          {
                            ATerm t_38 = t;
                            int u_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm v_38 = ATgetArgument(t, 0);
                                    ATerm w_38 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_38);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = t_38;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = q_38;
                          if(match_cons(t, sym_alt_2))
                            {
                              c_52 = ATgetArgument(t, 0);
                              w_51 = ATgetArgument(t, 1);
                              t = w_51;
                              if(match_cons(t, sym_alt_2))
                                {
                                  x_51 = ATgetArgument(t, 0);
                                  a_52 = ATgetArgument(t, 1);
                                  t = f_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_38 = t;
                                        int y_38 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,k_5 = NULL;
                                            t = g_52;
                                            if(((m_47 != NULL) && (m_47 != t)))
                                              _fail(t);
                                            else
                                              m_47 = t;
                                            t = j_52;
                                            if(((n_47 != NULL) && (n_47 != t)))
                                              _fail(t);
                                            else
                                              n_47 = t;
                                            t = l_52;
                                            if(((o_47 != NULL) && (o_47 != t)))
                                              _fail(t);
                                            else
                                              o_47 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, c_52, (ATerm) ATmakeAppl(sym_alt_2, x_51, a_52));
                                            t = flat_alt_0_0(t);
                                            i_15 = t;
                                            t = term_z_38;
                                            k_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_z_38, i_15);
                                            t = y_8(k_15, i_15, t);
                                            j_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_52, j_52), (ATerm) ATmakeAppl(sym__2, l_52, j_15));
                                            t = j_53(t);
                                            x_15 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                u_15 = ATgetFirst((ATermList) t);
                                                v_15 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(x_15);
                                            t_15 = t;
                                            t = u_15;
                                            t = topdown_1_0(z_7, t);
                                            w_15 = t;
                                            t = (ATerm) ATinsert(CheckATermList(v_15), w_15);
                                            k_5 = t;
                                            t = SSLsetAnnotations(k_5, t_15);
                                            LocalPopChoice(y_38);
                                          }
                                        else
                                          {
                                            t = x_38;
                                            {
                                              ATerm a_39 = t;
                                              int b_39 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = n_53(e_52, f_52, k_52, t);
                                                  LocalPopChoice(b_39);
                                                }
                                              else
                                                {
                                                  t = a_39;
                                                  t = o_53(g_52, j_52, l_52, q_52, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_53(e_52, f_52, k_52, t);
                                    }
                                }
                              else
                                {
                                  t = f_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_39 = t;
                                        int d_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_53(e_52, f_52, k_52, t);
                                            LocalPopChoice(d_39);
                                          }
                                        else
                                          {
                                            t = c_39;
                                            t = o_53(g_52, j_52, l_52, q_52, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_53(e_52, f_52, k_52, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  c_52 = ATgetArgument(t, 0);
                                  t = f_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_39 = t;
                                        int f_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_53(e_52, f_52, k_52, t);
                                            LocalPopChoice(f_39);
                                          }
                                        else
                                          {
                                            t = e_39;
                                            {
                                              ATerm g_39 = t;
                                              int h_39 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_52, j_52), (ATerm) ATmakeAppl(sym__2, l_52, c_52));
                                                  t = j_53(t);
                                                  LocalPopChoice(h_39);
                                                }
                                              else
                                                {
                                                  t = g_39;
                                                  t = o_53(g_52, j_52, l_52, q_52, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_53(e_52, f_52, k_52, t);
                                    }
                                }
                              else
                                {
                                  t = f_52;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_39 = t;
                                        int j_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_53(e_52, f_52, k_52, t);
                                            LocalPopChoice(j_39);
                                          }
                                        else
                                          {
                                            t = i_39;
                                            t = o_53(g_52, j_52, l_52, q_52, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_53(e_52, f_52, k_52, t);
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
              t = f_52;
              t = n_53(e_52, f_52, k_52, t);
            }
        }
    }
    return(t);
  }
  s_47 = t;
  t = term_s_15;
  t = m_96(t);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, s_47);
  t = j_53(t);
  return(t);
}
ATerm _2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm s_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,y_53 = NULL,b_54 = NULL,w_5 = NULL;
  b_54 = t;
  if(match_cons(t, sym__2))
    {
      u_53 = ATgetArgument(t, 0);
      v_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_54);
  s_53 = t;
  t = u_53;
  t = k_80(t);
  w_53 = t;
  t = v_53;
  t = l_80(t);
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_53, y_53);
  w_5 = t;
  t = SSLsetAnnotations(w_5, s_53);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_54;
    }
  else
    {
      ATerm p_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_54 = ATgetFirst((ATermList) t);
          g_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_54 = ATgetFirst((ATermList) t);
          i_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_54;
      t = pair_0_0(t);
      p_54 = t;
      t = (ATerm) ATinsert(CheckATermList(p_54), (ATerm) ATmakeAppl(sym__2, f_54, h_54));
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,f_58 = NULL,j_6 = NULL;
  d_58 = t;
  if(match_cons(t, sym_lit_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, c_58);
  j_6 = t;
  t = SSLsetAnnotations(j_6, b_58);
  if(match_cons(t, sym_lit_1))
    {
      f_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, f_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_58 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_58);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,z_6 = NULL,a_60 = NULL,i_59 = NULL,o_6 = NULL;
  g_59 = t;
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_59);
  b_59 = t;
  t = c_59;
  if(match_cons(t, sym_lit_1))
    {
      f_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_59);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, f_59);
  o_6 = t;
  t = SSLsetAnnotations(o_6, e_59);
  if(match_cons(t, sym_lit_1))
    {
      i_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, i_59));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_59 = ATgetArgument(t, 0);
          {
            ATerm m_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_59);
    }
  z_58 = t;
  t = d_59;
  t = _2_0(_id, i_8, t);
  if(match_cons(t, sym_lit_1))
    {
      a_60 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, a_60));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          a_60 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, a_60);
    }
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
  z_6 = t;
  t = SSLsetAnnotations(z_6, b_59);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_q_39), (ATerm) ATinsert(ATinsert(ATempty, a_59), z_58));
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  x_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      y_59 = ATgetArgument(t, 0);
      {
        ATerm z_19 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(x_59);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_59);
        p_6 = t;
        t = SSLsetAnnotations(p_6, z_19);
      }
    }
  else
    {
      ATerm j_20 = NULL,u_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          y_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_59);
      j_20 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, y_59);
      u_6 = t;
      t = SSLsetAnnotations(u_6, j_20);
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm f_60 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_60 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, f_60));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_60 = ATgetArgument(t, 0);
          {
            ATerm r_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_60);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,l_6 = NULL,x_57 = NULL,i_6 = NULL,u_57 = NULL,v_57 = NULL;
      t = reverse_acc_2_0(_id, a_8, t);
      m_56 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_56 = ATgetFirst((ATermList) t);
          f_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_56);
      d_56 = t;
      t = e_56;
      if(match_cons(t, sym__2))
        {
          j_56 = ATgetArgument(t, 0);
          k_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_56);
      i_56 = t;
      t = k_56;
      if(match_cons(t, sym_iter_1))
        {
          u_57 = ATgetArgument(t, 0);
          {
            ATerm c_18 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(k_56);
            c_18 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, u_57);
            d_6 = t;
            t = SSLsetAnnotations(d_6, c_18);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              u_57 = ATgetArgument(t, 0);
              {
                ATerm k_18 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(k_56);
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, u_57);
                f_6 = t;
                t = SSLsetAnnotations(f_6, k_18);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  u_57 = ATgetArgument(t, 0);
                  v_57 = ATgetArgument(t, 1);
                  {
                    ATerm t_18 = NULL,g_6 = NULL;
                    t = SSLgetAnnotations(k_56);
                    t_18 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, u_57, v_57);
                    g_6 = t;
                    t = SSLsetAnnotations(g_6, t_18);
                  }
                }
              else
                {
                  ATerm n_19 = NULL,h_6 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      u_57 = ATgetArgument(t, 0);
                      v_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_56);
                  n_19 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, u_57, v_57);
                  h_6 = t;
                  t = SSLsetAnnotations(h_6, n_19);
                }
            }
        }
      l_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_56, l_56);
      i_6 = t;
      t = SSLsetAnnotations(i_6, i_56);
      if(match_cons(t, sym_lit_1))
        {
          x_57 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, x_57));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              x_57 = ATgetArgument(t, 0);
              {
                ATerm u_39 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, x_57);
        }
      g_56 = t;
      t = f_56;
      t = map_1_0(c_8, t);
      h_56 = t;
      t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
      l_6 = t;
      t = SSLsetAnnotations(l_6, d_56);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_55 = ATgetFirst((ATermList) t);
          u_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_39 = t;
        if((PushChoice() == 0))
          {
            ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,m_6 = NULL;
            m_58 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_58 = ATgetFirst((ATermList) t);
                l_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_58);
            j_58 = t;
            t = l_58;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_58), k_58);
            m_6 = t;
            t = SSLsetAnnotations(m_6, j_58);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_39;
          }
      }
      t = u_55;
      t = reverse_acc_2_0(_id, d_8, t);
      c_56 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, c_56)));
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,n_6 = NULL,u_58 = NULL;
            t = reverse_acc_2_0(_id, e_8, t);
            r_58 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_58 = ATgetFirst((ATermList) t);
                q_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_58);
            o_58 = t;
            t = p_58;
            if(match_cons(t, sym_lit_1))
              {
                u_58 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_39, (ATerm) ATmakeAppl(sym_S_1, u_58));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    u_58 = ATgetArgument(t, 0);
                    {
                      ATerm y_39 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, u_58);
              }
            b_56 = t;
            t = q_58;
            {
              ATerm z_39 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_39;
                }
            }
            t = reverse_acc_2_0(_id, f_8, t);
            z_55 = t;
            t = (ATerm) ATinsert(CheckATermList(z_55), b_56);
            n_6 = t;
            t = SSLsetAnnotations(n_6, o_58);
            t = z_55;
            t = pair_0_0(t);
            t = map_1_0(g_8, t);
            a_56 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_56), a_56));
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            t = map_1_0(j_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm a_40 = t;
  if((PushChoice() == 0))
    {
      ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,q_9 = NULL;
      e_61 = t;
      if(match_cons(t, sym_lit_1))
        {
          d_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_61);
      c_61 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, d_61);
      q_9 = t;
      t = SSLsetAnnotations(q_9, c_61);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_40;
    }
  return(t);
}
static ATerm t_62 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm p_61 = NULL,x_9 = NULL;
  t = SSLgetAnnotations(j_61);
  p_61 = t;
  t = l_61;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
  x_9 = t;
  t = SSLsetAnnotations(x_9, p_61);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm i_61 = NULL;
  static ATerm s_62 (ATerm t)
  {
    ATerm t_61 = NULL,u_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
    t_61 = t;
    if(match_cons(t, sym__2))
      {
        u_61 = ATgetArgument(t, 0);
        w_61 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_61 = ATgetFirst((ATermList) t);
        y_61 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_62(t_61, u_61, w_61, t);
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              {
                ATerm d_40 = t;
                int e_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_62 = NULL,g_62 = NULL,n_62 = NULL;
                    t = x_61;
                    t = p_96(t);
                    t = term_z_16;
                    n_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_61, term_z_16);
                    t = m_9(u_61, n_62, t);
                    g_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_62, y_61);
                    t = s_62(t);
                    f_62 = t;
                    t = (ATerm) ATinsert(CheckATermList(f_62), (ATerm) ATmakeAppl(sym__2, u_61, x_61));
                    LocalPopChoice(e_40);
                  }
                else
                  {
                    t = d_40;
                    {
                      ATerm r_62 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, u_61, y_61);
                      t = s_62(t);
                      r_62 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_62), x_61);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = t_62(t_61, u_61, w_61, t);
      }
    return(t);
  }
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, i_61);
  t = s_62(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL;
  y_62 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            x_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(g_40);
        t = x_62;
      }
    else
      {
        t = f_40;
        t = y_62;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(p_8, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  t = number_nonterminals_0_0(t);
  i_63 = t;
  t = make_0_0(t);
  f_63 = t;
  t = i_63;
  {
    static ATerm x_8 (ATerm t)
    {
      static ATerm z_8 (ATerm t)
      {
        ATerm j_63 = NULL;
        t = term_s_15;
        t = l_96(t);
        j_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_63, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(z_8, t);
      return(t);
    }
    t = map_1_0(x_8, t);
  }
  t = concat_0_0(t);
  g_63 = t;
  t = term_s_15;
  t = l_96(t);
  h_63 = t;
  t = (ATerm) ATinsert(CheckATermList(g_63), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, h_63), f_63));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm n_63 = NULL;
  static ATerm a_9 (ATerm t)
  {
    t = l_104(t);
    if(((n_63 != NULL) && (n_63 != t)))
      _fail(t);
    else
      n_63 = t;
    return(t);
  }
  t = fetch_1_0(a_9, t);
  t = not_null(n_63);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,f_64 = NULL,h_64 = NULL,i_64 = NULL;
  if(match_cons(t, sym_term_1))
    {
      h_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_64;
  if(match_cons(t, sym_appl_2))
    {
      i_64 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
      {
        ATerm s_20 = NULL;
        t = i_64;
        if(match_cons(t, sym_uqlit_1))
          {
            y_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_63;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
          _fail(t);
        t = a_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_64 = ATgetFirst((ATermList) t);
            f_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_64;
        if(match_cons(t, sym_fun_1))
          {
            c_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_64;
        if(match_cons(t, sym_qlit_1))
          {
            d_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = SSL_explode_string(d_64);
        t = unquote_chars_2_0(n_9, t_9, t);
        s_20 = t;
        t = SSL_implode_string(s_20);
      }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          i_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_64;
    }
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
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(b_9, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  g_65 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      j_65 = ATgetArgument(t, 2);
      f_65 = ATgetArgument(t, 3);
      {
        ATerm o_65 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_40)), i_65), (ATerm) ATinsert(ATinsert(ATempty, term_j_40), (ATerm) ATmakeAppl(sym_lit_1, h_65)));
        t = concat_0_0(t);
        o_65 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, o_65, j_65, f_65);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm a_21 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          h_65 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
          j_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_65;
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21 = NULL;
            t = j_65;
            if(match_cons(t, sym_attrs_1))
              {
                b_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_21;
            t = get_cnstr_name_0_0(t);
            a_21 = t;
            LocalPopChoice(n_40);
            {
              static ATerm y_9 (ATerm t)
              {
                t = a_21;
                return(t);
              }
              t = h_65;
              t = symbols2pp_entries_1_0(y_9, t);
            }
          }
        else
          {
            t = m_40;
            {
              ATerm o_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(p_40);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = o_40;
                  {
                    ATerm q_40 = t;
                    int r_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_40 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_21 = NULL;
                            c_21 = t;
                            t = term_t_40;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(b_10, t);
                            t = c_21;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = s_40;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(r_40);
                      }
                    else
                      {
                        t = q_40;
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
  static ATerm l_66 (ATerm t)
  {
    ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
    i_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_66 = ATgetFirst((ATermList) t);
        k_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_40 = t;
      int v_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_21 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(i_66);
          p_21 = t;
          t = k_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_66), j_66);
          f_10 = t;
          t = SSLsetAnnotations(f_10, p_21);
          t = b_105(t);
          LocalPopChoice(v_40);
        }
      else
        {
          t = u_40;
          {
            ATerm c_22 = NULL,f_22 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(i_66);
            c_22 = t;
            t = k_66;
            t = l_66(t);
            f_22 = t;
            t = (ATerm) ATinsert(CheckATermList(f_22), j_66);
            j_10 = t;
            t = SSLsetAnnotations(j_10, c_22);
          }
        }
    }
    return(t);
  }
  t = l_66(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_66 = ATgetFirst((ATermList) t);
      s_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_66;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_66;
    }
  else
    {
      t = s_66;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm a_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_40 = ATgetFirst((ATermList) t);
      a_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_67;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_66 = ATgetFirst((ATermList) t);
      {
        ATerm x_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_66;
  t = w_113(t);
  t = x_66;
  t = last_0_0(t);
  t = x_113(t);
  t = x_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_40 = ATgetFirst((ATermList) t);
      y_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_66;
  t = at_last_1_0(c_10, t);
  return(t);
}
static ATerm c_9 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm o_35, ATerm n_35, ATerm t)
{
  t = o_108(t);
  {
    static ATerm e_10 (ATerm t)
    {
      ATerm b_67 = NULL;
      b_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_35, b_67);
      t = n_108(t);
      return(t);
    }
    t = fetch_1_0(e_10, t);
  }
  t = n_35;
  return(t);
}
static ATerm d_9 (ATerm k_108 (ATerm), ATerm k_35, ATerm j_35, ATerm t)
{
  static ATerm r_67 (ATerm t)
  {
    ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
    m_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_67 = ATgetFirst((ATermList) t);
            o_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_67;
              {
                static ATerm k_10 (ATerm t)
                {
                  t = j_35;
                  return(t);
                }
                t = c_9(k_108, k_10, n_67, o_67, t);
              }
              t = r_67(t);
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              {
                ATerm o_22 = NULL,r_22 = NULL,p_10 = NULL;
                t = SSLgetAnnotations(m_67);
                o_22 = t;
                t = o_67;
                t = r_67(t);
                r_22 = t;
                t = (ATerm) ATinsert(CheckATermList(r_22), n_67);
                p_10 = t;
                t = SSLsetAnnotations(p_10, o_22);
              }
            }
        }
      }
    return(t);
  }
  t = k_35;
  t = r_67(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_67;
      t = p_111(t);
    }
  else
    {
      ATerm b_68 = NULL,c_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_67 = ATgetFirst((ATermList) t);
          y_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_67;
      t = r_111(t);
      b_68 = t;
      t = y_67;
      t = foldr_3_0(p_111, q_111, r_111, t);
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_68, c_68);
      t = q_111(t);
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_68 = NULL;
      t = h_110(t);
      f_68 = t;
      t = (ATerm) ATinsert(ATempty, f_68);
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm x_22 = NULL,y_22 = NULL;
        static ATerm m_10 (ATerm t)
        {
          t = collect_om_2_0(h_110, i_110, t);
          return(t);
        }
        y_22 = t;
        t = SSL_explode_term(y_22);
        if(match_cons(t, sym__2))
          {
            ATerm d_41 = ATgetArgument(t, 0);
            x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_22;
        t = foldr_3_0(l_10, i_110, m_10, t);
      }
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm t_68 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      t_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_68;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL;
  if(match_cons(t, sym__2))
    {
      u_68 = ATgetArgument(t, 0);
      v_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(q_10, u_68, v_68, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm w_68 = NULL;
  if(match_cons(t, sym__2))
    {
      w_68 = ATgetArgument(t, 0);
      if((w_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  y_69 = t;
  if(match_cons(t, sym_cons_1))
    {
      w_69 = ATgetArgument(t, 0);
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23 = NULL,h_23 = NULL,i_23 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(y_69);
            e_23 = t;
            t = SSL_explode_string(w_69);
            t = unquote_chars_2_0(m_11, n_11, t);
            i_23 = t;
            t = SSL_implode_string(i_23);
            h_23 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, h_23);
            r_11 = t;
            t = SSLsetAnnotations(r_11, e_23);
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            t = y_69;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          w_69 = ATgetArgument(t, 0);
          t = w_69;
          if(match_cons(t, sym_qlit_1))
            {
              x_69 = ATgetArgument(t, 0);
              {
                ATerm g_41 = t;
                int h_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_71(y_69, w_69, t);
                    LocalPopChoice(h_41);
                  }
                else
                  {
                    t = g_41;
                    {
                      ATerm i_41 = t;
                      int j_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_71(x_69, t);
                          LocalPopChoice(j_41);
                        }
                      else
                        {
                          t = i_41;
                          t = y_69;
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm k_41 = t;
              int l_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_71(y_69, w_69, t);
                  LocalPopChoice(l_41);
                }
              else
                {
                  t = k_41;
                  t = y_69;
                }
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              w_69 = ATgetArgument(t, 0);
              {
                ATerm m_41 = t;
                int n_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_71(y_69, w_69, t);
                    LocalPopChoice(n_41);
                  }
                else
                  {
                    t = m_41;
                    t = y_69;
                  }
              }
            }
          else
            {
              t = y_69;
            }
        }
    }
  return(t);
}
static ATerm i_71 (ATerm e_69, ATerm f_69, ATerm t)
{
  ATerm g_69 = NULL,i_69 = NULL,j_69 = NULL,v_10 = NULL;
  t = SSLgetAnnotations(e_69);
  g_69 = t;
  t = SSL_explode_string(f_69);
  t = unquote_chars_2_0(u_10, w_10, t);
  j_69 = t;
  t = SSL_implode_string(j_69);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, i_69);
  v_10 = t;
  t = SSLsetAnnotations(v_10, g_69);
  return(t);
}
static ATerm j_71 (ATerm l_69, ATerm m_69, ATerm t)
{
  ATerm n_69 = NULL,p_69 = NULL,q_69 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(l_69);
  n_69 = t;
  t = SSL_explode_string(m_69);
  t = unquote_chars_2_0(a_11, i_11, t);
  q_69 = t;
  t = SSL_implode_string(q_69);
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, p_69);
  q_11 = t;
  t = SSLsetAnnotations(q_11, n_69);
  return(t);
}
static ATerm k_71 (ATerm s_69, ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  t = SSL_explode_string(s_69);
  t = unquote_chars_2_0(j_11, l_11, t);
  v_69 = t;
  t = SSL_implode_string(v_69);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, u_69);
  return(t);
}
static ATerm u_10 (ATerm t)
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
static ATerm m_11 (ATerm t)
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
static ATerm o_11 (ATerm t)
{
  ATerm o_41 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_41;
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  c_71 = t;
  if(match_cons(t, sym_Arg_1))
    {
      b_71 = ATgetArgument(t, 0);
      {
        ATerm p_41 = t;
        int q_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_23 = NULL,t_23 = NULL,s_11 = NULL;
            t = SSLgetAnnotations(c_71);
            r_23 = t;
            t = SSL_int_to_string(b_71);
            t_23 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, t_23);
            s_11 = t;
            t = SSLsetAnnotations(s_11, r_23);
            LocalPopChoice(q_41);
          }
        else
          {
            t = p_41;
            t = c_71;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          b_71 = ATgetArgument(t, 0);
          a_71 = ATgetArgument(t, 1);
          {
            ATerm r_41 = t;
            int s_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_24 = NULL,r_24 = NULL,t_11 = NULL;
                t = SSLgetAnnotations(c_71);
                m_24 = t;
                t = SSL_int_to_string(b_71);
                r_24 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, r_24, a_71);
                t_11 = t;
                t = SSLsetAnnotations(t_11, m_24);
                LocalPopChoice(s_41);
              }
            else
              {
                t = r_41;
                t = c_71;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              b_71 = ATgetArgument(t, 0);
              {
                ATerm t_41 = t;
                int u_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,u_11 = NULL;
                    t = SSLgetAnnotations(c_71);
                    n_25 = t;
                    t = SSL_explode_string(b_71);
                    q_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_25), term_v_41), (ATerm) ATinsert(ATempty, term_v_41));
                    t = conc_0_0(t);
                    r_25 = t;
                    t = SSL_implode_string(r_25);
                    p_25 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, p_25);
                    u_11 = t;
                    t = SSLsetAnnotations(u_11, n_25);
                    LocalPopChoice(u_41);
                  }
                else
                  {
                    t = t_41;
                    t = c_71;
                  }
              }
            }
          else
            {
              t = c_71;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm s_68 = NULL;
  t = collect_om_2_0(n_10, o_10, t);
  t = concat_0_0(t);
  t = topdown_1_0(t_10, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(o_11, t);
  t = concat_0_0(t);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, s_68);
  t = topdown_1_0(v_11, t);
  return(t);
}
static ATerm e_9 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm o_71 = NULL;
  t = SSL_fputc(h_62, i_62);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_71);
  return(t);
}
static ATerm f_9 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm p_71 = NULL;
  t = SSL_write_term_to_stream_text(e_28, f_28);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_71);
  return(t);
}
static ATerm h_9 (ATerm i_99 (ATerm), ATerm c_223, ATerm k_28, ATerm t)
{
  ATerm q_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_223, term_w_41);
  t = l_9(t);
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_71, k_28);
  t = i_99(t);
  t = fclose_0_0(t);
  t = k_28;
  return(t);
}
static ATerm g_9 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm r_71 = NULL;
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_71);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(match_cons(x_41, sym_Stream_1))
        {
          y_71 = ATgetArgument(x_41, 0);
        }
      else
        _fail(t);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(y_71, z_71, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(match_cons(y_41, sym_Stream_1))
        {
          d_72 = ATgetArgument(y_41, 0);
        }
      else
        _fail(t);
      e_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(d_72, e_72, t);
  a_72 = t;
  t = term_l_22;
  b_72 = t;
  t = a_72;
  if(match_cons(t, sym_Stream_1))
    {
      c_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, a_72);
  t = e_9(b_72, c_72, t);
  return(t);
}
ATerm output_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL;
  t = l_123(t);
  t_71 = t;
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_71 = NULL,v_71 = NULL;
        t = term_x_16;
        u_71 = t;
        t = term_f_31;
        v_71 = t;
        t = term_b_42;
        t = r_9(u_71, v_71, t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        t = term_c_42;
      }
  }
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_71, t_71);
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL,x_71 = NULL;
        t = term_x_16;
        w_71 = t;
        t = term_f_42;
        x_71 = t;
        t = term_g_42;
        t = r_9(w_71, x_71, t);
        t = (ATerm) ATmakeAppl(sym__2, s_71, t_71);
        LocalPopChoice(e_42);
        if(match_cons(t, sym__2))
          {
            ATerm h_42 = ATgetArgument(t, 0);
            ATerm i_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(w_11, s_71, t_71, t);
      }
    else
      {
        t = d_42;
        if(match_cons(t, sym__2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            ATerm k_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(y_11, s_71, t_71, t);
      }
  }
  return(t);
}
static ATerm s_72 (ATerm m_72, ATerm t)
{
  t = SSL_fclose(m_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL;
  q_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_72 = ATgetArgument(t, 0);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_72);
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            t = s_72(q_72, t);
          }
      }
    }
  else
    {
      t = s_72(q_72, t);
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
  ATerm t_72 = NULL;
  t = SSL_fopen(j_62, k_62);
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_72 = NULL;
  t = SSL_stdin_stream();
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_72 = NULL;
  t = SSL_stdout_stream();
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_72 = NULL;
  t = SSL_stderr_stream();
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_72);
  return(t);
}
static ATerm d_74 (ATerm c_73, ATerm t)
{
  ATerm d_73 = NULL;
  t = SSL_explode_term(c_73);
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_42 = ATgetArgument(t, 1);
        if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
          {
            d_73 = ATgetFirst((ATermList) o_42);
            {
              ATerm p_42 = (ATerm) ATgetNext((ATermList) o_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_74 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,o_73 = NULL,k_12 = NULL;
  t = SSLgetAnnotations(i_73);
  l_73 = t;
  t = g_73;
  if(match_cons(t, sym_Path_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_73, h_73);
  k_12 = t;
  t = SSLsetAnnotations(k_12, l_73);
  if(match_cons(t, sym__2))
    {
      j_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(j_73, k_73, t);
  return(t);
}
static ATerm f_74 (ATerm q_73, ATerm r_73, ATerm s_73, ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,y_73 = NULL,v_12 = NULL;
  t = SSLgetAnnotations(s_73);
  v_73 = t;
  t = SSL_is_string(q_73);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_73, r_73);
  v_12 = t;
  t = SSLsetAnnotations(v_12, v_73);
  if(match_cons(t, sym__2))
    {
      t_73 = ATgetArgument(t, 0);
      u_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(t_73, u_73, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  a_74 = t;
  if(match_cons(t, sym__2))
    {
      b_74 = ATgetArgument(t, 0);
      c_74 = ATgetArgument(t, 1);
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_74(a_74, t);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            {
              ATerm s_42 = t;
              int t_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_74(b_74, c_74, a_74, t);
                  LocalPopChoice(t_42);
                }
              else
                {
                  t = s_42;
                  t = f_74(b_74, c_74, a_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_74(a_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,o_74 = NULL;
  o_74 = t;
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_74, term_p_16);
        t = l_9(t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        {
          ATerm k_26 = NULL,l_26 = NULL;
          t = term_w_42;
          l_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_42, o_74);
          t = j_9(l_26, o_74, t);
          k_26 = t;
          t = SSL_perror(k_26);
          _fail(t);
        }
      }
  }
  i_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(j_74, t);
  h_74 = t;
  t = i_74;
  t = fclose_0_0(t);
  t = h_74;
  return(t);
}
ATerm input_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_74 = NULL,s_74 = NULL;
      t = term_x_16;
      r_74 = t;
      t = term_g_31;
      s_74 = t;
      t = term_b_43;
      t = r_9(r_74, s_74, t);
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      t = term_y_17;
    }
  t = ReadFromFile_0_0(t);
  t = m_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
  t_74 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  u_74 = t;
  t = term_b_15;
  w_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_43), u_74), term_c_43);
  x_74 = t;
  t = SSL_printnl(w_74, x_74);
  t = term_z_16;
  v_74 = t;
  t = SSL_exit(v_74);
  t = t_74;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  if(match_string(t, "-k"))
    {
      t = z_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_74;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  t = SSL_string_to_int(a_75);
  b_75 = t;
  t = term_e_43;
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, b_75);
  t = u_9(c_75, b_75, t);
  t = a_75;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_11, a_12, b_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  if(match_string(t, "-S"))
    {
      t = e_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_75;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL;
  t = term_t_16;
  f_75 = t;
  t = term_h_43;
  g_75 = t;
  t = term_i_43;
  t = u_9(f_75, g_75, t);
  t = term_j_43;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  t = SSL_string_to_int(h_75);
  i_75 = t;
  t = term_t_16;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, i_75);
  t = u_9(j_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_75);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  t = term_m_43;
  k_75 = t;
  t = term_s_15;
  l_75 = t;
  t = term_n_43;
  t = u_9(k_75, l_75, t);
  t = term_o_43;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_12, d_12, e_12, t);
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_12, i_12, j_12, t);
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = Option_3_0(l_12, m_12, n_12, t);
          }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL;
  t = term_x_16;
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, x_60, y_60);
  t = lookup_table_0_1(m_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(x_60, y_60, n_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, x_60, y_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
      t = term_s_15;
      t = h_0(t);
      t_75 = t;
      t = term_u_43;
      u_75 = t;
      t = term_v_43;
      v_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, t_75);
      t = s_9(u_75, v_75, t_75, t);
      _fail(t);
    }
  else
    {
      ATerm y_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_75 = ATgetFirst((ATermList) t);
          s_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_75;
      t = d_0(t);
      t = term_s_15;
      t = g_0(t);
      y_75 = t;
      t = (ATerm) ATinsert(CheckATermList(s_75), y_75);
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  if(match_string(t, "-o"))
    {
      t = a_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_76;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  b_76 = t;
  t = term_f_31;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, b_76);
  t = u_9(c_76, b_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_76);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_12, q_12, u_12, t);
  return(t);
}
static ATerm s_9 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
  e_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_43 = ATgetArgument(t, 0);
            ATerm b_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        t = r_9(s_55, t_55, t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = (ATerm) ATempty;
      }
  }
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, t_55, (ATerm) ATinsert(CheckATermList(f_76), r_55));
  t = lookup_table_0_1(s_55, t);
  i_76 = t;
  t = (ATerm) ATinsert(CheckATermList(f_76), r_55);
  g_76 = t;
  t = i_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(t_55, g_76, h_76, t);
  t = e_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
      t = term_s_15;
      t = p_0(t);
      t_76 = t;
      t = term_u_43;
      u_76 = t;
      t = term_v_43;
      v_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, t_76);
      t = s_9(u_76, v_76, t_76, t);
      _fail(t);
    }
  else
    {
      ATerm z_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_76 = ATgetFirst((ATermList) t);
          q_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_76 = ATgetFirst((ATermList) t);
          s_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_76;
      t = m_0(t);
      t = r_76;
      t = o_0(t);
      z_76 = t;
      t = (ATerm) ATinsert(CheckATermList(s_76), z_76);
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm b_77 = NULL;
  b_77 = t;
  if(match_string(t, "-i"))
    {
      t = b_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_77;
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL;
  c_77 = t;
  t = term_g_31;
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, c_77);
  t = u_9(d_77, c_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_77);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_12, x_12, y_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_15;
  t = whoami_0_0(t);
  e_77 = t;
  t = term_b_15;
  g_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_44), e_77);
  h_77 = t;
  t = SSL_printnl(g_77, h_77);
  t = term_z_16;
  f_77 = t;
  t = SSL_exit(f_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL;
  t = term_x_16;
  i_77 = t;
  t = term_g_44;
  j_77 = t;
  t = term_h_44;
  t = r_9(i_77, j_77, t);
  return(t);
}
static ATerm m_9 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_44, d_44);
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      t = SSL_addr(c_44, d_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  l_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_77;
      t = n_111(t);
    }
  else
    {
      ATerm q_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_77 = ATgetFirst((ATermList) t);
          n_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_77;
      t = foldr_2_0(n_111, o_111, t);
      q_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_77, q_77);
      t = o_111(t);
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
  t = term_h_43;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm o_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(o_27, q_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_77 = NULL,s_26 = NULL,g_27 = NULL;
  t = times_0_0(t);
  g_27 = t;
  t = SSL_explode_term(g_27);
  if(match_cons(t, sym__2))
    {
      ATerm o_44 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_26;
  t = foldr_2_0(z_12, a_13, t);
  t_77 = t;
  t = SSL_TicksToSeconds(t_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  if(match_cons(t, sym__2))
    {
      h_78 = ATgetArgument(t, 0);
      i_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78;
        if((h_78 != t))
          {
            _fail(t);
          }
        t = g_78;
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
        t = (ATerm) ATmakeAppl(sym__2, h_78, i_78);
        {
          ATerm t_44 = t;
          int u_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_78, i_78);
              LocalPopChoice(u_44);
            }
          else
            {
              t = t_44;
              t = SSL_gtr(h_78, i_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_78, i_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm m_78 = NULL;
  m_78 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
        t = term_x_16;
        p_78 = t;
        t = term_t_16;
        q_78 = t;
        t = term_y_16;
        t = r_9(p_78, q_78, t);
        o_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_78, term_z_16);
        t = geq_0_0(t);
        t = m_78;
        t = x_118(t);
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        t = m_78;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,v_78 = NULL,w_78 = NULL;
  t = run_time_0_0(t);
  s_78 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  t_78 = t;
  t = term_b_15;
  v_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_44), s_78), term_e_18), t_78);
  w_78 = t;
  t = SSL_printnl(v_78, w_78);
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_44), s_78), term_e_18), t_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_43;
  x_78 = t;
  t = SSL_exit(x_78);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL;
  i_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_79 = ATgetArgument(t, 0);
          {
            ATerm l_28 = NULL,p_13 = NULL;
            t = SSLgetAnnotations(i_79);
            l_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_79);
            p_13 = t;
            t = SSLsetAnnotations(p_13, l_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_79 = NULL,b_79 = NULL;
      t = term_x_16;
      a_79 = t;
      t = term_b_45;
      b_79 = t;
      t = term_c_45;
      t = r_9(a_79, b_79, t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      t = fetch_1_0(c_13, t);
    }
  t = c_123(t);
  return(t);
}
static ATerm v_9 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm k_79 = NULL;
  t = SSL_hashtable_put(m_60, k_60, l_60);
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_79);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_57, ATerm t)
{
  ATerm t_79 = NULL;
  t = table_hashtable_0_0(t);
  t_79 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_29 = NULL;
        t = t_79;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_9(e_57, a_29, t);
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        {
          ATerm u_29 = NULL;
          t = e_57;
          t = table_create_0_0(t);
          t = t_79;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_9(e_57, u_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm w_79 = NULL;
  t = SSL_hashtable_create(s_60, t_60);
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_79);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,b_80 = NULL,c_80 = NULL;
  x_79 = t;
  t = term_f_45;
  b_80 = t;
  t = term_g_45;
  c_80 = t;
  t = x_79;
  t = new_hashtable_0_2(b_80, c_80, t);
  y_79 = t;
  t = x_79;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(x_79, y_79, z_79, t);
  t = x_79;
  return(t);
}
static ATerm o_9 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm d_80 = NULL;
  t = SSL_hashtable_remove(q_60, p_60);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_80);
  return(t);
}
static ATerm p_9 (ATerm u_60, ATerm t)
{
  ATerm e_80 = NULL;
  t = SSL_hashtable_destroy(u_60);
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_80 = NULL;
  t = SSL_table_hashtable();
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
  g_80 = t;
  t = table_hashtable_0_0(t);
  h_80 = t;
  t = lookup_table_0_1(g_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9(j_80, t);
  t = h_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(g_80, i_80, t);
  t = g_80;
  return(t);
}
ATerm map_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  static ATerm a_81 (ATerm t)
  {
    ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
    x_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_80;
      }
    else
      {
        ATerm z_29 = NULL,h_30 = NULL,i_30 = NULL,u_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_80 = ATgetFirst((ATermList) t);
            z_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_80);
        z_29 = t;
        t = y_80;
        t = z_103(t);
        h_30 = t;
        t = z_80;
        t = a_81(t);
        i_30 = t;
        t = (ATerm) ATinsert(CheckATermList(i_30), h_30);
        u_13 = t;
        t = SSLsetAnnotations(u_13, z_29);
      }
    return(t);
  }
  t = a_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_81 = ATgetFirst((ATermList) t);
      e_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_81 = NULL,j_81 = NULL;
        static ATerm d_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_81)), not_null(j_81));
          return(t);
        }
        t = e_81;
        t = l_0(t);
        if(((i_81 != NULL) && (i_81 != t)))
          _fail(t);
        else
          i_81 = t;
        t = d_81;
        t = j_0(t);
        if(((j_81 != NULL) && (j_81 != t)))
          _fail(t);
        else
          j_81 = t;
        t = e_81;
        t = reverse_acc_2_0(j_0, d_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,a_14 = NULL;
  r_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_81);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_81);
  a_14 = t;
  t = SSLsetAnnotations(a_14, p_81);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm t_81 = NULL;
  t_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_81), term_h_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_81 = NULL,o_81 = NULL;
      t = term_x_16;
      n_81 = t;
      t = term_g_44;
      o_81 = t;
      t = term_h_44;
      t = r_9(n_81, o_81, t);
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      t = fetch_1_0(f_13, t);
    }
  t = term_k_45;
  t = echo_0_0(t);
  t = term_u_43;
  l_81 = t;
  t = term_v_43;
  m_81 = t;
  t = term_l_45;
  t = r_9(l_81, m_81, t);
  t = reverse_acc_2_0(_id, j_13, t);
  t = map_1_0(k_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  static ATerm q_82 (ATerm t)
  {
    ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
    n_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_82 = ATgetFirst((ATermList) t);
        p_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_45 = t;
      int n_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_31 = NULL,j_31 = NULL,q_14 = NULL;
          t = SSLgetAnnotations(n_82);
          c_31 = t;
          t = o_82;
          t = j_104(t);
          j_31 = t;
          t = (ATerm) ATinsert(CheckATermList(p_82), j_31);
          q_14 = t;
          t = SSLsetAnnotations(q_14, c_31);
          LocalPopChoice(n_45);
        }
      else
        {
          t = m_45;
          {
            ATerm s_31 = NULL,y_31 = NULL,r_14 = NULL;
            t = SSLgetAnnotations(n_82);
            s_31 = t;
            t = p_82;
            t = q_82(t);
            y_31 = t;
            t = (ATerm) ATinsert(CheckATermList(y_31), o_82);
            r_14 = t;
            t = SSLsetAnnotations(r_14, s_31);
          }
        }
    }
    return(t);
  }
  t = q_82(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
  u_82 = t;
  {
    ATerm p_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_45 = ATgetFirst((ATermList) t);
                ATerm t_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_82;
          }
        LocalPopChoice(r_45);
      }
    else
      {
        t = p_45;
        t = (ATerm) ATinsert(ATempty, u_82);
      }
  }
  v_82 = t;
  t = term_c_42;
  w_82 = t;
  t = SSL_printnl(w_82, v_82);
  t = u_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL;
  t = term_x_16;
  a_83 = t;
  t = term_g_44;
  b_83 = t;
  t = term_h_44;
  t = r_9(a_83, b_83, t);
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
  ATerm c_83 = NULL;
  t = lookup_table_0_1(l_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_9(m_57, c_83, t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL;
  t = term_u_45;
  e_83 = t;
  t = term_s_15;
  f_83 = t;
  t = term_v_45;
  t = u_9(e_83, f_83, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  t = term_u_45;
  i_83 = t;
  t = term_s_15;
  j_83 = t;
  t = term_v_45;
  t = u_9(i_83, j_83, t);
  t = term_x_45;
  g_83 = t;
  t = term_s_15;
  h_83 = t;
  t = term_y_45;
  t = u_9(g_83, h_83, t);
  t = term_z_45;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_a_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_13, o_13, q_13, t);
      LocalPopChoice(c_46);
    }
  else
    {
      t = b_46;
      t = Option_3_0(r_13, t_13, v_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,w_14 = NULL;
  p_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_83 = ATgetFirst((ATermList) t);
      m_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_83);
  k_83 = t;
  t = l_83;
  t = d_78(t);
  n_83 = t;
  t = m_83;
  t = e_78(t);
  o_83 = t;
  t = (ATerm) ATinsert(CheckATermList(o_83), n_83);
  w_14 = t;
  t = SSLsetAnnotations(w_14, k_83);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,z_83 = NULL,a_84 = NULL,y_14 = NULL;
  u_83 = t;
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_46;
        t = a_125(t);
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
      }
  }
  t = u_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_83 = ATgetFirst((ATermList) t);
      x_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_83);
  v_83 = t;
  t = term_g_44;
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_44, w_83);
  t = u_9(a_84, w_83, t);
  t = x_83;
  {
    static ATerm k_84 (ATerm t)
    {
      ATerm g_46 = t;
      int h_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_84 = NULL;
              d_84 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_84;
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              t = a_125(t);
              t = Cons_2_0(_id, k_84, t);
            }
          LocalPopChoice(h_46);
        }
      else
        {
          t = g_46;
          {
            ATerm g_84 = NULL,h_84 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_84 = ATgetFirst((ATermList) t);
                h_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_84), (ATerm) ATmakeAppl(sym_Undefined_1, g_84));
          }
        }
      return(t);
    }
    t = k_84(t);
  }
  z_83 = t;
  t = (ATerm) ATinsert(CheckATermList(z_83), (ATerm) ATmakeAppl(sym_Program_1, w_83));
  y_14 = t;
  t = SSLsetAnnotations(y_14, v_83);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  if(match_string(t, "--help"))
    {
      t = x_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_84;
        }
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL;
  t = term_b_45;
  y_84 = t;
  t = term_s_15;
  z_84 = t;
  t = term_k_46;
  t = u_9(y_84, z_84, t);
  t = term_l_46;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_124 (ATerm), ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL;
  r_84 = t;
  t = term_u_43;
  s_84 = t;
  t = term_n_46;
  t = lookup_table_0_1(s_84, t);
  w_84 = t;
  t = term_v_43;
  t_84 = t;
  t = (ATerm) ATempty;
  u_84 = t;
  t = w_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(t_84, u_84, v_84, t);
  t = r_84;
  {
    static ATerm w_13 (ATerm t)
    {
      ATerm o_46 = t;
      int p_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_124(t);
          LocalPopChoice(p_46);
        }
      else
        {
          t = o_46;
          {
            ATerm q_46 = t;
            int r_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_13, y_13, z_13, t);
                LocalPopChoice(r_46);
              }
            else
              {
                t = q_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_13, t);
  }
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_85 = NULL;
        k_85 = t;
        {
          ATerm u_46 = t;
          int v_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_32 = NULL;
              t = k_85;
              {
                ATerm w_46 = t;
                int x_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_32 = NULL,l_33 = NULL;
                    t = term_x_16;
                    z_32 = t;
                    t = term_b_45;
                    l_33 = t;
                    t = term_c_45;
                    t = r_9(z_32, l_33, t);
                    LocalPopChoice(x_46);
                  }
                else
                  {
                    t = w_46;
                    t = fetch_1_0(b_14, t);
                  }
              }
              t = k_85;
              t = default_system_usage_0_0(t);
              t = term_h_43;
              s_32 = t;
              t = SSL_exit(s_32);
              LocalPopChoice(v_46);
            }
          else
            {
              t = u_46;
              {
                ATerm s_33 = NULL,v_33 = NULL,c_34 = NULL;
                t = term_x_16;
                v_33 = t;
                t = term_u_45;
                c_34 = t;
                t = term_y_46;
                t = r_9(v_33, c_34, t);
                t = k_85;
                t = default_system_about_0_0(t);
                t = term_h_43;
                s_33 = t;
                t = SSL_exit(s_33);
              }
            }
        }
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        {
          ATerm z_46 = t;
          int a_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
              static ATerm d_14 (ATerm t)
              {
                ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,m_15 = NULL;
                q_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_85);
                o_85 = t;
                t = p_85;
                if(((p_84 != NULL) && (p_84 != t)))
                  _fail(t);
                else
                  p_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_85);
                m_15 = t;
                t = SSLsetAnnotations(m_15, o_85);
                return(t);
              }
              t = fetch_1_0(d_14, t);
              t = term_b_15;
              m_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_84)), term_b_47);
              n_85 = t;
              t = SSL_printnl(m_85, n_85);
              t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_84)), term_b_47));
              t = default_system_usage_0_0(t);
              t = term_z_16;
              l_85 = t;
              t = SSL_exit(l_85);
              LocalPopChoice(a_47);
            }
          else
            {
              t = z_46;
            }
        }
      }
  }
  q_84 = t;
  t = term_u_43;
  t = table_destroy_0_0(t);
  t = q_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
  t = parse_options_1_0(e_123, t);
  v_85 = t;
  t = term_t_34;
  t = table_create_0_0(t);
  t = term_t_34;
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_34, term_u_34, v_85);
  t = lookup_table_0_1(w_85, t);
  z_85 = t;
  t = term_u_34;
  x_85 = t;
  t = z_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(x_85, v_85, y_85, t);
  t = v_85;
  t = g_123(t);
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_123, t);
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
              t = h_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_47);
            }
          else
            {
              t = e_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(j_47);
          }
        else
          {
            t = i_47;
            {
              ATerm k_47 = t;
              int l_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_14, l_14, n_14, t);
                  LocalPopChoice(l_47);
                }
              else
                {
                  t = k_47;
                  {
                    ATerm p_47 = t;
                    int r_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_47);
                      }
                    else
                      {
                        t = p_47;
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
static ATerm j_14 (ATerm t)
{
  t = input_1_0(t_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL;
  t = term_f_42;
  b_86 = t;
  t = term_s_15;
  c_86 = t;
  t = term_t_47;
  t = u_9(b_86, c_86, t);
  t = term_u_47;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = output_1_0(u_14, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  t = ppgenerate_0_0(t);
  g_34 = t;
  t = term_w_47;
  e_34 = t;
  t = (ATerm) ATinsert(ATempty, g_34);
  f_34 = t;
  t = SSL_mkterm(e_34, f_34);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_14, default_usage_0_0, _id, j_14, t);
  return(t);
}

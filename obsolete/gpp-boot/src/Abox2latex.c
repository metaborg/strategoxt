#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_BOXENV_2;
Symbol sym_HBOX_2;
Symbol sym_VBOX_3;
Symbol sym_HVBOX_4;
Symbol sym_ABOX_2;
Symbol sym_ALTBOX_2;
Symbol sym_CBOX_1;
Symbol sym_LBOX_2;
Symbol sym_LBLBOX_2;
Symbol sym_REFBOX_2;
Symbol sym_C_0;
Symbol sym_R_0;
Symbol sym_L_0;
Symbol sym_EOR_0;
Symbol sym_CSEP_0;
Symbol sym_BOXFONT_2;
Symbol sym_BOXCOLOR_1;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_LatexTable_1;
Symbol sym_Width_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_BOXENV_2 = ATmakeSymbol("BOXENV", 2, ATfalse);
  ATprotectSymbol(sym_BOXENV_2);
  sym_HBOX_2 = ATmakeSymbol("HBOX", 2, ATfalse);
  ATprotectSymbol(sym_HBOX_2);
  sym_VBOX_3 = ATmakeSymbol("VBOX", 3, ATfalse);
  ATprotectSymbol(sym_VBOX_3);
  sym_HVBOX_4 = ATmakeSymbol("HVBOX", 4, ATfalse);
  ATprotectSymbol(sym_HVBOX_4);
  sym_ABOX_2 = ATmakeSymbol("ABOX", 2, ATfalse);
  ATprotectSymbol(sym_ABOX_2);
  sym_ALTBOX_2 = ATmakeSymbol("ALTBOX", 2, ATfalse);
  ATprotectSymbol(sym_ALTBOX_2);
  sym_CBOX_1 = ATmakeSymbol("CBOX", 1, ATfalse);
  ATprotectSymbol(sym_CBOX_1);
  sym_LBOX_2 = ATmakeSymbol("LBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBOX_2);
  sym_LBLBOX_2 = ATmakeSymbol("LBLBOX", 2, ATfalse);
  ATprotectSymbol(sym_LBLBOX_2);
  sym_REFBOX_2 = ATmakeSymbol("REFBOX", 2, ATfalse);
  ATprotectSymbol(sym_REFBOX_2);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_R_0 = ATmakeSymbol("R", 0, ATfalse);
  ATprotectSymbol(sym_R_0);
  sym_L_0 = ATmakeSymbol("L", 0, ATfalse);
  ATprotectSymbol(sym_L_0);
  sym_EOR_0 = ATmakeSymbol("EOR", 0, ATfalse);
  ATprotectSymbol(sym_EOR_0);
  sym_CSEP_0 = ATmakeSymbol("CSEP", 0, ATfalse);
  ATprotectSymbol(sym_CSEP_0);
  sym_BOXFONT_2 = ATmakeSymbol("BOXFONT", 2, ATfalse);
  ATprotectSymbol(sym_BOXFONT_2);
  sym_BOXCOLOR_1 = ATmakeSymbol("BOXCOLOR", 1, ATfalse);
  ATprotectSymbol(sym_BOXCOLOR_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_LatexTable_1 = ATmakeSymbol("LatexTable", 1, ATfalse);
  ATprotectSymbol(sym_LatexTable_1);
  sym_Width_1 = ATmakeSymbol("Width", 1, ATfalse);
  ATprotectSymbol(sym_Width_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_e_30;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_d_25;
ATerm term_k_24;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_d_19;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__3, term_e_28, term_f_28, (ATerm) ATempty);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_62 (ATerm));
ATerm topdown_1 (ATerm, ATerm a_63 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm c_63 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_64 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm j_58 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm i_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm z_57 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm x_58 (ATerm));
ATerm separate_by_1 (ATerm, ATerm y_58 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm v_42 (ATerm), ATerm w_42 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm f_58 (ATerm));
ATerm table_def_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_60 (ATerm), ATerm y_60 (ATerm));
ATerm for_3 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm _2 (ATerm, ATerm y_35 (ATerm), ATerm z_35 (ATerm));
ATerm copy_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm R_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm filter_1 (ATerm, ATerm w_52 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm l_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_49 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm p_57 (ATerm));
ATerm HdMember_1 (ATerm, ATerm u_54 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm crush_3 (ATerm, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm collect_om_1 (ATerm, ATerm t_55 (ATerm));
ATerm collect_1 (ATerm, ATerm v_55 (ATerm));
ATerm debug_1 (ATerm, ATerm y_50 (ATerm));
ATerm obsolete_1 (ATerm, ATerm f_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_50 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm c_49 (ATerm), ATerm d_49 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_48 (ATerm));
ATerm map_1 (ATerm, ATerm h_57 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_48 (ATerm));
ATerm Program_1 (ATerm, ATerm h_37 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_37 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_48 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_48 (ATerm));
ATerm Abox2latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, term_a_10));
  {
    t = printnl_0(t);
    {
      t = term_b_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm d_0 (ATerm t)
    {
      ATerm c_10 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm r_1 = NULL;
            r_1 = t;
            k_1 :
            if(!(match_cons(r_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        t = c_10;
      return(t);
    }
    t = _2(t, d_0, _id);
    {
      ATerm l_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm s_1 = NULL,t_1 = NULL;
          s_1 = t;
          m_1 :
          if(match_cons(s_1, sym_Runtime_1))
            {
              t_1 = ATgetArgument(s_1, 0);
              if(((q_1 != NULL) && (q_1 != t_1)))
                _fail(t_1);
              else
                q_1 = t_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_0);
        return(t);
      }
      t = _2(t, l_0, _id);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm o_0 (ATerm t)
          {
            ATerm u_1 = NULL,v_1 = NULL;
            u_1 = t;
            o_1 :
            if(match_cons(u_1, sym_Program_1))
              {
                v_1 = ATgetArgument(u_1, 0);
                if(((p_1 != NULL) && (p_1 != v_1)))
                  _fail(v_1);
                else
                  p_1 = v_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_0);
          return(t);
        }
        t = _2(t, n_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_10), not_null(q_1)), term_d_10), not_null(p_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_f_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  a_2 = t;
  z_1 :
  if(match_cons(a_2, sym__2))
    {
      b_2 = ATgetArgument(a_2, 0);
      c_2 = ATgetArgument(a_2, 1);
      {
        ATerm g_10;
        g_10 = t;
        t = SSL_print(not_null(b_2), not_null(c_2));
        t = g_10;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm i_2 = NULL,k_2 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm j_2 = NULL;
    t = n_66(t);
    {
      j_2 = t;
      if(((i_2 != NULL) && (i_2 != j_2)))
        _fail(j_2);
      else
        i_2 = j_2;
    }
  }
  t = h_10;
  {
    ATerm l_2 = NULL;
    t = o_66(t);
    {
      l_2 = t;
      if(((k_2 != NULL) && (k_2 != l_2)))
        _fail(l_2);
      else
        k_2 = l_2;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_2), not_null(k_2));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = SSL_is_string(not_null(p_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_62(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    t = a_63(t);
    t = _all(t, s_2);
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm v_2 = NULL;
  ATerm x_2 = NULL;
  v_2 = t;
  {
    ATerm y_2 = NULL;
    t = not_null(v_2);
    {
      ATerm p_0 (ATerm t)
      {
        t = try_1(t, Abox_2_latex_0);
        return(t);
      }
      t = topdown_1(t, p_0);
      {
        y_2 = t;
        if(((x_2 != NULL) && (x_2 != y_2)))
          _fail(y_2);
        else
          x_2 = y_2;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATempty, not_null(x_2));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  b_3 :
  if(!(match_cons(c_3, sym_CSEP_0)))
    _fail(t);
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  d_3 :
  if(!(match_cons(e_3, sym_EOR_0)))
    _fail(t);
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  f_3 :
  if(!(match_cons(g_3, sym_L_0)))
    _fail(t);
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(!(match_cons(i_3, sym_R_0)))
    _fail(t);
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  j_3 :
  if(!(match_cons(k_3, sym_C_0)))
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  t = SSL_int_to_string(not_null(m_3));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  t = SSL_is_int(not_null(q_3));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
      ATerm o_6 (ATerm t)
      {
        ATerm e_6 = NULL;
        if(((t_5 != NULL) && (t_5 != b_6)))
          _fail(b_6);
        else
          t_5 = b_6;
        {
          if(((w_5 != NULL) && (w_5 != d_6)))
            _fail(d_6);
          else
            w_5 = d_6;
          {
            t = not_null(t_5);
            {
              t = is_int_0(t);
              {
                ATerm f_6 = NULL;
                t = not_null(t_5);
                {
                  t = int_to_string_0(t);
                  {
                    f_6 = t;
                    if(((e_6 != NULL) && (e_6 != f_6)))
                      _fail(f_6);
                    else
                      e_6 = f_6;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_10), not_null(w_5)), term_n_10), not_null(e_6)), term_m_10);
              }
            }
          }
        }
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(w_5)), term_t_10);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        if(((t_5 != NULL) && (t_5 != b_6)))
          _fail(b_6);
        else
          t_5 = b_6;
        {
          if(((w_5 != NULL) && (w_5 != d_6)))
            _fail(d_6);
          else
            w_5 = d_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(w_5)), term_b_11), not_null(t_5)), term_v_10);
        }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        if(((u_5 != NULL) && (u_5 != b_6)))
          _fail(b_6);
        else
          u_5 = b_6;
        {
          if(((w_5 != NULL) && (w_5 != d_6)))
            _fail(d_6);
          else
            w_5 = d_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_5)), term_i_11), not_null(u_5)), term_h_11);
        }
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        if(((u_5 != NULL) && (u_5 != b_6)))
          _fail(b_6);
        else
          u_5 = b_6;
        {
          if(((w_5 != NULL) && (w_5 != d_6)))
            _fail(d_6);
          else
            w_5 = d_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_n_10), not_null(u_5)), term_j_11);
        }
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_k_11);
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_l_11);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_m_11);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_n_11);
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_t_11);
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_z_11);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_a_12);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_b_12);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_e_12);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_f_12);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_g_12);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_k_12);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_l_12);
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_m_12);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_n_12);
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_o_12);
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_p_12);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_q_12);
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_s_12);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_t_12);
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_u_12);
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_y_12);
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_a_13);
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_b_13);
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        {
          if(((w_5 != NULL) && (w_5 != d_6)))
            _fail(d_6);
          else
            w_5 = d_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), not_null(w_5)), term_n_10), not_null(v_5)), term_c_13);
        }
        return(t);
      }
      a_6 = t;
      g_5 :
      if(match_cons(a_6, sym_BOXENV_2))
        {
          b_6 = ATgetArgument(a_6, 0);
          d_6 = ATgetArgument(a_6, 1);
          h_5 :
          if(((ATermList) b_6 == ATempty))
            {
              {
                if(((q_5 != NULL) && (q_5 != d_6)))
                  _fail(d_6);
                else
                  q_5 = d_6;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), not_null(q_5)), term_d_13);
              }
            }
          else
            {
              if(((ATgetType(b_6) == AT_LIST) && ((ATermList) b_6 != ATempty)))
                {
                  c_6 = ATgetFirst((ATermList) b_6);
                  x_5 = (ATerm) ATgetNext((ATermList) b_6);
                  i_5 :
                  if(((ATermList) x_5 == ATempty))
                    {
                      {
                        if(((l_5 != NULL) && (l_5 != c_6)))
                          _fail(c_6);
                        else
                          l_5 = c_6;
                        {
                          if(((q_5 != NULL) && (q_5 != d_6)))
                            _fail(d_6);
                          else
                            q_5 = d_6;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), not_null(q_5)), term_b_11), not_null(l_5)), term_g_13);
                        }
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
        {
          if(match_cons(a_6, sym_HBOX_2))
            {
              b_6 = ATgetArgument(a_6, 0);
              d_6 = ATgetArgument(a_6, 1);
              {
                if(((m_5 != NULL) && (m_5 != b_6)))
                  _fail(b_6);
                else
                  m_5 = b_6;
                {
                  if(((q_5 != NULL) && (q_5 != d_6)))
                    _fail(d_6);
                  else
                    q_5 = d_6;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(q_5)), term_b_11), not_null(m_5)), term_h_13);
                }
              }
            }
          else
            {
              if(match_cons(a_6, sym_VBOX_3))
                {
                  b_6 = ATgetArgument(a_6, 0);
                  d_6 = ATgetArgument(a_6, 1);
                  y_5 = ATgetArgument(a_6, 2);
                  {
                    if(((n_5 != NULL) && (n_5 != b_6)))
                      _fail(b_6);
                    else
                      n_5 = b_6;
                    {
                      if(((o_5 != NULL) && (o_5 != d_6)))
                        _fail(d_6);
                      else
                        o_5 = d_6;
                      {
                        if(((q_5 != NULL) && (q_5 != y_5)))
                          _fail(y_5);
                        else
                          q_5 = y_5;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_13), not_null(q_5)), term_b_11), not_null(o_5)), term_n_10), not_null(n_5)), term_j_13);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(a_6, sym_HVBOX_4))
                    {
                      b_6 = ATgetArgument(a_6, 0);
                      d_6 = ATgetArgument(a_6, 1);
                      y_5 = ATgetArgument(a_6, 2);
                      z_5 = ATgetArgument(a_6, 3);
                      {
                        if(((m_5 != NULL) && (m_5 != b_6)))
                          _fail(b_6);
                        else
                          m_5 = b_6;
                        {
                          if(((n_5 != NULL) && (n_5 != d_6)))
                            _fail(d_6);
                          else
                            n_5 = d_6;
                          {
                            if(((o_5 != NULL) && (o_5 != y_5)))
                              _fail(y_5);
                            else
                              o_5 = y_5;
                            {
                              if(((q_5 != NULL) && (q_5 != z_5)))
                                _fail(z_5);
                              else
                                q_5 = z_5;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(q_5)), term_b_11), not_null(o_5)), term_n_10), not_null(n_5)), term_n_10), not_null(m_5)), term_v_13);
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_6, sym_ABOX_2))
                        {
                          b_6 = ATgetArgument(a_6, 0);
                          d_6 = ATgetArgument(a_6, 1);
                          {
                            if(((p_5 != NULL) && (p_5 != b_6)))
                              _fail(b_6);
                            else
                              p_5 = b_6;
                            {
                              if(((q_5 != NULL) && (q_5 != d_6)))
                                _fail(d_6);
                              else
                                q_5 = d_6;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(q_5)), term_b_11), not_null(p_5)), term_x_13);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(a_6, sym_ALTBOX_2))
                            {
                              b_6 = ATgetArgument(a_6, 0);
                              d_6 = ATgetArgument(a_6, 1);
                              {
                                if(((r_5 != NULL) && (r_5 != b_6)))
                                  _fail(b_6);
                                else
                                  r_5 = b_6;
                                {
                                  if(((s_5 != NULL) && (s_5 != d_6)))
                                    _fail(d_6);
                                  else
                                    s_5 = d_6;
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_14), not_null(s_5)), term_f_14), not_null(r_5)), term_d_14);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(a_6, sym_CBOX_1))
                                {
                                  b_6 = ATgetArgument(a_6, 0);
                                  {
                                    if(((w_5 != NULL) && (w_5 != b_6)))
                                      _fail(b_6);
                                    else
                                      w_5 = b_6;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_14), not_null(w_5)), term_i_14);
                                  }
                                }
                              else
                                {
                                  if(match_cons(a_6, sym_LBOX_2))
                                    {
                                      b_6 = ATgetArgument(a_6, 0);
                                      d_6 = ATgetArgument(a_6, 1);
                                      j_5 :
                                      if(match_string(b_6, "="))
                                        {
                                          ATerm k_14 = t;
                                          int o_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_6(t);
                                              LocalPopChoice(o_14);
                                            }
                                          else
                                            {
                                              t = k_14;
                                              {
                                                ATerm p_14 = t;
                                                int q_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_6(t);
                                                    LocalPopChoice(q_14);
                                                  }
                                                else
                                                  {
                                                    t = p_14;
                                                    t = q_6(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm r_14 = t;
                                          int s_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_6(t);
                                              LocalPopChoice(s_14);
                                            }
                                          else
                                            {
                                              t = r_14;
                                              t = q_6(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(a_6, sym_LBLBOX_2))
                                        {
                                          b_6 = ATgetArgument(a_6, 0);
                                          d_6 = ATgetArgument(a_6, 1);
                                          t = r_6(t);
                                        }
                                      else
                                        {
                                          if(match_cons(a_6, sym_REFBOX_2))
                                            {
                                              b_6 = ATgetArgument(a_6, 0);
                                              d_6 = ATgetArgument(a_6, 1);
                                              t = s_6(t);
                                            }
                                          else
                                            {
                                              if(match_cons(a_6, sym_BOXFONT_2))
                                                {
                                                  b_6 = ATgetArgument(a_6, 0);
                                                  d_6 = ATgetArgument(a_6, 1);
                                                  k_5 :
                                                  if(match_cons(b_6, sym_KW_0))
                                                    t = t_6(t);
                                                  else
                                                    {
                                                      if(match_cons(b_6, sym_VAR_0))
                                                        t = u_6(t);
                                                      else
                                                        {
                                                          if(match_cons(b_6, sym_NUM_0))
                                                            t = v_6(t);
                                                          else
                                                            {
                                                              if(match_cons(b_6, sym_MATH_0))
                                                                t = w_6(t);
                                                              else
                                                                {
                                                                  if(match_string(b_6, "sf"))
                                                                    t = x_6(t);
                                                                  else
                                                                    {
                                                                      if(match_string(b_6, "rm"))
                                                                        t = y_6(t);
                                                                      else
                                                                        {
                                                                          if(match_string(b_6, "tt"))
                                                                            t = z_6(t);
                                                                          else
                                                                            {
                                                                              if(match_string(b_6, "md"))
                                                                                t = a_7(t);
                                                                              else
                                                                                {
                                                                                  if(match_string(b_6, "bf"))
                                                                                    t = b_7(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_string(b_6, "up"))
                                                                                        t = c_7(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_string(b_6, "it"))
                                                                                            t = d_7(t);
                                                                                          else
                                                                                            {
                                                                                              if(match_string(b_6, "sc"))
                                                                                                t = e_7(t);
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(b_6, "sl"))
                                                                                                    t = f_7(t);
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(b_6, "em"))
                                                                                                        t = g_7(t);
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(b_6, "tiny"))
                                                                                                            t = h_7(t);
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(b_6, "scriptsize"))
                                                                                                                t = i_7(t);
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(b_6, "footnotesize"))
                                                                                                                    t = j_7(t);
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(b_6, "small"))
                                                                                                                        t = k_7(t);
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(b_6, "normalsize"))
                                                                                                                            t = l_7(t);
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(b_6, "large"))
                                                                                                                                t = m_7(t);
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(b_6, "Large"))
                                                                                                                                    t = n_7(t);
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(b_6, "LARGE"))
                                                                                                                                        t = o_7(t);
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(b_6, "huge"))
                                                                                                                                            t = p_7(t);
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(b_6, "Huge"))
                                                                                                                                                t = q_7(t);
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(b_6, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      c_6 = ATgetArgument(b_6, 0);
                                                                                                                                                      t = r_7(t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
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
                                              else
                                                _fail(t);
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
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_v_14;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm w_14 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_c_15;
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = w_14;
                  {
                    ATerm g_15 = t;
                    int h_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_k_15;
                        LocalPopChoice(h_15);
                      }
                    else
                      {
                        t = g_15;
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_n_15;
                              LocalPopChoice(m_15);
                            }
                          else
                            {
                              t = l_15;
                              {
                                t = CSEP_0(t);
                                t = term_o_15;
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
ATerm bottomup_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    t = _all(t, t_7);
    t = c_63(t);
    return(t);
  }
  t = t_7(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, q_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(((ATermList) v_7 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_7) == AT_LIST) && ((ATermList) v_7 != ATempty)))
        {
          w_7 = ATgetFirst((ATermList) v_7);
          x_7 = (ATerm) ATgetNext((ATermList) v_7);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
            ATerm j_8 (ATerm t)
            {
              if(((c_8 != NULL) && (c_8 != f_8)))
                _fail(f_8);
              else
                c_8 = f_8;
              {
                if(((d_8 != NULL) && (d_8 != g_8)))
                  _fail(g_8);
                else
                  d_8 = g_8;
                {
                  t = not_null(c_8);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), not_null(d_8));
                      {
                        t = conc_0(t);
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            e_8 = t;
            a_8 :
            if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
              {
                f_8 = ATgetFirst((ATermList) e_8);
                g_8 = (ATerm) ATgetNext((ATermList) e_8);
                b_8 :
                if(((ATermList) f_8 == ATempty))
                  {
                    {
                      ATerm z_15 = t;
                      int c_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((d_8 != NULL) && (d_8 != g_8)))
                            _fail(g_8);
                          else
                            d_8 = g_8;
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = not_null(d_8);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, r_0);
                          }
                          LocalPopChoice(c_16);
                        }
                      else
                        {
                          t = z_15;
                          t = j_8(t);
                        }
                    }
                  }
                else
                  t = j_8(t);
              }
            else
              _fail(t);
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm f_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_64(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = f_16;
        t = _one(t, k_8);
      }
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm r_8 = NULL,u_8 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm s_8 = NULL;
    s_8 = t;
    l_8 :
    if(!(match_int(s_8, 34)))
      _fail(t);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm t_8 = NULL;
    t_8 = t;
    if(((r_8 != NULL) && (r_8 != t_8)))
      _fail(t_8);
    else
      r_8 = t_8;
    return(t);
  }
  t = Cons_2(t, s_0, t_0);
  {
    ATerm z_8 = NULL;
    t = not_null(r_8);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
        v_8 = t;
        o_8 :
        if(((ATgetType(v_8) == AT_LIST) && ((ATermList) v_8 != ATempty)))
          {
            w_8 = ATgetFirst((ATermList) v_8);
            x_8 = (ATerm) ATgetNext((ATermList) v_8);
            p_8 :
            if(match_int(w_8, 34))
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_8)), term_j_16), term_j_16);
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = oncetd_1(t, u_0);
      {
        z_8 = t;
        if(((u_8 != NULL) && (u_8 != z_8)))
          _fail(z_8);
        else
          u_8 = z_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_8)), term_k_16), term_k_16);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm d_9 (ATerm t)
  {
    t = j_58(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          t = Cons_2(t, _id, d_9);
        }
    }
    return(t);
  }
  t = d_9(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm v_9 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_9 = NULL;
      w_9 = t;
      {
        if(((v_9 != NULL) && (v_9 != w_9)))
          _fail(w_9);
        else
          v_9 = w_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_16, not_null(v_9));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        t = explode_string_0(t);
        {
          ATerm v_0 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, v_0);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                ATerm x_9 = NULL;
                x_9 = t;
                u_9 :
                if(match_int(x_9, 32))
                  {
                    t = term_s_16;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(x_9, 35))
                      {
                        t = term_v_16;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(x_9, 36))
                          {
                            t = term_w_16;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(x_9, 37))
                              {
                                t = term_x_16;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(x_9, 38))
                                  {
                                    t = term_z_16;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(x_9, 45))
                                      {
                                        t = term_b_17;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(x_9, 60))
                                          {
                                            t = term_c_17;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(x_9, 62))
                                              {
                                                t = term_d_17;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(x_9, 92))
                                                  {
                                                    t = term_e_17;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(x_9, 94))
                                                      {
                                                        t = term_f_17;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(x_9, 95))
                                                          {
                                                            t = term_i_17;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(x_9, 123))
                                                              {
                                                                t = term_j_17;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(x_9, 124))
                                                                  {
                                                                    t = term_k_17;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(x_9, 125))
                                                                      {
                                                                        t = term_l_17;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(x_9, 126))
                                                                          {
                                                                            t = term_m_17;
                                                                            t = explode_string_0(t);
                                                                          }
                                                                        else
                                                                          _fail(t);
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
              t = try_1(t, x_0);
              return(t);
            }
            t = map_1(t, w_0);
            {
              t = flat_list_0(t);
              t = implode_string_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(((ATgetType(q_10) == AT_LIST) && ((ATermList) q_10 != ATempty)))
    {
      r_10 = ATgetFirst((ATermList) q_10);
      s_10 = (ATerm) ATgetNext((ATermList) q_10);
      t = not_null(s_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_67, _id);
        {
          t = Tl_0(t);
          t = w_10(t);
        }
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
        }
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm x_10 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_57(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = Cons_2(t, _id, x_10);
      }
    return(t);
  }
  t = x_10(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    y_10 :
    if(!(match_int(c_11, 9)))
      {
        if(!(match_int(c_11, 32)))
          _fail(t);
      }
    return(t);
  }
  t = remove_trailing_1(t, y_0);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm e_11 = NULL;
          e_11 = t;
          z_10 :
          if(!(match_int(e_11, 37)))
            _fail(t);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm f_11 = NULL;
            f_11 = t;
            a_11 :
            if(!(match_int(f_11, 37)))
              _fail(t);
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            ATerm g_11 = NULL;
            g_11 = t;
            if(((d_11 != NULL) && (d_11 != g_11)))
              _fail(g_11);
            else
              d_11 = g_11;
            return(t);
          }
          t = Cons_2(t, d_1, e_1);
          return(t);
        }
        t = Cons_2(t, b_1, c_1);
        t = not_null(d_11);
        return(t);
      }
      t = at_suffix_1(t, a_1);
      return(t);
    }
    t = try_1(t, z_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm f_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, f_1);
      {
        ATerm z_12 (ATerm t)
        {
          ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
          ATerm f_13 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), (ATerm) ATinsert(CheckATermList(not_null(y_11)), not_null(w_11)));
            t = z_12(t);
            return(t);
          }
          u_11 = t;
          o_11 :
          if(match_cons(u_11, sym__2))
            {
              v_11 = ATgetArgument(u_11, 0);
              y_11 = ATgetArgument(u_11, 1);
              p_11 :
              if(((ATermList) v_11 == ATempty))
                {
                  {
                    ATerm c_12 = NULL;
                    ATerm d_12 = NULL;
                    t = not_null(y_11);
                    {
                      t = LatexComment_0(t);
                      {
                        d_12 = t;
                        if(((c_12 != NULL) && (c_12 != d_12)))
                          _fail(d_12);
                        else
                          c_12 = d_12;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(c_12));
                  }
                }
              else
                {
                  if(((ATgetType(v_11) == AT_LIST) && ((ATermList) v_11 != ATempty)))
                    {
                      w_11 = ATgetFirst((ATermList) v_11);
                      x_11 = (ATerm) ATgetNext((ATermList) v_11);
                      q_11 :
                      if(match_int(w_11, 10))
                        {
                          ATerm w_17 = t;
                          int y_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_12 = NULL,j_12 = NULL;
                              ATerm z_17;
                              z_17 = t;
                              {
                                ATerm i_12 = NULL;
                                t = not_null(y_11);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    i_12 = t;
                                    if(((h_12 != NULL) && (h_12 != i_12)))
                                      _fail(i_12);
                                    else
                                      h_12 = i_12;
                                  }
                                }
                              }
                              t = z_17;
                              {
                                ATerm r_12 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), (ATerm) ATempty);
                                {
                                  t = z_12(t);
                                  {
                                    r_12 = t;
                                    if(((j_12 != NULL) && (j_12 != r_12)))
                                      _fail(r_12);
                                    else
                                      j_12 = r_12;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(j_12)), not_null(h_12));
                              }
                              LocalPopChoice(y_17);
                            }
                          else
                            {
                              t = w_17;
                              t = f_13(t);
                            }
                        }
                      else
                        t = f_13(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = z_12(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm v_12 = NULL;
            v_12 = t;
            r_11 :
            if(!(match_string(v_12, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, g_1);
          {
            t = reverse_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm w_12 = NULL;
                w_12 = t;
                s_11 :
                if(!(match_string(w_12, "")))
                  _fail(t);
                return(t);
              }
              t = remove_trailing_1(t, h_1);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm x_12 = NULL;
                  x_12 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_18), not_null(x_12));
                  return(t);
                }
                t = map_1(t, i_1);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  k_13 :
  if(!(match_cons(l_13, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  m_13 :
  if(!(match_cons(n_13, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  o_13 :
  if(!(match_cons(p_13, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  q_13 :
  if(!(match_cons(r_13, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  s_13 :
  if(!(match_cons(t_13, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_FFID_2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      {
        ATerm e_14 = NULL;
        t = not_null(a_14);
        {
          ATerm g_14 = NULL;
          t = s_43(t);
          {
            e_14 = t;
            {
              t = not_null(b_14);
              {
                t = t_43(t);
                {
                  g_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(e_14), not_null(g_14));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  l_14 :
  if(!(match_cons(m_14, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  n_14 :
  if(!(match_cons(x_14, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  y_14 :
  if(!(match_cons(z_14, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  a_15 :
  if(!(match_cons(d_15, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = separate_by_1(t, j_1);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  e_15 :
  if(!(match_cons(f_15, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          ATerm j_15 = NULL;
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
          return(t);
        }
        t = SOpt_2(t, HS_0, n_1);
        return(t);
      }
      t = fetch_1(t, l_1);
      t = not_null(i_15);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      t = term_e_18;
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
    {
      r_15 = ATgetFirst((ATermList) q_15);
      s_15 = (ATerm) ATgetNext((ATermList) q_15);
      {
        ATerm v_15 = NULL;
        ATerm w_15 = NULL;
        t = term_l_18;
        {
          t = x_58(t);
          {
            w_15 = t;
            if(((v_15 != NULL) && (v_15 != w_15)))
              _fail(w_15);
            else
              v_15 = w_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_15)), not_null(r_15)), not_null(v_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm w_1 (ATerm t)
        {
          ATerm t_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_18);
            }
          else
            {
              t = t_18;
              {
                t = Cons_2(t, _id, w_1);
                t = Sep_1(t, y_58);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, w_1);
      }
    }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  a_16 :
  if(!(match_cons(b_16, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm d_16 = NULL;
  ATerm w_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm e_16 = NULL;
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
          return(t);
        }
        t = SOpt_2(t, IS_0, y_1);
        return(t);
      }
      t = fetch_1(t, x_1);
      t = not_null(d_16);
      LocalPopChoice(b_19);
    }
  else
    {
      t = w_18;
      t = term_d_19;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  g_16 :
  if(!(match_cons(h_16, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm v_42 (ATerm), ATerm w_42 (ATerm))
{
  ATerm o_16 = NULL,t_16 = NULL,u_16 = NULL;
  o_16 = t;
  l_16 :
  if(match_cons(o_16, sym_SOpt_2))
    {
      t_16 = ATgetArgument(o_16, 0);
      u_16 = ATgetArgument(o_16, 1);
      {
        ATerm y_16 = NULL;
        t = not_null(t_16);
        {
          ATerm a_17 = NULL;
          t = v_42(t);
          {
            y_16 = t;
            {
              t = not_null(u_16);
              {
                t = w_42(t);
                {
                  a_17 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(y_16), not_null(a_17));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm h_17 = NULL;
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
          return(t);
        }
        t = SOpt_2(t, VS_0, e_2);
        return(t);
      }
      t = fetch_1(t, d_2);
      t = not_null(g_17);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_d_19;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_C_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm v_17 = NULL;
        t = not_null(p_17);
        {
          ATerm x_17 = NULL;
          t = b_44(t);
          {
            v_17 = t;
            {
              t = not_null(q_17);
              {
                t = c_44(t);
                {
                  x_17 = t;
                  t = (ATerm) ATmakeAppl(sym_C_2, not_null(v_17), not_null(x_17));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_R_2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      {
        t = not_null(k_18);
        {
          ATerm c_19 (ATerm t)
          {
            ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL;
            ATerm g_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_19);
              }
            else
              {
                t = g_19;
                {
                  ATerm q_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = q_19;
                      {
                        ATerm t_19 = t;
                        int u_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm g_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, c_19);
                              return(t);
                            }
                            t = Cons_2(t, f_2, g_2);
                            LocalPopChoice(u_19);
                          }
                        else
                          {
                            t = t_19;
                            {
                              ATerm v_19 = t;
                              int w_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_2 (ATerm t)
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, m_2, c_19);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, h_2);
                                  LocalPopChoice(w_19);
                                }
                              else
                                {
                                  t = v_19;
                                  {
                                    ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,x_18 = NULL,y_18 = NULL;
                                    r_18 = t;
                                    f_18 :
                                    if(((ATgetType(r_18) == AT_LIST) && ((ATermList) r_18 != ATempty)))
                                      {
                                        s_18 = ATgetFirst((ATermList) r_18);
                                        u_18 = (ATerm) ATgetNext((ATermList) r_18);
                                        g_18 :
                                        if(((ATgetType(u_18) == AT_LIST) && ((ATermList) u_18 != ATempty)))
                                          {
                                            x_18 = ATgetFirst((ATermList) u_18);
                                            y_18 = (ATerm) ATgetNext((ATermList) u_18);
                                            {
                                              ATerm z_18 = NULL;
                                              if(((m_18 != NULL) && (m_18 != s_18)))
                                                _fail(s_18);
                                              else
                                                m_18 = s_18;
                                              {
                                                if(((p_18 != NULL) && (p_18 != x_18)))
                                                  _fail(x_18);
                                                else
                                                  p_18 = x_18;
                                                {
                                                  if(((q_18 != NULL) && (q_18 != y_18)))
                                                    _fail(y_18);
                                                  else
                                                    q_18 = y_18;
                                                  {
                                                    ATerm a_19 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(q_18)), not_null(p_18));
                                                    {
                                                      t = c_19(t);
                                                      {
                                                        a_19 = t;
                                                        if(((z_18 != NULL) && (z_18 != a_19)))
                                                          _fail(a_19);
                                                        else
                                                          z_18 = a_19;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_18)), term_x_19), not_null(m_18));
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          _fail(t);
                                      }
                                    else
                                      _fail(t);
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
          t = c_19(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
      k_19 = t;
      h_19 :
      if(match_cons(k_19, sym_LBL_2))
        {
          l_19 = ATgetArgument(k_19, 0);
          m_19 = ATgetArgument(k_19, 1);
          {
            ATerm n_19 = NULL;
            if(((i_19 != NULL) && (i_19 != l_19)))
              _fail(l_19);
            else
              i_19 = l_19;
            {
              if(((j_19 != NULL) && (j_19 != m_19)))
                _fail(m_19);
              else
                j_19 = m_19;
              {
                t = not_null(j_19);
                {
                  t = table_row_0(t);
                  {
                    ATerm o_19 = NULL;
                    t = not_null(j_19);
                    {
                      t = table_row_0(t);
                      {
                        o_19 = t;
                        if(((n_19 != NULL) && (n_19 != o_19)))
                          _fail(o_19);
                        else
                          n_19 = o_19;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(i_19), not_null(n_19));
                  }
                }
              }
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm r_19 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = f_58(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = Cons_2(t, _id, r_19);
      }
    return(t);
  }
  t = r_19(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_AOPTIONS_1))
    {
      i_20 = ATgetArgument(h_20, 0);
      {
        t = not_null(i_20);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm k_20 = NULL,l_20 = NULL;
            k_20 = t;
            f_20 :
            if(match_cons(k_20, sym_AL_1))
              {
                l_20 = ATgetArgument(k_20, 0);
                {
                  ATerm n_20 = NULL;
                  ATerm o_20 = NULL,q_20 = NULL;
                  ATerm p_20 = NULL;
                  t = not_null(l_20);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        p_20 = t;
                        if(((o_20 != NULL) && (o_20 != p_20)))
                          _fail(p_20);
                        else
                          o_20 = p_20;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_b_18);
                    {
                      t = copy_0(t);
                      {
                        q_20 = t;
                        if(((n_20 != NULL) && (n_20 != q_20)))
                          _fail(q_20);
                        else
                          n_20 = q_20;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_c_20);
                }
              }
            else
              {
                if(match_cons(k_20, sym_AC_1))
                  {
                    l_20 = ATgetArgument(k_20, 0);
                    {
                      ATerm s_20 = NULL;
                      ATerm t_20 = NULL,v_20 = NULL;
                      ATerm u_20 = NULL;
                      t = not_null(l_20);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            u_20 = t;
                            if(((t_20 != NULL) && (t_20 != u_20)))
                              _fail(u_20);
                            else
                              t_20 = u_20;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), term_b_18);
                        {
                          t = copy_0(t);
                          {
                            v_20 = t;
                            if(((s_20 != NULL) && (s_20 != v_20)))
                              _fail(v_20);
                            else
                              s_20 = v_20;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_20)), term_d_20);
                    }
                  }
                else
                  {
                    if(match_cons(k_20, sym_AR_1))
                      {
                        l_20 = ATgetArgument(k_20, 0);
                        {
                          ATerm x_20 = NULL;
                          ATerm y_20 = NULL,a_21 = NULL;
                          ATerm z_20 = NULL;
                          t = not_null(l_20);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                z_20 = t;
                                if(((y_20 != NULL) && (y_20 != z_20)))
                                  _fail(z_20);
                                else
                                  y_20 = z_20;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), term_b_18);
                            {
                              t = copy_0(t);
                              {
                                a_21 = t;
                                if(((x_20 != NULL) && (x_20 != a_21)))
                                  _fail(a_21);
                                else
                                  x_20 = a_21;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_e_20);
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, n_2);
          {
            ATerm o_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_x_19);
              return(t);
            }
            t = separate_by_1(t, o_2);
            {
              t = concat_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_j_20);
                  return(t);
                }
                t = at_last_1(t, q_2);
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        t = not_null(o_21);
        {
          ATerm r_2 (ATerm t)
          {
            t = not_null(p_21);
            return(t);
          }
          t = at_end_1(t, r_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      {
        ATerm m_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_21), not_null(x_21));
            LocalPopChoice(r_20);
          }
        else
          {
            t = m_20;
            t = SSL_subtr(not_null(w_21), not_null(x_21));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        ATerm w_20;
        w_20 = t;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_22), not_null(f_22));
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              t = SSL_gtr(not_null(e_22), not_null(f_22));
            }
        }
        t = w_20;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm l_22 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
      m_22 = t;
      k_22 :
      if(match_cons(m_22, sym__2))
        {
          n_22 = ATgetArgument(m_22, 0);
          o_22 = ATgetArgument(m_22, 1);
          {
            if(((l_22 != NULL) && (l_22 != n_22)))
              _fail(n_22);
            else
              l_22 = n_22;
            if(((l_22 != NULL) && (l_22 != o_22)))
              _fail(o_22);
            else
              l_22 = o_22;
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_60 (ATerm), ATerm y_60 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_60(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          t = y_60(t);
          t = q_22(t);
        }
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  t = a_61(t);
  t = while_not_2(t, b_61, c_61);
  return(t);
}
ATerm _2 (ATerm t, ATerm y_35 (ATerm), ATerm z_35 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm a_23 = NULL;
        t = not_null(w_22);
        {
          ATerm c_23 = NULL;
          t = y_35(t);
          {
            a_23 = t;
            {
              t = not_null(x_22);
              {
                t = z_35(t);
                {
                  c_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), not_null(c_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm q_23 = NULL;
        q_23 = t;
        h_23 :
        if(!(match_int(q_23, 0)))
          _fail(t);
        return(t);
      }
      t = _2(t, t_2, _id);
      t = (ATerm) ATempty;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
          r_23 = t;
          j_23 :
          if(match_cons(r_23, sym__2))
            {
              s_23 = ATgetArgument(r_23, 0);
              t_23 = ATgetArgument(r_23, 1);
              t = (ATerm) ATmakeAppl(sym__3, not_null(s_23), not_null(t_23), (ATerm) ATempty);
            }
          else
            _fail(t);
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
          w_23 = t;
          l_23 :
          if(match_cons(w_23, sym__3))
            {
              x_23 = ATgetArgument(w_23, 0);
              y_23 = ATgetArgument(w_23, 1);
              z_23 = ATgetArgument(w_23, 2);
              m_23 :
              if(match_int(x_23, 0))
                t = not_null(z_23);
              else
                _fail(t);
            }
          else
            _fail(t);
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL;
          c_24 = t;
          p_23 :
          if(match_cons(c_24, sym__3))
            {
              d_24 = ATgetArgument(c_24, 0);
              e_24 = ATgetArgument(c_24, 1);
              h_24 = ATgetArgument(c_24, 2);
              {
                ATerm s_24 = NULL;
                ATerm j_21;
                j_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), term_b_10);
                  t = geq_0(t);
                }
                t = j_21;
                {
                  ATerm t_24 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), term_b_10);
                  {
                    t = subt_0(t);
                    {
                      t_24 = t;
                      if(((s_24 != NULL) && (s_24 != t_24)))
                        _fail(t_24);
                      else
                        s_24 = t_24;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_24), not_null(e_24), (ATerm) ATinsert(CheckATermList(not_null(h_24)), not_null(e_24)));
                }
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = for_3(t, u_2, w_2, z_2);
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_string_to_int(not_null(z_24));
  return(t);
}
ATerm R_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_R_2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      {
        ATerm n_25 = NULL;
        t = not_null(h_25);
        {
          ATerm r_25 = NULL;
          t = k_43(t);
          {
            n_25 = t;
            {
              t = not_null(i_25);
              {
                t = l_43(t);
                {
                  r_25 = t;
                  t = (ATerm) ATmakeAppl(sym_R_2, not_null(n_25), not_null(r_25));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              t = filter_1(t, w_52);
              return(t);
            }
            t = Cons_2(t, w_52, a_3);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
              z_25 = t;
              y_25 :
              if(((ATgetType(z_25) == AT_LIST) && ((ATermList) z_25 != ATempty)))
                {
                  a_26 = ATgetFirst((ATermList) z_25);
                  b_26 = (ATerm) ATgetNext((ATermList) z_25);
                  {
                    t = not_null(b_26);
                    t = filter_1(t, w_52);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, l_3);
  {
    ATerm r_27 (ATerm t)
    {
      ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
      ATerm u_27 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(r_26)));
        t = r_27(t);
        return(t);
      }
      p_26 = t;
      k_26 :
      if(match_cons(p_26, sym__2))
        {
          q_26 = ATgetArgument(p_26, 0);
          t_26 = ATgetArgument(p_26, 1);
          l_26 :
          if(((ATermList) q_26 == ATempty))
            {
              {
                ATerm y_26 = NULL;
                ATerm z_26 = NULL;
                t = not_null(t_26);
                {
                  t = reverse_0(t);
                  {
                    z_26 = t;
                    if(((y_26 != NULL) && (y_26 != z_26)))
                      _fail(z_26);
                    else
                      y_26 = z_26;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(y_26)));
              }
            }
          else
            {
              if(((ATgetType(q_26) == AT_LIST) && ((ATermList) q_26 != ATempty)))
                {
                  r_26 = ATgetFirst((ATermList) q_26);
                  s_26 = (ATerm) ATgetNext((ATermList) q_26);
                  m_26 :
                  if(match_cons(r_26, sym_R_2))
                    {
                      n_26 = ATgetArgument(r_26, 0);
                      o_26 = ATgetArgument(r_26, 1);
                      {
                        ATerm s_21 = t;
                        int t_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_27 = NULL,i_27 = NULL;
                            ATerm y_21;
                            y_21 = t;
                            {
                              ATerm h_27 = NULL;
                              t = not_null(t_26);
                              {
                                t = reverse_0(t);
                                {
                                  h_27 = t;
                                  if(((g_27 != NULL) && (g_27 != h_27)))
                                    _fail(h_27);
                                  else
                                    g_27 = h_27;
                                }
                              }
                            }
                            t = y_21;
                            {
                              ATerm j_27 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), (ATerm) ATempty);
                              {
                                t = r_27(t);
                                {
                                  j_27 = t;
                                  if(((i_27 != NULL) && (i_27 != j_27)))
                                    _fail(j_27);
                                  else
                                    i_27 = j_27;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_R_2, not_null(n_26), not_null(o_26))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(g_27)));
                            }
                            LocalPopChoice(t_21);
                          }
                        else
                          {
                            t = s_21;
                            t = u_27(t);
                          }
                      }
                    }
                  else
                    t = u_27(t);
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
      return(t);
    }
    t = r_27(t);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm z_21 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          t = z_21;
        return(t);
      }
      t = filter_1(t, n_3);
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  ATerm f_37 (ATerm t)
  {
    t = not_null(d_30);
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                {
                  ATerm i_22 = t;
                  int j_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(j_22);
                    }
                  else
                    {
                      t = i_22;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(d_30), not_null(b_30));
    return(t);
  }
  ATerm g_37 (ATerm t)
  {
    ATerm p_36 = NULL;
    ATerm t_36 = NULL;
    t = not_null(b_30);
    {
      ATerm o_3 (ATerm t)
      {
        ATerm q_36 = NULL,r_36 = NULL;
        q_36 = t;
        r_29 :
        if(match_cons(q_36, sym_S_1))
          {
            r_36 = ATgetArgument(q_36, 0);
            {
              t = not_null(r_36);
              t = make_latex_comment_0(t);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = map_1(t, o_3);
      {
        t_36 = t;
        if(((p_36 != NULL) && (p_36 != t_36)))
          _fail(t_36);
        else
          p_36 = t_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(p_36));
    return(t);
  }
  ATerm j_37 (ATerm t)
  {
    t = not_null(d_30);
    t = latex_string_0(t);
    return(t);
  }
  c_30 = t;
  t_29 :
  if(match_cons(c_30, sym_REF_2))
    {
      d_30 = ATgetArgument(c_30, 0);
      b_30 = ATgetArgument(c_30, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(d_30), not_null(b_30));
    }
  else
    {
      if(match_cons(c_30, sym_LBL_2))
        {
          d_30 = ATgetArgument(c_30, 0);
          b_30 = ATgetArgument(c_30, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(d_30), not_null(b_30));
        }
      else
        {
          if(match_cons(c_30, sym_L_2))
            {
              d_30 = ATgetArgument(c_30, 0);
              b_30 = ATgetArgument(c_30, 1);
              {
                ATerm k_30 = NULL;
                ATerm p_22 = t;
                int r_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_30 = NULL;
                    t = not_null(d_30);
                    {
                      t = string_to_int_0(t);
                      {
                        l_30 = t;
                        if(((k_30 != NULL) && (k_30 != l_30)))
                          _fail(l_30);
                        else
                          k_30 = l_30;
                      }
                    }
                    LocalPopChoice(r_22);
                  }
                else
                  {
                    t = p_22;
                    {
                      ATerm s_22 = t;
                      int t_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_30 = NULL;
                          t = not_null(d_30);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm m_30 = NULL;
                                m_30 = t;
                                s_28 :
                                if(!(match_int(m_30, 61)))
                                  _fail(t);
                                return(t);
                              }
                              t = Cons_2(t, p_3, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_y_22);
                                {
                                  t = implode_string_0(t);
                                  {
                                    n_30 = t;
                                    if(((k_30 != NULL) && (k_30 != n_30)))
                                      _fail(n_30);
                                    else
                                      k_30 = n_30;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(t_22);
                        }
                      else
                        {
                          t = s_22;
                          {
                            ATerm o_30 = NULL;
                            t = not_null(d_30);
                            {
                              o_30 = t;
                              if(((k_30 != NULL) && (k_30 != o_30)))
                                _fail(o_30);
                              else
                                k_30 = o_30;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(k_30), not_null(b_30));
              }
            }
          else
            {
              if(match_cons(c_30, sym_ALT_2))
                {
                  d_30 = ATgetArgument(c_30, 0);
                  b_30 = ATgetArgument(c_30, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(d_30), not_null(b_30));
                }
              else
                {
                  if(match_cons(c_30, sym_A_3))
                    {
                      d_30 = ATgetArgument(c_30, 0);
                      b_30 = ATgetArgument(c_30, 1);
                      x_29 = ATgetArgument(c_30, 2);
                      {
                        ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
                        ATerm z_30 = NULL;
                        t = not_null(x_29);
                        {
                          ATerm a_31 = NULL;
                          t = construct_rows_0(t);
                          {
                            z_30 = t;
                            {
                              if(((x_30 != NULL) && (x_30 != z_30)))
                                _fail(z_30);
                              else
                                x_30 = z_30;
                              {
                                t = not_null(b_30);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm b_31 = NULL,d_31 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      a_31 = t;
                                      {
                                        if(((u_30 != NULL) && (u_30 != a_31)))
                                          _fail(a_31);
                                        else
                                          u_30 = a_31;
                                        {
                                          ATerm c_31 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), term_j_20);
                                          {
                                            t = copy_0(t);
                                            {
                                              c_31 = t;
                                              if(((b_31 != NULL) && (b_31 != c_31)))
                                                _fail(c_31);
                                              else
                                                b_31 = c_31;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), (ATerm) ATinsert(ATinsert(ATempty, term_a_18), term_j_20));
                                            {
                                              ATerm e_31 = NULL;
                                              t = conc_0(t);
                                              {
                                                d_31 = t;
                                                {
                                                  if(((w_30 != NULL) && (w_30 != d_31)))
                                                    _fail(d_31);
                                                  else
                                                    w_30 = d_31;
                                                  {
                                                    t = not_null(d_30);
                                                    {
                                                      ATerm f_31 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        e_31 = t;
                                                        {
                                                          if(((v_30 != NULL) && (v_30 != e_31)))
                                                            _fail(e_31);
                                                          else
                                                            v_30 = e_31;
                                                          {
                                                            t = not_null(x_30);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm r_3 (ATerm t)
                                                                {
                                                                  t = not_null(w_30);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, r_3);
                                                                {
                                                                  f_31 = t;
                                                                  if(((y_30 != NULL) && (y_30 != f_31)))
                                                                    _fail(f_31);
                                                                  else
                                                                    y_30 = f_31;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(v_30), not_null(y_30));
                      }
                    }
                  else
                    {
                      if(match_cons(c_30, sym_HV_2))
                        {
                          d_30 = ATgetArgument(c_30, 0);
                          b_30 = ATgetArgument(c_30, 1);
                          {
                            ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
                            ATerm m_31 = NULL;
                            t = not_null(d_30);
                            {
                              ATerm n_31 = NULL;
                              t = Hspace_0(t);
                              {
                                m_31 = t;
                                {
                                  if(((i_31 != NULL) && (i_31 != m_31)))
                                    _fail(m_31);
                                  else
                                    i_31 = m_31;
                                  {
                                    t = not_null(d_30);
                                    {
                                      ATerm o_31 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        n_31 = t;
                                        {
                                          if(((j_31 != NULL) && (j_31 != n_31)))
                                            _fail(n_31);
                                          else
                                            j_31 = n_31;
                                          {
                                            t = not_null(d_30);
                                            {
                                              ATerm p_31 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                o_31 = t;
                                                {
                                                  if(((k_31 != NULL) && (k_31 != o_31)))
                                                    _fail(o_31);
                                                  else
                                                    k_31 = o_31;
                                                  {
                                                    t = not_null(b_30);
                                                    {
                                                      ATerm s_3 (ATerm t)
                                                      {
                                                        t = term_z_22;
                                                        return(t);
                                                      }
                                                      t = separate_by_1(t, s_3);
                                                      {
                                                        p_31 = t;
                                                        if(((l_31 != NULL) && (l_31 != p_31)))
                                                          _fail(p_31);
                                                        else
                                                          l_31 = p_31;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(i_31), not_null(j_31), not_null(k_31), not_null(l_31));
                          }
                        }
                      else
                        {
                          if(match_cons(c_30, sym_V_2))
                            {
                              d_30 = ATgetArgument(c_30, 0);
                              b_30 = ATgetArgument(c_30, 1);
                              {
                                ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
                                ATerm y_31 = NULL;
                                t = not_null(d_30);
                                {
                                  ATerm z_31 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    y_31 = t;
                                    {
                                      if(((v_31 != NULL) && (v_31 != y_31)))
                                        _fail(y_31);
                                      else
                                        v_31 = y_31;
                                      {
                                        t = not_null(d_30);
                                        {
                                          ATerm a_32 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            z_31 = t;
                                            {
                                              if(((w_31 != NULL) && (w_31 != z_31)))
                                                _fail(z_31);
                                              else
                                                w_31 = z_31;
                                              {
                                                t = not_null(b_30);
                                                {
                                                  ATerm t_3 (ATerm t)
                                                  {
                                                    t = term_b_23;
                                                    return(t);
                                                  }
                                                  t = separate_by_1(t, t_3);
                                                  {
                                                    a_32 = t;
                                                    if(((x_31 != NULL) && (x_31 != a_32)))
                                                      _fail(a_32);
                                                    else
                                                      x_31 = a_32;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(v_31), not_null(w_31), not_null(x_31));
                              }
                            }
                          else
                            {
                              if(match_cons(c_30, sym_H_2))
                                {
                                  d_30 = ATgetArgument(c_30, 0);
                                  b_30 = ATgetArgument(c_30, 1);
                                  {
                                    ATerm d_32 = NULL,e_32 = NULL;
                                    ATerm f_32 = NULL;
                                    t = not_null(d_30);
                                    {
                                      ATerm x_35 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        f_32 = t;
                                        {
                                          if(((d_32 != NULL) && (d_32 != f_32)))
                                            _fail(f_32);
                                          else
                                            d_32 = f_32;
                                          {
                                            t = not_null(b_30);
                                            {
                                              t = toh_0(t);
                                              {
                                                x_35 = t;
                                                if(((e_32 != NULL) && (e_32 != x_35)))
                                                  _fail(x_35);
                                                else
                                                  e_32 = x_35;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(d_32), not_null(e_32));
                                  }
                                }
                              else
                                {
                                  if(match_cons(c_30, sym_FBOX_2))
                                    {
                                      d_30 = ATgetArgument(c_30, 0);
                                      b_30 = ATgetArgument(c_30, 1);
                                      u_29 :
                                      if(match_cons(d_30, sym_F_1))
                                        {
                                          a_30 = ATgetArgument(d_30, 0);
                                          v_29 :
                                          if(((ATgetType(a_30) == AT_LIST) && ((ATermList) a_30 != ATempty)))
                                            {
                                              y_29 = ATgetFirst((ATermList) a_30);
                                              z_29 = (ATerm) ATgetNext((ATermList) a_30);
                                              {
                                                ATerm d_23 = t;
                                                int e_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_36 = NULL,e_36 = NULL;
                                                    t = not_null(y_29);
                                                    {
                                                      ATerm f_23 = t;
                                                      int g_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_3 (ATerm t)
                                                          {
                                                            ATerm f_36 = NULL;
                                                            f_36 = t;
                                                            if(((e_36 != NULL) && (e_36 != f_36)))
                                                              _fail(f_36);
                                                            else
                                                              e_36 = f_36;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, u_3);
                                                          LocalPopChoice(g_23);
                                                        }
                                                      else
                                                        {
                                                          t = f_23;
                                                          {
                                                            ATerm i_23 = t;
                                                            int k_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_3 (ATerm t)
                                                                {
                                                                  ATerm g_36 = NULL;
                                                                  g_36 = t;
                                                                  if(((e_36 != NULL) && (e_36 != g_36)))
                                                                    _fail(g_36);
                                                                  else
                                                                    e_36 = g_36;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, v_3);
                                                                LocalPopChoice(k_23);
                                                              }
                                                            else
                                                              {
                                                                t = i_23;
                                                                {
                                                                  ATerm n_23 = t;
                                                                  int o_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm w_3 (ATerm t)
                                                                      {
                                                                        ATerm h_36 = NULL;
                                                                        h_36 = t;
                                                                        if(((e_36 != NULL) && (e_36 != h_36)))
                                                                          _fail(h_36);
                                                                        else
                                                                          e_36 = h_36;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, w_3);
                                                                      LocalPopChoice(o_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_23;
                                                                      {
                                                                        ATerm u_23 = t;
                                                                        int v_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm x_3 (ATerm t)
                                                                            {
                                                                              ATerm i_36 = NULL;
                                                                              i_36 = t;
                                                                              if(((e_36 != NULL) && (e_36 != i_36)))
                                                                                _fail(i_36);
                                                                              else
                                                                                e_36 = i_36;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, x_3);
                                                                            LocalPopChoice(v_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_23;
                                                                            {
                                                                              ATerm k_36 = NULL;
                                                                              ATerm y_3 (ATerm t)
                                                                              {
                                                                                ATerm j_36 = NULL;
                                                                                j_36 = t;
                                                                                if(((d_36 != NULL) && (d_36 != j_36)))
                                                                                  _fail(j_36);
                                                                                else
                                                                                  d_36 = j_36;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, y_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(d_36));
                                                                                {
                                                                                  k_36 = t;
                                                                                  if(((e_36 != NULL) && (e_36 != k_36)))
                                                                                    _fail(k_36);
                                                                                  else
                                                                                    e_36 = k_36;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(e_36), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(z_29)), not_null(b_30)));
                                                    LocalPopChoice(e_23);
                                                  }
                                                else
                                                  {
                                                    t = d_23;
                                                    t = f_37(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATermList) a_30 == ATempty))
                                                {
                                                  {
                                                    ATerm a_24 = t;
                                                    int b_24 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(b_30);
                                                        LocalPopChoice(b_24);
                                                      }
                                                    else
                                                      {
                                                        t = a_24;
                                                        t = f_37(t);
                                                      }
                                                  }
                                                }
                                              else
                                                t = f_37(t);
                                            }
                                        }
                                      else
                                        t = f_37(t);
                                    }
                                  else
                                    {
                                      if(match_cons(c_30, sym_C_2))
                                        {
                                          d_30 = ATgetArgument(c_30, 0);
                                          b_30 = ATgetArgument(c_30, 1);
                                          w_29 :
                                          if(((ATermList) d_30 == ATempty))
                                            {
                                              t = g_37(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(match_cons(c_30, sym_S_1))
                                            {
                                              d_30 = ATgetArgument(c_30, 0);
                                              t = j_37(t);
                                            }
                                          else
                                            _fail(t);
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
ATerm abox2latex_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm n_38 = NULL;
  ATerm p_38 = NULL,r_38 = NULL;
  n_38 = t;
  {
    ATerm f_24;
    f_24 = t;
    {
      ATerm q_38 = NULL;
      t = term_l_18;
      {
        t = l_67(t);
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
      }
    }
    t = f_24;
    {
      ATerm s_38 = NULL;
      t = not_null(n_38);
      {
        ATerm z_3 (ATerm t)
        {
          t = try_1(t, Abox_2_latex_0);
          return(t);
        }
        t = topdown_1(t, z_3);
        {
          s_38 = t;
          if(((r_38 != NULL) && (r_38 != s_38)))
            _fail(s_38);
          else
            r_38 = s_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(p_38)), not_null(r_38));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_49 (ATerm))
{
  t = fetch_1(t, h_49);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm d_39 = NULL;
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  d_39 = t;
  {
    ATerm i_39 = NULL;
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
    t = not_null(d_39);
    {
      i_39 = t;
      {
        t = SSL_explode_term(not_null(i_39));
        {
          k_39 = t;
          z_38 :
          if(match_cons(k_39, sym__2))
            {
              l_39 = ATgetArgument(k_39, 0);
              m_39 = ATgetArgument(k_39, 1);
              a_39 :
              if(match_string(l_39, ""))
                {
                  b_39 :
                  if(((ATgetType(m_39) == AT_LIST) && ((ATermList) m_39 != ATempty)))
                    {
                      n_39 = ATgetFirst((ATermList) m_39);
                      o_39 = (ATerm) ATgetNext((ATermList) m_39);
                      c_39 :
                      if(((ATgetType(o_39) == AT_LIST) && ((ATermList) o_39 != ATempty)))
                        {
                          p_39 = ATgetFirst((ATermList) o_39);
                          q_39 = (ATerm) ATgetNext((ATermList) o_39);
                          {
                            if(((f_39 != NULL) && (f_39 != n_39)))
                              _fail(n_39);
                            else
                              f_39 = n_39;
                            {
                              if(((h_39 != NULL) && (h_39 != p_39)))
                                _fail(p_39);
                              else
                                h_39 = p_39;
                              if(((g_39 != NULL) && (g_39 != q_39)))
                                _fail(q_39);
                              else
                                g_39 = q_39;
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(h_39);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_39 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 (ATerm t)
        {
          ATerm y_39 = NULL,z_39 = NULL;
          y_39 = t;
          v_39 :
          if(match_cons(y_39, sym_Input_1))
            {
              z_39 = ATgetArgument(y_39, 0);
              if(((x_39 != NULL) && (x_39 != z_39)))
                _fail(z_39);
              else
                x_39 = z_39;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_4);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        {
          ATerm a_40 = NULL;
          t = term_k_24;
          {
            a_40 = t;
            if(((x_39 != NULL) && (x_39 != a_40)))
              _fail(a_40);
            else
              x_39 = a_40;
          }
        }
      }
  }
  t = g_24;
  {
    ATerm b_4 (ATerm t)
    {
      t = not_null(x_39);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_4);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
    h_40 = t;
    e_40 :
    if(((ATgetType(h_40) == AT_LIST) && ((ATermList) h_40 != ATempty)))
      {
        i_40 = ATgetFirst((ATermList) h_40);
        j_40 = (ATerm) ATgetNext((ATermList) h_40);
        f_40 :
        if(((ATgetType(j_40) == AT_LIST) && ((ATermList) j_40 != ATempty)))
          {
            k_40 = ATgetFirst((ATermList) j_40);
            l_40 = (ATerm) ATgetNext((ATermList) j_40);
            g_40 :
            if(((ATermList) l_40 == ATempty))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_r_16, not_null(i_40), not_null(k_40));
                  t = table_put_0(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, c_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  t = SSL_ReadFromFile(not_null(q_40));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  t = SSL_table_create(not_null(u_40));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm l_24;
  l_24 = t;
  {
    t = term_r_16;
    t = table_create_0(t);
  }
  t = l_24;
  {
    t = reverse_0(t);
    {
      ATerm d_4 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, d_4);
    }
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm x_40 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_57, _id);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = Cons_2(t, _id, x_40);
      }
    return(t);
  }
  t = x_40(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(((ATgetType(b_41) == AT_LIST) && ((ATermList) b_41 != ATempty)))
    {
      c_41 = ATgetFirst((ATermList) b_41);
      d_41 = (ATerm) ATgetNext((ATermList) b_41);
      {
        t = u_54(t);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm g_41 = NULL;
            g_41 = t;
            if(((c_41 != NULL) && (c_41 != g_41)))
              _fail(g_41);
            else
              c_41 = g_41;
            return(t);
          }
          t = fetch_1(t, e_4);
        }
        t = not_null(d_41);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym__2))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      {
        t = not_null(m_41);
        {
          ATerm r_41 (ATerm t)
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_41);
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                {
                  ATerm q_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_4 (ATerm t)
                      {
                        t = not_null(n_41);
                        return(t);
                      }
                      t = HdMember_1(t, f_4);
                      t = r_41(t);
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = q_24;
                      t = Cons_2(t, _id, r_41);
                    }
                }
              }
            return(t);
          }
          t = r_41(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_53(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
        w_41 = t;
        v_41 :
        if(((ATgetType(w_41) == AT_LIST) && ((ATermList) w_41 != ATempty)))
          {
            x_41 = ATgetFirst((ATermList) w_41);
            y_41 = (ATerm) ATgetNext((ATermList) w_41);
            {
              ATerm b_42 = NULL,d_42 = NULL;
              ATerm w_24;
              w_24 = t;
              {
                ATerm c_42 = NULL;
                t = not_null(x_41);
                {
                  t = u_53(t);
                  {
                    c_42 = t;
                    if(((b_42 != NULL) && (b_42 != c_42)))
                      _fail(c_42);
                    else
                      b_42 = c_42;
                  }
                }
              }
              t = w_24;
              {
                ATerm e_42 = NULL;
                t = not_null(y_41);
                {
                  t = foldr_3(t, s_53, t_53, u_53);
                  {
                    e_42 = t;
                    if(((d_42 != NULL) && (d_42 != e_42)))
                      _fail(e_42);
                    else
                      d_42 = e_42;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), not_null(d_42));
                  t = t_53(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm m_42 = NULL;
  ATerm o_42 = NULL;
  m_42 = t;
  {
    ATerm p_42 = NULL;
    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
    t = not_null(m_42);
    {
      p_42 = t;
      {
        t = SSL_explode_term(not_null(p_42));
        {
          r_42 = t;
          l_42 :
          if(match_cons(r_42, sym__2))
            {
              s_42 = ATgetArgument(r_42, 0);
              t_42 = ATgetArgument(r_42, 1);
              if(((o_42 != NULL) && (o_42 != t_42)))
                _fail(t_42);
              else
                o_42 = t_42;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(o_42);
      t = foldr_3(t, f_55, g_55, h_55);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm c_43 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_43 = NULL;
        ATerm b_43 = NULL;
        t = t_55(t);
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
        t = (ATerm) ATinsert(ATempty, not_null(a_43));
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, g_4, union_0, c_43);
        }
      }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_55 (ATerm))
{
  t = collect_om_1(t, v_55);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_50 (ATerm))
{
  ATerm a_25;
  a_25 = t;
  {
    ATerm g_43 = NULL,i_43 = NULL;
    ATerm b_25;
    b_25 = t;
    {
      ATerm h_43 = NULL;
      t = y_50(t);
      {
        h_43 = t;
        if(((g_43 != NULL) && (g_43 != h_43)))
          _fail(h_43);
        else
          g_43 = h_43;
      }
    }
    t = b_25;
    {
      ATerm j_43 = NULL;
      j_43 = t;
      if(((i_43 != NULL) && (i_43 != j_43)))
        _fail(j_43);
      else
        i_43 = j_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_43)), not_null(g_43)));
        t = printnl_0(t);
      }
    }
  }
  t = a_25;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm f_51 (ATerm))
{
  ATerm c_25;
  c_25 = t;
  {
    t = f_51(t);
    {
      ATerm h_4 (ATerm t)
      {
        t = term_d_25;
        return(t);
      }
      t = debug_1(t, h_4);
    }
  }
  t = c_25;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  ATerm e_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
      w_43 = t;
      p_43 :
      if(match_cons(w_43, sym__2))
        {
          x_43 = ATgetArgument(w_43, 0);
          y_43 = ATgetArgument(w_43, 1);
          {
            if(((v_43 != NULL) && (v_43 != x_43)))
              _fail(x_43);
            else
              v_43 = x_43;
            {
              if(((u_43 != NULL) && (u_43 != y_43)))
                _fail(y_43);
              else
                u_43 = y_43;
              t = SSL_open_file(not_null(v_43), not_null(u_43));
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = e_25;
      {
        ATerm z_43 = NULL;
        ATerm a_44 = NULL;
        ATerm i_4 (ATerm t)
        {
          t = term_k_25;
          return(t);
        }
        t = obsolete_1(t, i_4);
        {
          z_43 = t;
          {
            if(((v_43 != NULL) && (v_43 != z_43)))
              _fail(z_43);
            else
              v_43 = z_43;
            {
              ATerm l_25;
              l_25 = t;
              {
                ATerm d_44 = NULL;
                t = term_m_25;
                {
                  d_44 = t;
                  if(((a_44 != NULL) && (a_44 != d_44)))
                    _fail(d_44);
                  else
                    a_44 = d_44;
                }
              }
              t = l_25;
              t = SSL_open_file(not_null(v_43), not_null(a_44));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm j_44 = NULL;
  ATerm o_25;
  o_25 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_44 = NULL,l_44 = NULL;
      k_44 = t;
      i_44 :
      if(match_cons(k_44, sym_Program_1))
        {
          l_44 = ATgetArgument(k_44, 0);
          if(((j_44 != NULL) && (j_44 != l_44)))
            _fail(l_44);
          else
            j_44 = l_44;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_25), not_null(j_44)), term_p_25));
      {
        t = printnl_0(t);
        {
          t = term_f_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_25;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_44 = NULL;
  o_44 = t;
  n_44 :
  if(!(match_cons(o_44, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_4);
  t = c_50(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm c_49 (ATerm), ATerm d_49 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = ArgOption_3(t, c_49, d_49, l_4);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm u_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  u_44 = t;
  s_44 :
  if(match_string(u_44, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(u_44) == AT_LIST) && ((ATermList) u_44 != ATempty)))
        {
          x_44 = ATgetFirst((ATermList) u_44);
          y_44 = (ATerm) ATgetNext((ATermList) u_44);
          t_44 :
          if(((ATgetType(y_44) == AT_LIST) && ((ATermList) y_44 != ATempty)))
            {
              z_44 = ATgetFirst((ATermList) y_44);
              a_45 = (ATerm) ATgetNext((ATermList) y_44);
              {
                ATerm e_45 = NULL;
                ATerm x_25;
                x_25 = t;
                {
                  t = not_null(x_44);
                  t = i_0(t);
                }
                t = x_25;
                {
                  ATerm f_45 = NULL;
                  t = not_null(z_44);
                  {
                    t = j_0(t);
                    {
                      f_45 = t;
                      if(((e_45 != NULL) && (e_45 != f_45)))
                        _fail(f_45);
                      else
                        e_45 = f_45;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_45)), not_null(e_45));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm u_45 = NULL;
        u_45 = t;
        j_45 :
        if(!(match_string(u_45, "-S")))
          {
            if(!(match_string(u_45, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_e_26;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_f_26;
        return(t);
      }
      t = Option_3(t, m_4, n_4, o_4);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm v_45 = NULL;
              v_45 = t;
              k_45 :
              if(!(match_string(v_45, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              t = term_i_26;
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_j_26;
              return(t);
            }
            t = Option_3(t, p_4, q_4, r_4);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm u_26 = t;
              int v_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm w_45 = NULL;
                    w_45 = t;
                    l_45 :
                    if(!(match_string(w_45, "-v")))
                      {
                        if(!(match_string(w_45, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm t_4 (ATerm t)
                  {
                    t = term_w_26;
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = term_x_26;
                    return(t);
                  }
                  t = Option_3(t, s_4, t_4, u_4);
                  LocalPopChoice(v_26);
                }
              else
                {
                  t = u_26;
                  {
                    ATerm a_27 = t;
                    int b_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm x_45 = NULL;
                          x_45 = t;
                          m_45 :
                          if(!(match_string(x_45, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          ATerm y_45 = NULL;
                          ATerm z_45 = NULL;
                          z_45 = t;
                          if(((y_45 != NULL) && (y_45 != z_45)))
                            _fail(z_45);
                          else
                            y_45 = z_45;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_45));
                          return(t);
                        }
                        ATerm x_4 (ATerm t)
                        {
                          t = term_c_27;
                          return(t);
                        }
                        t = ArgOption_3(t, v_4, w_4, x_4);
                        LocalPopChoice(b_27);
                      }
                    else
                      {
                        t = a_27;
                        {
                          ATerm d_27 = t;
                          int e_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_4 (ATerm t)
                              {
                                ATerm a_46 = NULL;
                                a_46 = t;
                                o_45 :
                                if(!(match_string(a_46, "-i")))
                                  {
                                    if(!(match_string(a_46, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_4 (ATerm t)
                              {
                                ATerm b_46 = NULL;
                                ATerm c_46 = NULL;
                                c_46 = t;
                                if(((b_46 != NULL) && (b_46 != c_46)))
                                  _fail(c_46);
                                else
                                  b_46 = c_46;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_46));
                                return(t);
                              }
                              ATerm a_5 (ATerm t)
                              {
                                t = term_f_27;
                                return(t);
                              }
                              t = ArgOption_3(t, y_4, z_4, a_5);
                              LocalPopChoice(e_27);
                            }
                          else
                            {
                              t = d_27;
                              {
                                ATerm k_27 = t;
                                int l_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_5 (ATerm t)
                                    {
                                      ATerm d_46 = NULL;
                                      d_46 = t;
                                      q_45 :
                                      if(!(match_string(d_46, "-o")))
                                        {
                                          if(!(match_string(d_46, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm c_5 (ATerm t)
                                    {
                                      ATerm e_46 = NULL;
                                      ATerm f_46 = NULL;
                                      f_46 = t;
                                      if(((e_46 != NULL) && (e_46 != f_46)))
                                        _fail(f_46);
                                      else
                                        e_46 = f_46;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_46));
                                      return(t);
                                    }
                                    ATerm d_5 (ATerm t)
                                    {
                                      t = term_m_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, b_5, c_5, d_5);
                                    LocalPopChoice(l_27);
                                  }
                                else
                                  {
                                    t = k_27;
                                    {
                                      ATerm n_27 = t;
                                      int o_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_5 (ATerm t)
                                          {
                                            ATerm g_46 = NULL;
                                            g_46 = t;
                                            s_45 :
                                            if(!(match_string(g_46, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_5 (ATerm t)
                                          {
                                            t = term_p_27;
                                            return(t);
                                          }
                                          ATerm g_6 (ATerm t)
                                          {
                                            t = term_q_27;
                                            return(t);
                                          }
                                          t = Option_3(t, e_5, f_5, g_6);
                                          LocalPopChoice(o_27);
                                        }
                                      else
                                        {
                                          t = n_27;
                                          {
                                            ATerm h_6 (ATerm t)
                                            {
                                              ATerm h_46 = NULL;
                                              h_46 = t;
                                              t_45 :
                                              if(!(match_string(h_46, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm i_6 (ATerm t)
                                            {
                                              t = term_s_27;
                                              return(t);
                                            }
                                            ATerm j_6 (ATerm t)
                                            {
                                              t = term_t_27;
                                              return(t);
                                            }
                                            t = Option_3(t, h_6, i_6, j_6);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  t = SSL_table_destroy(not_null(m_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  t = SSL_exit(not_null(q_46));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_implode_string(not_null(u_46));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm x_46 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_46);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          t = Nil_0(t);
          t = v_57(t);
        }
      }
    return(t);
  }
  t = x_46(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
        a_47 = t;
        z_46 :
        if(((ATgetType(a_47) == AT_LIST) && ((ATermList) a_47 != ATempty)))
          {
            b_47 = ATgetFirst((ATermList) a_47);
            c_47 = (ATerm) ATgetNext((ATermList) a_47);
            {
              t = not_null(b_47);
              {
                ATerm k_6 (ATerm t)
                {
                  t = not_null(c_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_6);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  t = SSL_explode_string(not_null(i_47));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm l_47 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = Cons_2(t, h_57, l_47);
      }
    return(t);
  }
  t = l_47(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  u_47 = t;
  r_47 :
  if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
    {
      s_47 = ATgetFirst((ATermList) u_47);
      t_47 = (ATerm) ATgetNext((ATermList) u_47);
      {
        ATerm x_47 = NULL;
        t = not_null(t_47);
        {
          ATerm b_28;
          b_28 = t;
          {
            ATerm y_47 = NULL,a_48 = NULL,c_48 = NULL;
            ATerm c_28;
            c_28 = t;
            {
              ATerm z_47 = NULL;
              t = h_0(t);
              {
                z_47 = t;
                if(((y_47 != NULL) && (y_47 != z_47)))
                  _fail(z_47);
                else
                  y_47 = z_47;
              }
            }
            t = c_28;
            {
              ATerm b_48 = NULL;
              t = not_null(s_47);
              {
                t = g_0(t);
                {
                  b_48 = t;
                  if(((a_48 != NULL) && (a_48 != b_48)))
                    _fail(b_48);
                  else
                    a_48 = b_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_47)), not_null(a_48));
                {
                  c_48 = t;
                  if(((x_47 != NULL) && (x_47 != c_48)))
                    _fail(c_48);
                  else
                    x_47 = c_48;
                }
              }
            }
          }
          t = b_28;
          {
            ATerm l_6 (ATerm t)
            {
              t = not_null(x_47);
              return(t);
            }
            t = reverse_acc_2(t, g_0, l_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) u_47 == ATempty))
        {
          {
            t = term_l_18;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_37 (ATerm))
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Program_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm u_48 = NULL;
        t = not_null(s_48);
        {
          t = h_37(t);
          {
            u_48 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_48));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm e_49 = NULL;
  ATerm n_6 (ATerm t)
  {
    ATerm s_7 (ATerm t)
    {
      ATerm f_49 = NULL;
      f_49 = t;
      if(((e_49 != NULL) && (e_49 != f_49)))
        _fail(f_49);
      else
        e_49 = f_49;
      return(t);
    }
    t = Program_1(t, s_7);
    return(t);
  }
  t = option_defined_1(t, n_6);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm g_49 = NULL;
      ATerm i_49 = NULL;
      t = term_l_18;
      {
        ATerm z_7 (ATerm t)
        {
          t = not_null(e_49);
          return(t);
        }
        t = short_description_1(t, z_7);
        {
          t = concat_strings_0(t);
          {
            i_49 = t;
            if(((g_49 != NULL) && (g_49 != i_49)))
              _fail(i_49);
            else
              g_49 = i_49;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, not_null(g_49)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, term_d_28));
      {
        t = printnl_0(t);
        {
          t = term_g_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_8 (ATerm t)
                {
                  ATerm j_49 = NULL;
                  j_49 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_49)), term_h_28));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_8);
                {
                  ATerm m_8 (ATerm t)
                  {
                    ATerm l_49 = NULL;
                    ATerm m_49 = NULL;
                    t = term_l_18;
                    {
                      ATerm n_8 (ATerm t)
                      {
                        t = not_null(e_49);
                        return(t);
                      }
                      t = long_description_1(t, n_8);
                      {
                        t = concat_strings_0(t);
                        {
                          m_49 = t;
                          if(((l_49 != NULL) && (l_49 != m_49)))
                            _fail(m_49);
                          else
                            l_49 = m_49;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_49)), term_i_28));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_8);
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
ATerm printnl_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym__2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      {
        ATerm j_28;
        j_28 = t;
        t = SSL_printnl(not_null(u_49), not_null(v_49));
        t = j_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_37 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  b_50 :
  if(match_cons(d_50, sym_Undefined_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      {
        ATerm g_50 = NULL;
        t = not_null(e_50);
        {
          t = i_37(t);
          {
            g_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_50));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_50 = NULL;
  l_50 = t;
  k_50 :
  if(!(match_cons(l_50, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym__2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      t = SSL_table_get(not_null(p_50), not_null(q_50));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym__3))
    {
      z_50 = ATgetArgument(x_50, 0);
      a_51 = ATgetArgument(x_50, 1);
      b_51 = ATgetArgument(x_50, 2);
      {
        ATerm k_28;
        k_28 = t;
        {
          ATerm g_51 = NULL;
          ATerm h_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_50), not_null(a_51));
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = (ATerm) ATempty;
              }
            {
              h_51 = t;
              if(((g_51 != NULL) && (g_51 != h_51)))
                _fail(h_51);
              else
                g_51 = h_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_50), not_null(a_51), (ATerm) ATinsert(CheckATermList(not_null(g_51)), not_null(b_51)));
            t = table_put_0(t);
          }
        }
        t = k_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm l_51 = NULL;
  ATerm m_51 = NULL;
  t = term_l_18;
  {
    t = n_48(t);
    {
      m_51 = t;
      if(((l_51 != NULL) && (l_51 != m_51)))
        _fail(m_51);
      else
        l_51 = m_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_28, term_f_28, not_null(l_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(match_string(s_51, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(s_51) == AT_LIST) && ((ATermList) s_51 != ATempty)))
        {
          t_51 = ATgetFirst((ATermList) s_51);
          u_51 = (ATerm) ATgetNext((ATermList) s_51);
          {
            ATerm x_51 = NULL;
            ATerm n_28;
            n_28 = t;
            {
              t = not_null(t_51);
              t = b_0(t);
            }
            t = n_28;
            {
              ATerm y_51 = NULL;
              t = term_l_18;
              {
                t = c_0(t);
                {
                  y_51 = t;
                  if(((x_51 != NULL) && (x_51 != y_51)))
                    _fail(y_51);
                  else
                    x_51 = y_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_51)), not_null(x_51));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm d_52 = NULL;
    d_52 = t;
    c_52 :
    if(!(match_string(d_52, "--help")))
      {
        if(!(match_string(d_52, "-h")))
          {
            if(!(match_string(d_52, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = Option_3(t, q_8, y_8, a_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(((ATgetType(g_52) == AT_LIST) && ((ATermList) g_52 != ATempty)))
    {
      h_52 = ATgetFirst((ATermList) g_52);
      i_52 = (ATerm) ATgetNext((ATermList) g_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_52)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(((ATgetType(q_52) == AT_LIST) && ((ATermList) q_52 != ATempty)))
    {
      r_52 = ATgetFirst((ATermList) q_52);
      s_52 = (ATerm) ATgetNext((ATermList) q_52);
      {
        ATerm v_52 = NULL;
        t = not_null(r_52);
        {
          ATerm y_52 = NULL;
          t = v_44(t);
          {
            v_52 = t;
            {
              t = not_null(s_52);
              {
                t = w_44(t);
                {
                  y_52 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_52)), not_null(v_52));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_53 = NULL;
  e_53 = t;
  d_53 :
  if(((ATermList) e_53 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_48 (ATerm))
{
  ATerm q_28;
  q_28 = t;
  {
    ATerm b_9 (ATerm t)
    {
      t = term_r_28;
      t = l_48(t);
      return(t);
    }
    t = try_1(t, b_9);
  }
  t = q_28;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm g_53 = NULL;
      g_53 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_53));
      return(t);
    }
    ATerm e_9 (ATerm t)
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              {
                t = l_48(t);
                t = Cons_2(t, _id, e_9);
              }
            }
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_9, e_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,v_53 = NULL;
    p_53 = t;
    l_53 :
    if(match_cons(p_53, sym__3))
      {
        q_53 = ATgetArgument(p_53, 0);
        r_53 = ATgetArgument(p_53, 1);
        v_53 = ATgetArgument(p_53, 2);
        {
          if(((m_53 != NULL) && (m_53 != q_53)))
            _fail(q_53);
          else
            m_53 = q_53;
          {
            if(((n_53 != NULL) && (n_53 != r_53)))
              _fail(r_53);
            else
              n_53 = r_53;
            {
              if(((o_53 != NULL) && (o_53 != v_53)))
                _fail(v_53);
              else
                o_53 = v_53;
              t = SSL_table_put(not_null(m_53), not_null(n_53), not_null(o_53));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = x_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_48 (ATerm))
{
  ATerm y_53 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    t = term_z_28;
    t = table_put_0(t);
  }
  t = y_28;
  {
    ATerm f_9 (ATerm t)
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_48(t);
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_9);
    {
      ATerm g_9 (ATerm t)
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm h_9 (ATerm t)
              {
                ATerm i_9 (ATerm t)
                {
                  ATerm z_53 = NULL;
                  z_53 = t;
                  if(((y_53 != NULL) && (y_53 != z_53)))
                    _fail(z_53);
                  else
                    y_53 = z_53;
                  return(t);
                }
                t = Undefined_1(t, i_9);
                return(t);
              }
              t = option_defined_1(t, h_9);
              {
                ATerm e_29;
                e_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_53)), term_f_29));
                  t = printnl_0(t);
                }
                t = e_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_9);
      {
        ATerm g_29;
        g_29 = t;
        {
          t = term_e_28;
          t = table_destroy_0(t);
        }
        t = g_29;
      }
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm y_54 = NULL,z_54 = NULL;
  ATerm j_9 (ATerm t)
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_9 (ATerm t)
              {
                ATerm o_54 = NULL;
                o_54 = t;
                b_54 :
                if(!(match_string(o_54, "-t")))
                  _fail(t);
                return(t);
              }
              ATerm l_9 (ATerm t)
              {
                ATerm p_54 = NULL;
                p_54 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(p_54));
                return(t);
              }
              t = ArgOption_2(t, k_9, l_9);
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              {
                ATerm m_9 (ATerm t)
                {
                  ATerm r_54 = NULL;
                  r_54 = t;
                  d_54 :
                  if(!(match_string(r_54, "-w")))
                    _fail(t);
                  return(t);
                }
                ATerm n_9 (ATerm t)
                {
                  ATerm s_54 = NULL;
                  s_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(s_54));
                  return(t);
                }
                t = ArgOption_2(t, m_9, n_9);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, j_9);
  {
    v_54 = t;
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_29;
                p_29 = t;
                {
                  ATerm q_29 = t;
                  int s_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_9 (ATerm t)
                      {
                        ATerm a_55 = NULL,b_55 = NULL;
                        a_55 = t;
                        h_54 :
                        if(match_cons(a_55, sym_Output_1))
                          {
                            b_55 = ATgetArgument(a_55, 0);
                            {
                              if(((z_54 != NULL) && (z_54 != b_55)))
                                _fail(b_55);
                              else
                                z_54 = b_55;
                              {
                                t = not_null(z_54);
                                t = open_file_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1(t, o_9);
                      LocalPopChoice(s_29);
                    }
                  else
                    {
                      t = q_29;
                      {
                        ATerm c_55 = NULL;
                        t = term_e_30;
                        {
                          c_55 = t;
                          if(((z_54 != NULL) && (z_54 != c_55)))
                            _fail(c_55);
                          else
                            z_54 = c_55;
                        }
                      }
                    }
                }
                t = p_29;
                {
                  ATerm f_30;
                  f_30 = t;
                  {
                    ATerm p_9 (ATerm t)
                    {
                      ATerm d_55 = NULL,e_55 = NULL;
                      d_55 = t;
                      k_54 :
                      if(match_cons(d_55, sym_LatexTable_1))
                        {
                          e_55 = ATgetArgument(d_55, 0);
                          t = not_null(e_55);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = collect_1(t, p_9);
                    t = load_tables_0(t);
                  }
                  t = f_30;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm g_30 = t;
                        int h_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_30;
                            i_30 = t;
                            {
                              t = not_null(v_54);
                              {
                                ATerm q_9 (ATerm t)
                                {
                                  ATerm j_55 = NULL,k_55 = NULL;
                                  j_55 = t;
                                  m_54 :
                                  if(match_cons(j_55, sym_Width_1))
                                    {
                                      k_55 = ATgetArgument(j_55, 0);
                                      if(((y_54 != NULL) && (y_54 != k_55)))
                                        _fail(k_55);
                                      else
                                        y_54 = k_55;
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, q_9);
                              }
                            }
                            t = i_30;
                            {
                              ATerm r_9 (ATerm t)
                              {
                                t = not_null(y_54);
                                return(t);
                              }
                              t = abox2latex_1(t, r_9);
                            }
                            LocalPopChoice(h_30);
                          }
                        else
                          {
                            t = g_30;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm s_9 (ATerm t)
                          {
                            ATerm t_9 (ATerm t)
                            {
                              t = is_string_0(t);
                              {
                                ATerm j_30;
                                j_30 = t;
                                {
                                  ATerm y_9 (ATerm t)
                                  {
                                    t = not_null(z_54);
                                    return(t);
                                  }
                                  ATerm z_9 (ATerm t)
                                  {
                                    ATerm l_55 = NULL;
                                    l_55 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(l_55));
                                    return(t);
                                  }
                                  t = split_2(t, y_9, z_9);
                                  t = print_0(t);
                                }
                                t = j_30;
                              }
                              return(t);
                            }
                            t = try_1(t, t_9);
                            return(t);
                          }
                          t = topdown_1(t, s_9);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox2latex_0(t);
  return(t);
}

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
ATerm term_u_30;
ATerm term_j_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_q_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_r_24;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_g_20;
ATerm term_m_19;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_i_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__3, term_h_28, term_i_28, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_66 (ATerm));
ATerm topdown_1 (ATerm, ATerm o_62 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm q_62 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm u_60 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm m_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm k_60 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm i_61 (ATerm));
ATerm separate_by_1 (ATerm, ATerm j_61 (ATerm));
ATerm filter_1 (ATerm, ATerm s_53 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm q_60 (ATerm));
ATerm table_def_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_66 (ATerm), ATerm p_66 (ATerm));
ATerm for_3 (ATerm, ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm _2 (ATerm, ATerm d_36 (ATerm), ATerm e_36 (ATerm));
ATerm copy_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm R_2 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm p_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_49 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_60 (ATerm));
ATerm HdMember_1 (ATerm, ATerm q_55 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm crush_3 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm collect_om_1 (ATerm, ATerm p_56 (ATerm));
ATerm collect_1 (ATerm, ATerm r_56 (ATerm));
ATerm debug_1 (ATerm, ATerm d_51 (ATerm));
ATerm obsolete_1 (ATerm, ATerm k_51 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_50 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_48 (ATerm));
ATerm map_1 (ATerm, ATerm s_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_48 (ATerm));
ATerm Program_1 (ATerm, ATerm m_37 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_37 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_48 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_45 (ATerm), ATerm b_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_48 (ATerm));
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, term_c_10));
  {
    t = printnl_0(t);
    {
      t = term_d_10;
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
      ATerm e_10 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm r_1 = NULL;
            r_1 = t;
            k_1 :
            if(!(match_cons(r_1, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_10;
        }
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
            {
              _fail(t);
            }
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
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_0);
          return(t);
        }
        t = _2(t, n_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_10), not_null(q_1)), term_f_10), not_null(p_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_h_10;
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
        ATerm i_10;
        i_10 = t;
        t = SSL_print(not_null(b_2), not_null(c_2));
        t = i_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm))
{
  ATerm i_2 = NULL,k_2 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm j_2 = NULL;
    t = a_53(t);
    {
      j_2 = t;
      if(((i_2 != NULL) && (i_2 != j_2)))
        _fail(j_2);
      else
        i_2 = j_2;
    }
  }
  t = j_10;
  {
    ATerm l_2 = NULL;
    t = b_53(t);
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
ATerm try_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_66(t);
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    t = o_62(t);
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
        t = try_1(t, Abox2latex_0);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  d_3 :
  if(!(match_cons(e_3, sym_EOR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  f_3 :
  if(!(match_cons(g_3, sym_L_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(!(match_cons(i_3, sym_R_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  j_3 :
  if(!(match_cons(k_3, sym_C_0)))
    {
      _fail(t);
    }
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
  ATerm m_10 = t;
  int n_10 = stack_ptr;
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_10), not_null(w_5)), term_t_10), not_null(e_6)), term_s_10);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_11), not_null(w_5)), term_a_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), not_null(w_5)), term_i_11), not_null(t_5)), term_h_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_5)), term_k_11), not_null(u_5)), term_j_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_t_10), not_null(u_5)), term_l_11);
        }
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_m_11);
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_s_11);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_y_11);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_z_11);
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_a_12);
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_d_12);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_e_12);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_f_12);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_k_12);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_l_12);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_m_12);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_n_12);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_o_12);
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_p_12);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_q_12);
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_r_12);
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_s_12);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_t_12);
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_x_12);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_z_12);
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_a_13);
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_c_13);
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_d_13);
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_e_13);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(w_5)), term_t_10), not_null(v_5)), term_f_13);
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_13), not_null(q_5)), term_g_13);
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_13), not_null(q_5)), term_i_11), not_null(l_5)), term_i_13);
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_13), not_null(q_5)), term_i_11), not_null(m_5)), term_t_13);
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
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_14), not_null(q_5)), term_i_11), not_null(o_5)), term_t_10), not_null(n_5)), term_v_13);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(q_5)), term_i_11), not_null(o_5)), term_t_10), not_null(n_5)), term_t_10), not_null(m_5)), term_b_14);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_14), not_null(q_5)), term_i_11), not_null(p_5)), term_e_14);
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), not_null(s_5)), term_i_14), not_null(r_5)), term_h_14);
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
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), not_null(w_5)), term_t_14);
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
                                          ATerm v_14 = t;
                                          int w_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_6(t);
                                              LocalPopChoice(w_14);
                                            }
                                          else
                                            {
                                              t = v_14;
                                              {
                                                ATerm x_14 = t;
                                                int y_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_6(t);
                                                    LocalPopChoice(y_14);
                                                  }
                                                else
                                                  {
                                                    t = x_14;
                                                    t = q_6(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm z_14 = t;
                                          int a_15 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_6(t);
                                              LocalPopChoice(a_15);
                                            }
                                          else
                                            {
                                              t = z_14;
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
                                                    {
                                                      t = t_6(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(b_6, sym_VAR_0))
                                                        {
                                                          t = u_6(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(b_6, sym_NUM_0))
                                                            {
                                                              t = v_6(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(b_6, sym_MATH_0))
                                                                {
                                                                  t = w_6(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(b_6, "sf"))
                                                                    {
                                                                      t = x_6(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(b_6, "rm"))
                                                                        {
                                                                          t = y_6(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(b_6, "tt"))
                                                                            {
                                                                              t = z_6(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(b_6, "md"))
                                                                                {
                                                                                  t = a_7(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(b_6, "bf"))
                                                                                    {
                                                                                      t = b_7(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(b_6, "up"))
                                                                                        {
                                                                                          t = c_7(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(b_6, "it"))
                                                                                            {
                                                                                              t = d_7(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(b_6, "sc"))
                                                                                                {
                                                                                                  t = e_7(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(b_6, "sl"))
                                                                                                    {
                                                                                                      t = f_7(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(b_6, "em"))
                                                                                                        {
                                                                                                          t = g_7(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(b_6, "tiny"))
                                                                                                            {
                                                                                                              t = h_7(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(b_6, "scriptsize"))
                                                                                                                {
                                                                                                                  t = i_7(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(b_6, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = j_7(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(b_6, "small"))
                                                                                                                        {
                                                                                                                          t = k_7(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(b_6, "normalsize"))
                                                                                                                            {
                                                                                                                              t = l_7(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(b_6, "large"))
                                                                                                                                {
                                                                                                                                  t = m_7(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(b_6, "Large"))
                                                                                                                                    {
                                                                                                                                      t = n_7(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(b_6, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = o_7(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(b_6, "huge"))
                                                                                                                                            {
                                                                                                                                              t = p_7(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(b_6, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = q_7(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(b_6, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      c_6 = ATgetArgument(b_6, 0);
                                                                                                                                                      t = r_7(t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
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
                                                }
                                              else
                                                {
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
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm b_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_g_15;
            LocalPopChoice(d_15);
          }
        else
          {
            t = b_15;
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = term_j_15;
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  {
                    ATerm k_15 = t;
                    int m_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_q_15;
                        LocalPopChoice(m_15);
                      }
                    else
                      {
                        t = k_15;
                        {
                          ATerm r_15 = t;
                          int s_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_t_15;
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              {
                                t = CSEP_0(t);
                                t = term_w_15;
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
ATerm bottomup_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    t = _all(t, t_7);
    t = q_62(t);
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
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm z_15 = t;
        int e_16 = stack_ptr;
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
                      ATerm f_16 = t;
                      int i_16 = stack_ptr;
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
                          LocalPopChoice(i_16);
                        }
                      else
                        {
                          t = f_16;
                          t = j_8(t);
                        }
                    }
                  }
                else
                  {
                    t = j_8(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(e_16);
          }
        else
          {
            t = z_15;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    k_8 :
    if(!(match_int(r_8, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm s_8 = NULL;
    s_8 = t;
    if(((q_8 != NULL) && (q_8 != s_8)))
      _fail(s_8);
    else
      q_8 = s_8;
    return(t);
  }
  t = Cons_2(t, s_0, t_0);
  {
    ATerm y_8 = NULL;
    t = not_null(q_8);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
        u_8 = t;
        n_8 :
        if(((ATgetType(u_8) == AT_LIST) && ((ATermList) u_8 != ATempty)))
          {
            v_8 = ATgetFirst((ATermList) u_8);
            w_8 = (ATerm) ATgetNext((ATermList) u_8);
            o_8 :
            if(match_int(v_8, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_8)), term_l_16), term_l_16);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = at_suffix_1(t, u_0);
      {
        y_8 = t;
        if(((t_8 != NULL) && (t_8 != y_8)))
          _fail(y_8);
        else
          t_8 = y_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_8)), term_o_16), term_o_16);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm c_9 (ATerm t)
  {
    t = u_60(t);
    {
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          t = Cons_2(t, _id, c_9);
        }
    }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL;
      v_9 = t;
      {
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(u_9));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
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
                ATerm w_9 = NULL;
                w_9 = t;
                t_9 :
                if(match_int(w_9, 32))
                  {
                    t = term_v_16;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(w_9, 35))
                      {
                        t = term_w_16;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(w_9, 36))
                          {
                            t = term_x_16;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(w_9, 37))
                              {
                                t = term_b_17;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(w_9, 38))
                                  {
                                    t = term_c_17;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(w_9, 45))
                                      {
                                        t = term_d_17;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(w_9, 60))
                                          {
                                            t = term_f_17;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(w_9, 62))
                                              {
                                                t = term_h_17;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(w_9, 92))
                                                  {
                                                    t = term_i_17;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(w_9, 94))
                                                      {
                                                        t = term_j_17;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(w_9, 95))
                                                          {
                                                            t = term_k_17;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(w_9, 123))
                                                              {
                                                                t = term_l_17;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(w_9, 124))
                                                                  {
                                                                    t = term_o_17;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(w_9, 125))
                                                                      {
                                                                        t = term_p_17;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(w_9, 126))
                                                                          {
                                                                            t = term_q_17;
                                                                            t = explode_string_0(t);
                                                                          }
                                                                        else
                                                                          {
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
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(((ATgetType(p_10) == AT_LIST) && ((ATermList) p_10 != ATempty)))
    {
      q_10 = ATgetFirst((ATermList) p_10);
      r_10 = (ATerm) ATgetNext((ATermList) p_10);
      t = not_null(r_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm v_10 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_67, _id);
        {
          t = Tl_0(t);
          t = v_10(t);
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
  t = v_10(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_60(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = Cons_2(t, _id, w_10);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm c_11 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm b_11 = NULL;
    b_11 = t;
    x_10 :
    if(!(match_int(b_11, 9)))
      {
        if(!(match_int(b_11, 32)))
          {
            _fail(t);
          }
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
          ATerm d_11 = NULL;
          d_11 = t;
          y_10 :
          if(!(match_int(d_11, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_11 = NULL;
            e_11 = t;
            z_10 :
            if(!(match_int(e_11, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            ATerm f_11 = NULL;
            f_11 = t;
            if(((c_11 != NULL) && (c_11 != f_11)))
              _fail(f_11);
            else
              c_11 = f_11;
            return(t);
          }
          t = Cons_2(t, d_1, e_1);
          return(t);
        }
        t = Cons_2(t, b_1, c_1);
        t = not_null(c_11);
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
        ATerm y_12 (ATerm t)
        {
          ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
          ATerm b_13 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(v_11)));
            t = y_12(t);
            return(t);
          }
          t_11 = t;
          n_11 :
          if(match_cons(t_11, sym__2))
            {
              u_11 = ATgetArgument(t_11, 0);
              x_11 = ATgetArgument(t_11, 1);
              o_11 :
              if(((ATermList) u_11 == ATempty))
                {
                  {
                    ATerm b_12 = NULL;
                    ATerm c_12 = NULL;
                    t = not_null(x_11);
                    {
                      t = LatexComment_0(t);
                      {
                        c_12 = t;
                        if(((b_12 != NULL) && (b_12 != c_12)))
                          _fail(c_12);
                        else
                          b_12 = c_12;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(b_12));
                  }
                }
              else
                {
                  if(((ATgetType(u_11) == AT_LIST) && ((ATermList) u_11 != ATempty)))
                    {
                      v_11 = ATgetFirst((ATermList) u_11);
                      w_11 = (ATerm) ATgetNext((ATermList) u_11);
                      p_11 :
                      if(match_int(v_11, 10))
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_12 = NULL,i_12 = NULL;
                              ATerm c_18;
                              c_18 = t;
                              {
                                ATerm h_12 = NULL;
                                t = not_null(x_11);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    h_12 = t;
                                    if(((g_12 != NULL) && (g_12 != h_12)))
                                      _fail(h_12);
                                    else
                                      g_12 = h_12;
                                  }
                                }
                              }
                              t = c_18;
                              {
                                ATerm j_12 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), (ATerm) ATempty);
                                {
                                  t = y_12(t);
                                  {
                                    j_12 = t;
                                    if(((i_12 != NULL) && (i_12 != j_12)))
                                      _fail(j_12);
                                    else
                                      i_12 = j_12;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(i_12)), not_null(g_12));
                              }
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              t = b_13(t);
                            }
                        }
                      else
                        {
                          t = b_13(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = y_12(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm u_12 = NULL;
            u_12 = t;
            q_11 :
            if(!(match_string(u_12, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, g_1);
          {
            t = reverse_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm v_12 = NULL;
                v_12 = t;
                r_11 :
                if(!(match_string(v_12, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, h_1);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm w_12 = NULL;
                  w_12 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_18), not_null(w_12));
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
  ATerm k_13 = NULL;
  k_13 = t;
  j_13 :
  if(!(match_cons(k_13, sym_MATH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  l_13 :
  if(!(match_cons(m_13, sym_NUM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  n_13 :
  if(!(match_cons(o_13, sym_VAR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  p_13 :
  if(!(match_cons(q_13, sym_KW_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  r_13 :
  if(!(match_cons(s_13, sym_CL_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_FFID_2))
    {
      y_13 = ATgetArgument(x_13, 0);
      z_13 = ATgetArgument(x_13, 1);
      {
        ATerm d_14 = NULL;
        t = not_null(y_13);
        {
          ATerm f_14 = NULL;
          t = x_43(t);
          {
            d_14 = t;
            {
              t = not_null(z_13);
              {
                t = y_43(t);
                {
                  f_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(d_14), not_null(f_14));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  k_14 :
  if(!(match_cons(l_14, sym_SZ_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  m_14 :
  if(!(match_cons(n_14, sym_SH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  o_14 :
  if(!(match_cons(p_14, sym_SE_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  q_14 :
  if(!(match_cons(r_14, sym_FM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm f_18 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_18;
      }
    return(t);
  }
  t = filter_1(t, j_1);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_g_18;
      return(t);
    }
    t = separate_by_1(t, l_1);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  s_14 :
  if(!(match_cons(c_15, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm f_15 = NULL;
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
          return(t);
        }
        t = SOpt_2(t, HS_0, w_1);
        return(t);
      }
      t = fetch_1(t, n_1);
      t = not_null(e_15);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = term_j_18;
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  l_15 :
  if(((ATgetType(n_15) == AT_LIST) && ((ATermList) n_15 != ATempty)))
    {
      o_15 = ATgetFirst((ATermList) n_15);
      p_15 = (ATerm) ATgetNext((ATermList) n_15);
      {
        ATerm u_15 = NULL;
        ATerm v_15 = NULL;
        t = term_k_18;
        {
          t = i_61(t);
          {
            v_15 = t;
            if(((u_15 != NULL) && (u_15 != v_15)))
              _fail(v_15);
            else
              u_15 = v_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_15)), not_null(o_15)), not_null(u_15));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm t_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_18);
            }
          else
            {
              t = t_18;
              {
                t = Cons_2(t, _id, x_1);
                t = Sep_1(t, j_61);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, x_1);
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm h_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = filter_1(t, s_53);
              return(t);
            }
            t = Cons_2(t, s_53, y_1);
            LocalPopChoice(j_19);
          }
        else
          {
            t = h_19;
            {
              ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
              b_16 = t;
              a_16 :
              if(((ATgetType(b_16) == AT_LIST) && ((ATermList) b_16 != ATempty)))
                {
                  c_16 = ATgetFirst((ATermList) b_16);
                  d_16 = (ATerm) ATgetNext((ATermList) b_16);
                  {
                    t = not_null(d_16);
                    t = filter_1(t, s_53);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  g_16 :
  if(!(match_cons(h_16, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm k_16 = NULL;
          k_16 = t;
          if(((j_16 != NULL) && (j_16 != k_16)))
            _fail(k_16);
          else
            j_16 = k_16;
          return(t);
        }
        t = SOpt_2(t, IS_0, e_2);
        return(t);
      }
      t = fetch_1(t, d_2);
      t = not_null(j_16);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      t = term_m_19;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  m_16 :
  if(!(match_cons(n_16, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  t_16 :
  if(match_cons(y_16, sym_SOpt_2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      {
        ATerm e_17 = NULL;
        t = not_null(z_16);
        {
          ATerm g_17 = NULL;
          t = a_43(t);
          {
            e_17 = t;
            {
              t = not_null(a_17);
              {
                t = b_43(t);
                {
                  g_17 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(e_17), not_null(g_17));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm m_17 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm n_17 = NULL;
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
          return(t);
        }
        t = SOpt_2(t, VS_0, g_2);
        return(t);
      }
      t = fetch_1(t, f_2);
      t = not_null(m_17);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = term_m_19;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_C_2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        ATerm b_18 = NULL;
        t = not_null(v_17);
        {
          ATerm d_18 = NULL;
          t = g_44(t);
          {
            b_18 = t;
            {
              t = not_null(w_17);
              {
                t = h_44(t);
                {
                  d_18 = t;
                  t = (ATerm) ATmakeAppl(sym_C_2, not_null(b_18), not_null(d_18));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_row_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym_R_2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      {
        t = not_null(q_18);
        {
          ATerm i_19 (ATerm t)
          {
            ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
            ATerm y_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_19);
              }
            else
              {
                t = y_19;
                {
                  ATerm a_20 = t;
                  int b_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(b_20);
                    }
                  else
                    {
                      t = a_20;
                      {
                        ATerm c_20 = t;
                        int d_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm m_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, i_19);
                              return(t);
                            }
                            t = Cons_2(t, h_2, m_2);
                            LocalPopChoice(d_20);
                          }
                        else
                          {
                            t = c_20;
                            {
                              ATerm e_20 = t;
                              int f_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_2 (ATerm t)
                                  {
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, o_2, i_19);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, n_2);
                                  LocalPopChoice(f_20);
                                }
                              else
                                {
                                  t = e_20;
                                  {
                                    ATerm x_18 = NULL,z_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
                                    x_18 = t;
                                    l_18 :
                                    if(((ATgetType(x_18) == AT_LIST) && ((ATermList) x_18 != ATempty)))
                                      {
                                        z_18 = ATgetFirst((ATermList) x_18);
                                        c_19 = (ATerm) ATgetNext((ATermList) x_18);
                                        m_18 :
                                        if(((ATgetType(c_19) == AT_LIST) && ((ATermList) c_19 != ATempty)))
                                          {
                                            d_19 = ATgetFirst((ATermList) c_19);
                                            e_19 = (ATerm) ATgetNext((ATermList) c_19);
                                            {
                                              ATerm f_19 = NULL;
                                              if(((u_18 != NULL) && (u_18 != z_18)))
                                                _fail(z_18);
                                              else
                                                u_18 = z_18;
                                              {
                                                if(((v_18 != NULL) && (v_18 != d_19)))
                                                  _fail(d_19);
                                                else
                                                  v_18 = d_19;
                                                {
                                                  if(((w_18 != NULL) && (w_18 != e_19)))
                                                    _fail(e_19);
                                                  else
                                                    w_18 = e_19;
                                                  {
                                                    ATerm g_19 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(w_18)), not_null(v_18));
                                                    {
                                                      t = i_19(t);
                                                      {
                                                        g_19 = t;
                                                        if(((f_19 != NULL) && (f_19 != g_19)))
                                                          _fail(g_19);
                                                        else
                                                          f_19 = g_19;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_19)), term_g_20), not_null(u_18));
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
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
            return(t);
          }
          t = i_19(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
      q_19 = t;
      n_19 :
      if(match_cons(q_19, sym_LBL_2))
        {
          r_19 = ATgetArgument(q_19, 0);
          s_19 = ATgetArgument(q_19, 1);
          {
            ATerm t_19 = NULL;
            if(((o_19 != NULL) && (o_19 != r_19)))
              _fail(r_19);
            else
              o_19 = r_19;
            {
              if(((p_19 != NULL) && (p_19 != s_19)))
                _fail(s_19);
              else
                p_19 = s_19;
              {
                t = not_null(p_19);
                {
                  t = table_row_0(t);
                  {
                    ATerm u_19 = NULL;
                    t = not_null(p_19);
                    {
                      t = table_row_0(t);
                      {
                        u_19 = t;
                        if(((t_19 != NULL) && (t_19 != u_19)))
                          _fail(u_19);
                        else
                          t_19 = u_19;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(o_19), not_null(t_19));
                  }
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm x_19 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_60(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = Cons_2(t, _id, x_19);
      }
    return(t);
  }
  t = x_19(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_AOPTIONS_1))
    {
      o_20 = ATgetArgument(n_20, 0);
      {
        t = not_null(o_20);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm q_20 = NULL,r_20 = NULL;
            q_20 = t;
            l_20 :
            if(match_cons(q_20, sym_AL_1))
              {
                r_20 = ATgetArgument(q_20, 0);
                {
                  ATerm t_20 = NULL;
                  ATerm u_20 = NULL,w_20 = NULL;
                  ATerm v_20 = NULL;
                  t = not_null(r_20);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        v_20 = t;
                        if(((u_20 != NULL) && (u_20 != v_20)))
                          _fail(v_20);
                        else
                          u_20 = v_20;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), term_g_18);
                    {
                      t = copy_0(t);
                      {
                        w_20 = t;
                        if(((t_20 != NULL) && (t_20 != w_20)))
                          _fail(w_20);
                        else
                          t_20 = w_20;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_20)), term_p_20);
                }
              }
            else
              {
                if(match_cons(q_20, sym_AC_1))
                  {
                    r_20 = ATgetArgument(q_20, 0);
                    {
                      ATerm y_20 = NULL;
                      ATerm z_20 = NULL,b_21 = NULL;
                      ATerm a_21 = NULL;
                      t = not_null(r_20);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            a_21 = t;
                            if(((z_20 != NULL) && (z_20 != a_21)))
                              _fail(a_21);
                            else
                              z_20 = a_21;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), term_g_18);
                        {
                          t = copy_0(t);
                          {
                            b_21 = t;
                            if(((y_20 != NULL) && (y_20 != b_21)))
                              _fail(b_21);
                            else
                              y_20 = b_21;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_20)), term_s_20);
                    }
                  }
                else
                  {
                    if(match_cons(q_20, sym_AR_1))
                      {
                        r_20 = ATgetArgument(q_20, 0);
                        {
                          ATerm d_21 = NULL;
                          ATerm e_21 = NULL,g_21 = NULL;
                          ATerm f_21 = NULL;
                          t = not_null(r_20);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                f_21 = t;
                                if(((e_21 != NULL) && (e_21 != f_21)))
                                  _fail(f_21);
                                else
                                  e_21 = f_21;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), term_g_18);
                            {
                              t = copy_0(t);
                              {
                                g_21 = t;
                                if(((d_21 != NULL) && (d_21 != g_21)))
                                  _fail(g_21);
                                else
                                  d_21 = g_21;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_21)), term_x_20);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            return(t);
          }
          t = map_1(t, q_2);
          {
            ATerm r_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_g_20);
              return(t);
            }
            t = separate_by_1(t, r_2);
            {
              t = concat_0(t);
              {
                ATerm t_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_c_21);
                  return(t);
                }
                t = at_last_1(t, t_2);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      {
        t = not_null(u_21);
        {
          ATerm u_2 (ATerm t)
          {
            t = not_null(v_21);
            return(t);
          }
          t = at_end_1(t, u_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym__2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(c_22), not_null(d_22));
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = SSL_subtr(not_null(c_22), not_null(d_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      {
        ATerm j_21;
        j_21 = t;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_22), not_null(l_22));
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = SSL_gtr(not_null(k_22), not_null(l_22));
            }
        }
        t = j_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm r_22 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
      s_22 = t;
      q_22 :
      if(match_cons(s_22, sym__2))
        {
          t_22 = ATgetArgument(s_22, 0);
          u_22 = ATgetArgument(s_22, 1);
          {
            if(((r_22 != NULL) && (r_22 != t_22)))
              _fail(t_22);
            else
              r_22 = t_22;
            if(((r_22 != NULL) && (r_22 != u_22)))
              _fail(u_22);
            else
              r_22 = u_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_66(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          t = p_66(t);
          t = w_22(t);
        }
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  t = r_66(t);
  t = while_not_2(t, s_66, t_66);
  return(t);
}
ATerm _2 (ATerm t, ATerm d_36 (ATerm), ATerm e_36 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm g_23 = NULL;
        t = not_null(c_23);
        {
          ATerm i_23 = NULL;
          t = d_36(t);
          {
            g_23 = t;
            {
              t = not_null(d_23);
              {
                t = e_36(t);
                {
                  i_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(i_23));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm w_23 = NULL;
        w_23 = t;
        n_23 :
        if(!(match_int(w_23, 0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, w_2, _id);
      t = (ATerm) ATempty;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
          a_24 = t;
          p_23 :
          if(match_cons(a_24, sym__2))
            {
              b_24 = ATgetArgument(a_24, 0);
              c_24 = ATgetArgument(a_24, 1);
              t = (ATerm) ATmakeAppl(sym__3, not_null(b_24), not_null(c_24), (ATerm) ATempty);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
          f_24 = t;
          r_23 :
          if(match_cons(f_24, sym__3))
            {
              g_24 = ATgetArgument(f_24, 0);
              h_24 = ATgetArgument(f_24, 1);
              i_24 = ATgetArgument(f_24, 2);
              s_23 :
              if(match_int(g_24, 0))
                {
                  t = not_null(i_24);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
          l_24 = t;
          v_23 :
          if(match_cons(l_24, sym__3))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              o_24 = ATgetArgument(l_24, 2);
              {
                ATerm s_24 = NULL;
                ATerm w_21;
                w_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_24), term_d_10);
                  t = geq_0(t);
                }
                t = w_21;
                {
                  ATerm t_24 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_24), term_d_10);
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
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_24), not_null(n_24), (ATerm) ATinsert(CheckATermList(not_null(o_24)), not_null(n_24)));
                }
              }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = for_3(t, z_2, a_3, l_3);
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
ATerm R_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_R_2))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      {
        ATerm u_25 = NULL;
        t = not_null(q_25);
        {
          ATerm w_25 = NULL;
          t = p_43(t);
          {
            u_25 = t;
            {
              t = not_null(r_25);
              {
                t = q_43(t);
                {
                  w_25 = t;
                  t = (ATerm) ATmakeAppl(sym_R_2, not_null(u_25), not_null(w_25));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, n_3);
  {
    ATerm o_27 (ATerm t)
    {
      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
      ATerm r_27 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), (ATerm) ATinsert(CheckATermList(not_null(v_26)), not_null(t_26)));
        t = o_27(t);
        return(t);
      }
      q_26 = t;
      l_26 :
      if(match_cons(q_26, sym__2))
        {
          r_26 = ATgetArgument(q_26, 0);
          v_26 = ATgetArgument(q_26, 1);
          m_26 :
          if(((ATermList) r_26 == ATempty))
            {
              {
                ATerm a_27 = NULL;
                ATerm b_27 = NULL;
                t = not_null(v_26);
                {
                  t = reverse_0(t);
                  {
                    b_27 = t;
                    if(((a_27 != NULL) && (a_27 != b_27)))
                      _fail(b_27);
                    else
                      a_27 = b_27;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(a_27)));
              }
            }
          else
            {
              if(((ATgetType(r_26) == AT_LIST) && ((ATermList) r_26 != ATempty)))
                {
                  t_26 = ATgetFirst((ATermList) r_26);
                  u_26 = (ATerm) ATgetNext((ATermList) r_26);
                  n_26 :
                  if(match_cons(t_26, sym_R_2))
                    {
                      o_26 = ATgetArgument(t_26, 0);
                      p_26 = ATgetArgument(t_26, 1);
                      {
                        ATerm x_21 = t;
                        int y_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_27 = NULL,i_27 = NULL;
                            ATerm z_21;
                            z_21 = t;
                            {
                              ATerm h_27 = NULL;
                              t = not_null(v_26);
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
                            t = z_21;
                            {
                              ATerm j_27 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), (ATerm) ATempty);
                              {
                                t = o_27(t);
                                {
                                  j_27 = t;
                                  if(((i_27 != NULL) && (i_27 != j_27)))
                                    _fail(j_27);
                                  else
                                    i_27 = j_27;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_R_2, not_null(o_26), not_null(p_26))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(g_27)));
                            }
                            LocalPopChoice(y_21);
                          }
                        else
                          {
                            t = x_21;
                            t = r_27(t);
                          }
                      }
                    }
                  else
                    {
                      t = r_27(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = o_27(t);
    {
      ATerm o_3 (ATerm t)
      {
        ATerm e_22 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_22;
          }
        return(t);
      }
      t = filter_1(t, o_3);
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  ATerm e_37 (ATerm t)
  {
    t = not_null(u_29);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm h_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                LocalPopChoice(m_22);
              }
            else
              {
                t = h_22;
                {
                  ATerm n_22 = t;
                  int o_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      LocalPopChoice(o_22);
                    }
                  else
                    {
                      t = n_22;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(u_29), not_null(s_29));
    return(t);
  }
  ATerm f_37 (ATerm t)
  {
    ATerm o_36 = NULL;
    ATerm s_36 = NULL;
    t = not_null(s_29);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_36 = NULL,q_36 = NULL;
        p_36 = t;
        i_29 :
        if(match_cons(p_36, sym_S_1))
          {
            q_36 = ATgetArgument(p_36, 0);
            {
              t = not_null(q_36);
              t = make_latex_comment_0(t);
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, p_3);
      {
        s_36 = t;
        if(((o_36 != NULL) && (o_36 != s_36)))
          _fail(s_36);
        else
          o_36 = s_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(o_36));
    return(t);
  }
  ATerm g_37 (ATerm t)
  {
    t = not_null(u_29);
    t = latex_string_0(t);
    return(t);
  }
  t_29 = t;
  k_29 :
  if(match_cons(t_29, sym_REF_2))
    {
      u_29 = ATgetArgument(t_29, 0);
      s_29 = ATgetArgument(t_29, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(u_29), not_null(s_29));
    }
  else
    {
      if(match_cons(t_29, sym_LBL_2))
        {
          u_29 = ATgetArgument(t_29, 0);
          s_29 = ATgetArgument(t_29, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(u_29), not_null(s_29));
        }
      else
        {
          if(match_cons(t_29, sym_L_2))
            {
              u_29 = ATgetArgument(t_29, 0);
              s_29 = ATgetArgument(t_29, 1);
              {
                ATerm b_30 = NULL;
                ATerm p_22 = t;
                int v_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_30 = NULL;
                    t = not_null(u_29);
                    {
                      t = string_to_int_0(t);
                      {
                        c_30 = t;
                        if(((b_30 != NULL) && (b_30 != c_30)))
                          _fail(c_30);
                        else
                          b_30 = c_30;
                      }
                    }
                    LocalPopChoice(v_22);
                  }
                else
                  {
                    t = p_22;
                    {
                      ATerm x_22 = t;
                      int y_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_30 = NULL;
                          t = not_null(u_29);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm r_3 (ATerm t)
                              {
                                ATerm d_30 = NULL;
                                d_30 = t;
                                j_28 :
                                if(!(match_int(d_30, 61)))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = Cons_2(t, r_3, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, term_z_22);
                                {
                                  t = implode_string_0(t);
                                  {
                                    e_30 = t;
                                    if(((b_30 != NULL) && (b_30 != e_30)))
                                      _fail(e_30);
                                    else
                                      b_30 = e_30;
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(y_22);
                        }
                      else
                        {
                          t = x_22;
                          {
                            ATerm f_30 = NULL;
                            t = not_null(u_29);
                            {
                              f_30 = t;
                              if(((b_30 != NULL) && (b_30 != f_30)))
                                _fail(f_30);
                              else
                                b_30 = f_30;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(b_30), not_null(s_29));
              }
            }
          else
            {
              if(match_cons(t_29, sym_ALT_2))
                {
                  u_29 = ATgetArgument(t_29, 0);
                  s_29 = ATgetArgument(t_29, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(u_29), not_null(s_29));
                }
              else
                {
                  if(match_cons(t_29, sym_A_3))
                    {
                      u_29 = ATgetArgument(t_29, 0);
                      s_29 = ATgetArgument(t_29, 1);
                      o_29 = ATgetArgument(t_29, 2);
                      {
                        ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
                        ATerm q_30 = NULL;
                        t = not_null(o_29);
                        {
                          ATerm r_30 = NULL;
                          t = construct_rows_0(t);
                          {
                            q_30 = t;
                            {
                              if(((o_30 != NULL) && (o_30 != q_30)))
                                _fail(q_30);
                              else
                                o_30 = q_30;
                              {
                                t = not_null(s_29);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm s_30 = NULL,w_30 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      r_30 = t;
                                      {
                                        if(((l_30 != NULL) && (l_30 != r_30)))
                                          _fail(r_30);
                                        else
                                          l_30 = r_30;
                                        {
                                          ATerm v_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), term_c_21);
                                          {
                                            t = copy_0(t);
                                            {
                                              v_30 = t;
                                              if(((s_30 != NULL) && (s_30 != v_30)))
                                                _fail(v_30);
                                              else
                                                s_30 = v_30;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), (ATerm) ATinsert(ATinsert(ATempty, term_e_18), term_c_21));
                                            {
                                              ATerm x_30 = NULL;
                                              t = conc_0(t);
                                              {
                                                w_30 = t;
                                                {
                                                  if(((n_30 != NULL) && (n_30 != w_30)))
                                                    _fail(w_30);
                                                  else
                                                    n_30 = w_30;
                                                  {
                                                    t = not_null(u_29);
                                                    {
                                                      ATerm y_30 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        x_30 = t;
                                                        {
                                                          if(((m_30 != NULL) && (m_30 != x_30)))
                                                            _fail(x_30);
                                                          else
                                                            m_30 = x_30;
                                                          {
                                                            t = not_null(o_30);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm s_3 (ATerm t)
                                                                {
                                                                  t = not_null(n_30);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, s_3);
                                                                {
                                                                  y_30 = t;
                                                                  if(((p_30 != NULL) && (p_30 != y_30)))
                                                                    _fail(y_30);
                                                                  else
                                                                    p_30 = y_30;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(m_30), not_null(p_30));
                      }
                    }
                  else
                    {
                      if(match_cons(t_29, sym_HV_2))
                        {
                          u_29 = ATgetArgument(t_29, 0);
                          s_29 = ATgetArgument(t_29, 1);
                          {
                            ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
                            ATerm i_31 = NULL;
                            t = not_null(u_29);
                            {
                              ATerm j_31 = NULL;
                              t = Hspace_0(t);
                              {
                                i_31 = t;
                                {
                                  if(((b_31 != NULL) && (b_31 != i_31)))
                                    _fail(i_31);
                                  else
                                    b_31 = i_31;
                                  {
                                    t = not_null(u_29);
                                    {
                                      ATerm k_31 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        j_31 = t;
                                        {
                                          if(((c_31 != NULL) && (c_31 != j_31)))
                                            _fail(j_31);
                                          else
                                            c_31 = j_31;
                                          {
                                            t = not_null(u_29);
                                            {
                                              ATerm l_31 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                k_31 = t;
                                                {
                                                  if(((d_31 != NULL) && (d_31 != k_31)))
                                                    _fail(k_31);
                                                  else
                                                    d_31 = k_31;
                                                  {
                                                    t = not_null(s_29);
                                                    {
                                                      ATerm t_3 (ATerm t)
                                                      {
                                                        ATerm e_23 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = e_23;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, t_3);
                                                      {
                                                        ATerm u_3 (ATerm t)
                                                        {
                                                          t = term_f_23;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, u_3);
                                                        {
                                                          l_31 = t;
                                                          if(((e_31 != NULL) && (e_31 != l_31)))
                                                            _fail(l_31);
                                                          else
                                                            e_31 = l_31;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(b_31), not_null(c_31), not_null(d_31), not_null(e_31));
                          }
                        }
                      else
                        {
                          if(match_cons(t_29, sym_V_2))
                            {
                              u_29 = ATgetArgument(t_29, 0);
                              s_29 = ATgetArgument(t_29, 1);
                              {
                                ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
                                ATerm x_31 = NULL;
                                t = not_null(u_29);
                                {
                                  ATerm y_31 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    x_31 = t;
                                    {
                                      if(((u_31 != NULL) && (u_31 != x_31)))
                                        _fail(x_31);
                                      else
                                        u_31 = x_31;
                                      {
                                        t = not_null(u_29);
                                        {
                                          ATerm z_31 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            y_31 = t;
                                            {
                                              if(((v_31 != NULL) && (v_31 != y_31)))
                                                _fail(y_31);
                                              else
                                                v_31 = y_31;
                                              {
                                                t = not_null(s_29);
                                                {
                                                  ATerm v_3 (ATerm t)
                                                  {
                                                    ATerm h_23 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = h_23;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, v_3);
                                                  {
                                                    ATerm w_3 (ATerm t)
                                                    {
                                                      t = term_j_23;
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, w_3);
                                                    {
                                                      z_31 = t;
                                                      if(((w_31 != NULL) && (w_31 != z_31)))
                                                        _fail(z_31);
                                                      else
                                                        w_31 = z_31;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(u_31), not_null(v_31), not_null(w_31));
                              }
                            }
                          else
                            {
                              if(match_cons(t_29, sym_H_2))
                                {
                                  u_29 = ATgetArgument(t_29, 0);
                                  s_29 = ATgetArgument(t_29, 1);
                                  {
                                    ATerm c_32 = NULL,d_32 = NULL;
                                    ATerm e_32 = NULL;
                                    t = not_null(u_29);
                                    {
                                      ATerm f_32 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        e_32 = t;
                                        {
                                          if(((c_32 != NULL) && (c_32 != e_32)))
                                            _fail(e_32);
                                          else
                                            c_32 = e_32;
                                          {
                                            t = not_null(s_29);
                                            {
                                              t = toh_0(t);
                                              {
                                                f_32 = t;
                                                if(((d_32 != NULL) && (d_32 != f_32)))
                                                  _fail(f_32);
                                                else
                                                  d_32 = f_32;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(c_32), not_null(d_32));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t_29, sym_FBOX_2))
                                    {
                                      u_29 = ATgetArgument(t_29, 0);
                                      s_29 = ATgetArgument(t_29, 1);
                                      l_29 :
                                      if(match_cons(u_29, sym_F_1))
                                        {
                                          r_29 = ATgetArgument(u_29, 0);
                                          m_29 :
                                          if(((ATgetType(r_29) == AT_LIST) && ((ATermList) r_29 != ATempty)))
                                            {
                                              p_29 = ATgetFirst((ATermList) r_29);
                                              q_29 = (ATerm) ATgetNext((ATermList) r_29);
                                              {
                                                ATerm k_23 = t;
                                                int l_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm j_32 = NULL,k_32 = NULL;
                                                    t = not_null(p_29);
                                                    {
                                                      ATerm m_23 = t;
                                                      int o_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_3 (ATerm t)
                                                          {
                                                            ATerm c_36 = NULL;
                                                            c_36 = t;
                                                            if(((k_32 != NULL) && (k_32 != c_36)))
                                                              _fail(c_36);
                                                            else
                                                              k_32 = c_36;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, x_3);
                                                          LocalPopChoice(o_23);
                                                        }
                                                      else
                                                        {
                                                          t = m_23;
                                                          {
                                                            ATerm q_23 = t;
                                                            int t_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_3 (ATerm t)
                                                                {
                                                                  ATerm f_36 = NULL;
                                                                  f_36 = t;
                                                                  if(((k_32 != NULL) && (k_32 != f_36)))
                                                                    _fail(f_36);
                                                                  else
                                                                    k_32 = f_36;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, y_3);
                                                                LocalPopChoice(t_23);
                                                              }
                                                            else
                                                              {
                                                                t = q_23;
                                                                {
                                                                  ATerm u_23 = t;
                                                                  int x_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm z_3 (ATerm t)
                                                                      {
                                                                        ATerm g_36 = NULL;
                                                                        g_36 = t;
                                                                        if(((k_32 != NULL) && (k_32 != g_36)))
                                                                          _fail(g_36);
                                                                        else
                                                                          k_32 = g_36;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, z_3);
                                                                      LocalPopChoice(x_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_23;
                                                                      {
                                                                        ATerm y_23 = t;
                                                                        int z_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm a_4 (ATerm t)
                                                                            {
                                                                              ATerm h_36 = NULL;
                                                                              h_36 = t;
                                                                              if(((k_32 != NULL) && (k_32 != h_36)))
                                                                                _fail(h_36);
                                                                              else
                                                                                k_32 = h_36;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, a_4);
                                                                            LocalPopChoice(z_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_23;
                                                                            {
                                                                              ATerm j_36 = NULL;
                                                                              ATerm b_4 (ATerm t)
                                                                              {
                                                                                ATerm i_36 = NULL;
                                                                                i_36 = t;
                                                                                if(((j_32 != NULL) && (j_32 != i_36)))
                                                                                  _fail(i_36);
                                                                                else
                                                                                  j_32 = i_36;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, b_4);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(j_32));
                                                                                {
                                                                                  j_36 = t;
                                                                                  if(((k_32 != NULL) && (k_32 != j_36)))
                                                                                    _fail(j_36);
                                                                                  else
                                                                                    k_32 = j_36;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(k_32), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(q_29)), not_null(s_29)));
                                                    LocalPopChoice(l_23);
                                                  }
                                                else
                                                  {
                                                    t = k_23;
                                                    t = e_37(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATermList) r_29 == ATempty))
                                                {
                                                  {
                                                    ATerm d_24 = t;
                                                    int e_24 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(s_29);
                                                        LocalPopChoice(e_24);
                                                      }
                                                    else
                                                      {
                                                        t = d_24;
                                                        t = e_37(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  t = e_37(t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = e_37(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t_29, sym_C_2))
                                        {
                                          u_29 = ATgetArgument(t_29, 0);
                                          s_29 = ATgetArgument(t_29, 1);
                                          n_29 :
                                          if(((ATermList) u_29 == ATempty))
                                            {
                                              t = f_37(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t_29, sym_S_1))
                                            {
                                              u_29 = ATgetArgument(t_29, 0);
                                              t = g_37(t);
                                            }
                                          else
                                            {
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
  return(t);
}
ATerm abox2latex_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm m_38 = NULL;
  ATerm o_38 = NULL,q_38 = NULL;
  m_38 = t;
  {
    ATerm j_24;
    j_24 = t;
    {
      ATerm p_38 = NULL;
      t = term_k_18;
      {
        t = p_67(t);
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
      }
    }
    t = j_24;
    {
      ATerm r_38 = NULL;
      t = not_null(m_38);
      {
        ATerm c_4 (ATerm t)
        {
          t = try_1(t, Abox2latex_0);
          return(t);
        }
        t = topdown_1(t, c_4);
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(o_38)), not_null(q_38));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_49 (ATerm))
{
  t = fetch_1(t, m_49);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  {
    ATerm h_39 = NULL;
    ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
    t = not_null(c_39);
    {
      h_39 = t;
      {
        t = SSL_explode_term(not_null(h_39));
        {
          j_39 = t;
          y_38 :
          if(match_cons(j_39, sym__2))
            {
              k_39 = ATgetArgument(j_39, 0);
              l_39 = ATgetArgument(j_39, 1);
              z_38 :
              if(match_string(k_39, ""))
                {
                  a_39 :
                  if(((ATgetType(l_39) == AT_LIST) && ((ATermList) l_39 != ATempty)))
                    {
                      m_39 = ATgetFirst((ATermList) l_39);
                      n_39 = (ATerm) ATgetNext((ATermList) l_39);
                      b_39 :
                      if(((ATgetType(n_39) == AT_LIST) && ((ATermList) n_39 != ATempty)))
                        {
                          o_39 = ATgetFirst((ATermList) n_39);
                          p_39 = (ATerm) ATgetNext((ATermList) n_39);
                          {
                            if(((e_39 != NULL) && (e_39 != m_39)))
                              _fail(m_39);
                            else
                              e_39 = m_39;
                            {
                              if(((g_39 != NULL) && (g_39 != o_39)))
                                _fail(o_39);
                              else
                                g_39 = o_39;
                              if(((f_39 != NULL) && (f_39 != p_39)))
                                _fail(p_39);
                              else
                                f_39 = p_39;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(g_39);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_39 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 (ATerm t)
        {
          ATerm x_39 = NULL,y_39 = NULL;
          x_39 = t;
          u_39 :
          if(match_cons(x_39, sym_Input_1))
            {
              y_39 = ATgetArgument(x_39, 0);
              if(((w_39 != NULL) && (w_39 != y_39)))
                _fail(y_39);
              else
                w_39 = y_39;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_4);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        {
          ATerm z_39 = NULL;
          t = term_r_24;
          {
            z_39 = t;
            if(((w_39 != NULL) && (w_39 != z_39)))
              _fail(z_39);
            else
              w_39 = z_39;
          }
        }
      }
  }
  t = k_24;
  {
    ATerm e_4 (ATerm t)
    {
      t = not_null(w_39);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_4);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
    g_40 = t;
    d_40 :
    if(((ATgetType(g_40) == AT_LIST) && ((ATermList) g_40 != ATempty)))
      {
        h_40 = ATgetFirst((ATermList) g_40);
        i_40 = (ATerm) ATgetNext((ATermList) g_40);
        e_40 :
        if(((ATgetType(i_40) == AT_LIST) && ((ATermList) i_40 != ATempty)))
          {
            j_40 = ATgetFirst((ATermList) i_40);
            k_40 = (ATerm) ATgetNext((ATermList) i_40);
            f_40 :
            if(((ATermList) k_40 == ATempty))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_16, not_null(h_40), not_null(j_40));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, f_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  t = SSL_ReadFromFile(not_null(p_40));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  t = SSL_table_create(not_null(t_40));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm u_24;
  u_24 = t;
  {
    t = term_u_16;
    t = table_create_0(t);
  }
  t = u_24;
  {
    t = reverse_0(t);
    {
      ATerm g_4 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, g_4);
    }
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm w_40 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_60, _id);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Cons_2(t, _id, w_40);
      }
    return(t);
  }
  t = w_40(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(((ATgetType(a_41) == AT_LIST) && ((ATermList) a_41 != ATempty)))
    {
      b_41 = ATgetFirst((ATermList) a_41);
      c_41 = (ATerm) ATgetNext((ATermList) a_41);
      {
        t = q_55(t);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm f_41 = NULL;
            f_41 = t;
            if(((b_41 != NULL) && (b_41 != f_41)))
              _fail(f_41);
            else
              b_41 = f_41;
            return(t);
          }
          t = fetch_1(t, h_4);
        }
        t = not_null(c_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      {
        t = not_null(l_41);
        {
          ATerm q_41 (ATerm t)
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_41);
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
                {
                  ATerm a_25 = t;
                  int b_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_4 (ATerm t)
                      {
                        t = not_null(m_41);
                        return(t);
                      }
                      t = HdMember_1(t, i_4);
                      t = q_41(t);
                      LocalPopChoice(b_25);
                    }
                  else
                    {
                      t = a_25;
                      t = Cons_2(t, _id, q_41);
                    }
                }
              }
            return(t);
          }
          t = q_41(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_54(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
        v_41 = t;
        u_41 :
        if(((ATgetType(v_41) == AT_LIST) && ((ATermList) v_41 != ATempty)))
          {
            w_41 = ATgetFirst((ATermList) v_41);
            x_41 = (ATerm) ATgetNext((ATermList) v_41);
            {
              ATerm a_42 = NULL,c_42 = NULL;
              ATerm e_25;
              e_25 = t;
              {
                ATerm b_42 = NULL;
                t = not_null(w_41);
                {
                  t = q_54(t);
                  {
                    b_42 = t;
                    if(((a_42 != NULL) && (a_42 != b_42)))
                      _fail(b_42);
                    else
                      a_42 = b_42;
                  }
                }
              }
              t = e_25;
              {
                ATerm d_42 = NULL;
                t = not_null(x_41);
                {
                  t = foldr_3(t, o_54, p_54, q_54);
                  {
                    d_42 = t;
                    if(((c_42 != NULL) && (c_42 != d_42)))
                      _fail(d_42);
                    else
                      c_42 = d_42;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_42), not_null(c_42));
                  t = p_54(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm l_42 = NULL;
  ATerm n_42 = NULL;
  l_42 = t;
  {
    ATerm o_42 = NULL;
    ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
    t = not_null(l_42);
    {
      o_42 = t;
      {
        t = SSL_explode_term(not_null(o_42));
        {
          q_42 = t;
          k_42 :
          if(match_cons(q_42, sym__2))
            {
              r_42 = ATgetArgument(q_42, 0);
              s_42 = ATgetArgument(q_42, 1);
              if(((n_42 != NULL) && (n_42 != s_42)))
                _fail(s_42);
              else
                n_42 = s_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_42);
      t = foldr_3(t, b_56, c_56, d_56);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm z_42 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL;
        ATerm y_42 = NULL;
        t = p_56(t);
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        t = (ATerm) ATinsert(ATempty, not_null(x_42));
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm j_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, j_4, union_0, z_42);
        }
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm r_56 (ATerm))
{
  t = collect_om_1(t, r_56);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_51 (ATerm))
{
  ATerm h_25;
  h_25 = t;
  {
    ATerm f_43 = NULL,h_43 = NULL;
    ATerm i_25;
    i_25 = t;
    {
      ATerm g_43 = NULL;
      t = d_51(t);
      {
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
      }
    }
    t = i_25;
    {
      ATerm i_43 = NULL;
      i_43 = t;
      if(((h_43 != NULL) && (h_43 != i_43)))
        _fail(i_43);
      else
        h_43 = i_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_43)), not_null(f_43)));
        t = printnl_0(t);
      }
    }
  }
  t = h_25;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm j_25;
  j_25 = t;
  {
    t = k_51(t);
    {
      ATerm k_4 (ATerm t)
      {
        t = term_k_25;
        return(t);
      }
      t = debug_1(t, k_4);
    }
  }
  t = j_25;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
      t_43 = t;
      m_43 :
      if(match_cons(t_43, sym__2))
        {
          u_43 = ATgetArgument(t_43, 0);
          v_43 = ATgetArgument(t_43, 1);
          {
            if(((s_43 != NULL) && (s_43 != u_43)))
              _fail(u_43);
            else
              s_43 = u_43;
            {
              if(((r_43 != NULL) && (r_43 != v_43)))
                _fail(v_43);
              else
                r_43 = v_43;
              t = SSL_open_file(not_null(s_43), not_null(r_43));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm w_43 = NULL;
        ATerm z_43 = NULL;
        ATerm l_4 (ATerm t)
        {
          t = term_n_25;
          return(t);
        }
        t = obsolete_1(t, l_4);
        {
          w_43 = t;
          {
            if(((s_43 != NULL) && (s_43 != w_43)))
              _fail(w_43);
            else
              s_43 = w_43;
            {
              ATerm s_25;
              s_25 = t;
              {
                ATerm a_44 = NULL;
                t = term_t_25;
                {
                  a_44 = t;
                  if(((z_43 != NULL) && (z_43 != a_44)))
                    _fail(a_44);
                  else
                    z_43 = a_44;
                }
              }
              t = s_25;
              t = SSL_open_file(not_null(s_43), not_null(z_43));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm j_44 = NULL,k_44 = NULL;
      j_44 = t;
      f_44 :
      if(match_cons(j_44, sym_Program_1))
        {
          k_44 = ATgetArgument(j_44, 0);
          if(((i_44 != NULL) && (i_44 != k_44)))
            _fail(k_44);
          else
            i_44 = k_44;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), not_null(i_44)), term_x_25));
      {
        t = printnl_0(t);
        {
          t = term_h_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_25;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  m_44 :
  if(!(match_cons(n_44, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_4);
  t = h_50(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    t = term_d_26;
    return(t);
  }
  t = ArgOption_3(t, h_49, i_49, o_4);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
  t_44 = t;
  r_44 :
  if(match_string(t_44, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(t_44) == AT_LIST) && ((ATermList) t_44 != ATempty)))
        {
          u_44 = ATgetFirst((ATermList) t_44);
          v_44 = (ATerm) ATgetNext((ATermList) t_44);
          s_44 :
          if(((ATgetType(v_44) == AT_LIST) && ((ATermList) v_44 != ATempty)))
            {
              w_44 = ATgetFirst((ATermList) v_44);
              x_44 = (ATerm) ATgetNext((ATermList) v_44);
              {
                ATerm d_45 = NULL;
                ATerm e_26;
                e_26 = t;
                {
                  t = not_null(u_44);
                  t = i_0(t);
                }
                t = e_26;
                {
                  ATerm e_45 = NULL;
                  t = not_null(w_44);
                  {
                    t = j_0(t);
                    {
                      e_45 = t;
                      if(((d_45 != NULL) && (d_45 != e_45)))
                        _fail(e_45);
                      else
                        d_45 = e_45;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_44)), not_null(d_45));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 (ATerm t)
      {
        ATerm t_45 = NULL;
        t_45 = t;
        i_45 :
        if(!(match_string(t_45, "-S")))
          {
            if(!(match_string(t_45, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = term_h_26;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_i_26;
        return(t);
      }
      t = Option_3(t, p_4, q_4, r_4);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm u_45 = NULL;
              u_45 = t;
              j_45 :
              if(!(match_string(u_45, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              t = term_s_26;
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_w_26;
              return(t);
            }
            t = Option_3(t, s_4, t_4, u_4);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm v_45 = NULL;
                    v_45 = t;
                    k_45 :
                    if(!(match_string(v_45, "-v")))
                      {
                        if(!(match_string(v_45, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_4 (ATerm t)
                  {
                    t = term_z_26;
                    return(t);
                  }
                  ATerm x_4 (ATerm t)
                  {
                    t = term_c_27;
                    return(t);
                  }
                  t = Option_3(t, v_4, w_4, x_4);
                  LocalPopChoice(y_26);
                }
              else
                {
                  t = x_26;
                  {
                    ATerm d_27 = t;
                    int e_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_4 (ATerm t)
                        {
                          ATerm w_45 = NULL;
                          w_45 = t;
                          l_45 :
                          if(!(match_string(w_45, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm z_4 (ATerm t)
                        {
                          ATerm x_45 = NULL;
                          ATerm y_45 = NULL;
                          y_45 = t;
                          if(((x_45 != NULL) && (x_45 != y_45)))
                            _fail(y_45);
                          else
                            x_45 = y_45;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_45));
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
                                ATerm z_45 = NULL;
                                z_45 = t;
                                n_45 :
                                if(!(match_string(z_45, "-i")))
                                  {
                                    if(!(match_string(z_45, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm c_5 (ATerm t)
                              {
                                ATerm a_46 = NULL;
                                ATerm b_46 = NULL;
                                b_46 = t;
                                if(((a_46 != NULL) && (a_46 != b_46)))
                                  _fail(b_46);
                                else
                                  a_46 = b_46;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_46));
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
                                int p_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_5 (ATerm t)
                                    {
                                      ATerm c_46 = NULL;
                                      c_46 = t;
                                      p_45 :
                                      if(!(match_string(c_46, "-o")))
                                        {
                                          if(!(match_string(c_46, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm d_46 = NULL;
                                      ATerm e_46 = NULL;
                                      e_46 = t;
                                      if(((d_46 != NULL) && (d_46 != e_46)))
                                        _fail(e_46);
                                      else
                                        d_46 = e_46;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_46));
                                      return(t);
                                    }
                                    ATerm g_6 (ATerm t)
                                    {
                                      t = term_q_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_5, f_5, g_6);
                                    LocalPopChoice(p_27);
                                  }
                                else
                                  {
                                    t = n_27;
                                    {
                                      ATerm s_27 = t;
                                      int t_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_6 (ATerm t)
                                          {
                                            ATerm f_46 = NULL;
                                            f_46 = t;
                                            r_45 :
                                            if(!(match_string(f_46, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm i_6 (ATerm t)
                                          {
                                            t = term_u_27;
                                            return(t);
                                          }
                                          ATerm j_6 (ATerm t)
                                          {
                                            t = term_v_27;
                                            return(t);
                                          }
                                          t = Option_3(t, h_6, i_6, j_6);
                                          LocalPopChoice(t_27);
                                        }
                                      else
                                        {
                                          t = s_27;
                                          {
                                            ATerm k_6 (ATerm t)
                                            {
                                              ATerm g_46 = NULL;
                                              g_46 = t;
                                              s_45 :
                                              if(!(match_string(g_46, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm l_6 (ATerm t)
                                            {
                                              t = term_w_27;
                                              return(t);
                                            }
                                            ATerm m_6 (ATerm t)
                                            {
                                              t = term_x_27;
                                              return(t);
                                            }
                                            t = Option_3(t, k_6, l_6, m_6);
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
  ATerm l_46 = NULL;
  l_46 = t;
  t = SSL_table_destroy(not_null(l_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  t = SSL_exit(not_null(p_46));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = SSL_implode_string(not_null(t_46));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm w_46 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_46);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          t = Nil_0(t);
          t = g_60(t);
        }
      }
    return(t);
  }
  t = w_46(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
        z_46 = t;
        y_46 :
        if(((ATgetType(z_46) == AT_LIST) && ((ATermList) z_46 != ATempty)))
          {
            a_47 = ATgetFirst((ATermList) z_46);
            b_47 = (ATerm) ATgetNext((ATermList) z_46);
            {
              t = not_null(a_47);
              {
                ATerm n_6 (ATerm t)
                {
                  t = not_null(b_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_6);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  t = SSL_explode_string(not_null(h_47));
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
ATerm long_description_1 (ATerm t, ATerm o_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm k_47 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = Cons_2(t, s_59, k_47);
      }
    return(t);
  }
  t = k_47(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  t_47 = t;
  q_47 :
  if(((ATgetType(t_47) == AT_LIST) && ((ATermList) t_47 != ATempty)))
    {
      r_47 = ATgetFirst((ATermList) t_47);
      s_47 = (ATerm) ATgetNext((ATermList) t_47);
      {
        ATerm w_47 = NULL;
        t = not_null(s_47);
        {
          ATerm e_28;
          e_28 = t;
          {
            ATerm x_47 = NULL,z_47 = NULL,b_48 = NULL;
            ATerm f_28;
            f_28 = t;
            {
              ATerm y_47 = NULL;
              t = h_0(t);
              {
                y_47 = t;
                if(((x_47 != NULL) && (x_47 != y_47)))
                  _fail(y_47);
                else
                  x_47 = y_47;
              }
            }
            t = f_28;
            {
              ATerm a_48 = NULL;
              t = not_null(r_47);
              {
                t = g_0(t);
                {
                  a_48 = t;
                  if(((z_47 != NULL) && (z_47 != a_48)))
                    _fail(a_48);
                  else
                    z_47 = a_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_47)), not_null(z_47));
                {
                  b_48 = t;
                  if(((w_47 != NULL) && (w_47 != b_48)))
                    _fail(b_48);
                  else
                    w_47 = b_48;
                }
              }
            }
          }
          t = e_28;
          {
            ATerm s_7 (ATerm t)
            {
              t = not_null(w_47);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_47 == ATempty))
        {
          {
            t = term_k_18;
            t = h_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_37 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_Program_1))
    {
      l_48 = ATgetArgument(k_48, 0);
      {
        ATerm t_48 = NULL;
        t = not_null(l_48);
        {
          t = m_37(t);
          {
            t_48 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_48));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_49 = NULL;
  ATerm z_7 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm c_49 = NULL;
      c_49 = t;
      if(((b_49 != NULL) && (b_49 != c_49)))
        _fail(c_49);
      else
        b_49 = c_49;
      return(t);
    }
    t = Program_1(t, i_8);
    return(t);
  }
  t = option_defined_1(t, z_7);
  {
    ATerm l_8 (ATerm t)
    {
      ATerm d_49 = NULL;
      ATerm e_49 = NULL;
      t = term_k_18;
      {
        ATerm m_8 (ATerm t)
        {
          t = not_null(b_49);
          return(t);
        }
        t = short_description_1(t, m_8);
        {
          t = concat_strings_0(t);
          {
            e_49 = t;
            if(((d_49 != NULL) && (d_49 != e_49)))
              _fail(e_49);
            else
              d_49 = e_49;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, not_null(d_49)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, term_g_28));
      {
        t = printnl_0(t);
        {
          t = term_k_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_8 (ATerm t)
                {
                  ATerm f_49 = NULL;
                  f_49 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_49)), term_l_28));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_8);
                {
                  ATerm x_8 (ATerm t)
                  {
                    ATerm j_49 = NULL;
                    ATerm k_49 = NULL;
                    t = term_k_18;
                    {
                      ATerm z_8 (ATerm t)
                      {
                        t = not_null(b_49);
                        return(t);
                      }
                      t = long_description_1(t, z_8);
                      {
                        t = concat_strings_0(t);
                        {
                          k_49 = t;
                          if(((j_49 != NULL) && (j_49 != k_49)))
                            _fail(k_49);
                          else
                            j_49 = k_49;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_49)), term_m_28));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_8);
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
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        ATerm n_28;
        n_28 = t;
        t = SSL_printnl(not_null(t_49), not_null(u_49));
        t = n_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_37 (ATerm))
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym_Undefined_1))
    {
      c_50 = ATgetArgument(b_50, 0);
      {
        ATerm e_50 = NULL;
        t = not_null(c_50);
        {
          t = n_37(t);
          {
            e_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_50));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  j_50 :
  if(!(match_cons(k_50, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(match_cons(n_50, sym__2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      t = SSL_table_get(not_null(o_50), not_null(p_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym__3))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      z_50 = ATgetArgument(w_50, 2);
      {
        ATerm o_28;
        o_28 = t;
        {
          ATerm e_51 = NULL;
          ATerm f_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_50), not_null(y_50));
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
                t = (ATerm) ATempty;
              }
            {
              f_51 = t;
              if(((e_51 != NULL) && (e_51 != f_51)))
                _fail(f_51);
              else
                e_51 = f_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_50), not_null(y_50), (ATerm) ATinsert(CheckATermList(not_null(e_51)), not_null(z_50)));
            t = table_put_0(t);
          }
        }
        t = o_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm j_51 = NULL;
  ATerm l_51 = NULL;
  t = term_k_18;
  {
    t = s_48(t);
    {
      l_51 = t;
      if(((j_51 != NULL) && (j_51 != l_51)))
        _fail(l_51);
      else
        j_51 = l_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_i_28, not_null(j_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_string(r_51, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(r_51) == AT_LIST) && ((ATermList) r_51 != ATempty)))
        {
          s_51 = ATgetFirst((ATermList) r_51);
          t_51 = (ATerm) ATgetNext((ATermList) r_51);
          {
            ATerm w_51 = NULL;
            ATerm r_28;
            r_28 = t;
            {
              t = not_null(s_51);
              t = b_0(t);
            }
            t = r_28;
            {
              ATerm x_51 = NULL;
              t = term_k_18;
              {
                t = c_0(t);
                {
                  x_51 = t;
                  if(((w_51 != NULL) && (w_51 != x_51)))
                    _fail(x_51);
                  else
                    w_51 = x_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_51)), not_null(w_51));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm c_52 = NULL;
    c_52 = t;
    b_52 :
    if(!(match_string(c_52, "--help")))
      {
        if(!(match_string(c_52, "-h")))
          {
            if(!(match_string(c_52, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    t = term_s_28;
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    t = term_t_28;
    return(t);
  }
  t = Option_3(t, a_9, b_9, d_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(((ATgetType(f_52) == AT_LIST) && ((ATermList) f_52 != ATempty)))
    {
      g_52 = ATgetFirst((ATermList) f_52);
      h_52 = (ATerm) ATgetNext((ATermList) f_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_52)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_45 (ATerm), ATerm b_45 (ATerm))
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  o_52 :
  if(((ATgetType(p_52) == AT_LIST) && ((ATermList) p_52 != ATempty)))
    {
      q_52 = ATgetFirst((ATermList) p_52);
      r_52 = (ATerm) ATgetNext((ATermList) p_52);
      {
        ATerm u_52 = NULL;
        t = not_null(q_52);
        {
          ATerm w_52 = NULL;
          t = a_45(t);
          {
            u_52 = t;
            {
              t = not_null(r_52);
              {
                t = b_45(t);
                {
                  w_52 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_52)), not_null(u_52));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
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
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_48 (ATerm))
{
  ATerm u_28;
  u_28 = t;
  {
    ATerm e_9 (ATerm t)
    {
      t = term_v_28;
      t = q_48(t);
      return(t);
    }
    t = try_1(t, e_9);
  }
  t = u_28;
  {
    ATerm f_9 (ATerm t)
    {
      ATerm g_53 = NULL;
      g_53 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_53));
      return(t);
    }
    ATerm g_9 (ATerm t)
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              {
                t = q_48(t);
                t = Cons_2(t, _id, g_9);
              }
            }
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_9, g_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,t_53 = NULL;
    p_53 = t;
    l_53 :
    if(match_cons(p_53, sym__3))
      {
        q_53 = ATgetArgument(p_53, 0);
        r_53 = ATgetArgument(p_53, 1);
        t_53 = ATgetArgument(p_53, 2);
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
              if(((o_53 != NULL) && (o_53 != t_53)))
                _fail(t_53);
              else
                o_53 = t_53;
              t = SSL_table_put(not_null(m_53), not_null(n_53), not_null(o_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_48 (ATerm))
{
  ATerm w_53 = NULL;
  ATerm b_29;
  b_29 = t;
  {
    t = term_c_29;
    t = table_put_0(t);
  }
  t = b_29;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_48(t);
          LocalPopChoice(e_29);
        }
      else
        {
          t = d_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_9);
    {
      ATerm i_9 (ATerm t)
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm j_9 (ATerm t)
              {
                ATerm k_9 (ATerm t)
                {
                  ATerm x_53 = NULL;
                  x_53 = t;
                  if(((w_53 != NULL) && (w_53 != x_53)))
                    _fail(x_53);
                  else
                    w_53 = x_53;
                  return(t);
                }
                t = Undefined_1(t, k_9);
                return(t);
              }
              t = option_defined_1(t, j_9);
              {
                ATerm h_29;
                h_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_53)), term_j_29));
                  t = printnl_0(t);
                }
                t = h_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_9);
      {
        ATerm v_29;
        v_29 = t;
        {
          t = term_h_28;
          t = table_destroy_0(t);
        }
        t = v_29;
      }
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm x_54 = NULL,y_54 = NULL;
  ATerm l_9 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 (ATerm t)
              {
                ATerm m_54 = NULL;
                m_54 = t;
                z_53 :
                if(!(match_string(m_54, "-t")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_9 (ATerm t)
              {
                ATerm n_54 = NULL;
                n_54 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(n_54));
                return(t);
              }
              t = ArgOption_2(t, m_9, n_9);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              {
                ATerm o_9 (ATerm t)
                {
                  ATerm s_54 = NULL;
                  s_54 = t;
                  b_54 :
                  if(!(match_string(s_54, "-w")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm p_9 (ATerm t)
                {
                  ATerm t_54 = NULL;
                  t_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(t_54));
                  return(t);
                }
                t = ArgOption_2(t, o_9, p_9);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, l_9);
  {
    v_54 = t;
    {
      ATerm a_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(g_30);
        }
      else
        {
          t = a_30;
          {
            ATerm h_30 = t;
            int i_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_30;
                j_30 = t;
                {
                  ATerm k_30 = t;
                  int t_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_9 (ATerm t)
                      {
                        ATerm z_54 = NULL,a_55 = NULL;
                        z_54 = t;
                        f_54 :
                        if(match_cons(z_54, sym_Output_1))
                          {
                            a_55 = ATgetArgument(z_54, 0);
                            {
                              if(((y_54 != NULL) && (y_54 != a_55)))
                                _fail(a_55);
                              else
                                y_54 = a_55;
                              {
                                t = not_null(y_54);
                                t = open_file_0(t);
                              }
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, q_9);
                      LocalPopChoice(t_30);
                    }
                  else
                    {
                      t = k_30;
                      {
                        ATerm b_55 = NULL;
                        t = term_u_30;
                        {
                          b_55 = t;
                          if(((y_54 != NULL) && (y_54 != b_55)))
                            _fail(b_55);
                          else
                            y_54 = b_55;
                        }
                      }
                    }
                }
                t = j_30;
                {
                  ATerm z_30;
                  z_30 = t;
                  {
                    ATerm r_9 (ATerm t)
                    {
                      ATerm c_55 = NULL,d_55 = NULL;
                      c_55 = t;
                      i_54 :
                      if(match_cons(c_55, sym_LatexTable_1))
                        {
                          d_55 = ATgetArgument(c_55, 0);
                          t = not_null(d_55);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = collect_1(t, r_9);
                    t = load_tables_0(t);
                  }
                  t = z_30;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm a_31 = t;
                        int f_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_31;
                            g_31 = t;
                            {
                              t = not_null(v_54);
                              {
                                ATerm s_9 (ATerm t)
                                {
                                  ATerm f_55 = NULL,g_55 = NULL;
                                  f_55 = t;
                                  k_54 :
                                  if(match_cons(f_55, sym_Width_1))
                                    {
                                      g_55 = ATgetArgument(f_55, 0);
                                      if(((x_54 != NULL) && (x_54 != g_55)))
                                        _fail(g_55);
                                      else
                                        x_54 = g_55;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = option_defined_1(t, s_9);
                              }
                            }
                            t = g_31;
                            {
                              ATerm x_9 (ATerm t)
                              {
                                t = not_null(x_54);
                                return(t);
                              }
                              t = abox2latex_1(t, x_9);
                            }
                            LocalPopChoice(f_31);
                          }
                        else
                          {
                            t = a_31;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm y_9 (ATerm t)
                          {
                            ATerm z_9 (ATerm t)
                            {
                              t = is_string_0(t);
                              {
                                ATerm h_31;
                                h_31 = t;
                                {
                                  ATerm a_10 (ATerm t)
                                  {
                                    t = not_null(y_54);
                                    return(t);
                                  }
                                  ATerm b_10 (ATerm t)
                                  {
                                    ATerm h_55 = NULL;
                                    h_55 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(h_55));
                                    return(t);
                                  }
                                  t = split_2(t, a_10, b_10);
                                  t = print_0(t);
                                }
                                t = h_31;
                              }
                              return(t);
                            }
                            t = try_1(t, z_9);
                            return(t);
                          }
                          t = topdown_1(t, y_9);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(i_30);
              }
            else
              {
                t = h_30;
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
  t = Abox_2_latex_0(t);
  return(t);
}

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
ATerm term_o_32;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_q_27;
ATerm term_e_27;
ATerm term_f_26;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_a_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_f_23;
ATerm term_u_22;
ATerm term_a_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_n_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
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
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
void init_constant_terms (void)
{
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_s_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_stdout_0);
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
ATerm abox2latex_1 (ATerm, ATerm p_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_49 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
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
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_48 (ATerm));
ATerm short_description_1 (ATerm, ATerm n_48 (ATerm));
ATerm Program_1 (ATerm, ATerm m_37 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_37 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_48 (ATerm));
ATerm Option_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_48 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_64 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm u_60 (ATerm));
ATerm table_get_0 (ATerm);
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm m_67 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm k_60 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm map_1 (ATerm, ATerm s_59 (ATerm));
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
ATerm Nil_0 (ATerm);
ATerm filter_1 (ATerm, ATerm s_53 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_60 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm q_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm table_def_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_60 (ATerm));
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
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm construct_rows_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_45 (ATerm), ATerm b_45 (ATerm));
ATerm explode_string_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATempty, term_o_10));
  {
    t = printnl_0(t);
    {
      t = term_q_10;
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
      ATerm r_10 = t;
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
          t = r_10;
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
          t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_10), not_null(q_1)), term_s_10), not_null(p_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_y_10;
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
        ATerm z_10;
        z_10 = t;
        t = SSL_print(not_null(b_2), not_null(c_2));
        t = z_10;
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
  ATerm b_11;
  b_11 = t;
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
  t = b_11;
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
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_66(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(w_5)), term_p_11), not_null(e_6)), term_o_11);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), not_null(w_5)), term_r_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), not_null(w_5)), term_w_11), not_null(t_5)), term_t_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_5)), term_d_12), not_null(u_5)), term_z_11);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_p_11), not_null(u_5)), term_e_12);
        }
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_f_12);
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_g_12);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_k_12);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_l_12);
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_m_12);
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_n_12);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_o_12);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_p_12);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_q_12);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_r_12);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_s_12);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_t_12);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_y_12);
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_z_12);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_a_13);
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_c_13);
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_d_13);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_f_13);
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_g_13);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_h_13);
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_p_13);
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_q_13);
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_r_13);
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(((w_5 != NULL) && (w_5 != d_6)))
          _fail(d_6);
        else
          w_5 = d_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_s_13);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), not_null(w_5)), term_p_11), not_null(v_5)), term_x_13);
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
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_14), not_null(q_5)), term_a_14);
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_14), not_null(q_5)), term_w_11), not_null(l_5)), term_c_14);
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), not_null(q_5)), term_w_11), not_null(m_5)), term_d_14);
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
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), not_null(q_5)), term_w_11), not_null(o_5)), term_p_11), not_null(n_5)), term_m_14);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_14), not_null(q_5)), term_w_11), not_null(o_5)), term_p_11), not_null(n_5)), term_p_11), not_null(m_5)), term_q_14);
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
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_14), not_null(q_5)), term_w_11), not_null(p_5)), term_s_14);
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), not_null(s_5)), term_v_14), not_null(r_5)), term_u_14);
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
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_14), not_null(w_5)), term_x_14);
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
                                              {
                                                ATerm b_15 = t;
                                                int g_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_6(t);
                                                    LocalPopChoice(g_15);
                                                  }
                                                else
                                                  {
                                                    t = b_15;
                                                    t = q_6(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm h_15 = t;
                                          int i_15 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_6(t);
                                              LocalPopChoice(i_15);
                                            }
                                          else
                                            {
                                              t = h_15;
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
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = term_n_15;
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
                  t = R_0(t);
                  t = term_g_16;
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  {
                    ATerm h_16 = t;
                    int i_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = term_j_16;
                        LocalPopChoice(i_16);
                      }
                    else
                      {
                        t = h_16;
                        {
                          ATerm l_16 = t;
                          int m_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = term_n_16;
                              LocalPopChoice(m_16);
                            }
                          else
                            {
                              t = l_16;
                              {
                                t = CSEP_0(t);
                                t = term_p_16;
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
ATerm abox2latex_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm x_7 = NULL;
  ATerm z_7 = NULL,b_8 = NULL;
  x_7 = t;
  {
    ATerm q_16;
    q_16 = t;
    {
      ATerm a_8 = NULL;
      t = term_r_16;
      {
        t = p_67(t);
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
      }
    }
    t = q_16;
    {
      ATerm c_8 = NULL;
      t = not_null(x_7);
      {
        ATerm r_0 (ATerm t)
        {
          t = try_1(t, Abox_2_latex_0);
          return(t);
        }
        t = topdown_1(t, r_0);
        {
          c_8 = t;
          if(((b_8 != NULL) && (b_8 != c_8)))
            _fail(c_8);
          else
            b_8 = c_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(z_7)), not_null(b_8));
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
  ATerm n_8 = NULL;
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  n_8 = t;
  {
    ATerm s_8 = NULL;
    ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
    t = not_null(n_8);
    {
      s_8 = t;
      {
        t = SSL_explode_term(not_null(s_8));
        {
          u_8 = t;
          j_8 :
          if(match_cons(u_8, sym__2))
            {
              v_8 = ATgetArgument(u_8, 0);
              w_8 = ATgetArgument(u_8, 1);
              k_8 :
              if(match_string(v_8, ""))
                {
                  l_8 :
                  if(((ATgetType(w_8) == AT_LIST) && ((ATermList) w_8 != ATempty)))
                    {
                      x_8 = ATgetFirst((ATermList) w_8);
                      y_8 = (ATerm) ATgetNext((ATermList) w_8);
                      m_8 :
                      if(((ATgetType(y_8) == AT_LIST) && ((ATermList) y_8 != ATempty)))
                        {
                          z_8 = ATgetFirst((ATermList) y_8);
                          a_9 = (ATerm) ATgetNext((ATermList) y_8);
                          {
                            if(((p_8 != NULL) && (p_8 != x_8)))
                              _fail(x_8);
                            else
                              p_8 = x_8;
                            {
                              if(((r_8 != NULL) && (r_8 != z_8)))
                                _fail(z_8);
                              else
                                r_8 = z_8;
                              if(((q_8 != NULL) && (q_8 != a_9)))
                                _fail(a_9);
                              else
                                q_8 = a_9;
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
    t = not_null(r_8);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_9 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          ATerm i_9 = NULL,j_9 = NULL;
          i_9 = t;
          f_9 :
          if(match_cons(i_9, sym_Input_1))
            {
              j_9 = ATgetArgument(i_9, 0);
              if(((h_9 != NULL) && (h_9 != j_9)))
                _fail(j_9);
              else
                h_9 = j_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_0);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        {
          ATerm k_9 = NULL;
          t = term_v_16;
          {
            k_9 = t;
            if(((h_9 != NULL) && (h_9 != k_9)))
              _fail(k_9);
            else
              h_9 = k_9;
          }
        }
      }
  }
  t = s_16;
  {
    ATerm t_0 (ATerm t)
    {
      t = not_null(h_9);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_0);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
    r_9 = t;
    o_9 :
    if(((ATgetType(r_9) == AT_LIST) && ((ATermList) r_9 != ATempty)))
      {
        s_9 = ATgetFirst((ATermList) r_9);
        t_9 = (ATerm) ATgetNext((ATermList) r_9);
        p_9 :
        if(((ATgetType(t_9) == AT_LIST) && ((ATermList) t_9 != ATempty)))
          {
            u_9 = ATgetFirst((ATermList) t_9);
            v_9 = (ATerm) ATgetNext((ATermList) t_9);
            q_9 :
            if(((ATermList) v_9 == ATempty))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_16, not_null(s_9), not_null(u_9));
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
  t = map_1(t, u_0);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  t = SSL_ReadFromFile(not_null(a_10));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  t = SSL_table_create(not_null(e_10));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm x_16;
  x_16 = t;
  {
    t = term_w_16;
    t = table_create_0(t);
  }
  t = x_16;
  {
    t = reverse_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  j_10 :
  if(((ATgetType(k_10) == AT_LIST) && ((ATermList) k_10 != ATempty)))
    {
      l_10 = ATgetFirst((ATermList) k_10);
      m_10 = (ATerm) ATgetNext((ATermList) k_10);
      {
        t = q_55(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm p_10 = NULL;
            p_10 = t;
            if(((l_10 != NULL) && (l_10 != p_10)))
              _fail(p_10);
            else
              l_10 = p_10;
            return(t);
          }
          t = fetch_1(t, w_0);
        }
        t = not_null(m_10);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      {
        t = not_null(v_10);
        {
          ATerm a_11 (ATerm t)
          {
            ATerm y_16 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_10);
                LocalPopChoice(c_17);
              }
            else
              {
                t = y_16;
                {
                  ATerm d_17 = t;
                  int f_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = not_null(w_10);
                        return(t);
                      }
                      t = HdMember_1(t, x_0);
                      t = a_11(t);
                      LocalPopChoice(f_17);
                    }
                  else
                    {
                      t = d_17;
                      t = Cons_2(t, _id, a_11);
                    }
                }
              }
            return(t);
          }
          t = a_11(t);
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
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_54(t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
        f_11 = t;
        e_11 :
        if(((ATgetType(f_11) == AT_LIST) && ((ATermList) f_11 != ATempty)))
          {
            g_11 = ATgetFirst((ATermList) f_11);
            h_11 = (ATerm) ATgetNext((ATermList) f_11);
            {
              ATerm k_11 = NULL,m_11 = NULL;
              ATerm i_17;
              i_17 = t;
              {
                ATerm l_11 = NULL;
                t = not_null(g_11);
                {
                  t = q_54(t);
                  {
                    l_11 = t;
                    if(((k_11 != NULL) && (k_11 != l_11)))
                      _fail(l_11);
                    else
                      k_11 = l_11;
                  }
                }
              }
              t = i_17;
              {
                ATerm n_11 = NULL;
                t = not_null(h_11);
                {
                  t = foldr_3(t, o_54, p_54, q_54);
                  {
                    n_11 = t;
                    if(((m_11 != NULL) && (m_11 != n_11)))
                      _fail(n_11);
                    else
                      m_11 = n_11;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_11), not_null(m_11));
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
  ATerm v_11 = NULL;
  ATerm x_11 = NULL;
  v_11 = t;
  {
    ATerm y_11 = NULL;
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
    t = not_null(v_11);
    {
      y_11 = t;
      {
        t = SSL_explode_term(not_null(y_11));
        {
          a_12 = t;
          u_11 :
          if(match_cons(a_12, sym__2))
            {
              b_12 = ATgetArgument(a_12, 0);
              c_12 = ATgetArgument(a_12, 1);
              if(((x_11 != NULL) && (x_11 != c_12)))
                _fail(c_12);
              else
                x_11 = c_12;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_11);
      t = foldr_3(t, b_56, c_56, d_56);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm j_12 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL;
        ATerm i_12 = NULL;
        t = p_56(t);
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
        t = (ATerm) ATinsert(ATempty, not_null(h_12));
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm y_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, y_0, union_0, j_12);
        }
      }
    return(t);
  }
  t = j_12(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm r_56 (ATerm))
{
  t = collect_om_1(t, r_56);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_51 (ATerm))
{
  ATerm l_17;
  l_17 = t;
  {
    ATerm u_12 = NULL,w_12 = NULL;
    ATerm r_17;
    r_17 = t;
    {
      ATerm v_12 = NULL;
      t = d_51(t);
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
    }
    t = r_17;
    {
      ATerm x_12 = NULL;
      x_12 = t;
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_12)), not_null(u_12)));
        t = printnl_0(t);
      }
    }
  }
  t = l_17;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm s_17;
  s_17 = t;
  {
    t = k_51(t);
    {
      ATerm z_0 (ATerm t)
      {
        t = term_v_17;
        return(t);
      }
      t = debug_1(t, z_0);
    }
  }
  t = s_17;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_13 = NULL,i_13 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
      j_13 = t;
      b_13 :
      if(match_cons(j_13, sym__2))
        {
          k_13 = ATgetArgument(j_13, 0);
          l_13 = ATgetArgument(j_13, 1);
          {
            if(((i_13 != NULL) && (i_13 != k_13)))
              _fail(k_13);
            else
              i_13 = k_13;
            {
              if(((e_13 != NULL) && (e_13 != l_13)))
                _fail(l_13);
              else
                e_13 = l_13;
              t = SSL_open_file(not_null(i_13), not_null(e_13));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm m_13 = NULL;
        ATerm n_13 = NULL;
        ATerm a_1 (ATerm t)
        {
          t = term_y_17;
          return(t);
        }
        t = obsolete_1(t, a_1);
        {
          m_13 = t;
          {
            if(((i_13 != NULL) && (i_13 != m_13)))
              _fail(m_13);
            else
              i_13 = m_13;
            {
              ATerm z_17;
              z_17 = t;
              {
                ATerm o_13 = NULL;
                t = term_a_18;
                {
                  o_13 = t;
                  if(((n_13 != NULL) && (n_13 != o_13)))
                    _fail(o_13);
                  else
                    n_13 = o_13;
                }
              }
              t = z_17;
              t = SSL_open_file(not_null(i_13), not_null(n_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm b_18;
  b_18 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm v_13 = NULL,w_13 = NULL;
      v_13 = t;
      t_13 :
      if(match_cons(v_13, sym_Program_1))
        {
          w_13 = ATgetArgument(v_13, 0);
          if(((u_13 != NULL) && (u_13 != w_13)))
            _fail(w_13);
          else
            u_13 = w_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, b_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_18), not_null(u_13)), term_g_18));
      {
        t = printnl_0(t);
        {
          t = term_y_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_18;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  y_13 :
  if(!(match_cons(z_13, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm k_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_18);
            }
          else
            {
              t = k_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_1);
  t = h_50(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    t = term_q_18;
    return(t);
  }
  t = ArgOption_3(t, h_49, i_49, d_1);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  g_14 = t;
  e_14 :
  if(match_string(g_14, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(g_14) == AT_LIST) && ((ATermList) g_14 != ATempty)))
        {
          h_14 = ATgetFirst((ATermList) g_14);
          i_14 = (ATerm) ATgetNext((ATermList) g_14);
          f_14 :
          if(((ATgetType(i_14) == AT_LIST) && ((ATermList) i_14 != ATempty)))
            {
              j_14 = ATgetFirst((ATermList) i_14);
              k_14 = (ATerm) ATgetNext((ATermList) i_14);
              {
                ATerm o_14 = NULL;
                ATerm r_18;
                r_18 = t;
                {
                  t = not_null(h_14);
                  t = i_0(t);
                }
                t = r_18;
                {
                  ATerm p_14 = NULL;
                  t = not_null(j_14);
                  {
                    t = j_0(t);
                    {
                      p_14 = t;
                      if(((o_14 != NULL) && (o_14 != p_14)))
                        _fail(p_14);
                      else
                        o_14 = p_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_14)), not_null(o_14));
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
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm q_15 = NULL;
        q_15 = t;
        c_15 :
        if(!(match_string(q_15, "-S")))
          {
            if(!(match_string(q_15, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_x_18;
        return(t);
      }
      t = Option_3(t, e_1, f_1, g_1);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm t_15 = NULL;
              t_15 = t;
              d_15 :
              if(!(match_string(t_15, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              t = term_a_19;
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_b_19;
              return(t);
            }
            t = Option_3(t, h_1, i_1, j_1);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm u_15 = NULL;
                    u_15 = t;
                    e_15 :
                    if(!(match_string(u_15, "-v")))
                      {
                        if(!(match_string(u_15, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm n_1 (ATerm t)
                  {
                    t = term_j_19;
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = term_m_19;
                    return(t);
                  }
                  t = Option_3(t, l_1, n_1, w_1);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm v_15 = NULL;
                          v_15 = t;
                          f_15 :
                          if(!(match_string(v_15, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          ATerm w_15 = NULL;
                          ATerm x_15 = NULL;
                          x_15 = t;
                          if(((w_15 != NULL) && (w_15 != x_15)))
                            _fail(x_15);
                          else
                            w_15 = x_15;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_15));
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          t = term_r_19;
                          return(t);
                        }
                        t = ArgOption_3(t, x_1, y_1, d_2);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm s_19 = t;
                          int t_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_2 (ATerm t)
                              {
                                ATerm y_15 = NULL;
                                y_15 = t;
                                j_15 :
                                if(!(match_string(y_15, "-i")))
                                  {
                                    if(!(match_string(y_15, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                ATerm z_15 = NULL;
                                ATerm a_16 = NULL;
                                a_16 = t;
                                if(((z_15 != NULL) && (z_15 != a_16)))
                                  _fail(a_16);
                                else
                                  z_15 = a_16;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_15));
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                t = term_u_19;
                                return(t);
                              }
                              t = ArgOption_3(t, e_2, f_2, g_2);
                              LocalPopChoice(t_19);
                            }
                          else
                            {
                              t = s_19;
                              {
                                ATerm z_19 = t;
                                int a_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_2 (ATerm t)
                                    {
                                      ATerm b_16 = NULL;
                                      b_16 = t;
                                      l_15 :
                                      if(!(match_string(b_16, "-o")))
                                        {
                                          if(!(match_string(b_16, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm c_16 = NULL;
                                      ATerm d_16 = NULL;
                                      d_16 = t;
                                      if(((c_16 != NULL) && (c_16 != d_16)))
                                        _fail(d_16);
                                      else
                                        c_16 = d_16;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_16));
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      t = term_d_20;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_2, m_2, n_2);
                                    LocalPopChoice(a_20);
                                  }
                                else
                                  {
                                    t = z_19;
                                    {
                                      ATerm e_20 = t;
                                      int f_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_2 (ATerm t)
                                          {
                                            ATerm e_16 = NULL;
                                            e_16 = t;
                                            o_15 :
                                            if(!(match_string(e_16, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_g_20;
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_h_20;
                                            return(t);
                                          }
                                          t = Option_3(t, o_2, q_2, r_2);
                                          LocalPopChoice(f_20);
                                        }
                                      else
                                        {
                                          t = e_20;
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              ATerm f_16 = NULL;
                                              f_16 = t;
                                              p_15 :
                                              if(!(match_string(f_16, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_i_20;
                                              return(t);
                                            }
                                            ATerm w_2 (ATerm t)
                                            {
                                              t = term_l_20;
                                              return(t);
                                            }
                                            t = Option_3(t, t_2, u_2, w_2);
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
  ATerm k_16 = NULL;
  k_16 = t;
  t = SSL_table_destroy(not_null(k_16));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  t = SSL_exit(not_null(o_16));
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
ATerm short_description_1 (ATerm t, ATerm n_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_37 (ATerm))
{
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_Program_1))
    {
      b_17 = ATgetArgument(a_17, 0);
      {
        ATerm e_17 = NULL;
        t = not_null(b_17);
        {
          t = m_37(t);
          {
            e_17 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_17));
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
  ATerm m_17 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm n_17 = NULL;
      n_17 = t;
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
      return(t);
    }
    t = Program_1(t, a_3);
    return(t);
  }
  t = option_defined_1(t, z_2);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm o_17 = NULL;
      ATerm p_17 = NULL;
      t = term_r_16;
      {
        ATerm n_3 (ATerm t)
        {
          t = not_null(m_17);
          return(t);
        }
        t = short_description_1(t, n_3);
        {
          t = concat_strings_0(t);
          {
            p_17 = t;
            if(((o_17 != NULL) && (o_17 != p_17)))
              _fail(p_17);
            else
              o_17 = p_17;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATempty, not_null(o_17)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATempty, term_q_20));
      {
        t = printnl_0(t);
        {
          t = term_t_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm q_17 = NULL;
                  q_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_17)), term_v_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_3);
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm t_17 = NULL;
                    ATerm u_17 = NULL;
                    t = term_r_16;
                    {
                      ATerm r_3 (ATerm t)
                      {
                        t = not_null(m_17);
                        return(t);
                      }
                      t = long_description_1(t, r_3);
                      {
                        t = concat_strings_0(t);
                        {
                          u_17 = t;
                          if(((t_17 != NULL) && (t_17 != u_17)))
                            _fail(u_17);
                          else
                            t_17 = u_17;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_17)), term_w_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_3);
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm x_20;
        x_20 = t;
        t = SSL_printnl(not_null(e_18), not_null(f_18));
        t = x_20;
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
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Undefined_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm p_18 = NULL;
        t = not_null(n_18);
        {
          t = n_37(t);
          {
            p_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_18));
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
  ATerm w_18 = NULL;
  w_18 = t;
  v_18 :
  if(!(match_cons(w_18, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym__3))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      g_19 = ATgetArgument(d_19, 2);
      {
        ATerm y_20;
        y_20 = t;
        {
          ATerm k_19 = NULL;
          ATerm l_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), not_null(f_19));
          {
            ATerm h_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_21);
              }
            else
              {
                t = h_21;
                t = (ATerm) ATempty;
              }
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_19), not_null(f_19), (ATerm) ATinsert(CheckATermList(not_null(k_19)), not_null(g_19)));
            t = table_put_0(t);
          }
        }
        t = y_20;
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
  ATerm p_19 = NULL;
  ATerm q_19 = NULL;
  t = term_r_16;
  {
    t = s_48(t);
    {
      q_19 = t;
      if(((p_19 != NULL) && (p_19 != q_19)))
        _fail(q_19);
      else
        p_19 = q_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_20, term_s_20, not_null(p_19));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_string(w_19, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(w_19) == AT_LIST) && ((ATermList) w_19 != ATempty)))
        {
          x_19 = ATgetFirst((ATermList) w_19);
          y_19 = (ATerm) ATgetNext((ATermList) w_19);
          {
            ATerm b_20 = NULL;
            ATerm l_21;
            l_21 = t;
            {
              t = not_null(x_19);
              t = f_0(t);
            }
            t = l_21;
            {
              ATerm c_20 = NULL;
              t = term_r_16;
              {
                t = g_0(t);
                {
                  c_20 = t;
                  if(((b_20 != NULL) && (b_20 != c_20)))
                    _fail(c_20);
                  else
                    b_20 = c_20;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_19)), not_null(b_20));
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
  ATerm s_3 (ATerm t)
  {
    ATerm k_20 = NULL;
    k_20 = t;
    j_20 :
    if(!(match_string(k_20, "--help")))
      {
        if(!(match_string(k_20, "-h")))
          {
            if(!(match_string(k_20, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_q_21;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_r_21;
    return(t);
  }
  t = Option_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(((ATgetType(n_20) == AT_LIST) && ((ATermList) n_20 != ATempty)))
    {
      o_20 = ATgetFirst((ATermList) n_20);
      p_20 = (ATerm) ATgetNext((ATermList) n_20);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_20)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_48 (ATerm))
{
  ATerm z_21;
  z_21 = t;
  {
    ATerm v_3 (ATerm t)
    {
      t = term_a_22;
      t = q_48(t);
      return(t);
    }
    t = try_1(t, v_3);
  }
  t = z_21;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm u_20 = NULL;
      u_20 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_20));
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_22);
            }
          else
            {
              t = i_22;
              {
                t = q_48(t);
                t = Cons_2(t, _id, x_3);
              }
            }
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_3, x_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  ATerm s_22;
  s_22 = t;
  {
    ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
    d_21 = t;
    z_20 :
    if(match_cons(d_21, sym__3))
      {
        e_21 = ATgetArgument(d_21, 0);
        f_21 = ATgetArgument(d_21, 1);
        g_21 = ATgetArgument(d_21, 2);
        {
          if(((a_21 != NULL) && (a_21 != e_21)))
            _fail(e_21);
          else
            a_21 = e_21;
          {
            if(((b_21 != NULL) && (b_21 != f_21)))
              _fail(f_21);
            else
              b_21 = f_21;
            {
              if(((c_21 != NULL) && (c_21 != g_21)))
                _fail(g_21);
              else
                c_21 = g_21;
              t = SSL_table_put(not_null(a_21), not_null(b_21), not_null(c_21));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_48 (ATerm))
{
  ATerm j_21 = NULL;
  ATerm t_22;
  t_22 = t;
  {
    t = term_u_22;
    t = table_put_0(t);
  }
  t = t_22;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm w_22 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_48(t);
          LocalPopChoice(b_23);
        }
      else
        {
          t = w_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_3);
    {
      ATerm z_3 (ATerm t)
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm k_21 = NULL;
                  k_21 = t;
                  if(((j_21 != NULL) && (j_21 != k_21)))
                    _fail(k_21);
                  else
                    j_21 = k_21;
                  return(t);
                }
                t = Undefined_1(t, b_4);
                return(t);
              }
              t = option_defined_1(t, a_4);
              {
                ATerm e_23;
                e_23 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_f_23));
                  t = printnl_0(t);
                }
                t = e_23;
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_3);
      {
        ATerm g_23;
        g_23 = t;
        {
          t = term_r_20;
          t = table_destroy_0(t);
        }
        t = g_23;
      }
    }
  }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(((ATermList) n_21 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_21) == AT_LIST) && ((ATermList) n_21 != ATempty)))
        {
          o_21 = ATgetFirst((ATermList) n_21);
          p_21 = (ATerm) ATgetNext((ATermList) n_21);
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
  ATerm u_21 = NULL,v_21 = NULL;
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
            ATerm b_22 (ATerm t)
            {
              if(((u_21 != NULL) && (u_21 != x_21)))
                _fail(x_21);
              else
                u_21 = x_21;
              {
                if(((v_21 != NULL) && (v_21 != y_21)))
                  _fail(y_21);
                else
                  v_21 = y_21;
                {
                  t = not_null(u_21);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), not_null(v_21));
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
            w_21 = t;
            s_21 :
            if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
              {
                x_21 = ATgetFirst((ATermList) w_21);
                y_21 = (ATerm) ATgetNext((ATermList) w_21);
                t_21 :
                if(((ATermList) x_21 == ATempty))
                  {
                    {
                      ATerm l_23 = t;
                      int m_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((v_21 != NULL) && (v_21 != y_21)))
                            _fail(y_21);
                          else
                            v_21 = y_21;
                          {
                            ATerm c_4 (ATerm t)
                            {
                              t = not_null(v_21);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, c_4);
                          }
                          LocalPopChoice(m_23);
                        }
                      else
                        {
                          t = l_23;
                          t = b_22(t);
                        }
                    }
                  }
                else
                  {
                    t = b_22(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm c_22 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_64(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = _one(t, c_22);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm j_22 = NULL,m_22 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm k_22 = NULL;
    k_22 = t;
    d_22 :
    if(!(match_int(k_22, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm l_22 = NULL;
    l_22 = t;
    if(((j_22 != NULL) && (j_22 != l_22)))
      _fail(l_22);
    else
      j_22 = l_22;
    return(t);
  }
  t = Cons_2(t, d_4, e_4);
  {
    ATerm r_22 = NULL;
    t = not_null(j_22);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
        n_22 = t;
        g_22 :
        if(((ATgetType(n_22) == AT_LIST) && ((ATermList) n_22 != ATempty)))
          {
            o_22 = ATgetFirst((ATermList) n_22);
            p_22 = (ATerm) ATgetNext((ATermList) n_22);
            h_22 :
            if(match_int(o_22, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_22)), term_p_23), term_p_23);
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
      t = oncetd_1(t, f_4);
      {
        r_22 = t;
        if(((m_22 != NULL) && (m_22 != r_22)))
          _fail(r_22);
        else
          m_22 = r_22;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_22)), term_q_23), term_q_23);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm v_22 (ATerm t)
  {
    t = u_60(t);
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          t = Cons_2(t, _id, v_22);
        }
    }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      t = SSL_table_get(not_null(z_22), not_null(a_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm t_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL;
      w_23 = t;
      {
        if(((v_23 != NULL) && (v_23 != w_23)))
          _fail(w_23);
        else
          v_23 = w_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_16, not_null(v_23));
          t = table_get_0(t);
        }
      }
      LocalPopChoice(x_23);
    }
  else
    {
      t = t_23;
      {
        t = explode_string_0(t);
        {
          ATerm g_4 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, g_4);
          {
            ATerm h_4 (ATerm t)
            {
              ATerm i_4 (ATerm t)
              {
                ATerm a_24 = NULL;
                a_24 = t;
                u_23 :
                if(match_int(a_24, 32))
                  {
                    t = term_y_23;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(a_24, 35))
                      {
                        t = term_z_23;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(a_24, 36))
                          {
                            t = term_b_24;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(a_24, 37))
                              {
                                t = term_c_24;
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(a_24, 38))
                                  {
                                    t = term_d_24;
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(a_24, 45))
                                      {
                                        t = term_e_24;
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(a_24, 60))
                                          {
                                            t = term_f_24;
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(a_24, 62))
                                              {
                                                t = term_g_24;
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(a_24, 92))
                                                  {
                                                    t = term_h_24;
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(a_24, 94))
                                                      {
                                                        t = term_i_24;
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(a_24, 95))
                                                          {
                                                            t = term_j_24;
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(a_24, 123))
                                                              {
                                                                t = term_k_24;
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(a_24, 124))
                                                                  {
                                                                    t = term_l_24;
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(a_24, 125))
                                                                      {
                                                                        t = term_m_24;
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(a_24, 126))
                                                                          {
                                                                            t = term_n_24;
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
              t = try_1(t, i_4);
              return(t);
            }
            t = map_1(t, h_4);
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(((ATgetType(t_24) == AT_LIST) && ((ATermList) t_24 != ATempty)))
    {
      u_24 = ATgetFirst((ATermList) t_24);
      v_24 = (ATerm) ATgetNext((ATermList) t_24);
      t = not_null(v_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_67, _id);
        {
          t = Tl_0(t);
          t = z_24(t);
        }
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
        }
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm c_25 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_60(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = Cons_2(t, _id, c_25);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm p_25 = NULL;
  ATerm j_4 (ATerm t)
  {
    ATerm o_25 = NULL;
    o_25 = t;
    d_25 :
    if(!(match_int(o_25, 9)))
      {
        if(!(match_int(o_25, 32)))
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = remove_trailing_1(t, j_4);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          ATerm q_25 = NULL;
          q_25 = t;
          e_25 :
          if(!(match_int(q_25, 37)))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm r_25 = NULL;
            r_25 = t;
            m_25 :
            if(!(match_int(r_25, 37)))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm p_4 (ATerm t)
          {
            ATerm s_25 = NULL;
            s_25 = t;
            if(((p_25 != NULL) && (p_25 != s_25)))
              _fail(s_25);
            else
              p_25 = s_25;
            return(t);
          }
          t = Cons_2(t, o_4, p_4);
          return(t);
        }
        t = Cons_2(t, m_4, n_4);
        t = not_null(p_25);
        return(t);
      }
      t = at_suffix_1(t, l_4);
      return(t);
    }
    t = try_1(t, k_4);
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
      ATerm q_4 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, q_4);
      {
        ATerm j_27 (ATerm t)
        {
          ATerm i_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
          ATerm m_27 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), (ATerm) ATinsert(CheckATermList(not_null(o_26)), not_null(m_26)));
            t = j_27(t);
            return(t);
          }
          i_26 = t;
          a_26 :
          if(match_cons(i_26, sym__2))
            {
              l_26 = ATgetArgument(i_26, 0);
              o_26 = ATgetArgument(i_26, 1);
              b_26 :
              if(((ATermList) l_26 == ATempty))
                {
                  {
                    ATerm t_26 = NULL;
                    ATerm u_26 = NULL;
                    t = not_null(o_26);
                    {
                      t = LatexComment_0(t);
                      {
                        u_26 = t;
                        if(((t_26 != NULL) && (t_26 != u_26)))
                          _fail(u_26);
                        else
                          t_26 = u_26;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(t_26));
                  }
                }
              else
                {
                  if(((ATgetType(l_26) == AT_LIST) && ((ATermList) l_26 != ATempty)))
                    {
                      m_26 = ATgetFirst((ATermList) l_26);
                      n_26 = (ATerm) ATgetNext((ATermList) l_26);
                      c_26 :
                      if(match_int(m_26, 10))
                        {
                          ATerm w_24 = t;
                          int x_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_26 = NULL,a_27 = NULL;
                              ATerm y_24;
                              y_24 = t;
                              {
                                ATerm z_26 = NULL;
                                t = not_null(o_26);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    z_26 = t;
                                    if(((y_26 != NULL) && (y_26 != z_26)))
                                      _fail(z_26);
                                    else
                                      y_26 = z_26;
                                  }
                                }
                              }
                              t = y_24;
                              {
                                ATerm b_27 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), (ATerm) ATempty);
                                {
                                  t = j_27(t);
                                  {
                                    b_27 = t;
                                    if(((a_27 != NULL) && (a_27 != b_27)))
                                      _fail(b_27);
                                    else
                                      a_27 = b_27;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(a_27)), not_null(y_26));
                              }
                              LocalPopChoice(x_24);
                            }
                          else
                            {
                              t = w_24;
                              t = m_27(t);
                            }
                        }
                      else
                        {
                          t = m_27(t);
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
        t = j_27(t);
        {
          ATerm r_4 (ATerm t)
          {
            ATerm f_27 = NULL;
            f_27 = t;
            d_26 :
            if(!(match_string(f_27, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, r_4);
          {
            t = reverse_0(t);
            {
              ATerm s_4 (ATerm t)
              {
                ATerm g_27 = NULL;
                g_27 = t;
                g_26 :
                if(!(match_string(g_27, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, s_4);
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm h_27 = NULL;
                  h_27 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_25), not_null(h_27));
                  return(t);
                }
                t = map_1(t, t_4);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm r_27 (ATerm t)
  {
    ATerm b_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = b_25;
        t = Cons_2(t, s_59, r_27);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  s_27 :
  if(!(match_cons(t_27, sym_MATH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  u_27 :
  if(!(match_cons(v_27, sym_NUM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  w_27 :
  if(!(match_cons(x_27, sym_VAR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  y_27 :
  if(!(match_cons(z_27, sym_KW_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  a_28 :
  if(!(match_cons(b_28, sym_CL_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_FFID_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      {
        ATerm l_28 = NULL;
        t = not_null(h_28);
        {
          ATerm n_28 = NULL;
          t = x_43(t);
          {
            l_28 = t;
            {
              t = not_null(i_28);
              {
                t = y_43(t);
                {
                  n_28 = t;
                  t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(l_28), not_null(n_28));
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
  ATerm t_28 = NULL;
  t_28 = t;
  s_28 :
  if(!(match_cons(t_28, sym_SZ_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  u_28 :
  if(!(match_cons(v_28, sym_SH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  w_28 :
  if(!(match_cons(x_28, sym_SE_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  y_28 :
  if(!(match_cons(z_28, sym_FM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm g_25 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_25;
      }
    return(t);
  }
  t = filter_1(t, u_4);
  {
    ATerm v_4 (ATerm t)
    {
      t = term_h_25;
      return(t);
    }
    t = separate_by_1(t, v_4);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  a_29 :
  if(!(match_cons(b_29, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm d_29 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 (ATerm t)
      {
        ATerm x_4 (ATerm t)
        {
          ATerm e_29 = NULL;
          e_29 = t;
          if(((d_29 != NULL) && (d_29 != e_29)))
            _fail(e_29);
          else
            d_29 = e_29;
          return(t);
        }
        t = SOpt_2(t, HS_0, x_4);
        return(t);
      }
      t = fetch_1(t, w_4);
      t = not_null(d_29);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      t = term_k_25;
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(((ATgetType(j_29) == AT_LIST) && ((ATermList) j_29 != ATempty)))
    {
      k_29 = ATgetFirst((ATermList) j_29);
      l_29 = (ATerm) ATgetNext((ATermList) j_29);
      {
        ATerm o_29 = NULL;
        ATerm p_29 = NULL;
        t = term_r_16;
        {
          t = i_61(t);
          {
            p_29 = t;
            if(((o_29 != NULL) && (o_29 != p_29)))
              _fail(p_29);
            else
              o_29 = p_29;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_29)), not_null(k_29)), not_null(o_29));
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
  ATerm l_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = l_25;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                t = Cons_2(t, _id, y_4);
                t = Sep_1(t, j_61);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, y_4);
      }
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t_29 :
  if(((ATermList) u_29 == ATempty))
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
ATerm filter_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 (ATerm t)
            {
              t = filter_1(t, s_53);
              return(t);
            }
            t = Cons_2(t, s_53, z_4);
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            {
              ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
              x_29 = t;
              w_29 :
              if(((ATgetType(x_29) == AT_LIST) && ((ATermList) x_29 != ATempty)))
                {
                  y_29 = ATgetFirst((ATermList) x_29);
                  z_29 = (ATerm) ATgetNext((ATermList) x_29);
                  {
                    t = not_null(z_29);
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
  ATerm d_30 = NULL;
  d_30 = t;
  c_30 :
  if(!(match_cons(d_30, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm f_30 = NULL;
  ATerm z_25 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          ATerm g_30 = NULL;
          g_30 = t;
          if(((f_30 != NULL) && (f_30 != g_30)))
            _fail(g_30);
          else
            f_30 = g_30;
          return(t);
        }
        t = SOpt_2(t, IS_0, b_5);
        return(t);
      }
      t = fetch_1(t, a_5);
      t = not_null(f_30);
      LocalPopChoice(e_26);
    }
  else
    {
      t = z_25;
      t = term_f_26;
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  i_30 :
  if(!(match_cons(j_30, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym_SOpt_2))
    {
      p_30 = ATgetArgument(o_30, 0);
      q_30 = ATgetArgument(o_30, 1);
      {
        ATerm v_30 = NULL;
        t = not_null(p_30);
        {
          ATerm x_30 = NULL;
          t = a_43(t);
          {
            v_30 = t;
            {
              t = not_null(q_30);
              {
                t = b_43(t);
                {
                  x_30 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(v_30), not_null(x_30));
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
ATerm fetch_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm c_31 (ATerm t)
  {
    ATerm h_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_60, _id);
        LocalPopChoice(j_26);
      }
    else
      {
        t = h_26;
        t = Cons_2(t, _id, c_31);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm k_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm d_5 (ATerm t)
        {
          ATerm i_31 = NULL;
          i_31 = t;
          if(((e_31 != NULL) && (e_31 != i_31)))
            _fail(i_31);
          else
            e_31 = i_31;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_5);
        return(t);
      }
      t = fetch_1(t, c_5);
      t = not_null(e_31);
      LocalPopChoice(p_26);
    }
  else
    {
      t = k_26;
      t = term_f_26;
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_C_2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      {
        ATerm z_31 = NULL;
        t = not_null(v_31);
        {
          ATerm b_32 = NULL;
          t = g_44(t);
          {
            z_31 = t;
            {
              t = not_null(w_31);
              {
                t = h_44(t);
                {
                  b_32 = t;
                  t = (ATerm) ATmakeAppl(sym_C_2, not_null(z_31), not_null(b_32));
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
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  c_36 :
  if(match_cons(f_36, sym_R_2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      {
        t = not_null(h_36);
        {
          ATerm u_36 (ATerm t)
          {
            ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
            ATerm q_26 = t;
            int r_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(r_26);
              }
            else
              {
                t = q_26;
                {
                  ATerm s_26 = t;
                  int v_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      LocalPopChoice(v_26);
                    }
                  else
                    {
                      t = s_26;
                      {
                        ATerm w_26 = t;
                        int x_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_5 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm f_5 (ATerm t)
                            {
                              t = Cons_2(t, _id, u_36);
                              return(t);
                            }
                            t = Cons_2(t, e_5, f_5);
                            LocalPopChoice(x_26);
                          }
                        else
                          {
                            t = w_26;
                            {
                              ATerm c_27 = t;
                              int d_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_6 (ATerm t)
                                  {
                                    ATerm h_6 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, h_6, u_36);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, g_6);
                                  LocalPopChoice(d_27);
                                }
                              else
                                {
                                  t = c_27;
                                  {
                                    ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
                                    m_36 = t;
                                    j_32 :
                                    if(((ATgetType(m_36) == AT_LIST) && ((ATermList) m_36 != ATempty)))
                                      {
                                        n_36 = ATgetFirst((ATermList) m_36);
                                        o_36 = (ATerm) ATgetNext((ATermList) m_36);
                                        k_32 :
                                        if(((ATgetType(o_36) == AT_LIST) && ((ATermList) o_36 != ATempty)))
                                          {
                                            p_36 = ATgetFirst((ATermList) o_36);
                                            q_36 = (ATerm) ATgetNext((ATermList) o_36);
                                            {
                                              ATerm r_36 = NULL;
                                              if(((j_36 != NULL) && (j_36 != n_36)))
                                                _fail(n_36);
                                              else
                                                j_36 = n_36;
                                              {
                                                if(((k_36 != NULL) && (k_36 != p_36)))
                                                  _fail(p_36);
                                                else
                                                  k_36 = p_36;
                                                {
                                                  if(((l_36 != NULL) && (l_36 != q_36)))
                                                    _fail(q_36);
                                                  else
                                                    l_36 = q_36;
                                                  {
                                                    ATerm s_36 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), not_null(k_36));
                                                    {
                                                      t = u_36(t);
                                                      {
                                                        s_36 = t;
                                                        if(((r_36 != NULL) && (r_36 != s_36)))
                                                          _fail(s_36);
                                                        else
                                                          r_36 = s_36;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_36)), term_e_27), not_null(j_36));
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
          t = u_36(t);
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
  ATerm a_37 = NULL,b_37 = NULL;
  ATerm i_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
      c_37 = t;
      z_36 :
      if(match_cons(c_37, sym_LBL_2))
        {
          d_37 = ATgetArgument(c_37, 0);
          e_37 = ATgetArgument(c_37, 1);
          {
            ATerm f_37 = NULL;
            if(((a_37 != NULL) && (a_37 != d_37)))
              _fail(d_37);
            else
              a_37 = d_37;
            {
              if(((b_37 != NULL) && (b_37 != e_37)))
                _fail(e_37);
              else
                b_37 = e_37;
              {
                t = not_null(b_37);
                {
                  t = table_row_0(t);
                  {
                    ATerm g_37 = NULL;
                    t = not_null(b_37);
                    {
                      t = table_row_0(t);
                      {
                        g_37 = t;
                        if(((f_37 != NULL) && (f_37 != g_37)))
                          _fail(g_37);
                        else
                          f_37 = g_37;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(a_37), not_null(f_37));
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
      LocalPopChoice(k_27);
    }
  else
    {
      t = i_27;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm j_37 (ATerm t)
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_60(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        t = Cons_2(t, _id, j_37);
      }
    return(t);
  }
  t = j_37(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
        o_37 = t;
        l_37 :
        if(((ATgetType(o_37) == AT_LIST) && ((ATermList) o_37 != ATempty)))
          {
            p_37 = ATgetFirst((ATermList) o_37);
            q_37 = (ATerm) ATgetNext((ATermList) o_37);
            {
              t = not_null(p_37);
              {
                ATerm i_6 (ATerm t)
                {
                  t = not_null(q_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_6);
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
ATerm table_def_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_AOPTIONS_1))
    {
      i_38 = ATgetArgument(h_38, 0);
      {
        t = not_null(i_38);
        {
          ATerm j_6 (ATerm t)
          {
            ATerm k_38 = NULL,l_38 = NULL;
            k_38 = t;
            f_38 :
            if(match_cons(k_38, sym_AL_1))
              {
                l_38 = ATgetArgument(k_38, 0);
                {
                  ATerm n_38 = NULL;
                  ATerm o_38 = NULL,q_38 = NULL;
                  ATerm p_38 = NULL;
                  t = not_null(l_38);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        p_38 = t;
                        if(((o_38 != NULL) && (o_38 != p_38)))
                          _fail(p_38);
                        else
                          o_38 = p_38;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), term_h_25);
                    {
                      t = copy_0(t);
                      {
                        q_38 = t;
                        if(((n_38 != NULL) && (n_38 != q_38)))
                          _fail(q_38);
                        else
                          n_38 = q_38;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_38)), term_q_27);
                }
              }
            else
              {
                if(match_cons(k_38, sym_AC_1))
                  {
                    l_38 = ATgetArgument(k_38, 0);
                    {
                      ATerm s_38 = NULL;
                      ATerm t_38 = NULL,v_38 = NULL;
                      ATerm u_38 = NULL;
                      t = not_null(l_38);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            u_38 = t;
                            if(((t_38 != NULL) && (t_38 != u_38)))
                              _fail(u_38);
                            else
                              t_38 = u_38;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), term_h_25);
                        {
                          t = copy_0(t);
                          {
                            v_38 = t;
                            if(((s_38 != NULL) && (s_38 != v_38)))
                              _fail(v_38);
                            else
                              s_38 = v_38;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_38)), term_c_28);
                    }
                  }
                else
                  {
                    if(match_cons(k_38, sym_AR_1))
                      {
                        l_38 = ATgetArgument(k_38, 0);
                        {
                          ATerm x_38 = NULL;
                          ATerm y_38 = NULL,a_39 = NULL;
                          ATerm z_38 = NULL;
                          t = not_null(l_38);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                z_38 = t;
                                if(((y_38 != NULL) && (y_38 != z_38)))
                                  _fail(z_38);
                                else
                                  y_38 = z_38;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), term_h_25);
                            {
                              t = copy_0(t);
                              {
                                a_39 = t;
                                if(((x_38 != NULL) && (x_38 != a_39)))
                                  _fail(a_39);
                                else
                                  x_38 = a_39;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_d_28);
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
          t = map_1(t, j_6);
          {
            ATerm k_6 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_e_27);
              return(t);
            }
            t = separate_by_1(t, k_6);
            {
              t = concat_0(t);
              {
                ATerm l_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_e_28);
                  return(t);
                }
                t = at_last_1(t, l_6);
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
ATerm at_end_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm l_39 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_39);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          t = Nil_0(t);
          t = g_60(t);
        }
      }
    return(t);
  }
  t = l_39(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym__2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      {
        t = not_null(p_39);
        {
          ATerm m_6 (ATerm t)
          {
            t = not_null(q_39);
            return(t);
          }
          t = at_end_1(t, m_6);
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
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym__2))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      {
        ATerm m_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_39), not_null(y_39));
            LocalPopChoice(o_28);
          }
        else
          {
            t = m_28;
            t = SSL_subtr(not_null(x_39), not_null(y_39));
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm p_28;
        p_28 = t;
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_40), not_null(g_40));
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = SSL_gtr(not_null(f_40), not_null(g_40));
            }
        }
        t = p_28;
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
  ATerm m_40 = NULL;
  ATerm c_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
      n_40 = t;
      l_40 :
      if(match_cons(n_40, sym__2))
        {
          o_40 = ATgetArgument(n_40, 0);
          p_40 = ATgetArgument(n_40, 1);
          {
            if(((m_40 != NULL) && (m_40 != o_40)))
              _fail(o_40);
            else
              m_40 = o_40;
            if(((m_40 != NULL) && (m_40 != p_40)))
              _fail(p_40);
            else
              m_40 = p_40;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_29);
    }
  else
    {
      t = c_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm))
{
  ATerm r_40 (ATerm t)
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_66(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          t = p_66(t);
          t = r_40(t);
        }
      }
    return(t);
  }
  t = r_40(t);
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
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm b_41 = NULL;
        t = not_null(x_40);
        {
          ATerm d_41 = NULL;
          t = d_36(t);
          {
            b_41 = t;
            {
              t = not_null(y_40);
              {
                t = e_36(t);
                {
                  d_41 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_41), not_null(d_41));
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
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6 (ATerm t)
      {
        ATerm r_41 = NULL;
        r_41 = t;
        i_41 :
        if(!(match_int(r_41, 0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, n_6, _id);
      t = (ATerm) ATempty;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
          s_41 = t;
          k_41 :
          if(match_cons(s_41, sym__2))
            {
              t_41 = ATgetArgument(s_41, 0);
              u_41 = ATgetArgument(s_41, 1);
              t = (ATerm) ATmakeAppl(sym__3, not_null(t_41), not_null(u_41), (ATerm) ATempty);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_7 (ATerm t)
        {
          ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
          x_41 = t;
          m_41 :
          if(match_cons(x_41, sym__3))
            {
              y_41 = ATgetArgument(x_41, 0);
              z_41 = ATgetArgument(x_41, 1);
              a_42 = ATgetArgument(x_41, 2);
              n_41 :
              if(match_int(y_41, 0))
                {
                  t = not_null(a_42);
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
        ATerm v_7 (ATerm t)
        {
          ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
          d_42 = t;
          q_41 :
          if(match_cons(d_42, sym__3))
            {
              e_42 = ATgetArgument(d_42, 0);
              f_42 = ATgetArgument(d_42, 1);
              g_42 = ATgetArgument(d_42, 2);
              {
                ATerm k_42 = NULL;
                ATerm q_29;
                q_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), term_q_10);
                  t = geq_0(t);
                }
                t = q_29;
                {
                  ATerm l_42 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), term_q_10);
                  {
                    t = subt_0(t);
                    {
                      l_42 = t;
                      if(((k_42 != NULL) && (k_42 != l_42)))
                        _fail(l_42);
                      else
                        k_42 = l_42;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__3, not_null(k_42), not_null(f_42), (ATerm) ATinsert(CheckATermList(not_null(g_42)), not_null(f_42)));
                }
              }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = for_3(t, s_7, u_7, v_7);
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_42 = NULL;
  r_42 = t;
  t = SSL_string_to_int(not_null(r_42));
  return(t);
}
ATerm R_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm y_42 = NULL,z_42 = NULL,c_43 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym_R_2))
    {
      z_42 = ATgetArgument(y_42, 0);
      c_43 = ATgetArgument(y_42, 1);
      {
        ATerm f_43 = NULL;
        t = not_null(z_42);
        {
          ATerm h_43 = NULL;
          t = p_43(t);
          {
            f_43 = t;
            {
              t = not_null(c_43);
              {
                t = q_43(t);
                {
                  h_43 = t;
                  t = (ATerm) ATmakeAppl(sym_R_2, not_null(f_43), not_null(h_43));
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
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  w_43 = t;
  t_43 :
  if(((ATgetType(w_43) == AT_LIST) && ((ATermList) w_43 != ATempty)))
    {
      u_43 = ATgetFirst((ATermList) w_43);
      v_43 = (ATerm) ATgetNext((ATermList) w_43);
      {
        ATerm b_44 = NULL;
        t = not_null(v_43);
        {
          ATerm r_29;
          r_29 = t;
          {
            ATerm c_44 = NULL,e_44 = NULL,i_44 = NULL;
            ATerm s_29;
            s_29 = t;
            {
              ATerm d_44 = NULL;
              t = c_0(t);
              {
                d_44 = t;
                if(((c_44 != NULL) && (c_44 != d_44)))
                  _fail(d_44);
                else
                  c_44 = d_44;
              }
            }
            t = s_29;
            {
              ATerm f_44 = NULL;
              t = not_null(u_43);
              {
                t = b_0(t);
                {
                  f_44 = t;
                  if(((e_44 != NULL) && (e_44 != f_44)))
                    _fail(f_44);
                  else
                    e_44 = f_44;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_44)), not_null(e_44));
                {
                  i_44 = t;
                  if(((b_44 != NULL) && (b_44 != i_44)))
                    _fail(i_44);
                  else
                    b_44 = i_44;
                }
              }
            }
          }
          t = r_29;
          {
            ATerm w_7 (ATerm t)
            {
              t = not_null(b_44);
              return(t);
            }
            t = reverse_acc_2(t, b_0, w_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_43 == ATempty))
        {
          {
            t = term_r_16;
            t = c_0(t);
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
ATerm construct_rows_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, d_8);
  {
    ATerm y_45 (ATerm t)
    {
      ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
      ATerm b_46 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_45), (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(d_45)));
        t = y_45(t);
        return(t);
      }
      z_44 = t;
      u_44 :
      if(match_cons(z_44, sym__2))
        {
          c_45 = ATgetArgument(z_44, 0);
          f_45 = ATgetArgument(z_44, 1);
          v_44 :
          if(((ATermList) c_45 == ATempty))
            {
              {
                ATerm k_45 = NULL;
                ATerm l_45 = NULL;
                t = not_null(f_45);
                {
                  t = reverse_0(t);
                  {
                    l_45 = t;
                    if(((k_45 != NULL) && (k_45 != l_45)))
                      _fail(l_45);
                    else
                      k_45 = l_45;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(k_45)));
              }
            }
          else
            {
              if(((ATgetType(c_45) == AT_LIST) && ((ATermList) c_45 != ATempty)))
                {
                  d_45 = ATgetFirst((ATermList) c_45);
                  e_45 = (ATerm) ATgetNext((ATermList) c_45);
                  w_44 :
                  if(match_cons(d_45, sym_R_2))
                    {
                      x_44 = ATgetArgument(d_45, 0);
                      y_44 = ATgetArgument(d_45, 1);
                      {
                        ATerm v_29 = t;
                        int a_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_45 = NULL,s_45 = NULL;
                            ATerm b_30;
                            b_30 = t;
                            {
                              ATerm r_45 = NULL;
                              t = not_null(f_45);
                              {
                                t = reverse_0(t);
                                {
                                  r_45 = t;
                                  if(((q_45 != NULL) && (q_45 != r_45)))
                                    _fail(r_45);
                                  else
                                    q_45 = r_45;
                                }
                              }
                            }
                            t = b_30;
                            {
                              ATerm t_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(e_45), (ATerm) ATempty);
                              {
                                t = y_45(t);
                                {
                                  t_45 = t;
                                  if(((s_45 != NULL) && (s_45 != t_45)))
                                    _fail(t_45);
                                  else
                                    s_45 = t_45;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_45)), (ATerm) ATmakeAppl(sym_R_2, not_null(x_44), not_null(y_44))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(q_45)));
                            }
                            LocalPopChoice(a_30);
                          }
                        else
                          {
                            t = v_29;
                            t = b_46(t);
                          }
                      }
                    }
                  else
                    {
                      t = b_46(t);
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
    t = y_45(t);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm e_30 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_30;
          }
        return(t);
      }
      t = filter_1(t, e_8);
    }
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  t = SSL_implode_string(not_null(g_46));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_45 (ATerm), ATerm b_45 (ATerm))
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(((ATgetType(n_46) == AT_LIST) && ((ATermList) n_46 != ATempty)))
    {
      o_46 = ATgetFirst((ATermList) n_46);
      p_46 = (ATerm) ATgetNext((ATermList) n_46);
      {
        ATerm s_46 = NULL;
        t = not_null(o_46);
        {
          ATerm u_46 = NULL;
          t = a_45(t);
          {
            s_46 = t;
            {
              t = not_null(p_46);
              {
                t = b_45(t);
                {
                  u_46 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_46)), not_null(s_46));
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
ATerm explode_string_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  t = SSL_explode_string(not_null(a_47));
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm h_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
      ATerm e_54 (ATerm t)
      {
        t = not_null(y_49);
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = KW_0(t);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm r_30 = t;
                int s_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = VAR_0(t);
                    LocalPopChoice(s_30);
                  }
                else
                  {
                    t = r_30;
                    {
                      ATerm t_30 = t;
                      int u_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = NUM_0(t);
                          LocalPopChoice(u_30);
                        }
                      else
                        {
                          t = t_30;
                          t = MATH_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(y_49), not_null(w_49));
        return(t);
      }
      ATerm f_54 (ATerm t)
      {
        ATerm r_52 = NULL;
        ATerm v_52 = NULL;
        t = not_null(w_49);
        {
          ATerm f_8 (ATerm t)
          {
            ATerm s_52 = NULL,t_52 = NULL;
            s_52 = t;
            w_48 :
            if(match_cons(s_52, sym_S_1))
              {
                t_52 = ATgetArgument(s_52, 0);
                {
                  t = not_null(t_52);
                  t = make_latex_comment_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_8);
          {
            v_52 = t;
            if(((r_52 != NULL) && (r_52 != v_52)))
              _fail(v_52);
            else
              r_52 = v_52;
          }
        }
        t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(r_52));
        return(t);
      }
      ATerm g_54 (ATerm t)
      {
        t = not_null(y_49);
        t = latex_string_0(t);
        return(t);
      }
      x_49 = t;
      y_48 :
      if(match_cons(x_49, sym_REF_2))
        {
          y_49 = ATgetArgument(x_49, 0);
          w_49 = ATgetArgument(x_49, 1);
          t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(y_49), not_null(w_49));
        }
      else
        {
          if(match_cons(x_49, sym_LBL_2))
            {
              y_49 = ATgetArgument(x_49, 0);
              w_49 = ATgetArgument(x_49, 1);
              t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(y_49), not_null(w_49));
            }
          else
            {
              if(match_cons(x_49, sym_L_2))
                {
                  y_49 = ATgetArgument(x_49, 0);
                  w_49 = ATgetArgument(x_49, 1);
                  {
                    ATerm f_50 = NULL;
                    ATerm w_30 = t;
                    int y_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_50 = NULL;
                        t = not_null(y_49);
                        {
                          t = string_to_int_0(t);
                          {
                            g_50 = t;
                            if(((f_50 != NULL) && (f_50 != g_50)))
                              _fail(g_50);
                            else
                              f_50 = g_50;
                          }
                        }
                        LocalPopChoice(y_30);
                      }
                    else
                      {
                        t = w_30;
                        {
                          ATerm z_30 = t;
                          int a_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_50 = NULL;
                              t = not_null(y_49);
                              {
                                t = explode_string_0(t);
                                {
                                  ATerm g_8 (ATerm t)
                                  {
                                    ATerm i_50 = NULL;
                                    i_50 = t;
                                    r_47 :
                                    if(!(match_int(i_50, 61)))
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = Cons_2(t, g_8, _id);
                                  {
                                    t = (ATerm) ATinsert(ATempty, term_b_31);
                                    {
                                      t = implode_string_0(t);
                                      {
                                        j_50 = t;
                                        if(((f_50 != NULL) && (f_50 != j_50)))
                                          _fail(j_50);
                                        else
                                          f_50 = j_50;
                                      }
                                    }
                                  }
                                }
                              }
                              LocalPopChoice(a_31);
                            }
                          else
                            {
                              t = z_30;
                              {
                                ATerm k_50 = NULL;
                                t = not_null(y_49);
                                {
                                  k_50 = t;
                                  if(((f_50 != NULL) && (f_50 != k_50)))
                                    _fail(k_50);
                                  else
                                    f_50 = k_50;
                                }
                              }
                            }
                        }
                      }
                    t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(f_50), not_null(w_49));
                  }
                }
              else
                {
                  if(match_cons(x_49, sym_ALT_2))
                    {
                      y_49 = ATgetArgument(x_49, 0);
                      w_49 = ATgetArgument(x_49, 1);
                      t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(y_49), not_null(w_49));
                    }
                  else
                    {
                      if(match_cons(x_49, sym_A_3))
                        {
                          y_49 = ATgetArgument(x_49, 0);
                          w_49 = ATgetArgument(x_49, 1);
                          s_49 = ATgetArgument(x_49, 2);
                          {
                            ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
                            ATerm v_50 = NULL;
                            t = not_null(s_49);
                            {
                              ATerm w_50 = NULL;
                              t = construct_rows_0(t);
                              {
                                v_50 = t;
                                {
                                  if(((t_50 != NULL) && (t_50 != v_50)))
                                    _fail(v_50);
                                  else
                                    t_50 = v_50;
                                  {
                                    t = not_null(w_49);
                                    {
                                      t = Vspace_0(t);
                                      {
                                        ATerm x_50 = NULL,z_50 = NULL;
                                        t = string_to_int_0(t);
                                        {
                                          w_50 = t;
                                          {
                                            if(((q_50 != NULL) && (q_50 != w_50)))
                                              _fail(w_50);
                                            else
                                              q_50 = w_50;
                                            {
                                              ATerm y_50 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), term_e_28);
                                              {
                                                t = copy_0(t);
                                                {
                                                  y_50 = t;
                                                  if(((x_50 != NULL) && (x_50 != y_50)))
                                                    _fail(y_50);
                                                  else
                                                    x_50 = y_50;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_50), (ATerm) ATinsert(ATinsert(ATempty, term_a_25), term_e_28));
                                                {
                                                  ATerm a_51 = NULL;
                                                  t = conc_0(t);
                                                  {
                                                    z_50 = t;
                                                    {
                                                      if(((s_50 != NULL) && (s_50 != z_50)))
                                                        _fail(z_50);
                                                      else
                                                        s_50 = z_50;
                                                      {
                                                        t = not_null(y_49);
                                                        {
                                                          ATerm b_51 = NULL;
                                                          t = table_def_0(t);
                                                          {
                                                            a_51 = t;
                                                            {
                                                              if(((r_50 != NULL) && (r_50 != a_51)))
                                                                _fail(a_51);
                                                              else
                                                                r_50 = a_51;
                                                              {
                                                                t = not_null(t_50);
                                                                {
                                                                  t = map_1(t, MkRows_0);
                                                                  {
                                                                    ATerm h_8 (ATerm t)
                                                                    {
                                                                      t = not_null(s_50);
                                                                      return(t);
                                                                    }
                                                                    t = separate_by_1(t, h_8);
                                                                    {
                                                                      b_51 = t;
                                                                      if(((u_50 != NULL) && (u_50 != b_51)))
                                                                        _fail(b_51);
                                                                      else
                                                                        u_50 = b_51;
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
                            t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(r_50), not_null(u_50));
                          }
                        }
                      else
                        {
                          if(match_cons(x_49, sym_HV_2))
                            {
                              y_49 = ATgetArgument(x_49, 0);
                              w_49 = ATgetArgument(x_49, 1);
                              {
                                ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
                                ATerm j_51 = NULL;
                                t = not_null(y_49);
                                {
                                  ATerm l_51 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    j_51 = t;
                                    {
                                      if(((f_51 != NULL) && (f_51 != j_51)))
                                        _fail(j_51);
                                      else
                                        f_51 = j_51;
                                      {
                                        t = not_null(y_49);
                                        {
                                          ATerm m_51 = NULL;
                                          t = Vspace_0(t);
                                          {
                                            l_51 = t;
                                            {
                                              if(((g_51 != NULL) && (g_51 != l_51)))
                                                _fail(l_51);
                                              else
                                                g_51 = l_51;
                                              {
                                                t = not_null(y_49);
                                                {
                                                  ATerm n_51 = NULL;
                                                  t = Ispace_0(t);
                                                  {
                                                    m_51 = t;
                                                    {
                                                      if(((h_51 != NULL) && (h_51 != m_51)))
                                                        _fail(m_51);
                                                      else
                                                        h_51 = m_51;
                                                      {
                                                        t = not_null(w_49);
                                                        {
                                                          ATerm i_8 (ATerm t)
                                                          {
                                                            ATerm d_31 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = Nil_0(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = d_31;
                                                              }
                                                            return(t);
                                                          }
                                                          t = filter_1(t, i_8);
                                                          {
                                                            ATerm o_8 (ATerm t)
                                                            {
                                                              t = term_f_31;
                                                              return(t);
                                                            }
                                                            t = separate_by_1(t, o_8);
                                                            {
                                                              n_51 = t;
                                                              if(((i_51 != NULL) && (i_51 != n_51)))
                                                                _fail(n_51);
                                                              else
                                                                i_51 = n_51;
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
                                t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(f_51), not_null(g_51), not_null(h_51), not_null(i_51));
                              }
                            }
                          else
                            {
                              if(match_cons(x_49, sym_V_2))
                                {
                                  y_49 = ATgetArgument(x_49, 0);
                                  w_49 = ATgetArgument(x_49, 1);
                                  {
                                    ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
                                    ATerm t_51 = NULL;
                                    t = not_null(y_49);
                                    {
                                      ATerm u_51 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        t_51 = t;
                                        {
                                          if(((q_51 != NULL) && (q_51 != t_51)))
                                            _fail(t_51);
                                          else
                                            q_51 = t_51;
                                          {
                                            t = not_null(y_49);
                                            {
                                              ATerm v_51 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                u_51 = t;
                                                {
                                                  if(((r_51 != NULL) && (r_51 != u_51)))
                                                    _fail(u_51);
                                                  else
                                                    r_51 = u_51;
                                                  {
                                                    t = not_null(w_49);
                                                    {
                                                      ATerm t_8 (ATerm t)
                                                      {
                                                        ATerm g_31 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = g_31;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, t_8);
                                                      {
                                                        ATerm b_9 (ATerm t)
                                                        {
                                                          t = term_h_31;
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, b_9);
                                                        {
                                                          v_51 = t;
                                                          if(((s_51 != NULL) && (s_51 != v_51)))
                                                            _fail(v_51);
                                                          else
                                                            s_51 = v_51;
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
                                    t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(q_51), not_null(r_51), not_null(s_51));
                                  }
                                }
                              else
                                {
                                  if(match_cons(x_49, sym_H_2))
                                    {
                                      y_49 = ATgetArgument(x_49, 0);
                                      w_49 = ATgetArgument(x_49, 1);
                                      {
                                        ATerm y_51 = NULL,z_51 = NULL;
                                        ATerm a_52 = NULL;
                                        t = not_null(y_49);
                                        {
                                          ATerm b_52 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            a_52 = t;
                                            {
                                              if(((y_51 != NULL) && (y_51 != a_52)))
                                                _fail(a_52);
                                              else
                                                y_51 = a_52;
                                              {
                                                t = not_null(w_49);
                                                {
                                                  t = toh_0(t);
                                                  {
                                                    b_52 = t;
                                                    if(((z_51 != NULL) && (z_51 != b_52)))
                                                      _fail(b_52);
                                                    else
                                                      z_51 = b_52;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(y_51), not_null(z_51));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(x_49, sym_FBOX_2))
                                        {
                                          y_49 = ATgetArgument(x_49, 0);
                                          w_49 = ATgetArgument(x_49, 1);
                                          z_48 :
                                          if(match_cons(y_49, sym_F_1))
                                            {
                                              v_49 = ATgetArgument(y_49, 0);
                                              a_49 :
                                              if(((ATgetType(v_49) == AT_LIST) && ((ATermList) v_49 != ATempty)))
                                                {
                                                  t_49 = ATgetFirst((ATermList) v_49);
                                                  u_49 = (ATerm) ATgetNext((ATermList) v_49);
                                                  {
                                                    ATerm j_31 = t;
                                                    int k_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_52 = NULL,g_52 = NULL;
                                                        t = not_null(t_49);
                                                        {
                                                          ATerm l_31 = t;
                                                          int m_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_9 (ATerm t)
                                                              {
                                                                ATerm h_52 = NULL;
                                                                h_52 = t;
                                                                if(((g_52 != NULL) && (g_52 != h_52)))
                                                                  _fail(h_52);
                                                                else
                                                                  g_52 = h_52;
                                                                return(t);
                                                              }
                                                              t = FFID_2(t, FM_0, c_9);
                                                              LocalPopChoice(m_31);
                                                            }
                                                          else
                                                            {
                                                              t = l_31;
                                                              {
                                                                ATerm n_31 = t;
                                                                int o_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm d_9 (ATerm t)
                                                                    {
                                                                      ATerm i_52 = NULL;
                                                                      i_52 = t;
                                                                      if(((g_52 != NULL) && (g_52 != i_52)))
                                                                        _fail(i_52);
                                                                      else
                                                                        g_52 = i_52;
                                                                      return(t);
                                                                    }
                                                                    t = FFID_2(t, SE_0, d_9);
                                                                    LocalPopChoice(o_31);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_31;
                                                                    {
                                                                      ATerm p_31 = t;
                                                                      int q_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          ATerm e_9 (ATerm t)
                                                                          {
                                                                            ATerm j_52 = NULL;
                                                                            j_52 = t;
                                                                            if(((g_52 != NULL) && (g_52 != j_52)))
                                                                              _fail(j_52);
                                                                            else
                                                                              g_52 = j_52;
                                                                            return(t);
                                                                          }
                                                                          t = FFID_2(t, SH_0, e_9);
                                                                          LocalPopChoice(q_31);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_31;
                                                                          {
                                                                            ATerm r_31 = t;
                                                                            int s_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm g_9 (ATerm t)
                                                                                {
                                                                                  ATerm k_52 = NULL;
                                                                                  k_52 = t;
                                                                                  if(((g_52 != NULL) && (g_52 != k_52)))
                                                                                    _fail(k_52);
                                                                                  else
                                                                                    g_52 = k_52;
                                                                                  return(t);
                                                                                }
                                                                                t = FFID_2(t, SZ_0, g_9);
                                                                                LocalPopChoice(s_31);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_31;
                                                                                {
                                                                                  ATerm m_52 = NULL;
                                                                                  ATerm l_9 (ATerm t)
                                                                                  {
                                                                                    ATerm l_52 = NULL;
                                                                                    l_52 = t;
                                                                                    if(((f_52 != NULL) && (f_52 != l_52)))
                                                                                      _fail(l_52);
                                                                                    else
                                                                                      f_52 = l_52;
                                                                                    return(t);
                                                                                  }
                                                                                  t = FFID_2(t, CL_0, l_9);
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(f_52));
                                                                                    {
                                                                                      m_52 = t;
                                                                                      if(((g_52 != NULL) && (g_52 != m_52)))
                                                                                        _fail(m_52);
                                                                                      else
                                                                                        g_52 = m_52;
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
                                                        t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(g_52), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(u_49)), not_null(w_49)));
                                                        LocalPopChoice(k_31);
                                                      }
                                                    else
                                                      {
                                                        t = j_31;
                                                        t = e_54(t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(((ATermList) v_49 == ATempty))
                                                    {
                                                      {
                                                        ATerm x_31 = t;
                                                        int y_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = not_null(w_49);
                                                            LocalPopChoice(y_31);
                                                          }
                                                        else
                                                          {
                                                            t = x_31;
                                                            t = e_54(t);
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = e_54(t);
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              t = e_54(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(x_49, sym_C_2))
                                            {
                                              y_49 = ATgetArgument(x_49, 0);
                                              w_49 = ATgetArgument(x_49, 1);
                                              b_49 :
                                              if(((ATermList) y_49 == ATempty))
                                                {
                                                  t = f_54(t);
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(x_49, sym_S_1))
                                                {
                                                  y_49 = ATgetArgument(x_49, 0);
                                                  t = g_54(t);
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
      LocalPopChoice(k_30);
    }
  else
    {
      t = h_30;
      {
        ATerm f_53 = NULL;
        ATerm h_53 = NULL,i_53 = NULL;
        ATerm m_9 (ATerm t)
        {
          ATerm a_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0(t);
              LocalPopChoice(c_32);
            }
          else
            {
              t = a_32;
              {
                ATerm d_32 = t;
                int e_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_9 (ATerm t)
                    {
                      ATerm x_52 = NULL;
                      x_52 = t;
                      c_49 :
                      if(!(match_string(x_52, "-t")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm w_9 (ATerm t)
                    {
                      ATerm y_52 = NULL;
                      y_52 = t;
                      t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(y_52));
                      return(t);
                    }
                    t = ArgOption_2(t, n_9, w_9);
                    LocalPopChoice(e_32);
                  }
                else
                  {
                    t = d_32;
                    {
                      ATerm x_9 (ATerm t)
                      {
                        ATerm c_53 = NULL;
                        c_53 = t;
                        e_49 :
                        if(!(match_string(c_53, "-w")))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm y_9 (ATerm t)
                      {
                        ATerm d_53 = NULL;
                        d_53 = t;
                        t = (ATerm) ATmakeAppl(sym_Width_1, not_null(d_53));
                        return(t);
                      }
                      t = ArgOption_2(t, x_9, y_9);
                    }
                  }
              }
            }
          return(t);
        }
        t = parse_options_1(t, m_9);
        {
          f_53 = t;
          {
            ATerm f_32 = t;
            int g_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = need_help_1(t, usage_0);
                LocalPopChoice(g_32);
              }
            else
              {
                t = f_32;
                {
                  ATerm h_32 = t;
                  int i_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_32;
                      l_32 = t;
                      {
                        ATerm m_32 = t;
                        int n_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_9 (ATerm t)
                            {
                              ATerm j_53 = NULL,k_53 = NULL;
                              j_53 = t;
                              k_49 :
                              if(match_cons(j_53, sym_Output_1))
                                {
                                  k_53 = ATgetArgument(j_53, 0);
                                  {
                                    if(((i_53 != NULL) && (i_53 != k_53)))
                                      _fail(k_53);
                                    else
                                      i_53 = k_53;
                                    {
                                      t = not_null(i_53);
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
                            t = option_defined_1(t, z_9);
                            LocalPopChoice(n_32);
                          }
                        else
                          {
                            t = m_32;
                            {
                              ATerm l_53 = NULL;
                              t = term_o_32;
                              {
                                l_53 = t;
                                if(((i_53 != NULL) && (i_53 != l_53)))
                                  _fail(l_53);
                                else
                                  i_53 = l_53;
                              }
                            }
                          }
                      }
                      t = l_32;
                      {
                        ATerm p_32;
                        p_32 = t;
                        {
                          ATerm b_10 (ATerm t)
                          {
                            ATerm m_53 = NULL,n_53 = NULL;
                            m_53 = t;
                            o_49 :
                            if(match_cons(m_53, sym_LatexTable_1))
                              {
                                n_53 = ATgetArgument(m_53, 0);
                                t = not_null(n_53);
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = collect_1(t, b_10);
                          t = load_tables_0(t);
                        }
                        t = p_32;
                        {
                          t = input_file_0(t);
                          {
                            t = Snd_0(t);
                            {
                              ATerm q_32 = t;
                              int r_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_32;
                                  s_32 = t;
                                  {
                                    t = not_null(f_53);
                                    {
                                      ATerm c_10 (ATerm t)
                                      {
                                        ATerm p_53 = NULL,q_53 = NULL;
                                        p_53 = t;
                                        q_49 :
                                        if(match_cons(p_53, sym_Width_1))
                                          {
                                            q_53 = ATgetArgument(p_53, 0);
                                            if(((h_53 != NULL) && (h_53 != q_53)))
                                              _fail(q_53);
                                            else
                                              h_53 = q_53;
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, c_10);
                                    }
                                  }
                                  t = s_32;
                                  {
                                    ATerm d_10 (ATerm t)
                                    {
                                      t = not_null(h_53);
                                      return(t);
                                    }
                                    t = abox2latex_1(t, d_10);
                                  }
                                  LocalPopChoice(r_32);
                                }
                              else
                                {
                                  t = q_32;
                                  t = abox2latex_0(t);
                                }
                              {
                                ATerm f_10 (ATerm t)
                                {
                                  ATerm g_10 (ATerm t)
                                  {
                                    t = is_string_0(t);
                                    {
                                      ATerm t_32;
                                      t_32 = t;
                                      {
                                        ATerm h_10 (ATerm t)
                                        {
                                          t = not_null(i_53);
                                          return(t);
                                        }
                                        ATerm i_10 (ATerm t)
                                        {
                                          ATerm r_53 = NULL;
                                          r_53 = t;
                                          t = (ATerm) ATinsert(ATempty, not_null(r_53));
                                          return(t);
                                        }
                                        t = split_2(t, h_10, i_10);
                                        t = print_0(t);
                                      }
                                      t = t_32;
                                    }
                                    return(t);
                                  }
                                  t = try_1(t, g_10);
                                  return(t);
                                }
                                t = topdown_1(t, f_10);
                                t = report_success_0(t);
                              }
                            }
                          }
                        }
                      }
                      LocalPopChoice(i_32);
                    }
                  else
                    {
                      t = h_32;
                      t = report_failure_0(t);
                    }
                }
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

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_CL_0;
Symbol sym_SZ_0;
Symbol sym_SH_0;
Symbol sym_SE_0;
Symbol sym_FM_0;
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_F_1;
Symbol sym_FFID_2;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Hashtable_1;
static void init_module_constructors (void)
{
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
}
ATerm term_b_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_p_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_m_16;
ATerm term_a_16;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_y_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_p_6);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_b_8);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_y_7);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-set(s); use collect-om(s, conc)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_a_16);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_16);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_p_6);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_f_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_y_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_s_21);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_p_6);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_p_6);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_p_6);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_n_23);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm Abox2latex_options_0_0 (ATerm t);
static ATerm x_1 (ATerm g_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
ATerm collect_om_2_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm w_43 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm y_86 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm t_6 (ATerm v_18, ATerm t);
ATerm listtd_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm x_84 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm e_94 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm u_6 (ATerm w_20, ATerm x_20, ATerm t);
ATerm filter_1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm s_84 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm r_56 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t);
static ATerm c_3 (ATerm t);
static ATerm v_6 (ATerm t_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm w_6 (ATerm n_0, ATerm t);
static ATerm x_6 (ATerm t_38, ATerm u_38, ATerm t);
ATerm while_not_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm a_68 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_86 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm z_6 (ATerm r_35, ATerm s_35, ATerm t);
static ATerm a_7 (ATerm m_20, ATerm n_20, ATerm t);
static ATerm c_7 (ATerm a_93 (ATerm), ATerm c_223, ATerm s_20, ATerm t);
static ATerm b_7 (ATerm i_20, ATerm j_20, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_111 (ATerm), ATerm t);
static ATerm w_71 (ATerm q_71, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm o_20, ATerm t);
static ATerm e_7 (ATerm k_34, ATerm l_34, ATerm t);
static ATerm f_7 (ATerm t_35, ATerm u_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_73 (ATerm g_72, ATerm t);
static ATerm i_73 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t);
static ATerm j_73 (ATerm u_72, ATerm v_72, ATerm w_72, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_93 (ATerm), ATerm t);
static ATerm l_7 (ATerm p_60, ATerm q_60, ATerm t);
ATerm if_verbose2_1_0 (ATerm g_110 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_7 (ATerm b_54, ATerm c_54, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_7 (ATerm w_58, ATerm x_58, ATerm v_58, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm n_38, ATerm o_38, ATerm t);
ATerm foldr_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_110 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm v_112 (ATerm), ATerm t);
static ATerm p_7 (ATerm o_63, ATerm p_63, ATerm q_63, ATerm t);
static ATerm q_7 (ATerm r_63, ATerm s_63, ATerm t);
ATerm lookup_table_0_1 (ATerm i_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_63, ATerm x_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm t_63, ATerm u_63, ATerm t);
static ATerm k_7 (ATerm y_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_114 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm parse_options_1_0 (ATerm x_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm iowrap_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL,i_0 = NULL,k_0 = NULL;
  c_0 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_r_6;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), e_0), term_s_6);
  k_0 = t;
  t = SSL_printnl(i_0, k_0);
  t = term_i_7;
  f_0 = t;
  t = SSL_exit(f_0);
  t = c_0;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL;
  t = term_n_7;
  q_0 = t;
  t = term_p_6;
  r_0 = t;
  t = term_r_7;
  t = o_7(q_0, r_0, t);
  t = term_v_7;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  s_0 = t;
  t = term_y_7;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, s_0);
  t = o_7(v_0, s_0, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = term_b_8;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, x_0);
  t = o_7(y_0, x_0, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_c_8;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            {
              ATerm h_8 = t;
              int i_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_0, a_1, b_1, t);
                  LocalPopChoice(i_8);
                }
              else
                {
                  t = h_8;
                  {
                    ATerm j_8 = t;
                    int k_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_8);
                      }
                    else
                      {
                        t = j_8;
                        {
                          ATerm l_8 = t;
                          int m_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(m_8);
                            }
                          else
                            {
                              t = l_8;
                              {
                                ATerm n_8 = t;
                                int o_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(d_1, e_1, h_1, t);
                                    LocalPopChoice(o_8);
                                  }
                                else
                                  {
                                    t = n_8;
                                    t = ArgOption_3_0(i_1, j_1, l_1, t);
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
static ATerm x_1 (ATerm g_1, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_explode_term(g_1);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      {
        ATerm r_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_1 (ATerm t);
            static ATerm m_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = q_1;
            t = at_end_1_0(m_1, t);
            LocalPopChoice(t_8);
          }
        else
          {
            t = r_8;
            t = x_1(s_1, t);
          }
      }
    }
  else
    {
      t = x_1(s_1, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
      t = k_100(t);
    }
  else
    {
      ATerm e_2 = NULL,f_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_2 = ATgetFirst((ATermList) t);
          b_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_2;
      t = m_100(t);
      e_2 = t;
      t = b_2;
      t = foldr_3_0(k_100, l_100, m_100, t);
      f_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
      t = l_100(t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL;
      t = c_99(t);
      i_2 = t;
      t = (ATerm) ATinsert(ATempty, i_2);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm o_1 (ATerm t);
        static ATerm o_1 (ATerm t)
        {
          t = collect_om_2_0(c_99, d_99, t);
          return(t);
        }
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm w_8 = ATgetArgument(t, 0);
            a_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_0;
        t = foldr_3_0(n_1, d_99, o_1, t);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  j_2 = t;
  t = y_92(t);
  k_2 = t;
  t = term_r_6;
  l_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_2), k_2);
  m_2 = t;
  t = SSL_printnl(l_2, m_2);
  t = j_2;
  return(t);
}
static ATerm w_43 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t)
{
  ATerm a_4 = NULL;
  t = SSL_is_int(t_2);
  t = SSL_int_to_string(t_2);
  a_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_9), u_2), term_y_8), a_4), term_x_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,m_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      i_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
      t = i_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), k_4), term_b_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_4 = ATgetFirst((ATermList) t);
              d_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), k_4), term_f_9), j_4), term_e_9);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          i_4 = ATgetArgument(t, 0);
          k_4 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_9), k_4), term_f_9), i_4), term_g_9);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              i_4 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
              f_4 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_9), f_4), term_f_9), k_4), term_y_8), i_4), term_i_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  i_4 = ATgetArgument(t, 0);
                  k_4 = ATgetArgument(t, 1);
                  f_4 = ATgetArgument(t, 2);
                  g_4 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), g_4), term_f_9), f_4), term_y_8), k_4), term_y_8), i_4), term_k_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      i_4 = ATgetArgument(t, 0);
                      k_4 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_9), k_4), term_f_9), i_4), term_m_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          i_4 = ATgetArgument(t, 0);
                          k_4 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), k_4), term_p_9), i_4), term_o_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              i_4 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_9), i_4), term_r_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  i_4 = ATgetArgument(t, 0);
                                  k_4 = ATgetArgument(t, 1);
                                  t = i_4;
                                  if(match_string(t, "="))
                                    {
                                      ATerm t_9 = t;
                                      int u_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_43(i_4, k_4, m_4, t);
                                          LocalPopChoice(u_9);
                                        }
                                      else
                                        {
                                          t = t_9;
                                          {
                                            ATerm v_9 = t;
                                            int w_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), k_4), term_x_9);
                                                LocalPopChoice(w_9);
                                              }
                                            else
                                              {
                                                t = v_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_9), k_4), term_f_9), i_4), term_z_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm a_10 = t;
                                      int b_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_43(i_4, k_4, m_4, t);
                                          LocalPopChoice(b_10);
                                        }
                                      else
                                        {
                                          t = a_10;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_9), k_4), term_f_9), i_4), term_z_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      i_4 = ATgetArgument(t, 0);
                                      k_4 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_4), term_d_10), i_4), term_c_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          i_4 = ATgetArgument(t, 0);
                                          k_4 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_y_8), i_4), term_e_10);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              i_4 = ATgetArgument(t, 0);
                                              k_4 = ATgetArgument(t, 1);
                                              t = i_4;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_f_10);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_g_10);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_h_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_i_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_j_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_k_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_m_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_o_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_p_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_q_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_r_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_t_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_u_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_v_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_w_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_x_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_y_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_z_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_a_11);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_b_11);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_c_11);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_d_11);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_e_11);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_f_11);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  j_4 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_10), k_4), term_y_8), j_4), term_g_11);
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
                                              if(match_cons(t, sym_C_0))
                                                {
                                                  t = term_h_11;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_i_11;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_j_11;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_k_11;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_l_11;
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
ATerm bottomup_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    t = bottomup_1_0(y_86, t);
    return(t);
  }
  t = SRTS_all(p_1, t);
  t = y_86(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
      t = term_o_11;
      y_43 = t;
      t = term_b_8;
      z_43 = t;
      t = term_p_11;
      t = l_7(y_43, z_43, t);
      x_43 = t;
      t = (ATerm) ATinsert(ATempty, x_43);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  i_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_45 = ATgetFirst((ATermList) t);
          k_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 = NULL,f_1 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(i_45);
            c_1 = t;
            t = j_45;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_45;
            t = flat_list_0_0(t);
            f_1 = t;
            t = (ATerm) ATinsert(CheckATermList(f_1), j_45);
            t_0 = t;
            t = SSLsetAnnotations(t_0, c_1);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm s_11 = t;
              int t_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 = NULL,v_1 = NULL,y_1 = NULL,p_2 = NULL,u_0 = NULL;
                  t = SSLgetAnnotations(i_45);
                  y_1 = t;
                  t = j_45;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_45;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm u_11 = ATgetFirst((ATermList) t);
                          ATerm v_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = j_45;
                    }
                  t = (ATerm) ATinsert(CheckATermList(k_45), j_45);
                  u_0 = t;
                  t = SSLsetAnnotations(u_0, y_1);
                  p_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = p_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_11 = ATgetFirst((ATermList) t);
                      t_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_1, t_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(t_11);
                }
              else
                {
                  t = s_11;
                  {
                    ATerm o_3 = NULL,r_3 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(i_45);
                    o_3 = t;
                    t = k_45;
                    t = flat_list_0_0(t);
                    r_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(r_3), j_45);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, o_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_12) != AT_INT) || (ATgetInt((ATermInt) d_12) != 34)))
        _fail(t);
      q_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_45), term_e_12), term_e_12);
  return(t);
}
static ATerm t_6 (ATerm v_18, ATerm t)
{
  ATerm p_45 = NULL;
  t = v_18;
  t = at_suffix_1_0(u_1, t);
  p_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(p_45), term_f_12), term_f_12);
  return(t);
}
ATerm listtd_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  static ATerm e_46 (ATerm t);
  static ATerm e_46 (ATerm t)
  {
    ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
    t = t_94(t);
    b_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_46;
      }
    else
      {
        ATerm b_4 = NULL,h_4 = NULL,b_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_46 = ATgetFirst((ATermList) t);
            d_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_46);
        b_4 = t;
        t = d_46;
        t = e_46(t);
        h_4 = t;
        t = (ATerm) ATinsert(CheckATermList(h_4), c_46);
        b_5 = t;
        t = SSLsetAnnotations(b_5, b_4);
      }
    return(t);
  }
  t = e_46(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_6 = NULL,o_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_6 = ATgetFirst((ATermList) t);
      o_6 = (ATerm) ATgetNext((ATermList) t);
      t = l_6;
      if(match_int(t, 34))
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_6;
              t = t_6(o_6, t);
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              t = q_6;
            }
        }
      else
        {
          t = q_6;
        }
    }
  else
    {
      t = q_6;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  if(match_int(t, 32))
    {
      ATerm n_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = NULL;
          t = term_t_12;
          i_12 = t;
          t = SSL_explode_string(i_12);
          LocalPopChoice(p_12);
        }
      else
        {
          t = n_12;
          t = d_9;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm u_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_12 = NULL;
              t = term_y_12;
              j_12 = t;
              t = SSL_explode_string(j_12);
              LocalPopChoice(v_12);
            }
          else
            {
              t = u_12;
              t = d_9;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_12 = NULL;
                  t = term_f_13;
                  k_12 = t;
                  t = SSL_explode_string(k_12);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = z_12;
                  t = d_9;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm g_13 = t;
                  int h_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_12 = NULL;
                      t = term_i_13;
                      l_12 = t;
                      t = SSL_explode_string(l_12);
                      LocalPopChoice(h_13);
                    }
                  else
                    {
                      t = g_13;
                      t = d_9;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm k_13 = t;
                      int l_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_12 = NULL;
                          t = term_m_13;
                          m_12 = t;
                          t = SSL_explode_string(m_12);
                          LocalPopChoice(l_13);
                        }
                      else
                        {
                          t = k_13;
                          t = d_9;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm o_13 = t;
                          int p_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_12 = NULL;
                              t = term_q_13;
                              o_12 = t;
                              t = SSL_explode_string(o_12);
                              LocalPopChoice(p_13);
                            }
                          else
                            {
                              t = o_13;
                              t = d_9;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm r_13 = t;
                              int t_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_12 = NULL;
                                  t = term_u_13;
                                  q_12 = t;
                                  t = SSL_explode_string(q_12);
                                  LocalPopChoice(t_13);
                                }
                              else
                                {
                                  t = r_13;
                                  t = d_9;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm v_13 = t;
                                  int w_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_12 = NULL;
                                      t = term_x_13;
                                      r_12 = t;
                                      t = SSL_explode_string(r_12);
                                      LocalPopChoice(w_13);
                                    }
                                  else
                                    {
                                      t = v_13;
                                      t = d_9;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm y_13 = t;
                                      int z_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_12 = NULL;
                                          t = term_a_14;
                                          s_12 = t;
                                          t = SSL_explode_string(s_12);
                                          LocalPopChoice(z_13);
                                        }
                                      else
                                        {
                                          t = y_13;
                                          t = d_9;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm b_14 = t;
                                          int c_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm w_12 = NULL;
                                              t = term_d_14;
                                              w_12 = t;
                                              t = SSL_explode_string(w_12);
                                              LocalPopChoice(c_14);
                                            }
                                          else
                                            {
                                              t = b_14;
                                              t = d_9;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm e_14 = t;
                                              int f_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_12 = NULL;
                                                  t = term_h_14;
                                                  x_12 = t;
                                                  t = SSL_explode_string(x_12);
                                                  LocalPopChoice(f_14);
                                                }
                                              else
                                                {
                                                  t = e_14;
                                                  t = d_9;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm i_14 = t;
                                                  int j_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_13 = NULL;
                                                      t = term_l_14;
                                                      b_13 = t;
                                                      t = SSL_explode_string(b_13);
                                                      LocalPopChoice(j_14);
                                                    }
                                                  else
                                                    {
                                                      t = i_14;
                                                      t = d_9;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm m_14 = t;
                                                      int n_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_13 = NULL;
                                                          t = term_o_14;
                                                          c_13 = t;
                                                          t = SSL_explode_string(c_13);
                                                          LocalPopChoice(n_14);
                                                        }
                                                      else
                                                        {
                                                          t = m_14;
                                                          t = d_9;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm p_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_13 = NULL;
                                                              t = term_s_14;
                                                              d_13 = t;
                                                              t = SSL_explode_string(d_13);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = p_14;
                                                              t = d_9;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm t_14 = t;
                                                              int u_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_13 = NULL;
                                                                  t = term_v_14;
                                                                  e_13 = t;
                                                                  t = SSL_explode_string(e_13);
                                                                  LocalPopChoice(u_14);
                                                                }
                                                              else
                                                                {
                                                                  t = t_14;
                                                                  t = d_9;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = d_9;
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
ATerm latex_string_0_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_48 = NULL;
        t = term_z_14;
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_14, r_48);
        t = l_7(t_48, r_48, t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm j_6 = NULL;
          t = SSL_explode_string(r_48);
          t = listtd_1_0(w_1, t);
          t = map_1_0(c_2, t);
          t = flat_list_0_0(t);
          j_6 = t;
          t = SSL_implode_string(j_6);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  static ATerm b_50 (ATerm t);
  static ATerm b_50 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
    y_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_49 = ATgetFirst((ATermList) t);
        x_49 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_13 = NULL,n_13 = NULL,s_13 = NULL,f_5 = NULL;
              t = SSLgetAnnotations(y_49);
              n_13 = t;
              t = w_49;
              t = x_84(t);
              s_13 = t;
              t = (ATerm) ATinsert(CheckATermList(x_49), s_13);
              f_5 = t;
              t = SSLsetAnnotations(f_5, n_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_15 = ATgetFirst((ATermList) t);
                  j_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_13;
              t = b_50(t);
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              t = y_49;
            }
        }
      }
    else
      {
        t = y_49;
      }
    return(t);
  }
  t = b_50(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  static ATerm q_50 (ATerm t);
  static ATerm q_50 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_94(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,g_14 = NULL,k_14 = NULL,n_5 = NULL;
          n_50 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_50 = ATgetFirst((ATermList) t);
              p_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_50);
          g_14 = t;
          t = p_50;
          t = q_50(t);
          k_14 = t;
          t = (ATerm) ATinsert(CheckATermList(k_14), o_50);
          n_5 = t;
          t = SSLsetAnnotations(n_5, g_14);
        }
      }
    return(t);
  }
  t = q_50(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  if(match_int(t, 9))
    {
      t = w_50;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = w_50;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  t = remove_trailing_1_0(d_2, t);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,u_5 = NULL;
          b_51 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_50 = ATgetFirst((ATermList) t);
              z_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_51);
          x_50 = t;
          t = y_50;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = z_50;
          {
            static ATerm n_2 (ATerm t);
            static ATerm n_2 (ATerm t)
            {
              if(((u_50 != NULL) && (u_50 != t)))
                _fail(t);
              else
                u_50 = t;
              return(t);
            }
            t = Cons_2_0(h_2, n_2, t);
          }
          a_51 = t;
          t = (ATerm) ATinsert(CheckATermList(a_51), y_50);
          u_5 = t;
          t = SSLsetAnnotations(u_5, x_50);
          t = not_null(u_50);
          return(t);
        }
        t = at_suffix_1_0(g_2, t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
      }
  }
  v_50 = t;
  t = SSL_implode_string(v_50);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_15), h_52);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  k_51 = t;
  t = SSL_explode_string(k_51);
  t = reverse_acc_2_0(_id, o_2, t);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_51, (ATerm) ATempty);
  {
    static ATerm i_52 (ATerm t);
    static ATerm i_52 (ATerm t)
    {
      ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
      if(match_cons(t, sym__2))
        {
          n_51 = ATgetArgument(t, 0);
          q_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_51;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm u_51 = NULL;
          t = q_51;
          t = LatexComment_0_0(t);
          u_51 = t;
          t = (ATerm) ATinsert(ATempty, u_51);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_51 = ATgetFirst((ATermList) t);
              p_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_51;
          if(match_int(t, 10))
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_51 = NULL,z_51 = NULL;
                  t = q_51;
                  t = LatexComment_0_0(t);
                  y_51 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_51, (ATerm) ATempty);
                  t = i_52(t);
                  z_51 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_51), y_51);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  t = (ATerm) ATmakeAppl(sym__2, p_51, (ATerm) ATinsert(CheckATermList(q_51), o_51));
                  t = i_52(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, p_51, (ATerm) ATinsert(CheckATermList(q_51), o_51));
              t = i_52(t);
            }
        }
      return(t);
    }
    t = i_52(t);
  }
  t = remove_trailing_1_0(q_2, t);
  t = reverse_acc_2_0(_id, r_2, t);
  t = remove_trailing_1_0(s_2, t);
  t = map_1_0(w_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm q_14 = NULL,w_14 = NULL;
  t = filter_1_0(x_2, t);
  w_14 = t;
  t = term_l_15;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, w_14);
  t = u_6(q_14, w_14, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm j_52 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(y_2, t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = term_i_7;
    }
  j_52 = t;
  t = SSL_int_to_string(j_52);
  return(t);
}
static ATerm u_6 (ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  t = x_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_20;
    }
  else
    {
      ATerm p_15 = NULL,s_15 = NULL,z_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_52 = ATgetFirst((ATermList) t);
          a_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_20);
      p_15 = t;
      t = a_53;
      {
        static ATerm x_15 (ATerm t);
        static ATerm x_15 (ATerm t)
        {
          ATerm o_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_15 = NULL;
              u_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_15;
              LocalPopChoice(q_15);
            }
          else
            {
              t = o_15;
              {
                ATerm v_15 = NULL;
                t = Cons_2_0(_id, x_15, t);
                v_15 = t;
                t = (ATerm) ATinsert(CheckATermList(v_15), w_20);
              }
            }
          return(t);
        }
        t = x_15(t);
      }
      s_15 = t;
      t = (ATerm) ATinsert(CheckATermList(s_15), z_52);
      z_5 = t;
      t = SSLsetAnnotations(z_5, p_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
  q_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_53;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_53 = ATgetFirst((ATermList) t);
          s_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(q_53);
            e_16 = t;
            t = r_53;
            t = m_101(t);
            h_16 = t;
            t = s_53;
            t = filter_1_0(m_101, t);
            i_16 = t;
            t = (ATerm) ATinsert(CheckATermList(i_16), h_16);
            b_6 = t;
            t = SSLsetAnnotations(b_6, e_16);
            LocalPopChoice(w_15);
          }
        else
          {
            t = r_15;
            t = s_53;
            t = filter_1_0(m_101, t);
          }
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm v_53 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(z_2, t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = term_a_16;
    }
  v_53 = t;
  t = SSL_int_to_string(v_53);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm w_53 = NULL;
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,d_54 = NULL,d_6 = NULL;
    d_54 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        y_53 = ATgetArgument(t, 0);
        z_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_54);
    x_53 = t;
    t = y_53;
    t = s_84(t);
    a_54 = t;
    t = z_53;
    if(((w_53 != NULL) && (w_53 != t)))
      _fail(t);
    else
      w_53 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, a_54, z_53);
    d_6 = t;
    t = SSLsetAnnotations(d_6, x_53);
    return(t);
  }
  t = fetch_1_0(a_3, t);
  t = SSL_string_to_int(not_null(w_53));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm e_54 = NULL;
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(b_3, t);
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      t = term_a_16;
    }
  e_54 = t;
  t = SSL_int_to_string(e_54);
  return(t);
}
static ATerm r_56 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm r_54 = NULL,s_7 = NULL;
  t = SSLgetAnnotations(n_54);
  r_54 = t;
  t = m_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_54), l_54);
  s_7 = t;
  t = SSLsetAnnotations(s_7, r_54);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,w_7 = NULL;
  d_56 = t;
  if(match_cons(t, sym_C_2))
    {
      b_56 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_56);
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, b_56, c_56);
  w_7 = t;
  t = SSLsetAnnotations(w_7, a_56);
  return(t);
}
static ATerm v_6 (ATerm t_15, ATerm t)
{
  static ATerm q_56 (ATerm t);
  static ATerm q_56 (ATerm t)
  {
    static ATerm s_56 (ATerm v_54, ATerm w_54, ATerm x_54, ATerm t);
    static ATerm t_56 (ATerm l_55, ATerm m_55, ATerm n_55, ATerm t);
    static ATerm s_56 (ATerm v_54, ATerm w_54, ATerm x_54, ATerm t)
    {
      ATerm b_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,u_7 = NULL,t_7 = NULL;
      t = SSLgetAnnotations(x_54);
      b_55 = t;
      t = v_54;
      if(match_cons(t, sym_C_2))
        {
          g_55 = ATgetArgument(t, 0);
          h_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_54);
      f_55 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, g_55, h_55);
      t_7 = t;
      t = SSLsetAnnotations(t_7, f_55);
      i_55 = t;
      t = w_54;
      t = Cons_2_0(_id, q_56, t);
      e_55 = t;
      t = (ATerm) ATinsert(CheckATermList(e_55), i_55);
      u_7 = t;
      t = SSLsetAnnotations(u_7, b_55);
      return(t);
    }
    static ATerm t_56 (ATerm l_55, ATerm m_55, ATerm n_55, ATerm t)
    {
      ATerm v_55 = NULL,y_55 = NULL,a_8 = NULL;
      t = SSLgetAnnotations(n_55);
      v_55 = t;
      t = m_55;
      t = Cons_2_0(c_3, q_56, t);
      y_55 = t;
      t = (ATerm) ATinsert(CheckATermList(y_55), l_55);
      a_8 = t;
      t = SSLsetAnnotations(a_8, v_55);
      return(t);
    }
    ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
    e_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_56;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_56 = ATgetFirst((ATermList) t);
            g_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_56 = ATgetFirst((ATermList) t);
            i_56 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm d_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_56(f_56, g_56, e_56, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = d_16;
                  {
                    ATerm g_16 = t;
                    int j_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_56(f_56, g_56, e_56, t);
                        LocalPopChoice(j_16);
                      }
                    else
                      {
                        t = g_16;
                        {
                          ATerm k_16 = t;
                          int l_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_56(f_56, g_56, e_56, t);
                              LocalPopChoice(l_16);
                            }
                          else
                            {
                              t = k_16;
                              {
                                ATerm p_56 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(i_56), h_56);
                                t = q_56(t);
                                p_56 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(p_56), term_m_16), f_56);
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
            ATerm n_16 = t;
            int o_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_56(f_56, g_56, e_56, t);
                LocalPopChoice(o_16);
              }
            else
              {
                t = n_16;
                {
                  ATerm p_16 = t;
                  int q_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_56(f_56, g_56, e_56, t);
                      LocalPopChoice(q_16);
                    }
                  else
                    {
                      t = p_16;
                      t = t_56(f_56, g_56, e_56, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = t_15;
  t = q_56(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  e_57 = t;
  if(match_cons(t, sym_LBL_2))
    {
      f_57 = ATgetArgument(t, 0);
      g_57 = ATgetArgument(t, 1);
      {
        ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
        t = g_57;
        if(match_cons(t, sym_R_2))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            v_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_6(v_16, t);
        t = g_57;
        if(match_cons(t, sym_R_2))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            u_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_6(u_16, t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, f_57, t_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm w_16 = ATgetArgument(t, 0);
          g_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_57;
      t = v_6(g_57, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  static ATerm l_58 (ATerm t);
  static ATerm l_58 (ATerm t)
  {
    ATerm d_58 = NULL,j_58 = NULL,k_58 = NULL;
    d_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_58 = ATgetFirst((ATermList) t);
        k_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_17 = NULL,q_8 = NULL;
          t = SSLgetAnnotations(d_58);
          c_17 = t;
          t = k_58;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_58), j_58);
          q_8 = t;
          t = SSLsetAnnotations(q_8, c_17);
          t = l_94(t);
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm m_17 = NULL,p_17 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(d_58);
            m_17 = t;
            t = k_58;
            t = l_58(t);
            p_17 = t;
            t = (ATerm) ATinsert(CheckATermList(p_17), j_58);
            s_8 = t;
            t = SSLsetAnnotations(s_8, m_17);
          }
        }
    }
    return(t);
  }
  t = l_58(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  static ATerm f_59 (ATerm t);
  static ATerm f_59 (ATerm t)
  {
    ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
    e_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_59 = ATgetFirst((ATermList) t);
        d_59 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_17 = NULL,d_18 = NULL,z_8 = NULL;
          t = SSLgetAnnotations(e_59);
          y_17 = t;
          t = d_59;
          t = f_59(t);
          d_18 = t;
          t = (ATerm) ATinsert(CheckATermList(d_18), c_59);
          z_8 = t;
          t = SSLsetAnnotations(z_8, y_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_59;
        t = a_94(t);
      }
    return(t);
  }
  t = f_59(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_59;
    }
  else
    {
      static ATerm d_3 (ATerm t);
      static ATerm d_3 (ATerm t)
      {
        t = not_null(k_59);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_59 = ATgetFirst((ATermList) t);
          if(((k_59 != NULL) && (k_59 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_59;
      t = at_end_1_0(d_3, t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_60 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      m_60 = ATgetArgument(t, 0);
      {
        ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
        t = m_60;
        t = Hspace_0_0(t);
        n_18 = t;
        t = SSL_string_to_int(n_18);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_18, term_l_15);
        t = copy_0_0(t);
        l_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_18), term_z_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          m_60 = ATgetArgument(t, 0);
          {
            ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
            t = m_60;
            t = Hspace_0_0(t);
            t_18 = t;
            t = SSL_string_to_int(t_18);
            s_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_18, term_l_15);
            t = copy_0_0(t);
            r_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, r_18), term_a_17);
          }
        }
      else
        {
          ATerm d_19 = NULL,e_19 = NULL,k_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              m_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_60;
          t = Hspace_0_0(t);
          k_19 = t;
          t = SSL_string_to_int(k_19);
          e_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_19, term_l_15);
          t = copy_0_0(t);
          d_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_19), term_b_17);
        }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_17);
  return(t);
}
static ATerm w_6 (ATerm n_0, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  t = n_0;
  t = map_1_0(e_3, t);
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, term_m_16);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_m_16), o_19);
  t = u_6(n_19, o_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(f_3, t);
  return(t);
}
static ATerm x_6 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_38, u_38);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = SSL_subtr(t_38, u_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t)
{
  static ATerm s_60 (ATerm t);
  static ATerm s_60 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_86(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = p_86(t);
        t = s_60(t);
      }
    return(t);
  }
  t = s_60(t);
  return(t);
}
ATerm for_3_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  t = r_86(t);
  t = while_not_2_0(s_86, t_86, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL;
  if(match_cons(t, sym__2))
    {
      v_60 = ATgetArgument(t, 0);
      w_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_60, w_60, (ATerm) ATempty);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm x_60 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(((ATgetType(i_17) != AT_INT) || (ATgetInt((ATermInt) i_17) != 0)))
        _fail(t);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
      x_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_60;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  if(match_cons(t, sym__3))
    {
      y_60 = ATgetArgument(t, 0);
      z_60 = ATgetArgument(t, 1);
      a_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_60, term_i_7);
  t = geq_0_0(t);
  t = term_i_7;
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_60, term_i_7);
  t = x_6(y_60, c_61, t);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_61, z_60, (ATerm) ATinsert(CheckATermList(a_61), z_60));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(g_3, h_3, i_3, t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,w_19 = NULL,l_10 = NULL;
        k_61 = t;
        if(match_cons(t, sym__2))
          {
            l_61 = ATgetArgument(t, 0);
            m_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_61);
        w_19 = t;
        t = l_61;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_61, m_61);
        l_10 = t;
        t = SSLsetAnnotations(l_10, w_19);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,n_10 = NULL;
      z_62 = t;
      if(match_cons(t, sym_R_2))
        {
          x_62 = ATgetArgument(t, 0);
          y_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_62);
      w_62 = t;
      t = y_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, x_62, y_62);
      n_10 = t;
      t = SSLsetAnnotations(n_10, w_62);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_17;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_61, (ATerm) ATempty);
  {
    static ATerm a_63 (ATerm t);
    static ATerm a_63 (ATerm t)
    {
      ATerm u_61 = NULL,v_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
      if(match_cons(t, sym__2))
        {
          x_61 = ATgetArgument(t, 0);
          a_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_61;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm f_62 = NULL;
          t = a_62;
          t = reverse_acc_2_0(_id, j_3, t);
          f_62 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_62));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_61 = ATgetFirst((ATermList) t);
              z_61 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_61;
          if(match_cons(t, sym_R_2))
            {
              u_61 = ATgetArgument(t, 0);
              v_61 = ATgetArgument(t, 1);
              {
                ATerm o_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_62 = NULL,m_62 = NULL;
                    t = a_62;
                    t = reverse_acc_2_0(_id, k_3, t);
                    l_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_61, (ATerm) ATempty);
                    t = a_63(t);
                    m_62 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(m_62), (ATerm) ATmakeAppl(sym_R_2, u_61, v_61)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, l_62));
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = o_17;
                    t = (ATerm) ATmakeAppl(sym__2, z_61, (ATerm) ATinsert(CheckATermList(a_62), y_61));
                    t = a_63(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, z_61, (ATerm) ATinsert(CheckATermList(a_62), y_61));
              t = a_63(t);
            }
        }
      return(t);
    }
    t = a_63(t);
  }
  t = filter_1_0(l_3, t);
  return(t);
}
static ATerm a_68 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t)
{
  t = k_66;
  if(match_cons(t, sym_KW_0))
    {
      t = k_66;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = k_66;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = k_66;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = k_66;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, k_66, l_66);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm r_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_17;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm s_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_17;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_67 = NULL;
  if(match_cons(t, sym_S_1))
    {
      v_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_67;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  v_66 = t;
  if(match_cons(t, sym_REF_2))
    {
      w_66 = ATgetArgument(t, 0);
      u_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, w_66, u_66);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          w_66 = ATgetArgument(t, 0);
          u_66 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, w_66, u_66);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              w_66 = ATgetArgument(t, 0);
              u_66 = ATgetArgument(t, 1);
              {
                ATerm v_23 = NULL;
                t = v_66;
                {
                  ATerm t_17 = t;
                  int u_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(w_66);
                      v_23 = t;
                      LocalPopChoice(u_17);
                    }
                  else
                    {
                      t = t_17;
                      {
                        ATerm v_17 = t;
                        int w_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL,s_10 = NULL;
                            t = SSL_explode_string(w_66);
                            d_24 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                a_24 = ATgetFirst((ATermList) t);
                                c_24 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(d_24);
                            z_23 = t;
                            t = a_24;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(c_24), a_24);
                            s_10 = t;
                            t = SSLsetAnnotations(s_10, z_23);
                            t = (ATerm) ATinsert(ATempty, term_x_17);
                            y_23 = t;
                            t = SSL_implode_string(y_23);
                            v_23 = t;
                            LocalPopChoice(w_17);
                          }
                        else
                          {
                            t = v_17;
                            t = w_66;
                            v_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, v_23, u_66);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  w_66 = ATgetArgument(t, 0);
                  u_66 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, w_66, u_66);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      w_66 = ATgetArgument(t, 0);
                      u_66 = ATgetArgument(t, 1);
                      q_66 = ATgetArgument(t, 2);
                      {
                        ATerm x_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,f_25 = NULL,m_25 = NULL,n_25 = NULL,r_25 = NULL,c_26 = NULL;
                        t = q_66;
                        t = construct_rows_0_0(t);
                        c_25 = t;
                        t = u_66;
                        t = Vspace_0_0(t);
                        r_25 = t;
                        t = SSL_string_to_int(r_25);
                        x_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_24, term_d_17);
                        t = copy_0_0(t);
                        m_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, m_25, (ATerm) ATinsert(ATinsert(ATempty, term_h_15), term_d_17));
                        t = conc_0_0(t);
                        d_25 = t;
                        t = w_66;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            n_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_6(n_25, t);
                        z_24 = t;
                        t = c_25;
                        t = map_1_0(MkRows_0_0, t);
                        c_26 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_25, c_26);
                        t = u_6(d_25, c_26, t);
                        f_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, z_24, f_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          w_66 = ATgetArgument(t, 0);
                          u_66 = ATgetArgument(t, 1);
                          {
                            ATerm d_67 = NULL,e_67 = NULL,g_67 = NULL,i_67 = NULL,e_26 = NULL,f_26 = NULL;
                            t = w_66;
                            t = Hspace_0_0(t);
                            d_67 = t;
                            t = w_66;
                            t = Vspace_0_0(t);
                            e_67 = t;
                            t = w_66;
                            t = Ispace_0_0(t);
                            g_67 = t;
                            t = u_66;
                            t = filter_1_0(m_3, t);
                            f_26 = t;
                            t = term_z_17;
                            e_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_z_17, f_26);
                            t = u_6(e_26, f_26, t);
                            i_67 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, d_67, e_67, g_67, i_67);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              w_66 = ATgetArgument(t, 0);
                              u_66 = ATgetArgument(t, 1);
                              {
                                ATerm j_67 = NULL,l_67 = NULL,n_67 = NULL,m_26 = NULL,n_26 = NULL;
                                t = w_66;
                                t = Vspace_0_0(t);
                                j_67 = t;
                                t = w_66;
                                t = Ispace_0_0(t);
                                l_67 = t;
                                t = u_66;
                                t = filter_1_0(n_3, t);
                                n_26 = t;
                                t = term_a_18;
                                m_26 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_a_18, n_26);
                                t = u_6(m_26, n_26, t);
                                n_67 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, j_67, l_67, n_67);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  w_66 = ATgetArgument(t, 0);
                                  u_66 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_67 = NULL,r_67 = NULL;
                                    t = w_66;
                                    t = Hspace_0_0(t);
                                    p_67 = t;
                                    t = u_66;
                                    t = toh_0_0(t);
                                    r_67 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, p_67, r_67);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      w_66 = ATgetArgument(t, 0);
                                      u_66 = ATgetArgument(t, 1);
                                      t = w_66;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          t_66 = ATgetArgument(t, 0);
                                          t = t_66;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              r_66 = ATgetFirst((ATermList) t);
                                              s_66 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm b_18 = t;
                                                int c_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm n_27 = NULL,p_29 = NULL,q_29 = NULL;
                                                    t = r_66;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        p_29 = ATgetArgument(t, 0);
                                                        q_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm e_18 = t;
                                                      int f_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_30 = NULL,y_11 = NULL;
                                                          t = SSLgetAnnotations(r_66);
                                                          p_30 = t;
                                                          t = p_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = q_29;
                                                          n_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, p_29, q_29);
                                                          y_11 = t;
                                                          t = SSLsetAnnotations(y_11, p_30);
                                                          LocalPopChoice(f_18);
                                                        }
                                                      else
                                                        {
                                                          t = e_18;
                                                          {
                                                            ATerm g_18 = t;
                                                            int h_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_31 = NULL,z_11 = NULL;
                                                                t = SSLgetAnnotations(r_66);
                                                                q_31 = t;
                                                                t = p_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = q_29;
                                                                n_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, p_29, q_29);
                                                                z_11 = t;
                                                                t = SSLsetAnnotations(z_11, q_31);
                                                                LocalPopChoice(h_18);
                                                              }
                                                            else
                                                              {
                                                                t = g_18;
                                                                {
                                                                  ATerm i_18 = t;
                                                                  int j_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm i_32 = NULL,a_12 = NULL;
                                                                      t = SSLgetAnnotations(r_66);
                                                                      i_32 = t;
                                                                      t = p_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = q_29;
                                                                      n_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, p_29, q_29);
                                                                      a_12 = t;
                                                                      t = SSLsetAnnotations(a_12, i_32);
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
                                                                            ATerm z_32 = NULL,b_12 = NULL;
                                                                            t = SSLgetAnnotations(r_66);
                                                                            z_32 = t;
                                                                            t = p_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = q_29;
                                                                            n_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, p_29, q_29);
                                                                            b_12 = t;
                                                                            t = SSLsetAnnotations(b_12, z_32);
                                                                            LocalPopChoice(o_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_18;
                                                                            {
                                                                              ATerm m_33 = NULL,c_12 = NULL;
                                                                              t = SSLgetAnnotations(r_66);
                                                                              m_33 = t;
                                                                              t = p_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, p_29, q_29);
                                                                              c_12 = t;
                                                                              t = SSLsetAnnotations(c_12, m_33);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, q_29);
                                                                              n_27 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, n_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, s_66), u_66));
                                                    LocalPopChoice(c_18);
                                                  }
                                                else
                                                  {
                                                    t = b_18;
                                                    t = a_68(w_66, u_66, v_66, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = u_66;
                                                }
                                              else
                                                {
                                                  t = a_68(w_66, u_66, v_66, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = a_68(w_66, u_66, v_66, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          w_66 = ATgetArgument(t, 0);
                                          u_66 = ATgetArgument(t, 1);
                                          {
                                            ATerm u_67 = NULL;
                                            t = w_66;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = u_66;
                                            t = map_1_0(p_3, t);
                                            u_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, u_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              w_66 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = w_66;
                                          t = latex_string_0_0(t);
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
ATerm topdown_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  static ATerm q_3 (ATerm t);
  static ATerm q_3 (ATerm t)
  {
    t = topdown_1_0(x_86, t);
    return(t);
  }
  t = x_86(t);
  t = SRTS_all(q_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_68 = ATgetFirst((ATermList) t);
      {
        ATerm p_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
          {
            l_68 = ATgetFirst((ATermList) p_18);
            {
              ATerm q_18 = (ATerm) ATgetNext((ATermList) p_18);
              if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_z_14;
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_14, k_68, l_68);
  t = lookup_table_0_1(m_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(k_68, l_68, n_68, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_14, k_68, l_68);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  t = term_z_14;
  t = table_create_0_0(t);
  {
    ATerm u_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_68 = NULL,j_68 = NULL;
        t = term_o_11;
        i_68 = t;
        t = term_y_7;
        j_68 = t;
        t = term_x_18;
        t = l_7(i_68, j_68, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(s_3, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = u_18;
      }
  }
  t = h_68;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_69 = NULL;
  g_69 = t;
  t = SSL_is_string(g_69);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,r_20 = NULL;
  b_69 = t;
  if(match_cons(t, sym__2))
    {
      u_68 = ATgetArgument(t, 0);
      v_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_69);
  t_68 = t;
  t = v_68;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(t_3, t);
  y_68 = t;
  t = BOXENV_args_0_0(t);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, x_68, y_68);
  t = bottomup_1_0(u_3, t);
  a_69 = t;
  t = term_f_19;
  t = debug_1_0(v_3, t);
  t = a_69;
  t = collect_om_2_0(w_3, conc_0_0, t);
  z_68 = t;
  t = SSL_concat_strings(z_68);
  w_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_68, w_68);
  r_20 = t;
  t = SSLsetAnnotations(r_20, t_68);
  return(t);
}
static ATerm z_6 (ATerm r_35, ATerm s_35, ATerm t)
{
  ATerm h_69 = NULL;
  t = SSL_fputc(r_35, s_35);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_69);
  return(t);
}
static ATerm a_7 (ATerm m_20, ATerm n_20, ATerm t)
{
  ATerm i_69 = NULL;
  t = SSL_write_term_to_stream_text(m_20, n_20);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_69);
  return(t);
}
static ATerm c_7 (ATerm a_93 (ATerm), ATerm c_223, ATerm s_20, ATerm t)
{
  ATerm j_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_223, term_g_19);
  t = g_7(t);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_69, s_20);
  t = a_93(t);
  t = fclose_0_0(t);
  t = s_20;
  return(t);
}
static ATerm b_7 (ATerm i_20, ATerm j_20, ATerm t)
{
  ATerm k_69 = NULL;
  t = SSL_write_term_to_stream_baf(i_20, j_20);
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if(match_cons(h_19, sym_Stream_1))
        {
          p_34 = ATgetArgument(h_19, 0);
        }
      else
        _fail(t);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(p_34, t_34, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm k_35 = NULL,n_35 = NULL,o_35 = NULL,v_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym_Stream_1))
        {
          v_35 = ATgetArgument(i_19, 0);
        }
      else
        _fail(t);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(v_35, w_35, t);
  k_35 = t;
  t = term_j_19;
  n_35 = t;
  t = k_35;
  if(match_cons(t, sym_Stream_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, k_35);
  t = z_6(n_35, o_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,a_71 = NULL,b_71 = NULL,y_20 = NULL,v_20 = NULL;
  p_69 = t;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_69);
  v_69 = t;
  t = w_69;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_69 != NULL) && (o_69 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(x_3, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = term_p_19;
        o_69 = t;
      }
  }
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_69, x_69);
  v_20 = t;
  t = SSLsetAnnotations(v_20, v_69);
  t = p_69;
  if(match_cons(t, sym__2))
    {
      r_69 = ATgetArgument(t, 0);
      s_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_69);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_69, (ATerm) ATmakeAppl(sym__2, not_null(o_69), s_69));
  y_20 = t;
  t = SSLsetAnnotations(y_20, q_69);
  u_69 = t;
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL,h_34 = NULL,j_34 = NULL,m_34 = NULL,o_34 = NULL,z_20 = NULL;
        t = SSLgetAnnotations(u_69);
        a_34 = t;
        t = a_71;
        t = fetch_1_0(y_3, t);
        h_34 = t;
        t = b_71;
        if(match_cons(t, sym__2))
          {
            m_34 = ATgetArgument(t, 0);
            o_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(z_3, m_34, o_34, t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_34, j_34);
        z_20 = t;
        t = SSLsetAnnotations(z_20, a_34);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm b_35 = NULL,f_35 = NULL,g_35 = NULL,j_35 = NULL,a_21 = NULL;
          t = SSLgetAnnotations(u_69);
          b_35 = t;
          t = b_71;
          if(match_cons(t, sym__2))
            {
              g_35 = ATgetArgument(t, 0);
              j_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_7(c_4, g_35, j_35, t);
          f_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_71, f_35);
          a_21 = t;
          t = SSLsetAnnotations(a_21, b_35);
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
ATerm apply_strategy_1_0 (ATerm x_111 (ATerm), ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
  i_71 = t;
  t = dtime_0_0(t);
  t = i_71;
  t = x_111(t);
  h_71 = t;
  t = dtime_0_0(t);
  e_71 = t;
  t = h_71;
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_71), (ATerm) ATmakeAppl(sym_Runtime_1, e_71)), g_71);
  return(t);
}
static ATerm w_71 (ATerm q_71, ATerm t)
{
  t = SSL_fclose(q_71);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  u_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_71 = ATgetArgument(t, 0);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_71);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = w_71(u_71, t);
          }
      }
    }
  else
    {
      t = w_71(u_71, t);
    }
  return(t);
}
static ATerm d_7 (ATerm o_20, ATerm t)
{
  t = SSL_read_term_from_stream(o_20);
  return(t);
}
static ATerm e_7 (ATerm k_34, ATerm l_34, ATerm t)
{
  t = SSL_strcat(k_34, l_34);
  return(t);
}
static ATerm f_7 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm x_71 = NULL;
  t = SSL_fopen(t_35, u_35);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_71);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_71 = NULL;
  t = SSL_stdin_stream();
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_71 = NULL;
  t = SSL_stdout_stream();
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_72 = NULL;
  t = SSL_stderr_stream();
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_72);
  return(t);
}
static ATerm h_73 (ATerm g_72, ATerm t)
{
  ATerm h_72 = NULL;
  t = SSL_explode_term(g_72);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            h_72 = ATgetFirst((ATermList) v_19);
            {
              ATerm x_19 = (ATerm) ATgetNext((ATermList) v_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_73 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,s_72 = NULL,f_21 = NULL;
  t = SSLgetAnnotations(m_72);
  p_72 = t;
  t = k_72;
  if(match_cons(t, sym_Path_1))
    {
      s_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_72, l_72);
  f_21 = t;
  t = SSLsetAnnotations(f_21, p_72);
  if(match_cons(t, sym__2))
    {
      n_72 = ATgetArgument(t, 0);
      o_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(n_72, o_72, t);
  return(t);
}
static ATerm j_73 (ATerm u_72, ATerm v_72, ATerm w_72, ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,c_73 = NULL,j_21 = NULL;
  t = SSLgetAnnotations(w_72);
  z_72 = t;
  t = SSL_is_string(u_72);
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_73, v_72);
  j_21 = t;
  t = SSLsetAnnotations(j_21, z_72);
  if(match_cons(t, sym__2))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(x_72, y_72, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym__2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_73(e_73, t);
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
                  t = i_73(f_73, g_73, e_73, t);
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
                  t = j_73(f_73, g_73, e_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_73(e_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,s_73 = NULL;
  s_73 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_73, term_e_20);
        t = g_7(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm o_36 = NULL,p_36 = NULL;
          t = term_f_20;
          p_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_20, s_73);
          t = e_7(p_36, s_73, t);
          o_36 = t;
          t = SSL_perror(o_36);
          _fail(t);
        }
      }
  }
  m_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(n_73, t);
  l_73 = t;
  t = m_73;
  t = fclose_0_0(t);
  t = l_73;
  return(t);
}
ATerm fetch_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  static ATerm r_74 (ATerm t);
  static ATerm r_74 (ATerm t)
  {
    ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
    o_74 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_74 = ATgetFirst((ATermList) t);
        q_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = NULL,k_37 = NULL,n_21 = NULL;
          t = SSLgetAnnotations(o_74);
          x_36 = t;
          t = p_74;
          t = t_93(t);
          k_37 = t;
          t = (ATerm) ATinsert(CheckATermList(q_74), k_37);
          n_21 = t;
          t = SSLsetAnnotations(n_21, x_36);
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          {
            ATerm b_38 = NULL,f_38 = NULL,u_21 = NULL;
            t = SSLgetAnnotations(o_74);
            b_38 = t;
            t = q_74;
            t = r_74(t);
            f_38 = t;
            t = (ATerm) ATinsert(CheckATermList(f_38), p_74);
            u_21 = t;
            t = SSLsetAnnotations(u_21, b_38);
          }
        }
    }
    return(t);
  }
  t = r_74(t);
  return(t);
}
static ATerm l_7 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm u_74 = NULL;
  t = lookup_table_0_1(p_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_60, u_74, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm x_74 = NULL;
  x_74 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
        t = term_o_11;
        a_75 = t;
        t = term_p_20;
        b_75 = t;
        t = term_q_20;
        t = l_7(a_75, b_75, t);
        z_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_74, term_t_20);
        t = geq_0_0(t);
        t = x_74;
        t = g_110(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = x_74;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  if(match_string(t, "-k"))
    {
      t = e_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_75;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
  f_75 = t;
  t = SSL_string_to_int(f_75);
  g_75 = t;
  t = term_u_20;
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, g_75);
  t = o_7(h_75, g_75, t);
  t = f_75;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, l_4, n_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_75 = NULL;
  j_75 = t;
  if(match_string(t, "-S"))
    {
      t = j_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_75;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  t = term_p_20;
  k_75 = t;
  t = term_a_16;
  l_75 = t;
  t = term_c_21;
  t = o_7(k_75, l_75, t);
  t = term_d_21;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  t = SSL_string_to_int(m_75);
  n_75 = t;
  t = term_p_20;
  o_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, n_75);
  t = o_7(o_75, n_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_75);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  t = term_h_21;
  p_75 = t;
  t = term_p_6;
  q_75 = t;
  t = term_i_21;
  t = o_7(p_75, q_75, t);
  t = term_k_21;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      LocalPopChoice(o_21);
    }
  else
    {
      t = m_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, t_4, t);
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = Option_3_0(u_4, v_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  t = term_o_11;
  r_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_11, b_54, c_54);
  t = lookup_table_0_1(r_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(b_54, c_54, s_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_11, b_54, c_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
      t = term_p_6;
      t = h_0(t);
      y_75 = t;
      t = term_r_21;
      z_75 = t;
      t = term_s_21;
      a_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, y_75);
      t = m_7(z_75, a_76, y_75, t);
      _fail(t);
    }
  else
    {
      ATerm d_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_75 = ATgetFirst((ATermList) t);
          x_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_75;
      t = d_0(t);
      t = term_p_6;
      t = g_0(t);
      d_76 = t;
      t = (ATerm) ATinsert(CheckATermList(x_75), d_76);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm f_76 = NULL;
  f_76 = t;
  if(match_string(t, "-o"))
    {
      t = f_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_76;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL;
  g_76 = t;
  t = term_t_21;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, g_76);
  t = o_7(h_76, g_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_76);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
static ATerm m_7 (ATerm w_58, ATerm x_58, ATerm v_58, ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL;
  j_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, x_58);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            ATerm a_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_58, x_58);
        t = l_7(w_58, x_58, t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATempty;
      }
  }
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_58, x_58, (ATerm) ATinsert(CheckATermList(k_76), v_58));
  t = lookup_table_0_1(w_58, t);
  n_76 = t;
  t = (ATerm) ATinsert(CheckATermList(k_76), v_58);
  l_76 = t;
  t = n_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(x_58, l_76, m_76, t);
  t = j_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
      t = term_p_6;
      t = p_0(t);
      y_76 = t;
      t = term_r_21;
      z_76 = t;
      t = term_s_21;
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, y_76);
      t = m_7(z_76, a_77, y_76, t);
      _fail(t);
    }
  else
    {
      ATerm e_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_76 = ATgetFirst((ATermList) t);
          v_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_76 = ATgetFirst((ATermList) t);
          x_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_76;
      t = m_0(t);
      t = w_76;
      t = o_0(t);
      e_77 = t;
      t = (ATerm) ATinsert(CheckATermList(x_76), e_77);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_77 = NULL;
  g_77 = t;
  if(match_string(t, "-i"))
    {
      t = g_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_77;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  h_77 = t;
  t = term_b_22;
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, h_77);
  t = o_7(i_77, h_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_77);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, c_5, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_6;
  t = whoami_0_0(t);
  j_77 = t;
  t = term_r_6;
  l_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_22), j_77);
  m_77 = t;
  t = SSL_printnl(l_77, m_77);
  t = term_i_7;
  k_77 = t;
  t = SSL_exit(k_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL;
  t = term_o_11;
  n_77 = t;
  t = term_f_22;
  o_77 = t;
  t = term_g_22;
  t = l_7(n_77, o_77, t);
  return(t);
}
static ATerm h_7 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_38, o_38);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      t = SSL_addr(n_38, o_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
  q_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_77;
      t = i_100(t);
    }
  else
    {
      ATerm v_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_77 = ATgetFirst((ATermList) t);
          s_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_77;
      t = foldr_2_0(i_100, j_100, t);
      v_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_77, v_77);
      t = j_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_a_16;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(g_39, h_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_77 = NULL,m_38 = NULL,z_38 = NULL;
  t = times_0_0(t);
  z_38 = t;
  t = SSL_explode_term(z_38);
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_38;
  t = foldr_2_0(e_5, g_5, t);
  y_77 = t;
  t = SSL_TicksToSeconds(y_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  if(match_cons(t, sym__2))
    {
      k_78 = ATgetArgument(t, 0);
      l_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_78;
        if((k_78 != t))
          {
            _fail(t);
          }
        t = j_78;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = (ATerm) ATmakeAppl(sym__2, k_78, l_78);
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_78, l_78);
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              t = SSL_gtr(k_78, l_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_78, l_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm p_78 = NULL;
  p_78 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
        t = term_o_11;
        s_78 = t;
        t = term_p_20;
        t_78 = t;
        t = term_q_20;
        t = l_7(s_78, t_78, t);
        r_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_78, term_i_7);
        t = geq_0_0(t);
        t = p_78;
        t = f_110(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = p_78;
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,y_78 = NULL,z_78 = NULL;
  t = run_time_0_0(t);
  v_78 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  w_78 = t;
  t = term_r_6;
  y_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), v_78), term_r_22), w_78);
  z_78 = t;
  t = SSL_printnl(y_78, z_78);
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), v_78), term_r_22), w_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_16;
  a_79 = t;
  t = SSL_exit(a_79);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL;
  l_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_79 = ATgetArgument(t, 0);
          {
            ATerm d_40 = NULL,y_21 = NULL;
            t = SSLgetAnnotations(l_79);
            d_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_79);
            y_21 = t;
            t = SSLsetAnnotations(y_21, d_40);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_79 = NULL,e_79 = NULL;
      t = term_o_11;
      d_79 = t;
      t = term_y_22;
      e_79 = t;
      t = term_z_22;
      t = l_7(d_79, e_79, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = v_22;
      t = fetch_1_0(i_5, t);
    }
  t = v_112(t);
  return(t);
}
static ATerm p_7 (ATerm o_63, ATerm p_63, ATerm q_63, ATerm t)
{
  ATerm n_79 = NULL;
  t = SSL_hashtable_put(q_63, o_63, p_63);
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_79);
  return(t);
}
static ATerm q_7 (ATerm r_63, ATerm s_63, ATerm t)
{
  t = SSL_hashtable_get(s_63, r_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_60, ATerm t)
{
  ATerm w_79 = NULL;
  t = table_hashtable_0_0(t);
  w_79 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        t = w_79;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_7(i_60, m_40, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm a_44 = NULL;
          t = i_60;
          t = table_create_0_0(t);
          t = w_79;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(i_60, a_44, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_63, ATerm x_63, ATerm t)
{
  ATerm z_79 = NULL;
  t = SSL_hashtable_create(w_63, x_63);
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_79);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,e_80 = NULL,f_80 = NULL;
  a_80 = t;
  t = term_c_23;
  e_80 = t;
  t = term_d_23;
  f_80 = t;
  t = a_80;
  t = new_hashtable_0_2(e_80, f_80, t);
  b_80 = t;
  t = a_80;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(a_80, b_80, c_80, t);
  t = a_80;
  return(t);
}
static ATerm j_7 (ATerm t_63, ATerm u_63, ATerm t)
{
  ATerm g_80 = NULL;
  t = SSL_hashtable_remove(u_63, t_63);
  g_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_80);
  return(t);
}
static ATerm k_7 (ATerm y_63, ATerm t)
{
  ATerm h_80 = NULL;
  t = SSL_hashtable_destroy(y_63);
  h_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_80 = NULL;
  t = SSL_table_hashtable();
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
  j_80 = t;
  t = table_hashtable_0_0(t);
  k_80 = t;
  t = lookup_table_0_1(j_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(m_80, t);
  t = k_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(j_80, l_80, t);
  t = j_80;
  return(t);
}
ATerm map_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  static ATerm b_81 (ATerm t);
  static ATerm b_81 (ATerm t)
  {
    ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
    y_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_80;
      }
    else
      {
        ATerm r_45 = NULL,h_46 = NULL,i_46 = NULL,c_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_80 = ATgetFirst((ATermList) t);
            a_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_80);
        r_45 = t;
        t = z_80;
        t = j_93(t);
        h_46 = t;
        t = a_81;
        t = b_81(t);
        i_46 = t;
        t = (ATerm) ATinsert(CheckATermList(i_46), h_46);
        c_22 = t;
        t = SSLsetAnnotations(c_22, r_45);
      }
    return(t);
  }
  t = b_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_81 = ATgetFirst((ATermList) t);
      f_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_81 = NULL,k_81 = NULL;
        static ATerm j_5 (ATerm t);
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_81)), not_null(k_81));
          return(t);
        }
        t = f_81;
        t = l_0(t);
        if(((j_81 != NULL) && (j_81 != t)))
          _fail(t);
        else
          j_81 = t;
        t = e_81;
        t = j_0(t);
        if(((k_81 != NULL) && (k_81 != t)))
          _fail(t);
        else
          k_81 = t;
        t = f_81;
        t = reverse_acc_2_0(j_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_6;
      t = l_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,o_22 = NULL;
  s_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_81);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_81);
  o_22 = t;
  t = SSLsetAnnotations(o_22, q_81);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm u_81 = NULL;
  u_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_81), term_e_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_81 = NULL,p_81 = NULL;
      t = term_o_11;
      o_81 = t;
      t = term_f_22;
      p_81 = t;
      t = term_g_22;
      t = l_7(o_81, p_81, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = fetch_1_0(k_5, t);
    }
  t = term_h_23;
  t = echo_0_0(t);
  t = term_r_21;
  m_81 = t;
  t = term_s_21;
  n_81 = t;
  t = term_i_23;
  t = l_7(m_81, n_81, t);
  t = reverse_acc_2_0(_id, l_5, t);
  t = map_1_0(m_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_81;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_23 = ATgetFirst((ATermList) t);
                ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_81;
          }
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATinsert(ATempty, w_81);
      }
  }
  x_81 = t;
  t = term_p_19;
  y_81 = t;
  t = SSL_printnl(y_81, x_81);
  t = w_81;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  t = term_o_11;
  c_82 = t;
  t = term_f_22;
  d_82 = t;
  t = term_g_22;
  t = l_7(c_82, d_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL;
  t = term_n_23;
  e_82 = t;
  t = term_p_6;
  f_82 = t;
  t = term_o_23;
  t = o_7(e_82, f_82, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
  t = term_n_23;
  i_82 = t;
  t = term_p_6;
  j_82 = t;
  t = term_o_23;
  t = o_7(i_82, j_82, t);
  t = term_q_23;
  g_82 = t;
  t = term_p_6;
  h_82 = t;
  t = term_r_23;
  t = o_7(g_82, h_82, t);
  t = term_s_23;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_5, p_5, q_5, t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = u_23;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,s_22 = NULL;
  p_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_82 = ATgetFirst((ATermList) t);
      m_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_82);
  k_82 = t;
  t = l_82;
  t = u_70(t);
  n_82 = t;
  t = m_82;
  t = v_70(t);
  o_82 = t;
  t = (ATerm) ATinsert(CheckATermList(o_82), n_82);
  s_22 = t;
  t = SSLsetAnnotations(s_22, k_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,z_82 = NULL,a_83 = NULL,u_22 = NULL;
  u_82 = t;
  {
    ATerm x_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_24;
        t = y_114(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = x_23;
      }
  }
  t = u_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_82 = ATgetFirst((ATermList) t);
      x_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_82);
  v_82 = t;
  t = term_f_22;
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, w_82);
  t = o_7(a_83, w_82, t);
  t = x_82;
  {
    static ATerm k_83 (ATerm t);
    static ATerm k_83 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_83 = NULL;
              d_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_83;
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = y_114(t);
              t = Cons_2_0(_id, k_83, t);
            }
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm g_83 = NULL,h_83 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_83 = ATgetFirst((ATermList) t);
                h_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_83), (ATerm) ATmakeAppl(sym_Undefined_1, g_83));
          }
        }
      return(t);
    }
    t = k_83(t);
  }
  z_82 = t;
  t = (ATerm) ATinsert(CheckATermList(z_82), (ATerm) ATmakeAppl(sym_Program_1, w_82));
  u_22 = t;
  t = SSLsetAnnotations(u_22, v_82);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_83 = NULL;
  x_83 = t;
  if(match_string(t, "--help"))
    {
      t = x_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_83;
        }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL;
  t = term_y_22;
  y_83 = t;
  t = term_p_6;
  z_83 = t;
  t = term_j_24;
  t = o_7(y_83, z_83, t);
  t = term_k_24;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  r_83 = t;
  t = term_r_21;
  s_83 = t;
  t = term_m_24;
  t = lookup_table_0_1(s_83, t);
  w_83 = t;
  t = term_s_21;
  t_83 = t;
  t = (ATerm) ATempty;
  u_83 = t;
  t = w_83;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(t_83, u_83, v_83, t);
  t = r_83;
  {
    static ATerm v_5 (ATerm t);
    static ATerm v_5 (ATerm t)
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_114(t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          {
            ATerm p_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, x_5, y_5, t);
                LocalPopChoice(q_24);
              }
            else
              {
                t = p_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
  }
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_84 = NULL;
        k_84 = t;
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_46 = NULL;
              t = k_84;
              {
                ATerm v_24 = t;
                int w_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_46 = NULL,r_46 = NULL;
                    t = term_o_11;
                    q_46 = t;
                    t = term_y_22;
                    r_46 = t;
                    t = term_z_22;
                    t = l_7(q_46, r_46, t);
                    LocalPopChoice(w_24);
                  }
                else
                  {
                    t = v_24;
                    t = fetch_1_0(a_6, t);
                  }
              }
              t = k_84;
              t = default_system_usage_0_0(t);
              t = term_a_16;
              p_46 = t;
              t = SSL_exit(p_46);
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              {
                ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
                t = term_o_11;
                w_46 = t;
                t = term_n_23;
                x_46 = t;
                t = term_y_24;
                t = l_7(w_46, x_46, t);
                t = k_84;
                t = default_system_about_0_0(t);
                t = term_a_16;
                v_46 = t;
                t = SSL_exit(v_46);
              }
            }
        }
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
              static ATerm c_6 (ATerm t);
              static ATerm c_6 (ATerm t)
              {
                ATerm o_84 = NULL,r_84 = NULL,u_84 = NULL,w_22 = NULL;
                u_84 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_84);
                o_84 = t;
                t = r_84;
                if(((p_83 != NULL) && (p_83 != t)))
                  _fail(t);
                else
                  p_83 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_84);
                w_22 = t;
                t = SSLsetAnnotations(w_22, o_84);
                return(t);
              }
              t = fetch_1_0(c_6, t);
              t = term_r_6;
              m_84 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_83)), term_e_25);
              n_84 = t;
              t = SSL_printnl(m_84, n_84);
              t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_83)), term_e_25));
              t = default_system_usage_0_0(t);
              t = term_i_7;
              l_84 = t;
              t = SSL_exit(l_84);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
            }
        }
      }
  }
  q_83 = t;
  t = term_r_21;
  t = table_destroy_0_0(t);
  t = q_83;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  t = parse_options_1_0(x_112, t);
  c_85 = t;
  t = term_g_25;
  t = table_create_0_0(t);
  t = term_g_25;
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, c_85);
  t = lookup_table_0_1(d_85, t);
  g_85 = t;
  t = term_h_25;
  e_85 = t;
  t = g_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(e_85, c_85, f_85, t);
  t = c_85;
  t = z_112(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_112, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = if_verbose2_1_0(m_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL;
  t = term_n_7;
  h_85 = t;
  t = term_p_6;
  i_85 = t;
  t = term_r_7;
  t = o_7(h_85, i_85, t);
  t = term_v_7;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL;
  j_85 = t;
  t = term_o_11;
  n_85 = t;
  t = term_f_22;
  o_85 = t;
  t = term_g_22;
  t = l_7(n_85, o_85, t);
  k_85 = t;
  t = term_r_6;
  l_85 = t;
  t = (ATerm) ATinsert(ATempty, k_85);
  m_85 = t;
  t = SSL_printnl(l_85, m_85);
  t = j_85;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t);
  static ATerm g_6 (ATerm t);
  static ATerm e_6 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_112(t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm q_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_25);
            }
          else
            {
              t = q_25;
              {
                ATerm t_25 = t;
                int u_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_25);
                  }
                else
                  {
                    t = t_25;
                    {
                      ATerm v_25 = t;
                      int w_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_6, i_6, k_6, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_25);
                              }
                            else
                              {
                                t = x_25;
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
  static ATerm g_6 (ATerm t)
  {
    ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
    q_85 = t;
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm n_6 (ATerm t);
          static ATerm n_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_85 != NULL) && (p_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_6, t);
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          t = term_b_26;
          p_85 = t;
        }
    }
    t = not_null(p_85);
    t = ReadFromFile_0_0(t);
    r_85 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_85, r_85);
    t = apply_strategy_1_0(g_112, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_6, i_112, f_6, g_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

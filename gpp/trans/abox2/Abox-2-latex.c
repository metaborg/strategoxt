#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_FFID_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_SOpt_2;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
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
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
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
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
ATerm term_c_26;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
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
ATerm term_u_22;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_x_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_m_16;
ATerm term_b_16;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_e_12;
ATerm term_d_12;
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
ATerm term_s_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
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
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_h_7;
ATerm term_x_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_p_6);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
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
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
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
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_a_8);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_y_7);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("collect-set(s); use collect-om(s, conc)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_t_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_b_16);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_16);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_p_6);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_f_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_t_21);
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
  term_m_24 = (ATerm) ATmakeAppl(sym__3, term_s_21, term_t_21, (ATerm) ATempty);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_n_23);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm Abox2latex_options_0_0 (ATerm t);
static ATerm x_1 (ATerm j_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
ATerm collect_om_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t);
static ATerm x_43 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm s_76 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm s_6 (ATerm q_18, ATerm t);
ATerm listtd_1_0 (ATerm n_84 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm v_74 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm t_6 (ATerm r_20, ATerm s_20, ATerm t);
ATerm filter_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm q_74 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm r_57 (ATerm p_55, ATerm q_55, ATerm r_55, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm u_6 (ATerm o_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm v_6 (ATerm k_15, ATerm t);
static ATerm w_6 (ATerm o_38, ATerm p_38, ATerm t);
ATerm while_not_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm d_68 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_76 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm y_6 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm z_6 (ATerm h_20, ATerm i_20, ATerm t);
static ATerm b_7 (ATerm u_82 (ATerm), ATerm v_211, ATerm n_20, ATerm t);
static ATerm a_7 (ATerm d_20, ATerm e_20, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_100 (ATerm), ATerm t);
static ATerm x_71 (ATerm r_71, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_7 (ATerm j_20, ATerm t);
static ATerm d_7 (ATerm f_34, ATerm g_34, ATerm t);
static ATerm e_7 (ATerm o_35, ATerm p_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_73 (ATerm h_72, ATerm t);
static ATerm j_73 (ATerm l_72, ATerm m_72, ATerm n_72, ATerm t);
static ATerm k_73 (ATerm v_72, ATerm w_72, ATerm x_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_83 (ATerm), ATerm t);
static ATerm k_7 (ATerm t_51, ATerm u_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_7 (ATerm f_45, ATerm g_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_7 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_7 (ATerm i_38, ATerm j_38, ATerm t);
ATerm foldr_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t);
static ATerm o_7 (ATerm s_53, ATerm t_53, ATerm u_53, ATerm t);
static ATerm p_7 (ATerm v_53, ATerm w_53, ATerm t);
ATerm lookup_table_0_1 (ATerm m_51, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_54, ATerm b_54, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_7 (ATerm x_53, ATerm y_53, ATerm t);
static ATerm j_7 (ATerm c_54, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_103 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm parse_options_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm iowrap_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL;
  f_0 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_q_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), j_0), term_r_6);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_h_7;
  m_0 = t;
  t = SSL_exit(m_0);
  t = f_0;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL;
  t = term_q_7;
  q_0 = t;
  t = term_p_6;
  r_0 = t;
  t = term_u_7;
  t = n_7(q_0, r_0, t);
  t = term_w_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_0 = NULL,w_0 = NULL;
  u_0 = t;
  t = term_y_7;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, u_0);
  t = n_7(w_0, u_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = term_a_8;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_8, x_0);
  t = n_7(y_0, x_0, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_b_8;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_0, z_0, a_1, t);
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  {
                    ATerm i_8 = t;
                    int j_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_8);
                      }
                    else
                      {
                        t = i_8;
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm m_8 = t;
                                int n_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(c_1, d_1, f_1, t);
                                    LocalPopChoice(n_8);
                                  }
                                else
                                  {
                                    t = m_8;
                                    t = ArgOption_3_0(g_1, h_1, i_1, t);
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
static ATerm x_1 (ATerm j_1, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_explode_term(j_1);
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = q_1;
            t = at_end_1_0(l_1, t);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            t = x_1(t_1, t);
          }
      }
    }
  else
    {
      t = x_1(t_1, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
      t = e_90(t);
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
      t = g_90(t);
      e_2 = t;
      t = b_2;
      t = foldr_3_0(e_90, f_90, g_90, t);
      f_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
      t = f_90(t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL;
      t = w_88(t);
      i_2 = t;
      t = (ATerm) ATinsert(ATempty, i_2);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm n_1 (ATerm t)
        {
          t = collect_om_2_0(w_88, x_88, t);
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
        t = foldr_3_0(m_1, x_88, n_1, t);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  j_2 = t;
  t = s_82(t);
  k_2 = t;
  t = term_q_6;
  l_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_2), k_2);
  m_2 = t;
  t = SSL_printnl(l_2, m_2);
  t = j_2;
  return(t);
}
static ATerm x_43 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t)
{
  ATerm c_4 = NULL;
  t = SSL_is_int(t_2);
  t = SSL_int_to_string(t_2);
  c_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_9), u_2), term_z_8), c_4), term_x_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,n_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      i_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
      t = i_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), l_4), term_b_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_4 = ATgetFirst((ATermList) t);
              e_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), l_4), term_e_9), j_4), term_d_9);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          i_4 = ATgetArgument(t, 0);
          l_4 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), l_4), term_e_9), i_4), term_f_9);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              i_4 = ATgetArgument(t, 0);
              l_4 = ATgetArgument(t, 1);
              f_4 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), f_4), term_e_9), l_4), term_z_8), i_4), term_h_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  i_4 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                  f_4 = ATgetArgument(t, 2);
                  h_4 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), h_4), term_e_9), f_4), term_z_8), l_4), term_z_8), i_4), term_j_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      i_4 = ATgetArgument(t, 0);
                      l_4 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_9), l_4), term_e_9), i_4), term_l_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          i_4 = ATgetArgument(t, 0);
                          l_4 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), l_4), term_o_9), i_4), term_n_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              i_4 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), i_4), term_q_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  i_4 = ATgetArgument(t, 0);
                                  l_4 = ATgetArgument(t, 1);
                                  t = i_4;
                                  if(match_string(t, "="))
                                    {
                                      ATerm s_9 = t;
                                      int t_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = x_43(i_4, l_4, n_4, t);
                                          LocalPopChoice(t_9);
                                        }
                                      else
                                        {
                                          t = s_9;
                                          {
                                            ATerm u_9 = t;
                                            int v_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), l_4), term_w_9);
                                                LocalPopChoice(v_9);
                                              }
                                            else
                                              {
                                                t = u_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), l_4), term_e_9), i_4), term_y_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm z_9 = t;
                                      int a_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = x_43(i_4, l_4, n_4, t);
                                          LocalPopChoice(a_10);
                                        }
                                      else
                                        {
                                          t = z_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), l_4), term_e_9), i_4), term_y_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      i_4 = ATgetArgument(t, 0);
                                      l_4 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_4), term_c_10), i_4), term_b_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          i_4 = ATgetArgument(t, 0);
                                          l_4 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_z_8), i_4), term_e_10);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              i_4 = ATgetArgument(t, 0);
                                              l_4 = ATgetArgument(t, 1);
                                              t = i_4;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_f_10);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_g_10);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_h_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_i_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_j_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_k_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_m_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_n_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_o_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_q_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_s_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_t_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_u_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_v_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_w_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_x_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_y_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_z_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_a_11);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_b_11);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_c_11);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_d_11);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_e_11);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_f_11);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  j_4 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_10), l_4), term_z_8), j_4), term_g_11);
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
ATerm bottomup_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t)
  {
    t = bottomup_1_0(s_76, t);
    return(t);
  }
  t = SRTS_all(p_1, t);
  t = s_76(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
      t = term_o_11;
      z_43 = t;
      t = term_a_8;
      a_44 = t;
      t = term_p_11;
      t = k_7(z_43, a_44, t);
      y_43 = t;
      t = (ATerm) ATinsert(ATempty, y_43);
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
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 = NULL,e_1 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(l_45);
            b_1 = t;
            t = m_45;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_45;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), m_45);
            h_0 = t;
            t = SSLsetAnnotations(h_0, b_1);
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
                  ATerm o_1 = NULL,s_1 = NULL,u_1 = NULL,o_2 = NULL,s_0 = NULL;
                  t = SSLgetAnnotations(l_45);
                  u_1 = t;
                  t = m_45;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = m_45;
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
                      t = m_45;
                    }
                  t = (ATerm) ATinsert(CheckATermList(n_45), m_45);
                  s_0 = t;
                  t = SSLsetAnnotations(s_0, u_1);
                  o_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = o_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_12 = ATgetFirst((ATermList) t);
                      o_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, s_1, o_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(t_11);
                }
              else
                {
                  t = s_11;
                  {
                    ATerm l_3 = NULL,p_3 = NULL,t_0 = NULL;
                    t = SSLgetAnnotations(l_45);
                    l_3 = t;
                    t = n_45;
                    t = flat_list_0_0(t);
                    p_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(p_3), m_45);
                    t_0 = t;
                    t = SSLsetAnnotations(t_0, l_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(c_12) != AT_INT) || (ATgetInt((ATermInt) c_12) != 34)))
        _fail(t);
      t_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_45), term_d_12), term_d_12);
  return(t);
}
static ATerm s_6 (ATerm q_18, ATerm t)
{
  ATerm s_45 = NULL;
  t = q_18;
  t = at_suffix_1_0(v_1, t);
  s_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_45), term_e_12), term_e_12);
  return(t);
}
ATerm listtd_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm h_46 (ATerm t)
  {
    ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
    t = n_84(t);
    e_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_46;
      }
    else
      {
        ATerm y_3 = NULL,d_4 = NULL,z_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_46 = ATgetFirst((ATermList) t);
            g_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_46);
        y_3 = t;
        t = g_46;
        t = h_46(t);
        d_4 = t;
        t = (ATerm) ATinsert(CheckATermList(d_4), f_46);
        z_4 = t;
        t = SSLsetAnnotations(z_4, y_3);
      }
    return(t);
  }
  t = h_46(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_6 = ATgetFirst((ATermList) t);
      k_6 = (ATerm) ATgetNext((ATermList) t);
      t = j_6;
      if(match_int(t, 34))
        {
          ATerm f_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_6;
              t = s_6(k_6, t);
              LocalPopChoice(m_12);
            }
          else
            {
              t = f_12;
              t = n_6;
            }
        }
      else
        {
          t = n_6;
        }
    }
  else
    {
      t = n_6;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  if(match_int(t, 32))
    {
      ATerm o_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_12 = NULL;
          t = term_t_12;
          g_12 = t;
          t = SSL_explode_string(g_12);
          LocalPopChoice(s_12);
        }
      else
        {
          t = o_12;
          t = y_8;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm u_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_12 = NULL;
              t = term_y_12;
              h_12 = t;
              t = SSL_explode_string(h_12);
              LocalPopChoice(x_12);
            }
          else
            {
              t = u_12;
              t = y_8;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm z_12 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_12 = NULL;
                  t = term_e_13;
                  i_12 = t;
                  t = SSL_explode_string(i_12);
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = z_12;
                  t = y_8;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm f_13 = t;
                  int g_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_12 = NULL;
                      t = term_j_13;
                      j_12 = t;
                      t = SSL_explode_string(j_12);
                      LocalPopChoice(g_13);
                    }
                  else
                    {
                      t = f_13;
                      t = y_8;
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
                          ATerm k_12 = NULL;
                          t = term_m_13;
                          k_12 = t;
                          t = SSL_explode_string(k_12);
                          LocalPopChoice(l_13);
                        }
                      else
                        {
                          t = k_13;
                          t = y_8;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm n_13 = t;
                          int p_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_12 = NULL;
                              t = term_q_13;
                              l_12 = t;
                              t = SSL_explode_string(l_12);
                              LocalPopChoice(p_13);
                            }
                          else
                            {
                              t = n_13;
                              t = y_8;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm r_13 = t;
                              int s_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_12 = NULL;
                                  t = term_t_13;
                                  n_12 = t;
                                  t = SSL_explode_string(n_12);
                                  LocalPopChoice(s_13);
                                }
                              else
                                {
                                  t = r_13;
                                  t = y_8;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm u_13 = t;
                                  int v_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm p_12 = NULL;
                                      t = term_w_13;
                                      p_12 = t;
                                      t = SSL_explode_string(p_12);
                                      LocalPopChoice(v_13);
                                    }
                                  else
                                    {
                                      t = u_13;
                                      t = y_8;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm x_13 = t;
                                      int y_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_12 = NULL;
                                          t = term_z_13;
                                          q_12 = t;
                                          t = SSL_explode_string(q_12);
                                          LocalPopChoice(y_13);
                                        }
                                      else
                                        {
                                          t = x_13;
                                          t = y_8;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm a_14 = t;
                                          int b_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm r_12 = NULL;
                                              t = term_c_14;
                                              r_12 = t;
                                              t = SSL_explode_string(r_12);
                                              LocalPopChoice(b_14);
                                            }
                                          else
                                            {
                                              t = a_14;
                                              t = y_8;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm d_14 = t;
                                              int f_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_12 = NULL;
                                                  t = term_g_14;
                                                  v_12 = t;
                                                  t = SSL_explode_string(v_12);
                                                  LocalPopChoice(f_14);
                                                }
                                              else
                                                {
                                                  t = d_14;
                                                  t = y_8;
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
                                                      ATerm w_12 = NULL;
                                                      t = term_k_14;
                                                      w_12 = t;
                                                      t = SSL_explode_string(w_12);
                                                      LocalPopChoice(j_14);
                                                    }
                                                  else
                                                    {
                                                      t = i_14;
                                                      t = y_8;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm l_14 = t;
                                                      int m_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_13 = NULL;
                                                          t = term_o_14;
                                                          a_13 = t;
                                                          t = SSL_explode_string(a_13);
                                                          LocalPopChoice(m_14);
                                                        }
                                                      else
                                                        {
                                                          t = l_14;
                                                          t = y_8;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm q_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_13 = NULL;
                                                              t = term_s_14;
                                                              b_13 = t;
                                                              t = SSL_explode_string(b_13);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = q_14;
                                                              t = y_8;
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
                                                                  ATerm c_13 = NULL;
                                                                  t = term_v_14;
                                                                  c_13 = t;
                                                                  t = SSL_explode_string(c_13);
                                                                  LocalPopChoice(u_14);
                                                                }
                                                              else
                                                                {
                                                                  t = t_14;
                                                                  t = y_8;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = y_8;
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
  ATerm y_48 = NULL;
  y_48 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_49 = NULL;
        t = term_y_14;
        a_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, y_48);
        t = k_7(a_49, y_48, t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm h_6 = NULL;
          t = SSL_explode_string(y_48);
          t = listtd_1_0(w_1, t);
          t = map_1_0(y_1, t);
          t = flat_list_0_0(t);
          h_6 = t;
          t = SSL_implode_string(h_6);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  static ATerm r_50 (ATerm t)
  {
    ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
    o_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_50 = ATgetFirst((ATermList) t);
        n_50 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL,i_13 = NULL,o_13 = NULL,d_5 = NULL;
              t = SSLgetAnnotations(o_50);
              i_13 = t;
              t = m_50;
              t = v_74(t);
              o_13 = t;
              t = (ATerm) ATinsert(CheckATermList(n_50), o_13);
              d_5 = t;
              t = SSLsetAnnotations(d_5, i_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_15 = ATgetFirst((ATermList) t);
                  h_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_13;
              t = r_50(t);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = o_50;
            }
        }
      }
    else
      {
        t = o_50;
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm g_51 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_83(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,e_14 = NULL,h_14 = NULL,f_5 = NULL;
          d_51 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_51 = ATgetFirst((ATermList) t);
              f_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_51);
          e_14 = t;
          t = f_51;
          t = g_51(t);
          h_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_14), e_51);
          f_5 = t;
          t = SSLsetAnnotations(f_5, e_14);
        }
      }
    return(t);
  }
  t = g_51(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  if(match_int(t, 9))
    {
      t = q_51;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = q_51;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  t = remove_trailing_1_0(c_2, t);
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_2 (ATerm t)
        {
          ATerm r_51 = NULL,s_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,q_5 = NULL;
          x_51 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_51 = ATgetFirst((ATermList) t);
              v_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_51);
          r_51 = t;
          t = s_51;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = v_51;
          {
            static ATerm h_2 (ATerm t)
            {
              if(((k_51 != NULL) && (k_51 != t)))
                _fail(t);
              else
                k_51 = t;
              return(t);
            }
            t = Cons_2_0(g_2, h_2, t);
          }
          w_51 = t;
          t = (ATerm) ATinsert(CheckATermList(w_51), s_51);
          q_5 = t;
          t = SSLsetAnnotations(q_5, r_51);
          t = not_null(k_51);
          return(t);
        }
        t = at_suffix_1_0(d_2, t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
      }
  }
  l_51 = t;
  t = SSL_implode_string(l_51);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_15), d_53);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  g_52 = t;
  t = SSL_explode_string(g_52);
  t = reverse_acc_2_0(_id, n_2, t);
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_52, (ATerm) ATempty);
  {
    static ATerm e_53 (ATerm t)
    {
      ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
      if(match_cons(t, sym__2))
        {
          j_52 = ATgetArgument(t, 0);
          m_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_52;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm q_52 = NULL;
          t = m_52;
          t = LatexComment_0_0(t);
          q_52 = t;
          t = (ATerm) ATinsert(ATempty, q_52);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_52 = ATgetFirst((ATermList) t);
              l_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_52;
          if(match_int(t, 10))
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_52 = NULL,v_52 = NULL;
                  t = m_52;
                  t = LatexComment_0_0(t);
                  u_52 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_52, (ATerm) ATempty);
                  t = e_53(t);
                  v_52 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_52), u_52);
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  t = (ATerm) ATmakeAppl(sym__2, l_52, (ATerm) ATinsert(CheckATermList(m_52), k_52));
                  t = e_53(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_52, (ATerm) ATinsert(CheckATermList(m_52), k_52));
              t = e_53(t);
            }
        }
      return(t);
    }
    t = e_53(t);
  }
  t = remove_trailing_1_0(p_2, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = remove_trailing_1_0(r_2, t);
  t = map_1_0(s_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_15;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL;
  t = filter_1_0(w_2, t);
  p_14 = t;
  t = term_m_15;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, p_14);
  t = t_6(n_14, p_14, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm f_53 = NULL;
  ATerm n_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(x_2, t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = n_15;
      t = term_h_7;
    }
  f_53 = t;
  t = SSL_int_to_string(f_53);
  return(t);
}
static ATerm t_6 (ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = s_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_20;
    }
  else
    {
      ATerm l_15 = NULL,p_15 = NULL,x_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_54 = ATgetFirst((ATermList) t);
          g_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_20);
      l_15 = t;
      t = g_54;
      {
        static ATerm t_15 (ATerm t)
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_15 = NULL;
              q_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_15;
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              {
                ATerm r_15 = NULL;
                t = Cons_2_0(_id, t_15, t);
                r_15 = t;
                t = (ATerm) ATinsert(CheckATermList(r_15), r_20);
              }
            }
          return(t);
        }
        t = t_15(t);
      }
      p_15 = t;
      t = (ATerm) ATinsert(CheckATermList(p_15), f_54);
      x_5 = t;
      t = SSLsetAnnotations(x_5, l_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_54;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = NULL,d_16 = NULL,e_16 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(w_54);
            a_16 = t;
            t = x_54;
            t = g_91(t);
            d_16 = t;
            t = y_54;
            t = filter_1_0(g_91, t);
            e_16 = t;
            t = (ATerm) ATinsert(CheckATermList(e_16), d_16);
            z_5 = t;
            t = SSLsetAnnotations(z_5, a_16);
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = y_54;
            t = filter_1_0(g_91, t);
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm b_55 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(y_2, t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = term_b_16;
    }
  b_55 = t;
  t = SSL_int_to_string(b_55);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm c_55 = NULL;
  static ATerm z_2 (ATerm t)
  {
    ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,b_6 = NULL;
    h_55 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        e_55 = ATgetArgument(t, 0);
        f_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_55);
    d_55 = t;
    t = e_55;
    t = q_74(t);
    g_55 = t;
    t = f_55;
    if(((c_55 != NULL) && (c_55 != t)))
      _fail(t);
    else
      c_55 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, g_55, f_55);
    b_6 = t;
    t = SSLsetAnnotations(b_6, d_55);
    return(t);
  }
  t = fetch_1_0(z_2, t);
  t = SSL_string_to_int(not_null(c_55));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm i_55 = NULL;
  ATerm c_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(a_3, t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = c_16;
      t = term_b_16;
    }
  i_55 = t;
  t = SSL_int_to_string(i_55);
  return(t);
}
static ATerm r_57 (ATerm p_55, ATerm q_55, ATerm r_55, ATerm t)
{
  ATerm v_55 = NULL,m_7 = NULL;
  t = SSLgetAnnotations(r_55);
  v_55 = t;
  t = q_55;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_55), p_55);
  m_7 = t;
  t = SSLsetAnnotations(m_7, v_55);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,t_7 = NULL;
  d_57 = t;
  if(match_cons(t, sym_C_2))
    {
      b_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_57);
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, b_57, c_57);
  t_7 = t;
  t = SSLsetAnnotations(t_7, a_57);
  return(t);
}
static ATerm u_6 (ATerm o_15, ATerm t)
{
  static ATerm q_57 (ATerm t)
  {
    static ATerm s_57 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm t)
    {
      ATerm f_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,s_7 = NULL,r_7 = NULL;
      t = SSLgetAnnotations(b_56);
      f_56 = t;
      t = z_55;
      if(match_cons(t, sym_C_2))
        {
          k_56 = ATgetArgument(t, 0);
          l_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_55);
      j_56 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, k_56, l_56);
      r_7 = t;
      t = SSLsetAnnotations(r_7, j_56);
      m_56 = t;
      t = a_56;
      t = Cons_2_0(_id, q_57, t);
      i_56 = t;
      t = (ATerm) ATinsert(CheckATermList(i_56), m_56);
      s_7 = t;
      t = SSLsetAnnotations(s_7, f_56);
      return(t);
    }
    static ATerm t_57 (ATerm p_56, ATerm q_56, ATerm r_56, ATerm t)
    {
      ATerm v_56 = NULL,y_56 = NULL,v_7 = NULL;
      t = SSLgetAnnotations(r_56);
      v_56 = t;
      t = q_56;
      t = Cons_2_0(b_3, q_57, t);
      y_56 = t;
      t = (ATerm) ATinsert(CheckATermList(y_56), p_56);
      v_7 = t;
      t = SSLsetAnnotations(v_7, v_56);
      return(t);
    }
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
    e_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_57;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_57 = ATgetFirst((ATermList) t);
            g_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_57 = ATgetFirst((ATermList) t);
            i_57 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_57(f_57, g_57, e_57, t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm i_16 = t;
                    int j_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_57(f_57, g_57, e_57, t);
                        LocalPopChoice(j_16);
                      }
                    else
                      {
                        t = i_16;
                        {
                          ATerm k_16 = t;
                          int l_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_57(f_57, g_57, e_57, t);
                              LocalPopChoice(l_16);
                            }
                          else
                            {
                              t = k_16;
                              {
                                ATerm p_57 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(i_57), h_57);
                                t = q_57(t);
                                p_57 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(p_57), term_m_16), f_57);
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
                t = r_57(f_57, g_57, e_57, t);
                LocalPopChoice(o_16);
              }
            else
              {
                t = n_16;
                {
                  ATerm s_16 = t;
                  int t_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_57(f_57, g_57, e_57, t);
                      LocalPopChoice(t_16);
                    }
                  else
                    {
                      t = s_16;
                      t = t_57(f_57, g_57, e_57, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = o_15;
  t = q_57(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  if(match_cons(t, sym_LBL_2))
    {
      f_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
      {
        ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
        t = g_58;
        if(match_cons(t, sym_R_2))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_6(r_16, t);
        t = g_58;
        if(match_cons(t, sym_R_2))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            q_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_6(q_16, t);
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, f_58, p_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm w_16 = ATgetArgument(t, 0);
          g_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_58;
      t = u_6(g_58, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm g_59 (ATerm t)
  {
    ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
    d_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_59 = ATgetFirst((ATermList) t);
        f_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_16 = NULL,o_8 = NULL;
          t = SSLgetAnnotations(d_59);
          y_16 = t;
          t = f_59;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_59), e_59);
          o_8 = t;
          t = SSLsetAnnotations(o_8, y_16);
          t = f_84(t);
          LocalPopChoice(z_16);
        }
      else
        {
          t = x_16;
          {
            ATerm i_17 = NULL,l_17 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(d_59);
            i_17 = t;
            t = f_59;
            t = g_59(t);
            l_17 = t;
            t = (ATerm) ATinsert(CheckATermList(l_17), e_59);
            p_8 = t;
            t = SSLsetAnnotations(p_8, i_17);
          }
        }
    }
    return(t);
  }
  t = g_59(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  static ATerm w_59 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
    v_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_59 = ATgetFirst((ATermList) t);
        u_59 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_17 = NULL,z_17 = NULL,v_8 = NULL;
          t = SSLgetAnnotations(v_59);
          w_17 = t;
          t = u_59;
          t = w_59(t);
          z_17 = t;
          t = (ATerm) ATinsert(CheckATermList(z_17), t_59);
          v_8 = t;
          t = SSLsetAnnotations(v_8, w_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_59;
        t = u_83(t);
      }
    return(t);
  }
  t = w_59(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_59;
    }
  else
    {
      static ATerm c_3 (ATerm t)
      {
        t = not_null(b_60);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_60 = ATgetFirst((ATermList) t);
          if(((b_60 != NULL) && (b_60 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_60;
      t = at_end_1_0(c_3, t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm z_60 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      z_60 = ATgetArgument(t, 0);
      {
        ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
        t = z_60;
        t = Hspace_0_0(t);
        k_18 = t;
        t = SSL_string_to_int(k_18);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_m_15);
        t = copy_0_0(t);
        i_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_a_17);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          z_60 = ATgetArgument(t, 0);
          {
            ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL;
            t = z_60;
            t = Hspace_0_0(t);
            r_18 = t;
            t = SSL_string_to_int(r_18);
            p_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_18, term_m_15);
            t = copy_0_0(t);
            o_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_18), term_b_17);
          }
        }
      else
        {
          ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              z_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_60;
          t = Hspace_0_0(t);
          e_19 = t;
          t = SSL_string_to_int(e_19);
          d_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_19, term_m_15);
          t = copy_0_0(t);
          c_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, c_19), term_c_17);
        }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_17);
  return(t);
}
static ATerm v_6 (ATerm k_15, ATerm t)
{
  ATerm l_19 = NULL,n_19 = NULL;
  t = k_15;
  t = map_1_0(d_3, t);
  n_19 = t;
  t = (ATerm) ATinsert(ATempty, term_m_16);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_m_16), n_19);
  t = t_6(l_19, n_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(e_3, t);
  return(t);
}
static ATerm w_6 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_38, p_38);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = SSL_subtr(o_38, p_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  static ATerm d_61 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_76(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = j_76(t);
        t = d_61(t);
      }
    return(t);
  }
  t = d_61(t);
  return(t);
}
ATerm for_3_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t)
{
  t = l_76(t);
  t = while_not_2_0(m_76, n_76, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym__2))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_61, h_61, (ATerm) ATempty);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_61 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      if(((ATgetType(j_17) != AT_INT) || (ATgetInt((ATermInt) j_17) != 0)))
        _fail(t);
      {
        ATerm k_17 = ATgetArgument(t, 1);
      }
      i_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_61;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
  if(match_cons(t, sym__3))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
      l_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_61, term_h_7);
  t = geq_0_0(t);
  t = term_h_7;
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_61, term_h_7);
  t = w_6(j_61, n_61, t);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_61, k_61, (ATerm) ATinsert(CheckATermList(l_61), k_61));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_3, g_3, h_3, t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm v_61 = NULL,w_61 = NULL,z_61 = NULL,u_19 = NULL,d_10 = NULL;
        v_61 = t;
        if(match_cons(t, sym__2))
          {
            w_61 = ATgetArgument(t, 0);
            z_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_61);
        u_19 = t;
        t = w_61;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_61, z_61);
        d_10 = t;
        t = SSLsetAnnotations(d_10, u_19);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_17 = t;
  if((PushChoice() == 0))
    {
      ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,l_10 = NULL;
      m_63 = t;
      if(match_cons(t, sym_R_2))
        {
          k_63 = ATgetArgument(t, 0);
          l_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_63);
      j_63 = t;
      t = l_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, k_63, l_63);
      l_10 = t;
      t = SSLsetAnnotations(l_10, j_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, (ATerm) ATempty);
  {
    static ATerm n_63 (ATerm t)
    {
      ATerm h_62 = NULL,i_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
      if(match_cons(t, sym__2))
        {
          k_62 = ATgetArgument(t, 0);
          n_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm s_62 = NULL;
          t = n_62;
          t = reverse_acc_2_0(_id, i_3, t);
          s_62 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, s_62));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_62 = ATgetFirst((ATermList) t);
              m_62 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_62;
          if(match_cons(t, sym_R_2))
            {
              h_62 = ATgetArgument(t, 0);
              i_62 = ATgetArgument(t, 1);
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_62 = NULL,z_62 = NULL;
                    t = n_62;
                    t = reverse_acc_2_0(_id, j_3, t);
                    y_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_62, (ATerm) ATempty);
                    t = n_63(t);
                    z_62 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(z_62), (ATerm) ATmakeAppl(sym_R_2, h_62, i_62)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_62));
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    t = (ATerm) ATmakeAppl(sym__2, m_62, (ATerm) ATinsert(CheckATermList(n_62), l_62));
                    t = n_63(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, m_62, (ATerm) ATinsert(CheckATermList(n_62), l_62));
              t = n_63(t);
            }
        }
      return(t);
    }
    t = n_63(t);
  }
  t = filter_1_0(k_3, t);
  return(t);
}
static ATerm d_68 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm t)
{
  t = n_66;
  if(match_cons(t, sym_KW_0))
    {
      t = n_66;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = n_66;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = n_66;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = n_66;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, n_66, o_66);
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
static ATerm o_3 (ATerm t)
{
  ATerm y_67 = NULL;
  if(match_cons(t, sym_S_1))
    {
      y_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_67;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  y_66 = t;
  if(match_cons(t, sym_REF_2))
    {
      z_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, z_66, x_66);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          z_66 = ATgetArgument(t, 0);
          x_66 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, z_66, x_66);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              z_66 = ATgetArgument(t, 0);
              x_66 = ATgetArgument(t, 1);
              {
                ATerm u_23 = NULL;
                t = y_66;
                {
                  ATerm t_17 = t;
                  int u_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(z_66);
                      u_23 = t;
                      LocalPopChoice(u_17);
                    }
                  else
                    {
                      t = t_17;
                      {
                        ATerm v_17 = t;
                        int x_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,p_10 = NULL;
                            t = SSL_explode_string(z_66);
                            c_24 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                z_23 = ATgetFirst((ATermList) t);
                                a_24 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(c_24);
                            y_23 = t;
                            t = z_23;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(a_24), z_23);
                            p_10 = t;
                            t = SSLsetAnnotations(p_10, y_23);
                            t = (ATerm) ATinsert(ATempty, term_y_17);
                            v_23 = t;
                            t = SSL_implode_string(v_23);
                            u_23 = t;
                            LocalPopChoice(x_17);
                          }
                        else
                          {
                            t = v_17;
                            t = z_66;
                            u_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, u_23, x_66);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  z_66 = ATgetArgument(t, 0);
                  x_66 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, z_66, x_66);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      z_66 = ATgetArgument(t, 0);
                      x_66 = ATgetArgument(t, 1);
                      t_66 = ATgetArgument(t, 2);
                      {
                        ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,f_25 = NULL,m_25 = NULL,n_25 = NULL,y_25 = NULL;
                        t = t_66;
                        t = construct_rows_0_0(t);
                        z_24 = t;
                        t = x_66;
                        t = Vspace_0_0(t);
                        n_25 = t;
                        t = SSL_string_to_int(n_25);
                        v_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, v_24, term_d_17);
                        t = copy_0_0(t);
                        f_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_25, (ATerm) ATinsert(ATinsert(ATempty, term_g_15), term_d_17));
                        t = conc_0_0(t);
                        c_25 = t;
                        t = z_66;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            m_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_6(m_25, t);
                        y_24 = t;
                        t = z_24;
                        t = map_1_0(MkRows_0_0, t);
                        y_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_25, y_25);
                        t = t_6(c_25, y_25, t);
                        d_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, y_24, d_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          z_66 = ATgetArgument(t, 0);
                          x_66 = ATgetArgument(t, 1);
                          {
                            ATerm g_67 = NULL,h_67 = NULL,j_67 = NULL,l_67 = NULL,d_26 = NULL,e_26 = NULL;
                            t = z_66;
                            t = Hspace_0_0(t);
                            g_67 = t;
                            t = z_66;
                            t = Vspace_0_0(t);
                            h_67 = t;
                            t = z_66;
                            t = Ispace_0_0(t);
                            j_67 = t;
                            t = x_66;
                            t = filter_1_0(m_3, t);
                            e_26 = t;
                            t = term_a_18;
                            d_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_a_18, e_26);
                            t = t_6(d_26, e_26, t);
                            l_67 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, g_67, h_67, j_67, l_67);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              z_66 = ATgetArgument(t, 0);
                              x_66 = ATgetArgument(t, 1);
                              {
                                ATerm m_67 = NULL,o_67 = NULL,q_67 = NULL,l_26 = NULL,m_26 = NULL;
                                t = z_66;
                                t = Vspace_0_0(t);
                                m_67 = t;
                                t = z_66;
                                t = Ispace_0_0(t);
                                o_67 = t;
                                t = x_66;
                                t = filter_1_0(n_3, t);
                                m_26 = t;
                                t = term_b_18;
                                l_26 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_b_18, m_26);
                                t = t_6(l_26, m_26, t);
                                q_67 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, m_67, o_67, q_67);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  z_66 = ATgetArgument(t, 0);
                                  x_66 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_67 = NULL,u_67 = NULL;
                                    t = z_66;
                                    t = Hspace_0_0(t);
                                    s_67 = t;
                                    t = x_66;
                                    t = toh_0_0(t);
                                    u_67 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, s_67, u_67);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      z_66 = ATgetArgument(t, 0);
                                      x_66 = ATgetArgument(t, 1);
                                      t = z_66;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          w_66 = ATgetArgument(t, 0);
                                          t = w_66;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              u_66 = ATgetFirst((ATermList) t);
                                              v_66 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm c_18 = t;
                                                int d_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm l_27 = NULL,o_29 = NULL,p_29 = NULL;
                                                    t = u_66;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        o_29 = ATgetArgument(t, 0);
                                                        p_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm e_18 = t;
                                                      int f_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_30 = NULL,r_10 = NULL;
                                                          t = SSLgetAnnotations(u_66);
                                                          n_30 = t;
                                                          t = o_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = p_29;
                                                          l_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, o_29, p_29);
                                                          r_10 = t;
                                                          t = SSLsetAnnotations(r_10, n_30);
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
                                                                ATerm p_31 = NULL,x_11 = NULL;
                                                                t = SSLgetAnnotations(u_66);
                                                                p_31 = t;
                                                                t = o_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = p_29;
                                                                l_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, o_29, p_29);
                                                                x_11 = t;
                                                                t = SSLsetAnnotations(x_11, p_31);
                                                                LocalPopChoice(h_18);
                                                              }
                                                            else
                                                              {
                                                                t = g_18;
                                                                {
                                                                  ATerm l_18 = t;
                                                                  int m_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm g_32 = NULL,y_11 = NULL;
                                                                      t = SSLgetAnnotations(u_66);
                                                                      g_32 = t;
                                                                      t = o_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = p_29;
                                                                      l_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, o_29, p_29);
                                                                      y_11 = t;
                                                                      t = SSLsetAnnotations(y_11, g_32);
                                                                      LocalPopChoice(m_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_18;
                                                                      {
                                                                        ATerm n_18 = t;
                                                                        int s_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm y_32 = NULL,z_11 = NULL;
                                                                            t = SSLgetAnnotations(u_66);
                                                                            y_32 = t;
                                                                            t = o_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = p_29;
                                                                            l_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, o_29, p_29);
                                                                            z_11 = t;
                                                                            t = SSLsetAnnotations(z_11, y_32);
                                                                            LocalPopChoice(s_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_18;
                                                                            {
                                                                              ATerm l_33 = NULL,a_12 = NULL;
                                                                              t = SSLgetAnnotations(u_66);
                                                                              l_33 = t;
                                                                              t = o_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, o_29, p_29);
                                                                              a_12 = t;
                                                                              t = SSLsetAnnotations(a_12, l_33);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, p_29);
                                                                              l_27 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, l_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, v_66), x_66));
                                                    LocalPopChoice(d_18);
                                                  }
                                                else
                                                  {
                                                    t = c_18;
                                                    t = d_68(z_66, x_66, y_66, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = x_66;
                                                }
                                              else
                                                {
                                                  t = d_68(z_66, x_66, y_66, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = d_68(z_66, x_66, y_66, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          z_66 = ATgetArgument(t, 0);
                                          x_66 = ATgetArgument(t, 1);
                                          {
                                            ATerm x_67 = NULL;
                                            t = z_66;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = x_66;
                                            t = map_1_0(o_3, t);
                                            x_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, x_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              z_66 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = z_66;
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
ATerm topdown_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  static ATerm q_3 (ATerm t)
  {
    t = topdown_1_0(r_76, t);
    return(t);
  }
  t = r_76(t);
  t = SRTS_all(q_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_68 = ATgetFirst((ATermList) t);
      {
        ATerm t_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
          {
            o_68 = ATgetFirst((ATermList) t_18);
            {
              ATerm u_18 = (ATerm) ATgetNext((ATermList) t_18);
              if(((ATgetType(u_18) != AT_LIST) || !(ATisEmpty(u_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_14;
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_14, n_68, o_68);
  t = lookup_table_0_1(p_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(n_68, o_68, q_68, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_14, n_68, o_68);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm k_68 = NULL;
  k_68 = t;
  t = term_y_14;
  t = table_create_0_0(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_68 = NULL,m_68 = NULL;
        t = term_o_11;
        l_68 = t;
        t = term_y_7;
        m_68 = t;
        t = term_x_18;
        t = k_7(l_68, m_68, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(r_3, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
      }
  }
  t = k_68;
  return(t);
}
static ATerm s_3 (ATerm t)
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
static ATerm t_3 (ATerm t)
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
static ATerm u_3 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm j_69 = NULL;
  j_69 = t;
  t = SSL_is_string(j_69);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,m_20 = NULL;
  e_69 = t;
  if(match_cons(t, sym__2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_69);
  w_68 = t;
  t = y_68;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(s_3, t);
  b_69 = t;
  t = BOXENV_args_0_0(t);
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, a_69, b_69);
  t = bottomup_1_0(t_3, t);
  d_69 = t;
  t = term_g_19;
  t = debug_1_0(u_3, t);
  t = d_69;
  t = collect_om_2_0(v_3, conc_0_0, t);
  c_69 = t;
  t = SSL_concat_strings(c_69);
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_68, z_68);
  m_20 = t;
  t = SSLsetAnnotations(m_20, w_68);
  return(t);
}
static ATerm y_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm k_69 = NULL;
  t = SSL_fputc(m_35, n_35);
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
  return(t);
}
static ATerm z_6 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm l_69 = NULL;
  t = SSL_write_term_to_stream_text(h_20, i_20);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_69);
  return(t);
}
static ATerm b_7 (ATerm u_82 (ATerm), ATerm v_211, ATerm n_20, ATerm t)
{
  ATerm m_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_211, term_h_19);
  t = f_7(t);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_69, n_20);
  t = u_82(t);
  t = fclose_0_0(t);
  t = n_20;
  return(t);
}
static ATerm a_7 (ATerm d_20, ATerm e_20, ATerm t)
{
  ATerm n_69 = NULL;
  t = SSL_write_term_to_stream_baf(d_20, e_20);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_69);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm n_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym_Stream_1))
        {
          n_34 = ATgetArgument(i_19, 0);
        }
      else
        _fail(t);
      p_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(n_34, p_34, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,q_35 = NULL,r_35 = NULL,t_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(match_cons(j_19, sym_Stream_1))
        {
          r_35 = ATgetArgument(j_19, 0);
        }
      else
        _fail(t);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(r_35, t_35, t);
  j_35 = t;
  t = term_k_19;
  k_35 = t;
  t = j_35;
  if(match_cons(t, sym_Stream_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, j_35);
  t = y_6(k_35, q_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,b_71 = NULL,c_71 = NULL,w_20 = NULL,v_20 = NULL;
  s_69 = t;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_69);
  y_69 = t;
  t = z_69;
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_69 != NULL) && (r_69 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_3, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
        t = term_p_19;
        r_69 = t;
      }
  }
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_70, a_70);
  v_20 = t;
  t = SSLsetAnnotations(v_20, y_69);
  t = s_69;
  if(match_cons(t, sym__2))
    {
      u_69 = ATgetArgument(t, 0);
      v_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_69);
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_69, (ATerm) ATmakeAppl(sym__2, not_null(r_69), v_69));
  w_20 = t;
  t = SSLsetAnnotations(w_20, t_69);
  x_69 = t;
  if(match_cons(t, sym__2))
    {
      b_71 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL,h_34 = NULL,i_34 = NULL,k_34 = NULL,m_34 = NULL,x_20 = NULL;
        t = SSLgetAnnotations(x_69);
        y_33 = t;
        t = b_71;
        t = fetch_1_0(x_3, t);
        h_34 = t;
        t = c_71;
        if(match_cons(t, sym__2))
          {
            k_34 = ATgetArgument(t, 0);
            m_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_7(z_3, k_34, m_34, t);
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
        x_20 = t;
        t = SSLsetAnnotations(x_20, y_33);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm a_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,y_20 = NULL;
          t = SSLgetAnnotations(x_69);
          a_35 = t;
          t = c_71;
          if(match_cons(t, sym__2))
            {
              f_35 = ATgetArgument(t, 0);
              g_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_7(a_4, f_35, g_35, t);
          e_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_71, e_35);
          y_20 = t;
          t = SSLsetAnnotations(y_20, a_35);
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
ATerm apply_strategy_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  j_71 = t;
  t = dtime_0_0(t);
  t = j_71;
  t = l_100(t);
  i_71 = t;
  t = dtime_0_0(t);
  f_71 = t;
  t = i_71;
  if(match_cons(t, sym__2))
    {
      g_71 = ATgetArgument(t, 0);
      h_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_71), (ATerm) ATmakeAppl(sym_Runtime_1, f_71)), h_71);
  return(t);
}
static ATerm x_71 (ATerm r_71, ATerm t)
{
  t = SSL_fclose(r_71);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  v_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_71 = ATgetArgument(t, 0);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_71);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = x_71(v_71, t);
          }
      }
    }
  else
    {
      t = x_71(v_71, t);
    }
  return(t);
}
static ATerm c_7 (ATerm j_20, ATerm t)
{
  t = SSL_read_term_from_stream(j_20);
  return(t);
}
static ATerm d_7 (ATerm f_34, ATerm g_34, ATerm t)
{
  t = SSL_strcat(f_34, g_34);
  return(t);
}
static ATerm e_7 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm y_71 = NULL;
  t = SSL_fopen(o_35, p_35);
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_71);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_71 = NULL;
  t = SSL_stdin_stream();
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_72 = NULL;
  t = SSL_stdout_stream();
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_72 = NULL;
  t = SSL_stderr_stream();
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_72);
  return(t);
}
static ATerm i_73 (ATerm h_72, ATerm t)
{
  ATerm i_72 = NULL;
  t = SSL_explode_term(h_72);
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(((ATgetType(w_19) == AT_LIST) && !(ATisEmpty(w_19))))
          {
            i_72 = ATgetFirst((ATermList) w_19);
            {
              ATerm x_19 = (ATerm) ATgetNext((ATermList) w_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_73 (ATerm l_72, ATerm m_72, ATerm n_72, ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,t_72 = NULL,e_21 = NULL;
  t = SSLgetAnnotations(n_72);
  q_72 = t;
  t = l_72;
  if(match_cons(t, sym_Path_1))
    {
      t_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_72, m_72);
  e_21 = t;
  t = SSLsetAnnotations(e_21, q_72);
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(o_72, p_72, t);
  return(t);
}
static ATerm k_73 (ATerm v_72, ATerm w_72, ATerm x_72, ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,d_73 = NULL,f_21 = NULL;
  t = SSLgetAnnotations(x_72);
  a_73 = t;
  t = SSL_is_string(v_72);
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_73, w_72);
  f_21 = t;
  t = SSLsetAnnotations(f_21, a_73);
  if(match_cons(t, sym__2))
    {
      y_72 = ATgetArgument(t, 0);
      z_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(y_72, z_72, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_73(f_73, t);
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
                  t = j_73(g_73, h_73, f_73, t);
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
                  t = k_73(g_73, h_73, f_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_73(f_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,t_73 = NULL;
  t_73 = t;
  {
    ATerm c_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_73, term_g_20);
        t = f_7(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = c_20;
        {
          ATerm n_36 = NULL,o_36 = NULL;
          t = term_k_20;
          o_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, t_73);
          t = d_7(o_36, t_73, t);
          n_36 = t;
          t = SSL_perror(n_36);
          _fail(t);
        }
      }
  }
  n_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(o_73, t);
  m_73 = t;
  t = n_73;
  t = fclose_0_0(t);
  t = m_73;
  return(t);
}
ATerm fetch_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  static ATerm z_74 (ATerm t)
  {
    ATerm t_74 = NULL,x_74 = NULL,y_74 = NULL;
    t_74 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_74 = ATgetFirst((ATermList) t);
        y_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_36 = NULL,j_37 = NULL,m_21 = NULL;
          t = SSLgetAnnotations(t_74);
          v_36 = t;
          t = x_74;
          t = n_83(t);
          j_37 = t;
          t = (ATerm) ATinsert(CheckATermList(y_74), j_37);
          m_21 = t;
          t = SSLsetAnnotations(m_21, v_36);
          LocalPopChoice(o_20);
        }
      else
        {
          t = l_20;
          {
            ATerm a_38 = NULL,d_38 = NULL,n_21 = NULL;
            t = SSLgetAnnotations(t_74);
            a_38 = t;
            t = y_74;
            t = z_74(t);
            d_38 = t;
            t = (ATerm) ATinsert(CheckATermList(d_38), x_74);
            n_21 = t;
            t = SSLsetAnnotations(n_21, a_38);
          }
        }
    }
    return(t);
  }
  t = z_74(t);
  return(t);
}
static ATerm k_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  ATerm c_75 = NULL;
  t = lookup_table_0_1(t_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(u_51, c_75, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm f_75 = NULL;
  f_75 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
        t = term_o_11;
        i_75 = t;
        t = term_t_20;
        j_75 = t;
        t = term_u_20;
        t = k_7(i_75, j_75, t);
        h_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_75, term_z_20);
        t = geq_0_0(t);
        t = f_75;
        t = u_98(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = f_75;
      }
  }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_75 = NULL;
  m_75 = t;
  if(match_string(t, "-k"))
    {
      t = m_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_75;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  t = SSL_string_to_int(n_75);
  o_75 = t;
  t = term_a_21;
  p_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, o_75);
  t = n_7(p_75, o_75, t);
  t = n_75;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, g_4, k_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_75 = NULL;
  r_75 = t;
  if(match_string(t, "-S"))
    {
      t = r_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_75;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL;
  t = term_t_20;
  s_75 = t;
  t = term_b_16;
  t_75 = t;
  t = term_c_21;
  t = n_7(s_75, t_75, t);
  t = term_d_21;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  u_75 = t;
  t = SSL_string_to_int(u_75);
  v_75 = t;
  t = term_t_20;
  w_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, v_75);
  t = n_7(w_75, v_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_75);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_h_21;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  t = term_i_21;
  x_75 = t;
  t = term_p_6;
  y_75 = t;
  t = term_j_21;
  t = n_7(x_75, y_75, t);
  t = term_k_21;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, o_4, p_4, t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = Option_3_0(t_4, u_4, v_4, t);
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm f_45, ATerm g_45, ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL;
  t = term_o_11;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_11, f_45, g_45);
  t = lookup_table_0_1(z_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(f_45, g_45, a_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_11, f_45, g_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_76 = NULL,h_76 = NULL,o_76 = NULL;
      t = term_p_6;
      t = e_0(t);
      g_76 = t;
      t = term_s_21;
      h_76 = t;
      t = term_t_21;
      o_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_21, term_t_21, g_76);
      t = l_7(h_76, o_76, g_76, t);
      _fail(t);
    }
  else
    {
      ATerm t_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_76 = ATgetFirst((ATermList) t);
          f_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_76;
      t = c_0(t);
      t = term_p_6;
      t = d_0(t);
      t_76 = t;
      t = (ATerm) ATinsert(CheckATermList(f_76), t_76);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  if(match_string(t, "-o"))
    {
      t = v_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_76;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL;
  w_76 = t;
  t = term_u_21;
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, w_76);
  t = n_7(x_76, w_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_76);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
static ATerm l_7 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
        t = k_7(a_50, b_50, t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATempty;
      }
  }
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_50, b_50, (ATerm) ATinsert(CheckATermList(a_77), z_49));
  t = lookup_table_0_1(a_50, t);
  d_77 = t;
  t = (ATerm) ATinsert(CheckATermList(a_77), z_49);
  b_77 = t;
  t = d_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(b_50, b_77, c_77, t);
  t = z_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
      t = term_p_6;
      t = n_0(t);
      o_77 = t;
      t = term_s_21;
      p_77 = t;
      t = term_t_21;
      q_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_21, term_t_21, o_77);
      t = l_7(p_77, q_77, o_77, t);
      _fail(t);
    }
  else
    {
      ATerm u_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_77 = ATgetFirst((ATermList) t);
          l_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_77 = ATgetFirst((ATermList) t);
          n_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_77;
      t = k_0(t);
      t = m_77;
      t = l_0(t);
      u_77 = t;
      t = (ATerm) ATinsert(CheckATermList(n_77), u_77);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_77 = NULL;
  w_77 = t;
  if(match_string(t, "-i"))
    {
      t = w_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_77;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL;
  x_77 = t;
  t = term_c_22;
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, x_77);
  t = n_7(y_77, x_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_77);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_6;
  t = whoami_0_0(t);
  z_77 = t;
  t = term_q_6;
  b_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_22), z_77);
  c_78 = t;
  t = SSL_printnl(b_78, c_78);
  t = term_h_7;
  a_78 = t;
  t = SSL_exit(a_78);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  t = term_o_11;
  d_78 = t;
  t = term_f_22;
  e_78 = t;
  t = term_g_22;
  t = k_7(d_78, e_78, t);
  return(t);
}
static ATerm g_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_38, j_38);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      t = SSL_addr(i_38, j_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_78;
      t = c_90(t);
    }
  else
    {
      ATerm l_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_78 = ATgetFirst((ATermList) t);
          i_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_78;
      t = foldr_2_0(c_90, d_90, t);
      l_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_78, l_78);
      t = d_90(t);
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
  t = term_b_16;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(c_39, g_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_78 = NULL,n_38 = NULL,q_38 = NULL;
  t = times_0_0(t);
  q_38 = t;
  t = SSL_explode_term(q_38);
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_38;
  t = foldr_2_0(e_5, g_5, t);
  o_78 = t;
  t = SSL_TicksToSeconds(o_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  if(match_cons(t, sym__2))
    {
      a_79 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_79;
        if((a_79 != t))
          {
            _fail(t);
          }
        t = z_78;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = (ATerm) ATmakeAppl(sym__2, a_79, b_79);
        {
          ATerm m_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_79, b_79);
              LocalPopChoice(o_22);
            }
          else
            {
              t = m_22;
              t = SSL_gtr(a_79, b_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_79, b_79);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm f_79 = NULL;
  f_79 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
        t = term_o_11;
        i_79 = t;
        t = term_t_20;
        j_79 = t;
        t = term_u_20;
        t = k_7(i_79, j_79, t);
        h_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_79, term_h_7);
        t = geq_0_0(t);
        t = f_79;
        t = t_98(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = f_79;
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,o_79 = NULL,p_79 = NULL;
  t = run_time_0_0(t);
  l_79 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  m_79 = t;
  t = term_q_6;
  o_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_22), l_79), term_s_22), m_79);
  p_79 = t;
  t = SSL_printnl(o_79, p_79);
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_22), l_79), term_s_22), m_79));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_16;
  q_79 = t;
  t = SSL_exit(q_79);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL;
  b_80 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_80;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_80 = ATgetArgument(t, 0);
          {
            ATerm c_40 = NULL,x_21 = NULL;
            t = SSLgetAnnotations(b_80);
            c_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_80);
            x_21 = t;
            t = SSLsetAnnotations(x_21, c_40);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_80;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_79 = NULL,u_79 = NULL;
      t = term_o_11;
      t_79 = t;
      t = term_y_22;
      u_79 = t;
      t = term_z_22;
      t = k_7(t_79, u_79, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = fetch_1_0(i_5, t);
    }
  t = j_101(t);
  return(t);
}
static ATerm o_7 (ATerm s_53, ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm d_80 = NULL;
  t = SSL_hashtable_put(u_53, s_53, t_53);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_80);
  return(t);
}
static ATerm p_7 (ATerm v_53, ATerm w_53, ATerm t)
{
  t = SSL_hashtable_get(w_53, v_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_51, ATerm t)
{
  ATerm m_80 = NULL;
  t = table_hashtable_0_0(t);
  m_80 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL;
        t = m_80;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_7(m_51, l_40, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm y_40 = NULL;
          t = m_51;
          t = table_create_0_0(t);
          t = m_80;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(m_51, y_40, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm p_80 = NULL;
  t = SSL_hashtable_create(a_54, b_54);
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_80);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,u_80 = NULL,v_80 = NULL;
  q_80 = t;
  t = term_c_23;
  u_80 = t;
  t = term_d_23;
  v_80 = t;
  t = q_80;
  t = new_hashtable_0_2(u_80, v_80, t);
  r_80 = t;
  t = q_80;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(q_80, r_80, s_80, t);
  t = q_80;
  return(t);
}
static ATerm i_7 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm w_80 = NULL;
  t = SSL_hashtable_remove(y_53, x_53);
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_80);
  return(t);
}
static ATerm j_7 (ATerm c_54, ATerm t)
{
  ATerm x_80 = NULL;
  t = SSL_hashtable_destroy(c_54);
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_80 = NULL;
  t = SSL_table_hashtable();
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  z_80 = t;
  t = table_hashtable_0_0(t);
  a_81 = t;
  t = lookup_table_0_1(z_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(c_81, t);
  t = a_81;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(z_80, b_81, t);
  t = z_80;
  return(t);
}
ATerm map_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  static ATerm r_81 (ATerm t)
  {
    ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
    o_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_81;
      }
    else
      {
        ATerm f_44 = NULL,j_46 = NULL,k_46 = NULL,z_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_81 = ATgetFirst((ATermList) t);
            q_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_81);
        f_44 = t;
        t = p_81;
        t = d_83(t);
        j_46 = t;
        t = q_81;
        t = r_81(t);
        k_46 = t;
        t = (ATerm) ATinsert(CheckATermList(k_46), j_46);
        z_21 = t;
        t = SSLsetAnnotations(z_21, f_44);
      }
    return(t);
  }
  t = r_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_81 = ATgetFirst((ATermList) t);
      v_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_81 = NULL,a_82 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_81)), not_null(a_82));
          return(t);
        }
        t = v_81;
        t = i_0(t);
        if(((z_81 != NULL) && (z_81 != t)))
          _fail(t);
        else
          z_81 = t;
        t = u_81;
        t = g_0(t);
        if(((a_82 != NULL) && (a_82 != t)))
          _fail(t);
        else
          a_82 = t;
        t = v_81;
        t = reverse_acc_2_0(g_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,n_22 = NULL;
  i_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_82);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_82);
  n_22 = t;
  t = SSLsetAnnotations(n_22, g_82);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_82 = NULL;
  k_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_82), term_e_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_82 = NULL,f_82 = NULL;
      t = term_o_11;
      e_82 = t;
      t = term_f_22;
      f_82 = t;
      t = term_g_22;
      t = k_7(e_82, f_82, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = fetch_1_0(k_5, t);
    }
  t = term_h_23;
  t = echo_0_0(t);
  t = term_s_21;
  c_82 = t;
  t = term_t_21;
  d_82 = t;
  t = term_i_23;
  t = k_7(c_82, d_82, t);
  t = reverse_acc_2_0(_id, l_5, t);
  t = map_1_0(m_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
  m_82 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_82;
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
            t = m_82;
          }
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATinsert(ATempty, m_82);
      }
  }
  n_82 = t;
  t = term_p_19;
  o_82 = t;
  t = SSL_printnl(o_82, n_82);
  t = m_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_82 = NULL,v_82 = NULL;
  t = term_o_11;
  t_82 = t;
  t = term_f_22;
  v_82 = t;
  t = term_g_22;
  t = k_7(t_82, v_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL;
  t = term_n_23;
  w_82 = t;
  t = term_p_6;
  x_82 = t;
  t = term_o_23;
  t = n_7(w_82, x_82, t);
  return(t);
}
static ATerm p_5 (ATerm t)
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
  ATerm y_82 = NULL,a_83 = NULL,c_83 = NULL,f_83 = NULL;
  t = term_n_23;
  c_83 = t;
  t = term_p_6;
  f_83 = t;
  t = term_o_23;
  t = n_7(c_83, f_83, t);
  t = term_q_23;
  y_82 = t;
  t = term_p_6;
  a_83 = t;
  t = term_r_23;
  t = n_7(y_82, a_83, t);
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
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, o_5, p_5, t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,p_22 = NULL;
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
  t = x_61(t);
  j_83 = t;
  t = i_83;
  t = y_61(t);
  k_83 = t;
  t = (ATerm) ATinsert(CheckATermList(k_83), j_83);
  p_22 = t;
  t = SSLsetAnnotations(p_22, g_83);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,w_83 = NULL,x_83 = NULL,b_84 = NULL,c_84 = NULL,t_22 = NULL;
  s_83 = t;
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_24;
        t = m_103(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
      }
  }
  t = s_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_83 = ATgetFirst((ATermList) t);
      x_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_83);
  t_83 = t;
  t = term_f_22;
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, w_83);
  t = n_7(c_84, w_83, t);
  t = x_83;
  {
    static ATerm q_84 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_84 = NULL;
              h_84 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_84;
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = m_103(t);
              t = Cons_2_0(_id, q_84, t);
            }
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm k_84 = NULL,l_84 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_84 = ATgetFirst((ATermList) t);
                l_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_84), (ATerm) ATmakeAppl(sym_Undefined_1, k_84));
          }
        }
      return(t);
    }
    t = q_84(t);
  }
  b_84 = t;
  t = (ATerm) ATinsert(CheckATermList(b_84), (ATerm) ATmakeAppl(sym_Program_1, w_83));
  t_22 = t;
  t = SSLsetAnnotations(t_22, t_83);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  if(match_string(t, "--help"))
    {
      t = d_85;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_85;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_85;
        }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL;
  t = term_y_22;
  e_85 = t;
  t = term_p_6;
  f_85 = t;
  t = term_j_24;
  t = n_7(e_85, f_85, t);
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
ATerm parse_options_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  x_84 = t;
  t = term_s_21;
  y_84 = t;
  t = term_m_24;
  t = lookup_table_0_1(y_84, t);
  c_85 = t;
  t = term_t_21;
  z_84 = t;
  t = (ATerm) ATempty;
  a_85 = t;
  t = c_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(z_84, a_85, b_85, t);
  t = x_84;
  {
    static ATerm u_5 (ATerm t)
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_103(t);
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
                t = Option_3_0(v_5, w_5, y_5, t);
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
    t = parse_options_p__1_0(u_5, t);
  }
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_85 = NULL;
        q_85 = t;
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_46 = NULL;
              t = q_85;
              {
                ATerm w_24 = t;
                int x_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_46 = NULL,t_46 = NULL;
                    t = term_o_11;
                    s_46 = t;
                    t = term_y_22;
                    t_46 = t;
                    t = term_z_22;
                    t = k_7(s_46, t_46, t);
                    LocalPopChoice(x_24);
                  }
                else
                  {
                    t = w_24;
                    t = fetch_1_0(a_6, t);
                  }
              }
              t = q_85;
              t = default_system_usage_0_0(t);
              t = term_b_16;
              r_46 = t;
              t = SSL_exit(r_46);
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              {
                ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
                t = term_o_11;
                y_46 = t;
                t = term_n_23;
                z_46 = t;
                t = term_a_25;
                t = k_7(y_46, z_46, t);
                t = q_85;
                t = default_system_about_0_0(t);
                t = term_b_16;
                x_46 = t;
                t = SSL_exit(x_46);
              }
            }
        }
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm b_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
              static ATerm c_6 (ATerm t)
              {
                ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,v_22 = NULL;
                w_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_85);
                u_85 = t;
                t = v_85;
                if(((v_84 != NULL) && (v_84 != t)))
                  _fail(t);
                else
                  v_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_85);
                v_22 = t;
                t = SSLsetAnnotations(v_22, u_85);
                return(t);
              }
              t = fetch_1_0(c_6, t);
              t = term_q_6;
              s_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_84)), term_g_25);
              t_85 = t;
              t = SSL_printnl(s_85, t_85);
              t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_84)), term_g_25));
              t = default_system_usage_0_0(t);
              t = term_h_7;
              r_85 = t;
              t = SSL_exit(r_85);
              LocalPopChoice(e_25);
            }
          else
            {
              t = b_25;
            }
        }
      }
  }
  w_84 = t;
  t = term_s_21;
  t = table_destroy_0_0(t);
  t = w_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL;
  t = parse_options_1_0(l_101, t);
  b_86 = t;
  t = term_h_25;
  t = table_create_0_0(t);
  t = term_h_25;
  c_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, b_86);
  t = lookup_table_0_1(c_86, t);
  f_86 = t;
  t = term_i_25;
  d_86 = t;
  t = f_86;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(d_86, b_86, e_86, t);
  t = b_86;
  t = n_101(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_101, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm l_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_25);
            }
          else
            {
              t = l_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = if_verbose2_1_0(m_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  t = term_q_7;
  g_86 = t;
  t = term_p_6;
  h_86 = t;
  t = term_u_7;
  t = n_7(g_86, h_86, t);
  t = term_w_7;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_x_7;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  i_86 = t;
  t = term_o_11;
  m_86 = t;
  t = term_f_22;
  n_86 = t;
  t = term_g_22;
  t = k_7(m_86, n_86, t);
  j_86 = t;
  t = term_q_6;
  k_86 = t;
  t = (ATerm) ATinsert(ATempty, j_86);
  l_86 = t;
  t = SSL_printnl(k_86, l_86);
  t = i_86;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_100(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_25);
            }
          else
            {
              t = r_25;
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
                          t = Option_3_0(g_6, i_6, l_6, t);
                          LocalPopChoice(w_25);
                        }
                      else
                        {
                          t = v_25;
                          {
                            ATerm x_25 = t;
                            int z_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_25);
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
  static ATerm f_6 (ATerm t)
  {
    ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
    p_86 = t;
    {
      ATerm a_26 = t;
      int b_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_86 != NULL) && (o_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_6, t);
          LocalPopChoice(b_26);
        }
      else
        {
          t = a_26;
          t = term_c_26;
          o_86 = t;
        }
    }
    t = not_null(o_86);
    t = ReadFromFile_0_0(t);
    q_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_86, q_86);
    t = apply_strategy_1_0(u_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_6, w_100, e_6, f_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

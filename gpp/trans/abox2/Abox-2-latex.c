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
}
ATerm term_l_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_c_19;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_k_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_b_16;
ATerm term_m_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
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
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_y_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_y_6);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_m_7);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_k_7);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_m_15);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_15);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_y_6);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_t_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_e_21);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_y_6);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_y_6);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_y_6);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_y_22);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm Abox2latex_options_0_0 (ATerm t);
static ATerm v_1 (ATerm l_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm collect_om_2_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t);
static ATerm m_42 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm a_75 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm c_6 (ATerm q_18, ATerm t);
ATerm listtd_1_0 (ATerm v_82 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm d_73 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm g_82 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm d_6 (ATerm r_20, ATerm s_20, ATerm t);
ATerm filter_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm y_72 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm s_55 (ATerm q_53, ATerm r_53, ATerm s_53, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm e_6 (ATerm o_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_82 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm f_6 (ATerm k_15, ATerm t);
static ATerm g_6 (ATerm o_38, ATerm p_38, ATerm t);
ATerm while_not_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm e_66 (ATerm o_64, ATerm p_64, ATerm q_64, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_74 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm i_6 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm j_6 (ATerm h_20, ATerm i_20, ATerm t);
static ATerm l_6 (ATerm c_81 (ATerm), ATerm u_209, ATerm n_20, ATerm t);
static ATerm k_6 (ATerm d_20, ATerm e_20, ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm t);
static ATerm w_69 (ATerm q_69, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_6 (ATerm j_20, ATerm t);
static ATerm n_6 (ATerm f_34, ATerm g_34, ATerm t);
static ATerm o_6 (ATerm o_35, ATerm p_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_71 (ATerm g_70, ATerm t);
static ATerm i_71 (ATerm k_70, ATerm l_70, ATerm m_70, ATerm t);
static ATerm j_71 (ATerm u_70, ATerm v_70, ATerm w_70, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_81 (ATerm), ATerm t);
static ATerm s_6 (ATerm r_51, ATerm s_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm u_96 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_6 (ATerm f_45, ATerm g_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_6 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_6 (ATerm i_38, ATerm j_38, ATerm t);
ATerm foldr_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_96 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_81 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t);
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
  t = term_y_6;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_a_7;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), j_0), term_c_7);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_e_7;
  m_0 = t;
  t = SSL_exit(m_0);
  t = f_0;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL;
  t = term_f_7;
  q_0 = t;
  t = term_y_6;
  s_0 = t;
  t = term_g_7;
  t = v_6(q_0, s_0, t);
  t = term_h_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_j_7;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  t_0 = t;
  t = term_k_7;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, t_0);
  t = v_6(u_0, t_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_7;
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
  ATerm z_0 = NULL,c_1 = NULL;
  z_0 = t;
  t = term_m_7;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, z_0);
  t = v_6(c_1, z_0, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_0, x_0, y_0, t);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
                  {
                    ATerm y_7 = t;
                    int a_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_8);
                      }
                    else
                      {
                        t = y_7;
                        {
                          ATerm b_8 = t;
                          int c_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(c_8);
                            }
                          else
                            {
                              t = b_8;
                              {
                                ATerm d_8 = t;
                                int e_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_1, d_1, f_1, t);
                                    LocalPopChoice(e_8);
                                  }
                                else
                                  {
                                    t = d_8;
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
static ATerm v_1 (ATerm l_1, ATerm t)
{
  ATerm m_1 = NULL;
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,s_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = p_1;
            t = at_end_1_0(j_1, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = v_1(s_1, t);
          }
      }
    }
  else
    {
      t = v_1(s_1, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  x_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
      t = e_88(t);
    }
  else
    {
      ATerm c_2 = NULL,d_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_1 = ATgetFirst((ATermList) t);
          z_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_1;
      t = g_88(t);
      c_2 = t;
      t = z_1;
      t = foldr_3_0(e_88, f_88, g_88, t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, d_2);
      t = f_88(t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL;
      t = b_87(t);
      g_2 = t;
      t = (ATerm) ATinsert(ATempty, g_2);
      LocalPopChoice(l_8);
    }
  else
    {
      t = i_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm n_1 (ATerm t)
        {
          t = collect_om_2_0(b_87, c_87, t);
          return(t);
        }
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm m_8 = ATgetArgument(t, 0);
            a_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_0;
        t = foldr_3_0(k_1, c_87, n_1, t);
      }
    }
  return(t);
}
static ATerm m_42 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t)
{
  ATerm v_3 = NULL;
  t = SSL_is_int(n_2);
  t = SSL_int_to_string(n_2);
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), o_2), term_o_8), v_3), term_n_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  f_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      b_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
      t = b_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), e_4), term_q_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_4 = ATgetFirst((ATermList) t);
              w_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), e_4), term_v_8), d_4), term_u_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          b_4 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_8), e_4), term_v_8), b_4), term_w_8);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              b_4 = ATgetArgument(t, 0);
              e_4 = ATgetArgument(t, 1);
              y_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), y_3), term_v_8), e_4), term_o_8), b_4), term_y_8);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  b_4 = ATgetArgument(t, 0);
                  e_4 = ATgetArgument(t, 1);
                  y_3 = ATgetArgument(t, 2);
                  a_4 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), a_4), term_v_8), y_3), term_o_8), e_4), term_o_8), b_4), term_a_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      b_4 = ATgetArgument(t, 0);
                      e_4 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), e_4), term_v_8), b_4), term_c_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          b_4 = ATgetArgument(t, 0);
                          e_4 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), e_4), term_f_9), b_4), term_e_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              b_4 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_9), b_4), term_h_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  b_4 = ATgetArgument(t, 0);
                                  e_4 = ATgetArgument(t, 1);
                                  t = b_4;
                                  if(match_string(t, "="))
                                    {
                                      ATerm j_9 = t;
                                      int k_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_42(b_4, e_4, f_4, t);
                                          LocalPopChoice(k_9);
                                        }
                                      else
                                        {
                                          t = j_9;
                                          {
                                            ATerm l_9 = t;
                                            int m_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), e_4), term_n_9);
                                                LocalPopChoice(m_9);
                                              }
                                            else
                                              {
                                                t = l_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), e_4), term_v_8), b_4), term_p_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm q_9 = t;
                                      int r_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_42(b_4, e_4, f_4, t);
                                          LocalPopChoice(r_9);
                                        }
                                      else
                                        {
                                          t = q_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), e_4), term_v_8), b_4), term_p_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      b_4 = ATgetArgument(t, 0);
                                      e_4 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_4), term_t_9), b_4), term_s_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          b_4 = ATgetArgument(t, 0);
                                          e_4 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_o_8), b_4), term_u_9);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              b_4 = ATgetArgument(t, 0);
                                              e_4 = ATgetArgument(t, 1);
                                              t = b_4;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_v_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_w_9);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_x_9);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_y_9);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_z_9);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_a_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_b_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_c_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_d_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_e_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_f_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_g_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_h_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_i_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_j_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_k_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_l_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_m_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_n_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_o_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_p_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_q_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_r_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_s_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  d_4 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), e_4), term_o_8), d_4), term_t_10);
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
                                                  t = term_u_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_v_10;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_w_10;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_x_10;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_y_10;
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
ATerm bottomup_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(a_75, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = a_75(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm a_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
      t = term_j_11;
      o_42 = t;
      t = term_m_7;
      p_42 = t;
      t = term_k_11;
      t = s_6(o_42, p_42, t);
      n_42 = t;
      t = (ATerm) ATinsert(ATempty, n_42);
      LocalPopChoice(c_11);
    }
  else
    {
      t = a_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_43;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_43 = ATgetFirst((ATermList) t);
          a_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 = NULL,e_1 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(y_43);
            a_1 = t;
            t = z_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_44;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), z_43);
            h_0 = t;
            t = SSLsetAnnotations(h_0, a_1);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 = NULL,w_1 = NULL,h_2 = NULL,k_2 = NULL,r_0 = NULL;
                  t = SSLgetAnnotations(y_43);
                  h_2 = t;
                  t = z_43;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_43;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm p_11 = ATgetFirst((ATermList) t);
                          ATerm q_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = z_43;
                    }
                  t = (ATerm) ATinsert(CheckATermList(a_44), z_43);
                  r_0 = t;
                  t = SSLsetAnnotations(r_0, h_2);
                  k_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = k_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm s_11 = ATgetFirst((ATermList) t);
                      q_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_1, q_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm j_3 = NULL,m_3 = NULL,v_0 = NULL;
                    t = SSLgetAnnotations(y_43);
                    j_3 = t;
                    t = a_44;
                    t = flat_list_0_0(t);
                    m_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(m_3), z_43);
                    v_0 = t;
                    t = SSLsetAnnotations(v_0, j_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_11) != AT_INT) || (ATgetInt((ATermInt) t_11) != 34)))
        _fail(t);
      g_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_44), term_u_11), term_u_11);
  return(t);
}
static ATerm c_6 (ATerm q_18, ATerm t)
{
  ATerm f_44 = NULL;
  t = q_18;
  t = at_suffix_1_0(t_1, t);
  f_44 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_44), term_v_11), term_v_11);
  return(t);
}
ATerm listtd_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  static ATerm u_44 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
    t = v_82(t);
    r_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_44;
      }
    else
      {
        ATerm x_3 = NULL,g_4 = NULL,y_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_44 = ATgetFirst((ATermList) t);
            t_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_44);
        x_3 = t;
        t = t_44;
        t = u_44(t);
        g_4 = t;
        t = (ATerm) ATinsert(CheckATermList(g_4), s_44);
        y_4 = t;
        t = SSLsetAnnotations(y_4, x_3);
      }
    return(t);
  }
  t = u_44(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_6 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
      t = z_6;
      if(match_int(t, 34))
        {
          ATerm w_11 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_7;
              t = c_6(b_7, t);
              LocalPopChoice(b_12);
            }
          else
            {
              t = w_11;
              t = i_7;
            }
        }
      else
        {
          t = i_7;
        }
    }
  else
    {
      t = i_7;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  if(match_int(t, 32))
    {
      ATerm c_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL;
          t = term_g_12;
          x_11 = t;
          t = SSL_explode_string(x_11);
          LocalPopChoice(d_12);
        }
      else
        {
          t = c_12;
          t = t_8;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_11 = NULL;
              t = term_n_12;
              y_11 = t;
              t = SSL_explode_string(y_11);
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              t = t_8;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm q_12 = t;
              int t_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_11 = NULL;
                  t = term_u_12;
                  z_11 = t;
                  t = SSL_explode_string(z_11);
                  LocalPopChoice(t_12);
                }
              else
                {
                  t = q_12;
                  t = t_8;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm v_12 = t;
                  int w_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_12 = NULL;
                      t = term_y_12;
                      a_12 = t;
                      t = SSL_explode_string(a_12);
                      LocalPopChoice(w_12);
                    }
                  else
                    {
                      t = v_12;
                      t = t_8;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm z_12 = t;
                      int a_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_12 = NULL;
                          t = term_d_13;
                          e_12 = t;
                          t = SSL_explode_string(e_12);
                          LocalPopChoice(a_13);
                        }
                      else
                        {
                          t = z_12;
                          t = t_8;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm e_13 = t;
                          int f_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_12 = NULL;
                              t = term_g_13;
                              f_12 = t;
                              t = SSL_explode_string(f_12);
                              LocalPopChoice(f_13);
                            }
                          else
                            {
                              t = e_13;
                              t = t_8;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm i_13 = t;
                              int j_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_12 = NULL;
                                  t = term_k_13;
                                  j_12 = t;
                                  t = SSL_explode_string(j_12);
                                  LocalPopChoice(j_13);
                                }
                              else
                                {
                                  t = i_13;
                                  t = t_8;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm l_13 = t;
                                  int m_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_12 = NULL;
                                      t = term_n_13;
                                      k_12 = t;
                                      t = SSL_explode_string(k_12);
                                      LocalPopChoice(m_13);
                                    }
                                  else
                                    {
                                      t = l_13;
                                      t = t_8;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm o_13 = t;
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
                                          t = o_13;
                                          t = t_8;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm r_13 = t;
                                          int s_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm m_12 = NULL;
                                              t = term_t_13;
                                              m_12 = t;
                                              t = SSL_explode_string(m_12);
                                              LocalPopChoice(s_13);
                                            }
                                          else
                                            {
                                              t = r_13;
                                              t = t_8;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm u_13 = t;
                                              int w_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_12 = NULL;
                                                  t = term_x_13;
                                                  o_12 = t;
                                                  t = SSL_explode_string(o_12);
                                                  LocalPopChoice(w_13);
                                                }
                                              else
                                                {
                                                  t = u_13;
                                                  t = t_8;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm y_13 = t;
                                                  int z_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_12 = NULL;
                                                      t = term_a_14;
                                                      p_12 = t;
                                                      t = SSL_explode_string(p_12);
                                                      LocalPopChoice(z_13);
                                                    }
                                                  else
                                                    {
                                                      t = y_13;
                                                      t = t_8;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm b_14 = t;
                                                      int c_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_12 = NULL;
                                                          t = term_e_14;
                                                          r_12 = t;
                                                          t = SSL_explode_string(r_12);
                                                          LocalPopChoice(c_14);
                                                        }
                                                      else
                                                        {
                                                          t = b_14;
                                                          t = t_8;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm f_14 = t;
                                                          int g_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_12 = NULL;
                                                              t = term_h_14;
                                                              s_12 = t;
                                                              t = SSL_explode_string(s_12);
                                                              LocalPopChoice(g_14);
                                                            }
                                                          else
                                                            {
                                                              t = f_14;
                                                              t = t_8;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm i_14 = t;
                                                              int j_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_12 = NULL;
                                                                  t = term_k_14;
                                                                  x_12 = t;
                                                                  t = SSL_explode_string(x_12);
                                                                  LocalPopChoice(j_14);
                                                                }
                                                              else
                                                                {
                                                                  t = i_14;
                                                                  t = t_8;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = t_8;
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
  ATerm n_47 = NULL;
  n_47 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL;
        t = term_n_14;
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_14, n_47);
        t = s_6(p_47, n_47, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
          ATerm x_6 = NULL;
          t = SSL_explode_string(n_47);
          t = listtd_1_0(u_1, t);
          t = map_1_0(a_2, t);
          t = flat_list_0_0(t);
          x_6 = t;
          t = SSL_implode_string(x_6);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm d_73 (ATerm), ATerm t)
{
  static ATerm x_48 (ATerm t)
  {
    ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
    u_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_48 = ATgetFirst((ATermList) t);
        t_48 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_13 = NULL,c_13 = NULL,h_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(u_48);
              c_13 = t;
              t = s_48;
              t = d_73(t);
              h_13 = t;
              t = (ATerm) ATinsert(CheckATermList(t_48), h_13);
              i_5 = t;
              t = SSLsetAnnotations(i_5, c_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_14 = ATgetFirst((ATermList) t);
                  b_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_13;
              t = x_48(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = u_48;
            }
        }
      }
    else
      {
        t = u_48;
      }
    return(t);
  }
  t = x_48(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  static ATerm r_49 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_82(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,v_13 = NULL,d_14 = NULL,p_5 = NULL;
          o_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_49 = ATgetFirst((ATermList) t);
              q_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_49);
          v_13 = t;
          t = q_49;
          t = r_49(t);
          d_14 = t;
          t = (ATerm) ATinsert(CheckATermList(d_14), p_49);
          p_5 = t;
          t = SSLsetAnnotations(p_5, v_13);
        }
      }
    return(t);
  }
  t = r_49(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  if(match_int(t, 9))
    {
      t = y_49;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = y_49;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  t = remove_trailing_1_0(b_2, t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_2 (ATerm t)
        {
          ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,s_5 = NULL;
          g_50 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_50 = ATgetFirst((ATermList) t);
              e_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_50);
          c_50 = t;
          t = d_50;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = e_50;
          {
            static ATerm i_2 (ATerm t)
            {
              if(((v_49 != NULL) && (v_49 != t)))
                _fail(t);
              else
                v_49 = t;
              return(t);
            }
            t = Cons_2_0(f_2, i_2, t);
          }
          f_50 = t;
          t = (ATerm) ATinsert(CheckATermList(f_50), d_50);
          s_5 = t;
          t = SSLsetAnnotations(s_5, c_50);
          t = not_null(v_49);
          return(t);
        }
        t = at_suffix_1_0(e_2, t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
      }
  }
  w_49 = t;
  t = SSL_implode_string(w_49);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
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
  ATerm m_51 = NULL;
  m_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_14), m_51);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  p_50 = t;
  t = SSL_explode_string(p_50);
  t = reverse_acc_2_0(_id, j_2, t);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, (ATerm) ATempty);
  {
    static ATerm n_51 (ATerm t)
    {
      ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
      if(match_cons(t, sym__2))
        {
          s_50 = ATgetArgument(t, 0);
          v_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_50;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm z_50 = NULL;
          t = v_50;
          t = LatexComment_0_0(t);
          z_50 = t;
          t = (ATerm) ATinsert(ATempty, z_50);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_50 = ATgetFirst((ATermList) t);
              u_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_50;
          if(match_int(t, 10))
            {
              ATerm w_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_51 = NULL,e_51 = NULL;
                  t = v_50;
                  t = LatexComment_0_0(t);
                  d_51 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_50, (ATerm) ATempty);
                  t = n_51(t);
                  e_51 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_51), d_51);
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = w_14;
                  t = (ATerm) ATmakeAppl(sym__2, u_50, (ATerm) ATinsert(CheckATermList(v_50), t_50));
                  t = n_51(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, u_50, (ATerm) ATinsert(CheckATermList(v_50), t_50));
              t = n_51(t);
            }
        }
      return(t);
    }
    t = n_51(t);
  }
  t = remove_trailing_1_0(l_2, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = remove_trailing_1_0(q_2, t);
  t = map_1_0(r_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_15;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  t = filter_1_0(s_2, t);
  y_14 = t;
  t = term_b_15;
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, y_14);
  t = d_6(x_14, y_14, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm o_51 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      t = term_e_7;
    }
  o_51 = t;
  t = SSL_int_to_string(o_51);
  return(t);
}
static ATerm d_6 (ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  t = s_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_20;
    }
  else
    {
      ATerm i_15 = NULL,n_15 = NULL,u_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_52 = ATgetFirst((ATermList) t);
          h_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_20);
      i_15 = t;
      t = h_52;
      {
        static ATerm s_15 (ATerm t)
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL;
              p_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_15;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm q_15 = NULL;
                t = Cons_2_0(_id, s_15, t);
                q_15 = t;
                t = (ATerm) ATinsert(CheckATermList(q_15), r_20);
              }
            }
          return(t);
        }
        t = s_15(t);
      }
      n_15 = t;
      t = (ATerm) ATinsert(CheckATermList(n_15), g_52);
      u_5 = t;
      t = SSLsetAnnotations(u_5, i_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_52;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_52 = ATgetFirst((ATermList) t);
          z_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(x_52);
            z_15 = t;
            t = y_52;
            t = g_89(t);
            c_16 = t;
            t = z_52;
            t = filter_1_0(g_89, t);
            d_16 = t;
            t = (ATerm) ATinsert(CheckATermList(d_16), c_16);
            x_5 = t;
            t = SSLsetAnnotations(x_5, z_15);
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = z_52;
            t = filter_1_0(g_89, t);
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm c_53 = NULL;
  ATerm j_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = j_15;
      t = term_m_15;
    }
  c_53 = t;
  t = SSL_int_to_string(c_53);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm d_53 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,h_6 = NULL;
    i_53 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        f_53 = ATgetArgument(t, 0);
        g_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_53);
    e_53 = t;
    t = f_53;
    t = y_72(t);
    h_53 = t;
    t = g_53;
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, h_53, g_53);
    h_6 = t;
    t = SSLsetAnnotations(h_6, e_53);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(d_53));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm j_53 = NULL;
  ATerm r_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = r_15;
      t = term_m_15;
    }
  j_53 = t;
  t = SSL_int_to_string(j_53);
  return(t);
}
static ATerm s_55 (ATerm q_53, ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm w_53 = NULL,q_7 = NULL;
  t = SSLgetAnnotations(s_53);
  w_53 = t;
  t = r_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_53), q_53);
  q_7 = t;
  t = SSLsetAnnotations(q_7, w_53);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,v_7 = NULL;
  e_55 = t;
  if(match_cons(t, sym_C_2))
    {
      c_55 = ATgetArgument(t, 0);
      d_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, c_55, d_55);
  v_7 = t;
  t = SSLsetAnnotations(v_7, b_55);
  return(t);
}
static ATerm e_6 (ATerm o_15, ATerm t)
{
  static ATerm r_55 (ATerm t)
  {
    static ATerm t_55 (ATerm a_54, ATerm b_54, ATerm c_54, ATerm t)
    {
      ATerm g_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,s_7 = NULL,r_7 = NULL;
      t = SSLgetAnnotations(c_54);
      g_54 = t;
      t = a_54;
      if(match_cons(t, sym_C_2))
        {
          l_54 = ATgetArgument(t, 0);
          m_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_54);
      k_54 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, l_54, m_54);
      r_7 = t;
      t = SSLsetAnnotations(r_7, k_54);
      n_54 = t;
      t = b_54;
      t = Cons_2_0(_id, r_55, t);
      j_54 = t;
      t = (ATerm) ATinsert(CheckATermList(j_54), n_54);
      s_7 = t;
      t = SSLsetAnnotations(s_7, g_54);
      return(t);
    }
    static ATerm u_55 (ATerm q_54, ATerm r_54, ATerm s_54, ATerm t)
    {
      ATerm w_54 = NULL,z_54 = NULL,z_7 = NULL;
      t = SSLgetAnnotations(s_54);
      w_54 = t;
      t = r_54;
      t = Cons_2_0(x_2, r_55, t);
      z_54 = t;
      t = (ATerm) ATinsert(CheckATermList(z_54), q_54);
      z_7 = t;
      t = SSLsetAnnotations(z_7, w_54);
      return(t);
    }
    ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
    f_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_55;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_55 = ATgetFirst((ATermList) t);
            h_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_55;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_55 = ATgetFirst((ATermList) t);
            j_55 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm u_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_55(g_55, h_55, f_55, t);
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = u_15;
                  {
                    ATerm w_15 = t;
                    int x_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = t_55(g_55, h_55, f_55, t);
                        LocalPopChoice(x_15);
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm y_15 = t;
                          int a_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_55(g_55, h_55, f_55, t);
                              LocalPopChoice(a_16);
                            }
                          else
                            {
                              t = y_15;
                              {
                                ATerm q_55 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(j_55), i_55);
                                t = r_55(t);
                                q_55 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(q_55), term_b_16), g_55);
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
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_55(g_55, h_55, f_55, t);
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                {
                  ATerm g_16 = t;
                  int h_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_55(g_55, h_55, f_55, t);
                      LocalPopChoice(h_16);
                    }
                  else
                    {
                      t = g_16;
                      t = u_55(g_55, h_55, f_55, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = o_15;
  t = r_55(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  if(match_cons(t, sym_LBL_2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        t = h_56;
        if(match_cons(t, sym_R_2))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            q_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(q_16, t);
        t = h_56;
        if(match_cons(t, sym_R_2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(p_16, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, g_56, o_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm k_16 = ATgetArgument(t, 0);
          h_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_56;
      t = e_6(h_56, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  static ATerm h_57 (ATerm t)
  {
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
    e_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_57 = ATgetFirst((ATermList) t);
        g_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = NULL,j_8 = NULL;
          t = SSLgetAnnotations(e_57);
          x_16 = t;
          t = g_57;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_57), f_57);
          j_8 = t;
          t = SSLsetAnnotations(j_8, x_16);
          t = n_82(t);
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
          {
            ATerm h_17 = NULL,k_17 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(e_57);
            h_17 = t;
            t = g_57;
            t = h_57(t);
            k_17 = t;
            t = (ATerm) ATinsert(CheckATermList(k_17), f_57);
            k_8 = t;
            t = SSLsetAnnotations(k_8, h_17);
          }
        }
    }
    return(t);
  }
  t = h_57(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  static ATerm x_57 (ATerm t)
  {
    ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
    w_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_57 = ATgetFirst((ATermList) t);
        v_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_17 = NULL,x_17 = NULL,s_8 = NULL;
          t = SSLgetAnnotations(w_57);
          t_17 = t;
          t = v_57;
          t = x_57(t);
          x_17 = t;
          t = (ATerm) ATinsert(CheckATermList(x_17), u_57);
          s_8 = t;
          t = SSLsetAnnotations(s_8, t_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_57;
        t = c_82(t);
      }
    return(t);
  }
  t = x_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_58;
    }
  else
    {
      static ATerm y_2 (ATerm t)
      {
        t = not_null(c_58);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_58 = ATgetFirst((ATermList) t);
          if(((c_58 != NULL) && (c_58 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_58;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_59 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      a_59 = ATgetArgument(t, 0);
      {
        ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
        t = a_59;
        t = Hspace_0_0(t);
        h_18 = t;
        t = SSL_string_to_int(h_18);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_18, term_b_15);
        t = copy_0_0(t);
        f_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_n_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          a_59 = ATgetArgument(t, 0);
          {
            ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
            t = a_59;
            t = Hspace_0_0(t);
            n_18 = t;
            t = SSL_string_to_int(n_18);
            m_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_18, term_b_15);
            t = copy_0_0(t);
            l_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, l_18), term_r_16);
          }
        }
      else
        {
          ATerm x_18 = NULL,z_18 = NULL,a_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              a_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_59;
          t = Hspace_0_0(t);
          a_19 = t;
          t = SSL_string_to_int(a_19);
          z_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_18, term_b_15);
          t = copy_0_0(t);
          x_18 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_18), term_s_16);
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_16);
  return(t);
}
static ATerm f_6 (ATerm k_15, ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = k_15;
  t = map_1_0(z_2, t);
  e_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_16);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_16), e_19);
  t = d_6(d_19, e_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
static ATerm g_6 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_38, p_38);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = SSL_subtr(o_38, p_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm t)
{
  static ATerm e_59 (ATerm t)
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_74(t);
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        t = r_74(t);
        t = e_59(t);
      }
    return(t);
  }
  t = e_59(t);
  return(t);
}
ATerm for_3_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t)
{
  t = t_74(t);
  t = while_not_2_0(u_74, v_74, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  if(match_cons(t, sym__2))
    {
      h_59 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_59, i_59, (ATerm) ATempty);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm j_59 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      if(((ATgetType(z_16) != AT_INT) || (ATgetInt((ATermInt) z_16) != 0)))
        _fail(t);
      {
        ATerm a_17 = ATgetArgument(t, 1);
      }
      j_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_59;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  if(match_cons(t, sym__3))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
      m_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_59, term_e_7);
  t = geq_0_0(t);
  t = term_e_7;
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, term_e_7);
  t = g_6(k_59, o_59, t);
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_59, l_59, (ATerm) ATinsert(CheckATermList(m_59), l_59));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_3, c_3, d_3, t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,r_19 = NULL,z_10 = NULL;
        w_59 = t;
        if(match_cons(t, sym__2))
          {
            x_59 = ATgetArgument(t, 0);
            y_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_59);
        r_19 = t;
        t = x_59;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_59, y_59);
        z_10 = t;
        t = SSLsetAnnotations(z_10, r_19);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm d_17 = t;
  if((PushChoice() == 0))
    {
      ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,b_11 = NULL;
      n_61 = t;
      if(match_cons(t, sym_R_2))
        {
          l_61 = ATgetArgument(t, 0);
          m_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_61);
      k_61 = t;
      t = m_61;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, l_61, m_61);
      b_11 = t;
      t = SSLsetAnnotations(b_11, k_61);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_60, (ATerm) ATempty);
  {
    static ATerm o_61 (ATerm t)
    {
      ATerm i_60 = NULL,j_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
      if(match_cons(t, sym__2))
        {
          l_60 = ATgetArgument(t, 0);
          o_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_60;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_60 = NULL;
          t = o_60;
          t = reverse_acc_2_0(_id, e_3, t);
          t_60 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_60));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_60 = ATgetFirst((ATermList) t);
              n_60 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_60;
          if(match_cons(t, sym_R_2))
            {
              i_60 = ATgetArgument(t, 0);
              j_60 = ATgetArgument(t, 1);
              {
                ATerm e_17 = t;
                int f_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_60 = NULL,a_61 = NULL;
                    t = o_60;
                    t = reverse_acc_2_0(_id, f_3, t);
                    z_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_60, (ATerm) ATempty);
                    t = o_61(t);
                    a_61 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_R_2, i_60, j_60)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, z_60));
                    LocalPopChoice(f_17);
                  }
                else
                  {
                    t = e_17;
                    t = (ATerm) ATmakeAppl(sym__2, n_60, (ATerm) ATinsert(CheckATermList(o_60), m_60));
                    t = o_61(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_60, (ATerm) ATinsert(CheckATermList(o_60), m_60));
              t = o_61(t);
            }
        }
      return(t);
    }
    t = o_61(t);
  }
  t = filter_1_0(g_3, t);
  return(t);
}
static ATerm e_66 (ATerm o_64, ATerm p_64, ATerm q_64, ATerm t)
{
  t = o_64;
  if(match_cons(t, sym_KW_0))
    {
      t = o_64;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = o_64;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = o_64;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = o_64;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, o_64, p_64);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm g_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_17;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_17;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm z_65 = NULL;
  if(match_cons(t, sym_S_1))
    {
      z_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_65;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  z_64 = t;
  if(match_cons(t, sym_REF_2))
    {
      a_65 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, a_65, y_64);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          a_65 = ATgetArgument(t, 0);
          y_64 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, a_65, y_64);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              a_65 = ATgetArgument(t, 0);
              y_64 = ATgetArgument(t, 1);
              {
                ATerm l_23 = NULL;
                t = z_64;
                {
                  ATerm j_17 = t;
                  int l_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(a_65);
                      l_23 = t;
                      LocalPopChoice(l_17);
                    }
                  else
                    {
                      t = j_17;
                      {
                        ATerm m_17 = t;
                        int n_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_23 = NULL,n_23 = NULL,r_23 = NULL,u_23 = NULL,v_23 = NULL,d_11 = NULL;
                            t = SSL_explode_string(a_65);
                            v_23 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                r_23 = ATgetFirst((ATermList) t);
                                u_23 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(v_23);
                            n_23 = t;
                            t = r_23;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(u_23), r_23);
                            d_11 = t;
                            t = SSLsetAnnotations(d_11, n_23);
                            t = (ATerm) ATinsert(ATempty, term_o_17);
                            m_23 = t;
                            t = SSL_implode_string(m_23);
                            l_23 = t;
                            LocalPopChoice(n_17);
                          }
                        else
                          {
                            t = m_17;
                            t = a_65;
                            l_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, l_23, y_64);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  a_65 = ATgetArgument(t, 0);
                  y_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, a_65, y_64);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      a_65 = ATgetArgument(t, 0);
                      y_64 = ATgetArgument(t, 1);
                      u_64 = ATgetArgument(t, 2);
                      {
                        ATerm p_24 = NULL,r_24 = NULL,w_24 = NULL,x_24 = NULL,e_25 = NULL,f_25 = NULL,j_25 = NULL,k_25 = NULL,z_25 = NULL;
                        t = u_64;
                        t = construct_rows_0_0(t);
                        w_24 = t;
                        t = y_64;
                        t = Vspace_0_0(t);
                        k_25 = t;
                        t = SSL_string_to_int(k_25);
                        p_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_24, term_t_16);
                        t = copy_0_0(t);
                        f_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_25, (ATerm) ATinsert(ATinsert(ATempty, term_v_14), term_t_16));
                        t = conc_0_0(t);
                        x_24 = t;
                        t = a_65;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            j_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = f_6(j_25, t);
                        r_24 = t;
                        t = w_24;
                        t = map_1_0(MkRows_0_0, t);
                        z_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_24, z_25);
                        t = d_6(x_24, z_25, t);
                        e_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, r_24, e_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          a_65 = ATgetArgument(t, 0);
                          y_64 = ATgetArgument(t, 1);
                          {
                            ATerm h_65 = NULL,i_65 = NULL,k_65 = NULL,m_65 = NULL,b_26 = NULL,i_26 = NULL;
                            t = a_65;
                            t = Hspace_0_0(t);
                            h_65 = t;
                            t = a_65;
                            t = Vspace_0_0(t);
                            i_65 = t;
                            t = a_65;
                            t = Ispace_0_0(t);
                            k_65 = t;
                            t = y_64;
                            t = filter_1_0(h_3, t);
                            i_26 = t;
                            t = term_p_17;
                            b_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_p_17, i_26);
                            t = d_6(b_26, i_26, t);
                            m_65 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, h_65, i_65, k_65, m_65);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              a_65 = ATgetArgument(t, 0);
                              y_64 = ATgetArgument(t, 1);
                              {
                                ATerm n_65 = NULL,p_65 = NULL,r_65 = NULL,n_26 = NULL,o_26 = NULL;
                                t = a_65;
                                t = Vspace_0_0(t);
                                n_65 = t;
                                t = a_65;
                                t = Ispace_0_0(t);
                                p_65 = t;
                                t = y_64;
                                t = filter_1_0(i_3, t);
                                o_26 = t;
                                t = term_q_17;
                                n_26 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_q_17, o_26);
                                t = d_6(n_26, o_26, t);
                                r_65 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, n_65, p_65, r_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  a_65 = ATgetArgument(t, 0);
                                  y_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm t_65 = NULL,v_65 = NULL;
                                    t = a_65;
                                    t = Hspace_0_0(t);
                                    t_65 = t;
                                    t = y_64;
                                    t = toh_0_0(t);
                                    v_65 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, t_65, v_65);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      a_65 = ATgetArgument(t, 0);
                                      y_64 = ATgetArgument(t, 1);
                                      t = a_65;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          x_64 = ATgetArgument(t, 0);
                                          t = x_64;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              v_64 = ATgetFirst((ATermList) t);
                                              w_64 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm r_17 = t;
                                                int s_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm l_27 = NULL,n_29 = NULL,s_29 = NULL;
                                                    t = v_64;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        n_29 = ATgetArgument(t, 0);
                                                        s_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm u_17 = t;
                                                      int v_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_30 = NULL,e_11 = NULL;
                                                          t = SSLgetAnnotations(v_64);
                                                          k_30 = t;
                                                          t = n_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = s_29;
                                                          l_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, n_29, s_29);
                                                          e_11 = t;
                                                          t = SSLsetAnnotations(e_11, k_30);
                                                          LocalPopChoice(v_17);
                                                        }
                                                      else
                                                        {
                                                          t = u_17;
                                                          {
                                                            ATerm w_17 = t;
                                                            int y_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_30 = NULL,f_11 = NULL;
                                                                t = SSLgetAnnotations(v_64);
                                                                z_30 = t;
                                                                t = n_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = s_29;
                                                                l_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, n_29, s_29);
                                                                f_11 = t;
                                                                t = SSLsetAnnotations(f_11, z_30);
                                                                LocalPopChoice(y_17);
                                                              }
                                                            else
                                                              {
                                                                t = w_17;
                                                                {
                                                                  ATerm z_17 = t;
                                                                  int a_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm v_31 = NULL,g_11 = NULL;
                                                                      t = SSLgetAnnotations(v_64);
                                                                      v_31 = t;
                                                                      t = n_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = s_29;
                                                                      l_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, n_29, s_29);
                                                                      g_11 = t;
                                                                      t = SSLsetAnnotations(g_11, v_31);
                                                                      LocalPopChoice(a_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_17;
                                                                      {
                                                                        ATerm b_18 = t;
                                                                        int c_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm l_32 = NULL,h_11 = NULL;
                                                                            t = SSLgetAnnotations(v_64);
                                                                            l_32 = t;
                                                                            t = n_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = s_29;
                                                                            l_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, n_29, s_29);
                                                                            h_11 = t;
                                                                            t = SSLsetAnnotations(h_11, l_32);
                                                                            LocalPopChoice(c_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_18;
                                                                            {
                                                                              ATerm z_32 = NULL,i_11 = NULL;
                                                                              t = SSLgetAnnotations(v_64);
                                                                              z_32 = t;
                                                                              t = n_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, n_29, s_29);
                                                                              i_11 = t;
                                                                              t = SSLsetAnnotations(i_11, z_32);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, s_29);
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, l_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, w_64), y_64));
                                                    LocalPopChoice(s_17);
                                                  }
                                                else
                                                  {
                                                    t = r_17;
                                                    t = e_66(a_65, y_64, z_64, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = y_64;
                                                }
                                              else
                                                {
                                                  t = e_66(a_65, y_64, z_64, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = e_66(a_65, y_64, z_64, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          a_65 = ATgetArgument(t, 0);
                                          y_64 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_65 = NULL;
                                            t = a_65;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = y_64;
                                            t = map_1_0(k_3, t);
                                            y_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, y_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              a_65 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = a_65;
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
ATerm topdown_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t)
  {
    t = topdown_1_0(z_74, t);
    return(t);
  }
  t = z_74(t);
  t = SRTS_all(l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_66 = ATgetFirst((ATermList) t);
      {
        ATerm d_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            q_66 = ATgetFirst((ATermList) d_18);
            {
              ATerm e_18 = (ATerm) ATgetNext((ATermList) d_18);
              if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_n_14;
  r_66 = t;
  t = SSL_table_put(r_66, p_66, q_66);
  t = (ATerm) ATmakeAppl(sym__3, term_n_14, p_66, q_66);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  l_66 = t;
  t = term_n_14;
  m_66 = t;
  t = SSL_table_create(m_66);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_66 = NULL,o_66 = NULL;
        t = term_j_11;
        n_66 = t;
        t = term_k_7;
        o_66 = t;
        t = term_k_18;
        t = s_6(n_66, o_66, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(n_3, t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
      }
  }
  t = l_66;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  t = SSL_is_string(i_67);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,k_20 = NULL;
  d_67 = t;
  if(match_cons(t, sym__2))
    {
      x_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_67);
  w_66 = t;
  t = y_66;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(o_3, t);
  b_67 = t;
  t = BOXENV_args_0_0(t);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, a_67, b_67);
  t = bottomup_1_0(p_3, t);
  t = collect_om_2_0(q_3, conc_0_0, t);
  c_67 = t;
  t = SSL_concat_strings(c_67);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_66, z_66);
  k_20 = t;
  t = SSLsetAnnotations(k_20, w_66);
  return(t);
}
static ATerm i_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm j_67 = NULL;
  t = SSL_fputc(m_35, n_35);
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_67);
  return(t);
}
static ATerm j_6 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm k_67 = NULL;
  t = SSL_write_term_to_stream_text(h_20, i_20);
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_67);
  return(t);
}
static ATerm l_6 (ATerm c_81 (ATerm), ATerm u_209, ATerm n_20, ATerm t)
{
  ATerm l_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_209, term_t_18);
  t = p_6(t);
  l_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_67, n_20);
  t = c_81(t);
  t = fclose_0_0(t);
  t = n_20;
  return(t);
}
static ATerm k_6 (ATerm d_20, ATerm e_20, ATerm t)
{
  ATerm m_67 = NULL;
  t = SSL_write_term_to_stream_baf(d_20, e_20);
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_67);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm u_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym_Stream_1))
        {
          u_33 = ATgetArgument(u_18, 0);
        }
      else
        _fail(t);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(u_33, w_33, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,g_35 = NULL,i_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if(match_cons(v_18, sym_Stream_1))
        {
          g_35 = ATgetArgument(v_18, 0);
        }
      else
        _fail(t);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(g_35, i_35, t);
  c_35 = t;
  t = term_w_18;
  d_35 = t;
  t = c_35;
  if(match_cons(t, sym_Stream_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, c_35);
  t = i_6(d_35, e_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,a_69 = NULL,b_69 = NULL,w_20 = NULL,v_20 = NULL;
  r_67 = t;
  if(match_cons(t, sym__2))
    {
      y_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_67);
  x_67 = t;
  t = y_67;
  {
    ATerm y_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_67 != NULL) && (q_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_3, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = y_18;
        t = term_c_19;
        q_67 = t;
      }
  }
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, z_67);
  v_20 = t;
  t = SSLsetAnnotations(v_20, x_67);
  t = r_67;
  if(match_cons(t, sym__2))
    {
      t_67 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_67);
  s_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, (ATerm) ATmakeAppl(sym__2, not_null(q_67), u_67));
  w_20 = t;
  t = SSLsetAnnotations(w_20, s_67);
  w_67 = t;
  if(match_cons(t, sym__2))
    {
      a_69 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL,x_20 = NULL;
        t = SSLgetAnnotations(w_67);
        l_33 = t;
        t = a_69;
        t = fetch_1_0(s_3, t);
        o_33 = t;
        t = b_69;
        if(match_cons(t, sym__2))
          {
            s_33 = ATgetArgument(t, 0);
            t_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(t_3, s_33, t_33, t);
        p_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
        x_20 = t;
        t = SSLsetAnnotations(x_20, l_33);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
          ATerm q_34 = NULL,t_34 = NULL,v_34 = NULL,b_35 = NULL,y_20 = NULL;
          t = SSLgetAnnotations(w_67);
          q_34 = t;
          t = b_69;
          if(match_cons(t, sym__2))
            {
              v_34 = ATgetArgument(t, 0);
              b_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_6(u_3, v_34, b_35, t);
          t_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_69, t_34);
          y_20 = t;
          t = SSLsetAnnotations(y_20, q_34);
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
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  i_69 = t;
  t = dtime_0_0(t);
  t = i_69;
  t = l_98(t);
  h_69 = t;
  t = dtime_0_0(t);
  e_69 = t;
  t = h_69;
  if(match_cons(t, sym__2))
    {
      f_69 = ATgetArgument(t, 0);
      g_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_69), (ATerm) ATmakeAppl(sym_Runtime_1, e_69)), g_69);
  return(t);
}
static ATerm w_69 (ATerm q_69, ATerm t)
{
  t = SSL_fclose(q_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL;
  u_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_69 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_69);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = w_69(u_69, t);
          }
      }
    }
  else
    {
      t = w_69(u_69, t);
    }
  return(t);
}
static ATerm m_6 (ATerm j_20, ATerm t)
{
  t = SSL_read_term_from_stream(j_20);
  return(t);
}
static ATerm n_6 (ATerm f_34, ATerm g_34, ATerm t)
{
  t = SSL_strcat(f_34, g_34);
  return(t);
}
static ATerm o_6 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm x_69 = NULL;
  t = SSL_fopen(o_35, p_35);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_69 = NULL;
  t = SSL_stdin_stream();
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_69 = NULL;
  t = SSL_stdout_stream();
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_70 = NULL;
  t = SSL_stderr_stream();
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_70);
  return(t);
}
static ATerm h_71 (ATerm g_70, ATerm t)
{
  ATerm h_70 = NULL;
  t = SSL_explode_term(g_70);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            h_70 = ATgetFirst((ATermList) k_19);
            {
              ATerm l_19 = (ATerm) ATgetNext((ATermList) k_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_71 (ATerm k_70, ATerm l_70, ATerm m_70, ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,s_70 = NULL,h_21 = NULL;
  t = SSLgetAnnotations(m_70);
  p_70 = t;
  t = k_70;
  if(match_cons(t, sym_Path_1))
    {
      s_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_70, l_70);
  h_21 = t;
  t = SSLsetAnnotations(h_21, p_70);
  if(match_cons(t, sym__2))
    {
      n_70 = ATgetArgument(t, 0);
      o_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(n_70, o_70, t);
  return(t);
}
static ATerm j_71 (ATerm u_70, ATerm v_70, ATerm w_70, ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,c_71 = NULL,i_21 = NULL;
  t = SSLgetAnnotations(w_70);
  z_70 = t;
  t = SSL_is_string(u_70);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_71, v_70);
  i_21 = t;
  t = SSLsetAnnotations(i_21, z_70);
  if(match_cons(t, sym__2))
    {
      x_70 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(x_70, y_70, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
  e_71 = t;
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_71(e_71, t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_71(f_71, g_71, e_71, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = j_71(f_71, g_71, e_71, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_71(e_71, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,s_71 = NULL;
  s_71 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_71, term_t_19);
        t = p_6(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        {
          ATerm h_36 = NULL,l_36 = NULL;
          t = term_u_19;
          l_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_19, s_71);
          t = n_6(l_36, s_71, t);
          h_36 = t;
          t = SSL_perror(h_36);
          _fail(t);
        }
      }
  }
  m_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(n_71, t);
  l_71 = t;
  t = m_71;
  t = fclose_0_0(t);
  t = l_71;
  return(t);
}
ATerm fetch_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  static ATerm r_72 (ATerm t)
  {
    ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
    o_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_72 = ATgetFirst((ATermList) t);
        q_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_36 = NULL,a_37 = NULL,n_21 = NULL;
          t = SSLgetAnnotations(o_72);
          q_36 = t;
          t = p_72;
          t = v_81(t);
          a_37 = t;
          t = (ATerm) ATinsert(CheckATermList(q_72), a_37);
          n_21 = t;
          t = SSLsetAnnotations(n_21, q_36);
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            ATerm o_37 = NULL,r_37 = NULL,o_21 = NULL;
            t = SSLgetAnnotations(o_72);
            o_37 = t;
            t = q_72;
            t = r_72(t);
            r_37 = t;
            t = (ATerm) ATinsert(CheckATermList(r_37), p_72);
            o_21 = t;
            t = SSLsetAnnotations(o_21, o_37);
          }
        }
    }
    return(t);
  }
  t = r_72(t);
  return(t);
}
static ATerm s_6 (ATerm r_51, ATerm s_51, ATerm t)
{
  t = SSL_table_get(r_51, s_51);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm v_72 = NULL;
  v_72 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_73 = NULL,f_73 = NULL,g_73 = NULL;
        t = term_j_11;
        f_73 = t;
        t = term_z_19;
        g_73 = t;
        t = term_a_20;
        t = s_6(f_73, g_73, t);
        b_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_73, term_b_20);
        t = geq_0_0(t);
        t = v_72;
        t = u_96(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = v_72;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_73 = NULL;
  j_73 = t;
  if(match_string(t, "-k"))
    {
      t = j_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_73;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL;
  k_73 = t;
  t = SSL_string_to_int(k_73);
  l_73 = t;
  t = term_c_20;
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, l_73);
  t = v_6(m_73, l_73, t);
  t = k_73;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_73 = NULL;
  o_73 = t;
  if(match_string(t, "-S"))
    {
      t = o_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_73;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL;
  t = term_z_19;
  p_73 = t;
  t = term_m_15;
  q_73 = t;
  t = term_g_20;
  t = v_6(p_73, q_73, t);
  t = term_l_20;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  t = SSL_string_to_int(r_73);
  s_73 = t;
  t = term_z_19;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, s_73);
  t = v_6(t_73, s_73, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_73);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL;
  t = term_p_20;
  u_73 = t;
  t = term_y_6;
  v_73 = t;
  t = term_q_20;
  t = v_6(u_73, v_73, t);
  t = term_t_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, n_4, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = Option_3_0(o_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm f_45, ATerm g_45, ATerm t)
{
  ATerm w_73 = NULL;
  t = term_j_11;
  w_73 = t;
  t = SSL_table_put(w_73, f_45, g_45);
  t = (ATerm) ATmakeAppl(sym__3, term_j_11, f_45, g_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
      t = term_y_6;
      t = e_0(t);
      b_74 = t;
      t = term_d_21;
      c_74 = t;
      t = term_e_21;
      d_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, b_74);
      t = t_6(c_74, d_74, b_74, t);
      _fail(t);
    }
  else
    {
      ATerm g_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_73 = ATgetFirst((ATermList) t);
          a_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_73;
      t = c_0(t);
      t = term_y_6;
      t = d_0(t);
      g_74 = t;
      t = (ATerm) ATinsert(CheckATermList(a_74), g_74);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm i_74 = NULL;
  i_74 = t;
  if(match_string(t, "-o"))
    {
      t = i_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_74;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL;
  j_74 = t;
  t = term_f_21;
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, j_74);
  t = v_6(k_74, j_74, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_74);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm t_6 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
        t = s_6(a_50, b_50, t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATempty;
      }
  }
  n_74 = t;
  t = (ATerm) ATinsert(CheckATermList(n_74), z_49);
  o_74 = t;
  t = SSL_table_put(a_50, b_50, o_74);
  t = m_74;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
      t = term_y_6;
      t = n_0(t);
      h_75 = t;
      t = term_d_21;
      i_75 = t;
      t = term_e_21;
      j_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, h_75);
      t = t_6(i_75, j_75, h_75, t);
      _fail(t);
    }
  else
    {
      ATerm n_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_75 = ATgetFirst((ATermList) t);
          e_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_75 = ATgetFirst((ATermList) t);
          g_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_75;
      t = k_0(t);
      t = f_75;
      t = l_0(t);
      n_75 = t;
      t = (ATerm) ATinsert(CheckATermList(g_75), n_75);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_75 = NULL;
  p_75 = t;
  if(match_string(t, "-i"))
    {
      t = p_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_75;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL;
  q_75 = t;
  t = term_p_21;
  r_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, q_75);
  t = v_6(r_75, q_75, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_75);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_6;
  t = whoami_0_0(t);
  s_75 = t;
  t = term_a_7;
  u_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_21), s_75);
  v_75 = t;
  t = SSL_printnl(u_75, v_75);
  t = term_e_7;
  t_75 = t;
  t = SSL_exit(t_75);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL;
  t = term_j_11;
  w_75 = t;
  t = term_t_21;
  x_75 = t;
  t = term_u_21;
  t = s_6(w_75, x_75, t);
  return(t);
}
static ATerm q_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_38, j_38);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = SSL_addr(i_38, j_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL;
  z_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_75;
      t = c_88(t);
    }
  else
    {
      ATerm e_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_76 = ATgetFirst((ATermList) t);
          b_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_76;
      t = foldr_2_0(c_88, d_88, t);
      e_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_76, e_76);
      t = d_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm u_42 = NULL,h_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_42 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(u_42, h_44, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_76 = NULL,q_42 = NULL,r_42 = NULL;
  t = times_0_0(t);
  r_42 = t;
  t = SSL_explode_term(r_42);
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_42;
  t = foldr_2_0(x_4, z_4, t);
  h_76 = t;
  t = SSL_TicksToSeconds(h_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  if(match_cons(t, sym__2))
    {
      t_76 = ATgetArgument(t, 0);
      u_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76;
        if((t_76 != t))
          {
            _fail(t);
          }
        t = s_76;
        LocalPopChoice(c_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATmakeAppl(sym__2, t_76, u_76);
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_76, u_76);
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              t = SSL_gtr(t_76, u_76);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_76, u_76);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm y_76 = NULL;
  y_76 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
        t = term_j_11;
        b_77 = t;
        t = term_z_19;
        c_77 = t;
        t = term_a_20;
        t = s_6(b_77, c_77, t);
        a_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_77, term_e_7);
        t = geq_0_0(t);
        t = y_76;
        t = t_96(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = y_76;
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,h_77 = NULL,i_77 = NULL;
  t = run_time_0_0(t);
  e_77 = t;
  t = term_y_6;
  t = whoami_0_0(t);
  f_77 = t;
  t = term_a_7;
  h_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_22), e_77), term_i_22), f_77);
  i_77 = t;
  t = SSL_printnl(h_77, i_77);
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_22), e_77), term_i_22), f_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_15;
  j_77 = t;
  t = SSL_exit(j_77);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  u_77 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_77;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_77 = ATgetArgument(t, 0);
          {
            ATerm i_45 = NULL,r_21 = NULL;
            t = SSLgetAnnotations(u_77);
            i_45 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_77);
            r_21 = t;
            t = SSLsetAnnotations(r_21, i_45);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_77;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_77 = NULL,n_77 = NULL;
      t = term_j_11;
      m_77 = t;
      t = term_n_22;
      n_77 = t;
      t = term_o_22;
      t = s_6(m_77, n_77, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      t = fetch_1_0(b_5, t);
    }
  t = j_99(t);
  return(t);
}
ATerm map_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  static ATerm k_78 (ATerm t)
  {
    ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
    h_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_78;
      }
    else
      {
        ATerm q_45 = NULL,t_46 = NULL,u_46 = NULL,x_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_78 = ATgetFirst((ATermList) t);
            j_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_78);
        q_45 = t;
        t = i_78;
        t = l_81(t);
        t_46 = t;
        t = j_78;
        t = k_78(t);
        u_46 = t;
        t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
        x_21 = t;
        t = SSLsetAnnotations(x_21, q_45);
      }
    return(t);
  }
  t = k_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_78 = ATgetFirst((ATermList) t);
      o_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_78 = NULL,t_78 = NULL;
        static ATerm c_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_78)), not_null(t_78));
          return(t);
        }
        t = o_78;
        t = i_0(t);
        if(((s_78 != NULL) && (s_78 != t)))
          _fail(t);
        else
          s_78 = t;
        t = n_78;
        t = g_0(t);
        if(((t_78 != NULL) && (t_78 != t)))
          _fail(t);
        else
          t_78 = t;
        t = o_78;
        t = reverse_acc_2_0(g_0, c_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,z_21 = NULL;
  b_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_79);
  z_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_79);
  z_21 = t;
  t = SSLsetAnnotations(z_21, z_78);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_79 = NULL;
  d_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_79), term_p_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL;
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_78 = NULL,y_78 = NULL;
      t = term_j_11;
      x_78 = t;
      t = term_t_21;
      y_78 = t;
      t = term_u_21;
      t = s_6(x_78, y_78, t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      t = fetch_1_0(d_5, t);
    }
  t = term_s_22;
  t = echo_0_0(t);
  t = term_d_21;
  v_78 = t;
  t = term_e_21;
  w_78 = t;
  t = term_t_22;
  t = s_6(v_78, w_78, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  f_79 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_22 = ATgetFirst((ATermList) t);
                ATerm x_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_79;
          }
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATinsert(ATempty, f_79);
      }
  }
  g_79 = t;
  t = term_c_19;
  h_79 = t;
  t = SSL_printnl(h_79, g_79);
  t = f_79;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL;
  t = term_j_11;
  l_79 = t;
  t = term_t_21;
  m_79 = t;
  t = term_u_21;
  t = s_6(l_79, m_79, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL;
  t = term_y_22;
  n_79 = t;
  t = term_y_6;
  o_79 = t;
  t = term_z_22;
  t = v_6(n_79, o_79, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_a_23;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  t = term_y_22;
  r_79 = t;
  t = term_y_6;
  s_79 = t;
  t = term_z_22;
  t = v_6(r_79, s_79, t);
  t = term_b_23;
  p_79 = t;
  t = term_y_6;
  q_79 = t;
  t = term_c_23;
  t = v_6(p_79, q_79, t);
  t = term_d_23;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, h_5, j_5, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = Option_3_0(k_5, l_5, m_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,b_22 = NULL;
  y_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_79 = ATgetFirst((ATermList) t);
      v_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_79);
  t_79 = t;
  t = u_79;
  t = f_60(t);
  w_79 = t;
  t = v_79;
  t = g_60(t);
  x_79 = t;
  t = (ATerm) ATinsert(CheckATermList(x_79), w_79);
  b_22 = t;
  t = SSLsetAnnotations(b_22, t_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,i_80 = NULL,j_80 = NULL,f_22 = NULL;
  d_80 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_23;
        t = m_101(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
      }
  }
  t = d_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_80 = ATgetFirst((ATermList) t);
      g_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_80);
  e_80 = t;
  t = term_t_21;
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, f_80);
  t = v_6(j_80, f_80, t);
  t = g_80;
  {
    static ATerm t_80 (ATerm t)
    {
      ATerm k_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_80 = NULL;
              m_80 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_80;
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = m_101(t);
              t = Cons_2_0(_id, t_80, t);
            }
          LocalPopChoice(o_23);
        }
      else
        {
          t = k_23;
          {
            ATerm p_80 = NULL,q_80 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_80 = ATgetFirst((ATermList) t);
                q_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_80), (ATerm) ATmakeAppl(sym_Undefined_1, p_80));
          }
        }
      return(t);
    }
    t = t_80(t);
  }
  i_80 = t;
  t = (ATerm) ATinsert(CheckATermList(i_80), (ATerm) ATmakeAppl(sym_Program_1, f_80));
  f_22 = t;
  t = SSLsetAnnotations(f_22, e_80);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  if(match_string(t, "--help"))
    {
      t = g_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_81;
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_81 = NULL,k_81 = NULL;
  t = term_n_22;
  i_81 = t;
  t = term_y_6;
  k_81 = t;
  t = term_s_23;
  t = v_6(i_81, k_81, t);
  t = term_t_23;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  a_81 = t;
  t = term_d_21;
  d_81 = t;
  t = term_e_21;
  e_81 = t;
  t = (ATerm) ATempty;
  f_81 = t;
  t = SSL_table_put(d_81, e_81, f_81);
  t = a_81;
  {
    static ATerm n_5 (ATerm t)
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_101(t);
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, q_5, r_5, t);
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
  }
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_81 = NULL;
        z_81 = t;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_49 = NULL;
              t = z_81;
              {
                ATerm f_24 = t;
                int g_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_49 = NULL,j_49 = NULL;
                    t = term_j_11;
                    i_49 = t;
                    t = term_n_22;
                    j_49 = t;
                    t = term_o_22;
                    t = s_6(i_49, j_49, t);
                    LocalPopChoice(g_24);
                  }
                else
                  {
                    t = f_24;
                    t = fetch_1_0(t_5, t);
                  }
              }
              t = z_81;
              t = default_system_usage_0_0(t);
              t = term_m_15;
              a_49 = t;
              t = SSL_exit(a_49);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              {
                ATerm t_49 = NULL,u_49 = NULL,x_49 = NULL;
                t = term_j_11;
                u_49 = t;
                t = term_y_22;
                x_49 = t;
                t = term_h_24;
                t = s_6(u_49, x_49, t);
                t = z_81;
                t = default_system_about_0_0(t);
                t = term_m_15;
                t_49 = t;
                t = SSL_exit(t_49);
              }
            }
        }
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_82 = NULL,b_82 = NULL,e_82 = NULL;
              static ATerm v_5 (ATerm t)
              {
                ATerm f_82 = NULL,i_82 = NULL,j_82 = NULL,l_22 = NULL;
                j_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_82);
                f_82 = t;
                t = i_82;
                if(((y_80 != NULL) && (y_80 != t)))
                  _fail(t);
                else
                  y_80 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_82);
                l_22 = t;
                t = SSLsetAnnotations(l_22, f_82);
                return(t);
              }
              t = fetch_1_0(v_5, t);
              t = term_a_7;
              b_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_80)), term_k_24);
              e_82 = t;
              t = SSL_printnl(b_82, e_82);
              t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_80)), term_k_24));
              t = default_system_usage_0_0(t);
              t = term_e_7;
              a_82 = t;
              t = SSL_exit(a_82);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
            }
        }
      }
  }
  z_80 = t;
  t = term_d_21;
  b_81 = t;
  t = SSL_table_destroy(b_81);
  t = z_80;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  t = parse_options_1_0(l_99, t);
  q_82 = t;
  t = term_l_24;
  t_82 = t;
  t = SSL_table_create(t_82);
  t = term_l_24;
  r_82 = t;
  t = term_m_24;
  s_82 = t;
  t = SSL_table_put(r_82, s_82, q_82);
  t = q_82;
  t = n_99(t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_99, t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm q_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_99(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_24);
            }
          else
            {
              t = q_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = if_verbose2_1_0(u_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm u_82 = NULL,x_82 = NULL;
  t = term_f_7;
  u_82 = t;
  t = term_y_6;
  x_82 = t;
  t = term_g_7;
  t = v_6(u_82, x_82, t);
  t = term_h_7;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_j_7;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  y_82 = t;
  t = term_j_11;
  c_83 = t;
  t = term_t_21;
  d_83 = t;
  t = term_u_21;
  t = s_6(c_83, d_83, t);
  z_82 = t;
  t = term_a_7;
  a_83 = t;
  t = (ATerm) ATinsert(ATempty, z_82);
  b_83 = t;
  t = SSL_printnl(a_83, b_83);
  t = y_82;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_98(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm v_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_24);
            }
          else
            {
              t = v_24;
              {
                ATerm z_24 = t;
                int a_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(a_25);
                  }
                else
                  {
                    t = z_24;
                    {
                      ATerm b_25 = t;
                      int c_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_6, b_6, r_6, t);
                          LocalPopChoice(c_25);
                        }
                      else
                        {
                          t = b_25;
                          {
                            ATerm d_25 = t;
                            int g_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(g_25);
                              }
                            else
                              {
                                t = d_25;
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
  static ATerm z_5 (ATerm t)
  {
    ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
    f_83 = t;
    {
      ATerm h_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_83 != NULL) && (e_83 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_83 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_6, t);
          LocalPopChoice(i_25);
        }
      else
        {
          t = h_25;
          t = term_l_25;
          e_83 = t;
        }
    }
    t = not_null(e_83);
    t = ReadFromFile_0_0(t);
    g_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_83, g_83);
    t = apply_strategy_1_0(u_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_5, w_98, y_5, z_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

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
ATerm term_u_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_v_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_h_16;
ATerm term_v_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_h_11;
ATerm term_g_11;
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
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
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
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_t_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_i_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_i_6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_t_7);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_q_7);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_f_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_v_15);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_15);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_i_6);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_w_21);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_r_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_k_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_i_6);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_i_6);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_i_6);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_g_23);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm foldr_3_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm collect_om_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t);
static ATerm p_43 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm h_76 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm o_6 (ATerm q_18, ATerm t);
ATerm listtd_1_0 (ATerm c_84 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm k_74 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm n_83 (ATerm), ATerm t);
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
static ATerm p_6 (ATerm r_20, ATerm s_20, ATerm t);
ATerm filter_1_0 (ATerm n_90 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm f_74 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm j_57 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm q_6 (ATerm o_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_83 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm r_6 (ATerm k_15, ATerm t);
static ATerm s_6 (ATerm o_38, ATerm p_38, ATerm t);
ATerm while_not_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm v_67 (ATerm f_66, ATerm g_66, ATerm h_66, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm g_76 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm u_6 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm v_6 (ATerm h_20, ATerm i_20, ATerm t);
static ATerm x_6 (ATerm j_82 (ATerm), ATerm b_211, ATerm n_20, ATerm t);
static ATerm w_6 (ATerm d_20, ATerm e_20, ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_99 (ATerm), ATerm t);
static ATerm o_71 (ATerm i_71, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm j_20, ATerm t);
static ATerm z_6 (ATerm f_34, ATerm g_34, ATerm t);
static ATerm a_7 (ATerm o_35, ATerm p_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_72 (ATerm y_71, ATerm t);
static ATerm a_73 (ATerm c_72, ATerm d_72, ATerm e_72, ATerm t);
static ATerm b_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm b_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm g_7 (ATerm t_51, ATerm u_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm t);
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
static ATerm j_7 (ATerm f_45, ATerm g_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_7 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_7 (ATerm i_38, ATerm j_38, ATerm t);
ATerm foldr_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm q_100 (ATerm), ATerm t);
static ATerm k_7 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t);
static ATerm l_7 (ATerm k_53, ATerm l_53, ATerm t);
ATerm lookup_table_0_1 (ATerm m_51, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_53, ATerm q_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_7 (ATerm m_53, ATerm n_53, ATerm t);
static ATerm f_7 (ATerm r_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_82 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_102 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm parse_options_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm iowrap_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t);
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
  t = term_i_6;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_k_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), j_0), term_l_6);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_t_6;
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
  t = term_d_7;
  q_0 = t;
  t = term_i_6;
  s_0 = t;
  t = term_i_7;
  t = j_7(q_0, s_0, t);
  t = term_m_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_n_7;
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
  t = term_q_7;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, t_0);
  t = j_7(u_0, t_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_s_7;
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
  t = term_t_7;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, z_0);
  t = j_7(c_1, z_0, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_0, x_0, y_0, t);
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
                        t = verbose_option_0_0(t);
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
                              t = keep_option_0_0(t);
                              LocalPopChoice(g_8);
                            }
                          else
                            {
                              t = f_8;
                              {
                                ATerm h_8 = t;
                                int j_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_1, d_1, f_1, t);
                                    LocalPopChoice(j_8);
                                  }
                                else
                                  {
                                    t = h_8;
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
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = p_1;
            t = at_end_1_0(j_1, t);
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
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
ATerm foldr_3_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  x_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
      t = l_89(t);
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
      t = n_89(t);
      c_2 = t;
      t = z_1;
      t = foldr_3_0(l_89, m_89, n_89, t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, d_2);
      t = m_89(t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL;
      t = i_88(t);
      g_2 = t;
      t = (ATerm) ATinsert(ATempty, g_2);
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm n_1 (ATerm t)
        {
          t = collect_om_2_0(i_88, j_88, t);
          return(t);
        }
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            a_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_0;
        t = foldr_3_0(k_1, j_88, n_1, t);
      }
    }
  return(t);
}
static ATerm p_43 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t)
{
  ATerm v_3 = NULL;
  t = SSL_is_int(n_2);
  t = SSL_int_to_string(n_2);
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_8), o_2), term_s_8), v_3), term_r_8);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), e_4), term_w_8);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_8), e_4), term_z_8), d_4), term_y_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          b_4 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), e_4), term_z_8), b_4), term_a_9);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              b_4 = ATgetArgument(t, 0);
              e_4 = ATgetArgument(t, 1);
              y_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), y_3), term_z_8), e_4), term_s_8), b_4), term_c_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  b_4 = ATgetArgument(t, 0);
                  e_4 = ATgetArgument(t, 1);
                  y_3 = ATgetArgument(t, 2);
                  a_4 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), a_4), term_z_8), y_3), term_s_8), e_4), term_s_8), b_4), term_e_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      b_4 = ATgetArgument(t, 0);
                      e_4 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_9), e_4), term_z_8), b_4), term_g_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          b_4 = ATgetArgument(t, 0);
                          e_4 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), e_4), term_j_9), b_4), term_i_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              b_4 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), b_4), term_l_9);
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
                                      ATerm n_9 = t;
                                      int o_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_43(b_4, e_4, f_4, t);
                                          LocalPopChoice(o_9);
                                        }
                                      else
                                        {
                                          t = n_9;
                                          {
                                            ATerm p_9 = t;
                                            int q_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_9), e_4), term_r_9);
                                                LocalPopChoice(q_9);
                                              }
                                            else
                                              {
                                                t = p_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_9), e_4), term_z_8), b_4), term_t_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm u_9 = t;
                                      int v_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_43(b_4, e_4, f_4, t);
                                          LocalPopChoice(v_9);
                                        }
                                      else
                                        {
                                          t = u_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_9), e_4), term_z_8), b_4), term_t_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      b_4 = ATgetArgument(t, 0);
                                      e_4 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_4), term_x_9), b_4), term_w_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          b_4 = ATgetArgument(t, 0);
                                          e_4 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_s_8), b_4), term_y_9);
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
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_z_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_a_10);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_b_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_d_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_e_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_f_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_g_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_h_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_i_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_j_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_k_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_l_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_m_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_n_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_o_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_p_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_q_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_r_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_s_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_t_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_u_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_v_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_w_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_x_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  d_4 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), e_4), term_s_8), d_4), term_y_10);
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
                                                  t = term_z_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_a_11;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_b_11;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_c_11;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_d_11;
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
ATerm bottomup_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(h_76, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = h_76(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
      t = term_g_11;
      r_43 = t;
      t = term_t_7;
      s_43 = t;
      t = term_h_11;
      t = g_7(r_43, s_43, t);
      q_43 = t;
      t = (ATerm) ATinsert(ATempty, q_43);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_45 = ATgetFirst((ATermList) t);
          d_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 = NULL,e_1 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(b_45);
            a_1 = t;
            t = c_45;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_45;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), c_45);
            h_0 = t;
            t = SSLsetAnnotations(h_0, a_1);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm l_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 = NULL,w_1 = NULL,h_2 = NULL,k_2 = NULL,r_0 = NULL;
                  t = SSLgetAnnotations(b_45);
                  h_2 = t;
                  t = c_45;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = c_45;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm t_11 = ATgetFirst((ATermList) t);
                          ATerm u_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = c_45;
                    }
                  t = (ATerm) ATinsert(CheckATermList(d_45), c_45);
                  r_0 = t;
                  t = SSLsetAnnotations(r_0, h_2);
                  k_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm v_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = k_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm w_11 = ATgetFirst((ATermList) t);
                      q_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_1, q_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = l_11;
                  {
                    ATerm j_3 = NULL,m_3 = NULL,v_0 = NULL;
                    t = SSLgetAnnotations(b_45);
                    j_3 = t;
                    t = d_45;
                    t = flat_list_0_0(t);
                    m_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(m_3), c_45);
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
  ATerm l_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_12) != AT_INT) || (ATgetInt((ATermInt) b_12) != 34)))
        _fail(t);
      l_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_45), term_c_12), term_c_12);
  return(t);
}
static ATerm o_6 (ATerm q_18, ATerm t)
{
  ATerm k_45 = NULL;
  t = q_18;
  t = at_suffix_1_0(t_1, t);
  k_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_45), term_d_12), term_d_12);
  return(t);
}
ATerm listtd_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  static ATerm z_45 (ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
    t = c_84(t);
    w_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_45;
      }
    else
      {
        ATerm x_3 = NULL,g_4 = NULL,y_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_45 = ATgetFirst((ATermList) t);
            y_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_45);
        x_3 = t;
        t = y_45;
        t = z_45(t);
        g_4 = t;
        t = (ATerm) ATinsert(CheckATermList(g_4), x_45);
        y_4 = t;
        t = SSLsetAnnotations(y_4, x_3);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm h_6 = NULL,j_6 = NULL,m_6 = NULL;
  m_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_6 = ATgetFirst((ATermList) t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
      t = h_6;
      if(match_int(t, 34))
        {
          ATerm e_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_6;
              t = o_6(j_6, t);
              LocalPopChoice(k_12);
            }
          else
            {
              t = e_12;
              t = m_6;
            }
        }
      else
        {
          t = m_6;
        }
    }
  else
    {
      t = m_6;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  if(match_int(t, 32))
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL;
          t = term_o_12;
          x_11 = t;
          t = SSL_explode_string(x_11);
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
          t = u_8;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm p_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_11 = NULL;
              t = term_t_12;
              y_11 = t;
              t = SSL_explode_string(y_11);
              LocalPopChoice(r_12);
            }
          else
            {
              t = p_12;
              t = u_8;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_11 = NULL;
                  t = term_z_12;
                  z_11 = t;
                  t = SSL_explode_string(z_11);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  t = u_8;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm a_13 = t;
                  int b_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_12 = NULL;
                      t = term_c_13;
                      a_12 = t;
                      t = SSL_explode_string(a_12);
                      LocalPopChoice(b_13);
                    }
                  else
                    {
                      t = a_13;
                      t = u_8;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm d_13 = t;
                      int g_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_12 = NULL;
                          t = term_h_13;
                          f_12 = t;
                          t = SSL_explode_string(f_12);
                          LocalPopChoice(g_13);
                        }
                      else
                        {
                          t = d_13;
                          t = u_8;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm i_13 = t;
                          int j_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_12 = NULL;
                              t = term_k_13;
                              g_12 = t;
                              t = SSL_explode_string(g_12);
                              LocalPopChoice(j_13);
                            }
                          else
                            {
                              t = i_13;
                              t = u_8;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm l_13 = t;
                              int n_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_12 = NULL;
                                  t = term_o_13;
                                  h_12 = t;
                                  t = SSL_explode_string(h_12);
                                  LocalPopChoice(n_13);
                                }
                              else
                                {
                                  t = l_13;
                                  t = u_8;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm p_13 = t;
                                  int q_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_12 = NULL;
                                      t = term_r_13;
                                      i_12 = t;
                                      t = SSL_explode_string(i_12);
                                      LocalPopChoice(q_13);
                                    }
                                  else
                                    {
                                      t = p_13;
                                      t = u_8;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm s_13 = t;
                                      int t_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_12 = NULL;
                                          t = term_u_13;
                                          j_12 = t;
                                          t = SSL_explode_string(j_12);
                                          LocalPopChoice(t_13);
                                        }
                                      else
                                        {
                                          t = s_13;
                                          t = u_8;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm v_13 = t;
                                          int w_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm n_12 = NULL;
                                              t = term_y_13;
                                              n_12 = t;
                                              t = SSL_explode_string(n_12);
                                              LocalPopChoice(w_13);
                                            }
                                          else
                                            {
                                              t = v_13;
                                              t = u_8;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm z_13 = t;
                                              int b_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_12 = NULL;
                                                  t = term_c_14;
                                                  q_12 = t;
                                                  t = SSL_explode_string(q_12);
                                                  LocalPopChoice(b_14);
                                                }
                                              else
                                                {
                                                  t = z_13;
                                                  t = u_8;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm d_14 = t;
                                                  int e_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_12 = NULL;
                                                      t = term_f_14;
                                                      s_12 = t;
                                                      t = SSL_explode_string(s_12);
                                                      LocalPopChoice(e_14);
                                                    }
                                                  else
                                                    {
                                                      t = d_14;
                                                      t = u_8;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm g_14 = t;
                                                      int h_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_12 = NULL;
                                                          t = term_i_14;
                                                          u_12 = t;
                                                          t = SSL_explode_string(u_12);
                                                          LocalPopChoice(h_14);
                                                        }
                                                      else
                                                        {
                                                          t = g_14;
                                                          t = u_8;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm j_14 = t;
                                                          int k_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_12 = NULL;
                                                              t = term_l_14;
                                                              v_12 = t;
                                                              t = SSL_explode_string(v_12);
                                                              LocalPopChoice(k_14);
                                                            }
                                                          else
                                                            {
                                                              t = j_14;
                                                              t = u_8;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm m_14 = t;
                                                              int n_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_12 = NULL;
                                                                  t = term_o_14;
                                                                  y_12 = t;
                                                                  t = SSL_explode_string(y_12);
                                                                  LocalPopChoice(n_14);
                                                                }
                                                              else
                                                                {
                                                                  t = m_14;
                                                                  t = u_8;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = u_8;
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
  ATerm q_48 = NULL;
  q_48 = t;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL;
        t = term_t_14;
        s_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_14, q_48);
        t = g_7(s_48, q_48, t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm e_6 = NULL;
          t = SSL_explode_string(q_48);
          t = listtd_1_0(u_1, t);
          t = map_1_0(a_2, t);
          t = flat_list_0_0(t);
          e_6 = t;
          t = SSL_implode_string(e_6);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  static ATerm j_50 (ATerm t)
  {
    ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
    g_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_50 = ATgetFirst((ATermList) t);
        f_50 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_13 = NULL,f_13 = NULL,m_13 = NULL,a_5 = NULL;
              t = SSLgetAnnotations(g_50);
              f_13 = t;
              t = e_50;
              t = k_74(t);
              m_13 = t;
              t = (ATerm) ATinsert(CheckATermList(f_50), m_13);
              a_5 = t;
              t = SSLsetAnnotations(a_5, f_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_14 = ATgetFirst((ATermList) t);
                  e_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_13;
              t = j_50(t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = g_50;
            }
        }
      }
    else
      {
        t = g_50;
      }
    return(t);
  }
  t = j_50(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  static ATerm y_50 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_83(t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,x_13 = NULL,a_14 = NULL,i_5 = NULL;
          v_50 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_50 = ATgetFirst((ATermList) t);
              x_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_50);
          x_13 = t;
          t = x_50;
          t = y_50(t);
          a_14 = t;
          t = (ATerm) ATinsert(CheckATermList(a_14), w_50);
          i_5 = t;
          t = SSLsetAnnotations(i_5, x_13);
        }
      }
    return(t);
  }
  t = y_50(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  if(match_int(t, 9))
    {
      t = e_51;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = e_51;
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
  ATerm c_51 = NULL,d_51 = NULL;
  t = remove_trailing_1_0(b_2, t);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_2 (ATerm t)
        {
          ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,p_5 = NULL;
          j_51 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_51 = ATgetFirst((ATermList) t);
              h_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_51);
          f_51 = t;
          t = g_51;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = h_51;
          {
            static ATerm i_2 (ATerm t)
            {
              if(((c_51 != NULL) && (c_51 != t)))
                _fail(t);
              else
                c_51 = t;
              return(t);
            }
            t = Cons_2_0(f_2, i_2, t);
          }
          i_51 = t;
          t = (ATerm) ATinsert(CheckATermList(i_51), g_51);
          p_5 = t;
          t = SSLsetAnnotations(p_5, f_51);
          t = not_null(c_51);
          return(t);
        }
        t = at_suffix_1_0(e_2, t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
      }
  }
  d_51 = t;
  t = SSL_implode_string(d_51);
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
  ATerm v_52 = NULL;
  v_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_15), v_52);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  y_51 = t;
  t = SSL_explode_string(y_51);
  t = reverse_acc_2_0(_id, j_2, t);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_51, (ATerm) ATempty);
  {
    static ATerm w_52 (ATerm t)
    {
      ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
      if(match_cons(t, sym__2))
        {
          b_52 = ATgetArgument(t, 0);
          e_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_52;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm i_52 = NULL;
          t = e_52;
          t = LatexComment_0_0(t);
          i_52 = t;
          t = (ATerm) ATinsert(ATempty, i_52);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_52 = ATgetFirst((ATermList) t);
              d_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_52;
          if(match_int(t, 10))
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_52 = NULL,n_52 = NULL;
                  t = e_52;
                  t = LatexComment_0_0(t);
                  m_52 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_52, (ATerm) ATempty);
                  t = w_52(t);
                  n_52 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_52), m_52);
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  t = (ATerm) ATmakeAppl(sym__2, d_52, (ATerm) ATinsert(CheckATermList(e_52), c_52));
                  t = w_52(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, d_52, (ATerm) ATinsert(CheckATermList(e_52), c_52));
              t = w_52(t);
            }
        }
      return(t);
    }
    t = w_52(t);
  }
  t = remove_trailing_1_0(l_2, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = remove_trailing_1_0(q_2, t);
  t = map_1_0(r_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  t = filter_1_0(s_2, t);
  s_14 = t;
  t = term_f_15;
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, s_14);
  t = p_6(r_14, s_14, t);
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
  ATerm x_52 = NULL;
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = term_t_6;
    }
  x_52 = t;
  t = SSL_int_to_string(x_52);
  return(t);
}
static ATerm p_6 (ATerm r_20, ATerm s_20, ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL;
  t = s_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_20;
    }
  else
    {
      ATerm g_15 = NULL,n_15 = NULL,v_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_53 = ATgetFirst((ATermList) t);
          y_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_20);
      g_15 = t;
      t = y_53;
      {
        static ATerm s_15 (ATerm t)
        {
          ATerm j_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL;
              p_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_15;
              LocalPopChoice(l_15);
            }
          else
            {
              t = j_15;
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
      t = (ATerm) ATinsert(CheckATermList(n_15), x_53);
      v_5 = t;
      t = SSLsetAnnotations(v_5, g_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_54;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_54 = ATgetFirst((ATermList) t);
          q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(o_54);
            z_15 = t;
            t = p_54;
            t = n_90(t);
            c_16 = t;
            t = q_54;
            t = filter_1_0(n_90, t);
            d_16 = t;
            t = (ATerm) ATinsert(CheckATermList(d_16), c_16);
            x_5 = t;
            t = SSLsetAnnotations(x_5, z_15);
            LocalPopChoice(r_15);
          }
        else
          {
            t = m_15;
            t = q_54;
            t = filter_1_0(n_90, t);
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
  ATerm t_54 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = term_v_15;
    }
  t_54 = t;
  t = SSL_int_to_string(t_54);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm u_54 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,z_5 = NULL;
    z_54 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        w_54 = ATgetArgument(t, 0);
        x_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_54);
    v_54 = t;
    t = w_54;
    t = f_74(t);
    y_54 = t;
    t = x_54;
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, y_54, x_54);
    z_5 = t;
    t = SSLsetAnnotations(z_5, v_54);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(u_54));
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
  ATerm a_55 = NULL;
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      t = term_v_15;
    }
  a_55 = t;
  t = SSL_int_to_string(a_55);
  return(t);
}
static ATerm j_57 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm n_55 = NULL,o_7 = NULL;
  t = SSLgetAnnotations(j_55);
  n_55 = t;
  t = i_55;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_55), h_55);
  o_7 = t;
  t = SSLsetAnnotations(o_7, n_55);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,v_7 = NULL;
  v_56 = t;
  if(match_cons(t, sym_C_2))
    {
      t_56 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_56);
  s_56 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, t_56, u_56);
  v_7 = t;
  t = SSLsetAnnotations(v_7, s_56);
  return(t);
}
static ATerm q_6 (ATerm o_15, ATerm t)
{
  static ATerm i_57 (ATerm t)
  {
    static ATerm k_57 (ATerm r_55, ATerm s_55, ATerm t_55, ATerm t)
    {
      ATerm x_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,r_7 = NULL,p_7 = NULL;
      t = SSLgetAnnotations(t_55);
      x_55 = t;
      t = r_55;
      if(match_cons(t, sym_C_2))
        {
          c_56 = ATgetArgument(t, 0);
          d_56 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_55);
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, c_56, d_56);
      p_7 = t;
      t = SSLsetAnnotations(p_7, b_56);
      e_56 = t;
      t = s_55;
      t = Cons_2_0(_id, i_57, t);
      a_56 = t;
      t = (ATerm) ATinsert(CheckATermList(a_56), e_56);
      r_7 = t;
      t = SSLsetAnnotations(r_7, x_55);
      return(t);
    }
    static ATerm l_57 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm t)
    {
      ATerm n_56 = NULL,q_56 = NULL,y_7 = NULL;
      t = SSLgetAnnotations(j_56);
      n_56 = t;
      t = i_56;
      t = Cons_2_0(x_2, i_57, t);
      q_56 = t;
      t = (ATerm) ATinsert(CheckATermList(q_56), h_56);
      y_7 = t;
      t = SSLsetAnnotations(y_7, n_56);
      return(t);
    }
    ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
    w_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_56;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_56 = ATgetFirst((ATermList) t);
            y_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_56 = ATgetFirst((ATermList) t);
            a_57 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_57(x_56, y_56, w_56, t);
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = y_15;
                  {
                    ATerm b_16 = t;
                    int e_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_57(x_56, y_56, w_56, t);
                        LocalPopChoice(e_16);
                      }
                    else
                      {
                        t = b_16;
                        {
                          ATerm f_16 = t;
                          int g_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = l_57(x_56, y_56, w_56, t);
                              LocalPopChoice(g_16);
                            }
                          else
                            {
                              t = f_16;
                              {
                                ATerm h_57 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(a_57), z_56);
                                t = i_57(t);
                                h_57 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(h_57), term_h_16), x_56);
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
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_57(x_56, y_56, w_56, t);
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
                      t = k_57(x_56, y_56, w_56, t);
                      LocalPopChoice(l_16);
                    }
                  else
                    {
                      t = k_16;
                      t = l_57(x_56, y_56, w_56, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = o_15;
  t = i_57(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_LBL_2))
    {
      x_57 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        t = y_57;
        if(match_cons(t, sym_R_2))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            q_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_6(q_16, t);
        t = y_57;
        if(match_cons(t, sym_R_2))
          {
            ATerm n_16 = ATgetArgument(t, 0);
            p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_6(p_16, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, x_57, o_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm r_16 = ATgetArgument(t, 0);
          y_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_57;
      t = q_6(y_57, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  static ATerm y_58 (ATerm t)
  {
    ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
    v_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_58 = ATgetFirst((ATermList) t);
        x_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = NULL,i_8 = NULL;
          t = SSLgetAnnotations(v_58);
          x_16 = t;
          t = x_58;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_58), w_58);
          i_8 = t;
          t = SSLsetAnnotations(i_8, x_16);
          t = u_83(t);
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
          {
            ATerm h_17 = NULL,k_17 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(v_58);
            h_17 = t;
            t = x_58;
            t = y_58(t);
            k_17 = t;
            t = (ATerm) ATinsert(CheckATermList(k_17), w_58);
            l_8 = t;
            t = SSLsetAnnotations(l_8, h_17);
          }
        }
    }
    return(t);
  }
  t = y_58(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  static ATerm o_59 (ATerm t)
  {
    ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
    n_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_59 = ATgetFirst((ATermList) t);
        m_59 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_17 = NULL,x_17 = NULL,t_8 = NULL;
          t = SSLgetAnnotations(n_59);
          t_17 = t;
          t = m_59;
          t = o_59(t);
          x_17 = t;
          t = (ATerm) ATinsert(CheckATermList(x_17), l_59);
          t_8 = t;
          t = SSLsetAnnotations(t_8, t_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_59;
        t = j_83(t);
      }
    return(t);
  }
  t = o_59(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
  r_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_59;
    }
  else
    {
      static ATerm y_2 (ATerm t)
      {
        t = not_null(t_59);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_59 = ATgetFirst((ATermList) t);
          if(((t_59 != NULL) && (t_59 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_59;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_60 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      r_60 = ATgetArgument(t, 0);
      {
        ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
        t = r_60;
        t = Hspace_0_0(t);
        i_18 = t;
        t = SSL_string_to_int(i_18);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_f_15);
        t = copy_0_0(t);
        g_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_18), term_u_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          r_60 = ATgetArgument(t, 0);
          {
            ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
            t = r_60;
            t = Hspace_0_0(t);
            o_18 = t;
            t = SSL_string_to_int(o_18);
            n_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_18, term_f_15);
            t = copy_0_0(t);
            m_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, m_18), term_v_16);
          }
        }
      else
        {
          ATerm y_18 = NULL,b_19 = NULL,c_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              r_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_60;
          t = Hspace_0_0(t);
          c_19 = t;
          t = SSL_string_to_int(c_19);
          b_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_19, term_f_15);
          t = copy_0_0(t);
          y_18 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_18), term_w_16);
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_16);
  return(t);
}
static ATerm r_6 (ATerm k_15, ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  t = k_15;
  t = map_1_0(z_2, t);
  i_19 = t;
  t = (ATerm) ATinsert(ATempty, term_h_16);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_16), i_19);
  t = p_6(h_19, i_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
static ATerm s_6 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_38, p_38);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = SSL_subtr(o_38, p_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  static ATerm v_60 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_75(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = y_75(t);
        t = v_60(t);
      }
    return(t);
  }
  t = v_60(t);
  return(t);
}
ATerm for_3_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  t = a_76(t);
  t = while_not_2_0(b_76, c_76, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL;
  if(match_cons(t, sym__2))
    {
      y_60 = ATgetArgument(t, 0);
      z_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_60, z_60, (ATerm) ATempty);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm a_61 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(((ATgetType(d_17) != AT_INT) || (ATgetInt((ATermInt) d_17) != 0)))
        _fail(t);
      {
        ATerm e_17 = ATgetArgument(t, 1);
      }
      a_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_61;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  if(match_cons(t, sym__3))
    {
      b_61 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
      d_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_61, term_t_6);
  t = geq_0_0(t);
  t = term_t_6;
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_61, term_t_6);
  t = s_6(b_61, f_61, t);
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_61, c_61, (ATerm) ATinsert(CheckATermList(d_61), c_61));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_3, c_3, d_3, t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_19 = NULL,c_10 = NULL;
        p_61 = t;
        if(match_cons(t, sym__2))
          {
            q_61 = ATgetArgument(t, 0);
            r_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_61);
        s_19 = t;
        t = q_61;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
        c_10 = t;
        t = SSLsetAnnotations(c_10, s_19);
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
  ATerm i_17 = t;
  if((PushChoice() == 0))
    {
      ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,k_11 = NULL;
      e_63 = t;
      if(match_cons(t, sym_R_2))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_63);
      b_63 = t;
      t = d_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, c_63, d_63);
      k_11 = t;
      t = SSLsetAnnotations(k_11, b_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_17;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_61, (ATerm) ATempty);
  {
    static ATerm f_63 (ATerm t)
    {
      ATerm z_61 = NULL,a_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
      if(match_cons(t, sym__2))
        {
          c_62 = ATgetArgument(t, 0);
          f_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm k_62 = NULL;
          t = f_62;
          t = reverse_acc_2_0(_id, e_3, t);
          k_62 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, k_62));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_62 = ATgetFirst((ATermList) t);
              e_62 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_62;
          if(match_cons(t, sym_R_2))
            {
              z_61 = ATgetArgument(t, 0);
              a_62 = ATgetArgument(t, 1);
              {
                ATerm j_17 = t;
                int l_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_62 = NULL,r_62 = NULL;
                    t = f_62;
                    t = reverse_acc_2_0(_id, f_3, t);
                    q_62 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_62, (ATerm) ATempty);
                    t = f_63(t);
                    r_62 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(r_62), (ATerm) ATmakeAppl(sym_R_2, z_61, a_62)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, q_62));
                    LocalPopChoice(l_17);
                  }
                else
                  {
                    t = j_17;
                    t = (ATerm) ATmakeAppl(sym__2, e_62, (ATerm) ATinsert(CheckATermList(f_62), d_62));
                    t = f_63(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, e_62, (ATerm) ATinsert(CheckATermList(f_62), d_62));
              t = f_63(t);
            }
        }
      return(t);
    }
    t = f_63(t);
  }
  t = filter_1_0(g_3, t);
  return(t);
}
static ATerm v_67 (ATerm f_66, ATerm g_66, ATerm h_66, ATerm t)
{
  t = f_66;
  if(match_cons(t, sym_KW_0))
    {
      t = f_66;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = f_66;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = f_66;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = f_66;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, f_66, g_66);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm m_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_17;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_17;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_67 = NULL;
  if(match_cons(t, sym_S_1))
    {
      q_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_67;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  q_66 = t;
  if(match_cons(t, sym_REF_2))
    {
      r_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, r_66, p_66);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          r_66 = ATgetArgument(t, 0);
          p_66 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, r_66, p_66);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              r_66 = ATgetArgument(t, 0);
              p_66 = ATgetArgument(t, 1);
              {
                ATerm p_23 = NULL;
                t = q_66;
                {
                  ATerm o_17 = t;
                  int p_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(r_66);
                      p_23 = t;
                      LocalPopChoice(p_17);
                    }
                  else
                    {
                      t = o_17;
                      {
                        ATerm q_17 = t;
                        int r_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_23 = NULL,r_23 = NULL,u_23 = NULL,y_23 = NULL,a_24 = NULL,m_11 = NULL;
                            t = SSL_explode_string(r_66);
                            a_24 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                u_23 = ATgetFirst((ATermList) t);
                                y_23 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(a_24);
                            r_23 = t;
                            t = u_23;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(y_23), u_23);
                            m_11 = t;
                            t = SSLsetAnnotations(m_11, r_23);
                            t = (ATerm) ATinsert(ATempty, term_s_17);
                            q_23 = t;
                            t = SSL_implode_string(q_23);
                            p_23 = t;
                            LocalPopChoice(r_17);
                          }
                        else
                          {
                            t = q_17;
                            t = r_66;
                            p_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, p_23, p_66);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  r_66 = ATgetArgument(t, 0);
                  p_66 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, r_66, p_66);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      r_66 = ATgetArgument(t, 0);
                      p_66 = ATgetArgument(t, 1);
                      l_66 = ATgetArgument(t, 2);
                      {
                        ATerm r_24 = NULL,u_24 = NULL,y_24 = NULL,z_24 = NULL,d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,z_25 = NULL;
                        t = l_66;
                        t = construct_rows_0_0(t);
                        y_24 = t;
                        t = p_66;
                        t = Vspace_0_0(t);
                        i_25 = t;
                        t = SSL_string_to_int(i_25);
                        r_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_24, term_y_16);
                        t = copy_0_0(t);
                        g_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, g_25, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_y_16));
                        t = conc_0_0(t);
                        z_24 = t;
                        t = r_66;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            h_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_6(h_25, t);
                        u_24 = t;
                        t = y_24;
                        t = map_1_0(MkRows_0_0, t);
                        z_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, z_24, z_25);
                        t = p_6(z_24, z_25, t);
                        d_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, u_24, d_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          r_66 = ATgetArgument(t, 0);
                          p_66 = ATgetArgument(t, 1);
                          {
                            ATerm y_66 = NULL,z_66 = NULL,b_67 = NULL,d_67 = NULL,e_26 = NULL,h_26 = NULL;
                            t = r_66;
                            t = Hspace_0_0(t);
                            y_66 = t;
                            t = r_66;
                            t = Vspace_0_0(t);
                            z_66 = t;
                            t = r_66;
                            t = Ispace_0_0(t);
                            b_67 = t;
                            t = p_66;
                            t = filter_1_0(h_3, t);
                            h_26 = t;
                            t = term_u_17;
                            e_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_u_17, h_26);
                            t = p_6(e_26, h_26, t);
                            d_67 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, y_66, z_66, b_67, d_67);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              r_66 = ATgetArgument(t, 0);
                              p_66 = ATgetArgument(t, 1);
                              {
                                ATerm e_67 = NULL,g_67 = NULL,i_67 = NULL,m_26 = NULL,p_26 = NULL;
                                t = r_66;
                                t = Vspace_0_0(t);
                                e_67 = t;
                                t = r_66;
                                t = Ispace_0_0(t);
                                g_67 = t;
                                t = p_66;
                                t = filter_1_0(i_3, t);
                                p_26 = t;
                                t = term_v_17;
                                m_26 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_v_17, p_26);
                                t = p_6(m_26, p_26, t);
                                i_67 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, e_67, g_67, i_67);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  r_66 = ATgetArgument(t, 0);
                                  p_66 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_67 = NULL,m_67 = NULL;
                                    t = r_66;
                                    t = Hspace_0_0(t);
                                    k_67 = t;
                                    t = p_66;
                                    t = toh_0_0(t);
                                    m_67 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, k_67, m_67);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      r_66 = ATgetArgument(t, 0);
                                      p_66 = ATgetArgument(t, 1);
                                      t = r_66;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          o_66 = ATgetArgument(t, 0);
                                          t = o_66;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              m_66 = ATgetFirst((ATermList) t);
                                              n_66 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm w_17 = t;
                                                int y_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm h_27 = NULL,f_29 = NULL,g_29 = NULL;
                                                    t = m_66;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        f_29 = ATgetArgument(t, 0);
                                                        g_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm z_17 = t;
                                                      int a_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_30 = NULL,n_11 = NULL;
                                                          t = SSLgetAnnotations(m_66);
                                                          o_30 = t;
                                                          t = f_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = g_29;
                                                          h_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, f_29, g_29);
                                                          n_11 = t;
                                                          t = SSLsetAnnotations(n_11, o_30);
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
                                                                ATerm n_31 = NULL,o_11 = NULL;
                                                                t = SSLgetAnnotations(m_66);
                                                                n_31 = t;
                                                                t = f_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = g_29;
                                                                h_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, f_29, g_29);
                                                                o_11 = t;
                                                                t = SSLsetAnnotations(o_11, n_31);
                                                                LocalPopChoice(c_18);
                                                              }
                                                            else
                                                              {
                                                                t = b_18;
                                                                {
                                                                  ATerm d_18 = t;
                                                                  int e_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm g_32 = NULL,p_11 = NULL;
                                                                      t = SSLgetAnnotations(m_66);
                                                                      g_32 = t;
                                                                      t = f_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = g_29;
                                                                      h_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, f_29, g_29);
                                                                      p_11 = t;
                                                                      t = SSLsetAnnotations(p_11, g_32);
                                                                      LocalPopChoice(e_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_18;
                                                                      {
                                                                        ATerm f_18 = t;
                                                                        int j_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm r_32 = NULL,q_11 = NULL;
                                                                            t = SSLgetAnnotations(m_66);
                                                                            r_32 = t;
                                                                            t = f_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = g_29;
                                                                            h_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, f_29, g_29);
                                                                            q_11 = t;
                                                                            t = SSLsetAnnotations(q_11, r_32);
                                                                            LocalPopChoice(j_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_18;
                                                                            {
                                                                              ATerm f_33 = NULL,r_11 = NULL;
                                                                              t = SSLgetAnnotations(m_66);
                                                                              f_33 = t;
                                                                              t = f_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, f_29, g_29);
                                                                              r_11 = t;
                                                                              t = SSLsetAnnotations(r_11, f_33);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, g_29);
                                                                              h_27 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, h_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, n_66), p_66));
                                                    LocalPopChoice(y_17);
                                                  }
                                                else
                                                  {
                                                    t = w_17;
                                                    t = v_67(r_66, p_66, q_66, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = p_66;
                                                }
                                              else
                                                {
                                                  t = v_67(r_66, p_66, q_66, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = v_67(r_66, p_66, q_66, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          r_66 = ATgetArgument(t, 0);
                                          p_66 = ATgetArgument(t, 1);
                                          {
                                            ATerm p_67 = NULL;
                                            t = r_66;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = p_66;
                                            t = map_1_0(k_3, t);
                                            p_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, p_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              r_66 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = r_66;
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
ATerm topdown_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t)
  {
    t = topdown_1_0(g_76, t);
    return(t);
  }
  t = g_76(t);
  t = SRTS_all(l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_68 = ATgetFirst((ATermList) t);
      {
        ATerm k_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            g_68 = ATgetFirst((ATermList) k_18);
            {
              ATerm l_18 = (ATerm) ATgetNext((ATermList) k_18);
              if(((ATgetType(l_18) != AT_LIST) || !(ATisEmpty(l_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_t_14;
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, f_68, g_68);
  t = lookup_table_0_1(h_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(f_68, g_68, i_68, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, f_68, g_68);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  t = term_t_14;
  t = table_create_0_0(t);
  {
    ATerm p_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_68 = NULL,e_68 = NULL;
        t = term_g_11;
        d_68 = t;
        t = term_q_7;
        e_68 = t;
        t = term_s_18;
        t = g_7(d_68, e_68, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(n_3, t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = p_18;
      }
  }
  t = c_68;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm a_69 = NULL;
  a_69 = t;
  t = SSL_is_string(a_69);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,o_20 = NULL;
  v_68 = t;
  if(match_cons(t, sym__2))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_68);
  o_68 = t;
  t = q_68;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(o_3, t);
  t_68 = t;
  t = BOXENV_args_0_0(t);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, s_68, t_68);
  t = bottomup_1_0(p_3, t);
  t = collect_om_2_0(q_3, conc_0_0, t);
  u_68 = t;
  t = SSL_concat_strings(u_68);
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_68, r_68);
  o_20 = t;
  t = SSLsetAnnotations(o_20, o_68);
  return(t);
}
static ATerm u_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm b_69 = NULL;
  t = SSL_fputc(m_35, n_35);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_69);
  return(t);
}
static ATerm v_6 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm c_69 = NULL;
  t = SSL_write_term_to_stream_text(h_20, i_20);
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_69);
  return(t);
}
static ATerm x_6 (ATerm j_82 (ATerm), ATerm b_211, ATerm n_20, ATerm t)
{
  ATerm d_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_211, term_x_18);
  t = b_7(t);
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_69, n_20);
  t = j_82(t);
  t = fclose_0_0(t);
  t = n_20;
  return(t);
}
static ATerm w_6 (ATerm d_20, ATerm e_20, ATerm t)
{
  ATerm e_69 = NULL;
  t = SSL_write_term_to_stream_baf(d_20, e_20);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_69);
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
  ATerm k_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(match_cons(z_18, sym_Stream_1))
        {
          k_34 = ATgetArgument(z_18, 0);
        }
      else
        _fail(t);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(k_34, l_34, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,q_35 = NULL,r_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      if(match_cons(a_19, sym_Stream_1))
        {
          q_35 = ATgetArgument(a_19, 0);
        }
      else
        _fail(t);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(q_35, r_35, t);
  i_35 = t;
  t = term_d_19;
  j_35 = t;
  t = i_35;
  if(match_cons(t, sym_Stream_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, i_35);
  t = u_6(j_35, k_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,s_70 = NULL,t_70 = NULL,t_20 = NULL,q_20 = NULL;
  j_69 = t;
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_69);
  p_69 = t;
  t = q_69;
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_69 != NULL) && (i_69 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_3, t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = term_g_19;
        i_69 = t;
      }
  }
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_69, r_69);
  q_20 = t;
  t = SSLsetAnnotations(q_20, p_69);
  t = j_69;
  if(match_cons(t, sym__2))
    {
      l_69 = ATgetArgument(t, 0);
      m_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_69);
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_69, (ATerm) ATmakeAppl(sym__2, not_null(i_69), m_69));
  t_20 = t;
  t = SSLsetAnnotations(t_20, k_69);
  o_69 = t;
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,b_34 = NULL,c_34 = NULL,i_34 = NULL,j_34 = NULL,u_20 = NULL;
        t = SSLgetAnnotations(o_69);
        x_33 = t;
        t = s_70;
        t = fetch_1_0(s_3, t);
        b_34 = t;
        t = t_70;
        if(match_cons(t, sym__2))
          {
            i_34 = ATgetArgument(t, 0);
            j_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_6(t_3, i_34, j_34, t);
        c_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
        u_20 = t;
        t = SSLsetAnnotations(u_20, x_33);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm v_34 = NULL,a_35 = NULL,d_35 = NULL,e_35 = NULL,v_20 = NULL;
          t = SSLgetAnnotations(o_69);
          v_34 = t;
          t = t_70;
          if(match_cons(t, sym__2))
            {
              d_35 = ATgetArgument(t, 0);
              e_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_6(u_3, d_35, e_35, t);
          a_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_70, a_35);
          v_20 = t;
          t = SSLsetAnnotations(v_20, v_34);
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
ATerm apply_strategy_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  a_71 = t;
  t = dtime_0_0(t);
  t = a_71;
  t = s_99(t);
  z_70 = t;
  t = dtime_0_0(t);
  w_70 = t;
  t = z_70;
  if(match_cons(t, sym__2))
    {
      x_70 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_70), (ATerm) ATmakeAppl(sym_Runtime_1, w_70)), y_70);
  return(t);
}
static ATerm o_71 (ATerm i_71, ATerm t)
{
  t = SSL_fclose(i_71);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  m_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_71 = ATgetArgument(t, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_71);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = o_71(m_71, t);
          }
      }
    }
  else
    {
      t = o_71(m_71, t);
    }
  return(t);
}
static ATerm y_6 (ATerm j_20, ATerm t)
{
  t = SSL_read_term_from_stream(j_20);
  return(t);
}
static ATerm z_6 (ATerm f_34, ATerm g_34, ATerm t)
{
  t = SSL_strcat(f_34, g_34);
  return(t);
}
static ATerm a_7 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm p_71 = NULL;
  t = SSL_fopen(o_35, p_35);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_71);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_71 = NULL;
  t = SSL_stdin_stream();
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_71 = NULL;
  t = SSL_stdout_stream();
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_71 = NULL;
  t = SSL_stderr_stream();
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_71);
  return(t);
}
static ATerm z_72 (ATerm y_71, ATerm t)
{
  ATerm z_71 = NULL;
  t = SSL_explode_term(y_71);
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
          {
            z_71 = ATgetFirst((ATermList) o_19);
            {
              ATerm p_19 = (ATerm) ATgetNext((ATermList) o_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_71;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_73 (ATerm c_72, ATerm d_72, ATerm e_72, ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,k_72 = NULL,b_21 = NULL;
  t = SSLgetAnnotations(e_72);
  h_72 = t;
  t = c_72;
  if(match_cons(t, sym_Path_1))
    {
      k_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_72, d_72);
  b_21 = t;
  t = SSLsetAnnotations(b_21, h_72);
  if(match_cons(t, sym__2))
    {
      f_72 = ATgetArgument(t, 0);
      g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(f_72, g_72, t);
  return(t);
}
static ATerm b_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,u_72 = NULL,c_21 = NULL;
  t = SSLgetAnnotations(o_72);
  r_72 = t;
  t = SSL_is_string(m_72);
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_72, n_72);
  c_21 = t;
  t = SSLsetAnnotations(c_21, r_72);
  if(match_cons(t, sym__2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(p_72, q_72, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
  w_72 = t;
  if(match_cons(t, sym__2))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_72(w_72, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_73(x_72, y_72, w_72, t);
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  t = b_73(x_72, y_72, w_72, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_72(w_72, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,k_73 = NULL;
  k_73 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_73, term_x_19);
        t = b_7(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm i_36 = NULL,j_36 = NULL;
          t = term_y_19;
          j_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_19, k_73);
          t = z_6(j_36, k_73, t);
          i_36 = t;
          t = SSL_perror(i_36);
          _fail(t);
        }
      }
  }
  e_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(f_73, t);
  d_73 = t;
  t = e_73;
  t = fclose_0_0(t);
  t = d_73;
  return(t);
}
ATerm fetch_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  static ATerm q_74 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
    n_74 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_74 = ATgetFirst((ATermList) t);
        p_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_36 = NULL,f_37 = NULL,l_21 = NULL;
          t = SSLgetAnnotations(n_74);
          z_36 = t;
          t = o_74;
          t = c_83(t);
          f_37 = t;
          t = (ATerm) ATinsert(CheckATermList(p_74), f_37);
          l_21 = t;
          t = SSLsetAnnotations(l_21, z_36);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm u_37 = NULL,y_37 = NULL,o_21 = NULL;
            t = SSLgetAnnotations(n_74);
            u_37 = t;
            t = p_74;
            t = q_74(t);
            y_37 = t;
            t = (ATerm) ATinsert(CheckATermList(y_37), o_74);
            o_21 = t;
            t = SSLsetAnnotations(o_21, u_37);
          }
        }
    }
    return(t);
  }
  t = q_74(t);
  return(t);
}
static ATerm g_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  ATerm t_74 = NULL;
  t = lookup_table_0_1(t_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(u_51, t_74, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
        t = term_g_11;
        z_74 = t;
        t = term_f_20;
        a_75 = t;
        t = term_g_20;
        t = g_7(z_74, a_75, t);
        y_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_74, term_k_20);
        t = geq_0_0(t);
        t = w_74;
        t = b_98(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = w_74;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_75 = NULL;
  d_75 = t;
  if(match_string(t, "-k"))
    {
      t = d_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_75;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  t = SSL_string_to_int(e_75);
  f_75 = t;
  t = term_l_20;
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, f_75);
  t = j_7(g_75, f_75, t);
  t = e_75;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm i_75 = NULL;
  i_75 = t;
  if(match_string(t, "-S"))
    {
      t = i_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_75;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_f_20;
  j_75 = t;
  t = term_v_15;
  k_75 = t;
  t = term_p_20;
  t = j_7(j_75, k_75, t);
  t = term_w_20;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_x_20;
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
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  t = SSL_string_to_int(l_75);
  m_75 = t;
  t = term_f_20;
  n_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, m_75);
  t = j_7(n_75, m_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_75);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_y_20;
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
  ATerm o_75 = NULL,p_75 = NULL;
  t = term_z_20;
  o_75 = t;
  t = term_i_6;
  p_75 = t;
  t = term_a_21;
  t = j_7(o_75, p_75, t);
  t = term_d_21;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, n_4, t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = Option_3_0(o_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm f_45, ATerm g_45, ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL;
  t = term_g_11;
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, f_45, g_45);
  t = lookup_table_0_1(q_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(f_45, g_45, r_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, f_45, g_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
      t = term_i_6;
      t = e_0(t);
      d_76 = t;
      t = term_j_21;
      e_76 = t;
      t = term_k_21;
      f_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, d_76);
      t = h_7(e_76, f_76, d_76, t);
      _fail(t);
    }
  else
    {
      ATerm k_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_75 = ATgetFirst((ATermList) t);
          w_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_75;
      t = c_0(t);
      t = term_i_6;
      t = d_0(t);
      k_76 = t;
      t = (ATerm) ATinsert(CheckATermList(w_75), k_76);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm m_76 = NULL;
  m_76 = t;
  if(match_string(t, "-o"))
    {
      t = m_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_76;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL;
  n_76 = t;
  t = term_m_21;
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, n_76);
  t = j_7(o_76, n_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_76);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm h_7 (ATerm a_50, ATerm b_50, ATerm z_49, ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            ATerm s_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
        t = g_7(a_50, b_50, t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = (ATerm) ATempty;
      }
  }
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_50, b_50, (ATerm) ATinsert(CheckATermList(r_76), z_49));
  t = lookup_table_0_1(a_50, t);
  u_76 = t;
  t = (ATerm) ATinsert(CheckATermList(r_76), z_49);
  s_76 = t;
  t = u_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(b_50, s_76, t_76, t);
  t = q_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
      t = term_i_6;
      t = n_0(t);
      f_77 = t;
      t = term_j_21;
      g_77 = t;
      t = term_k_21;
      h_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, f_77);
      t = h_7(g_77, h_77, f_77, t);
      _fail(t);
    }
  else
    {
      ATerm l_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_77 = ATgetFirst((ATermList) t);
          c_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_77 = ATgetFirst((ATermList) t);
          e_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_77;
      t = k_0(t);
      t = d_77;
      t = l_0(t);
      l_77 = t;
      t = (ATerm) ATinsert(CheckATermList(e_77), l_77);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm n_77 = NULL;
  n_77 = t;
  if(match_string(t, "-i"))
    {
      t = n_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_77;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL;
  o_77 = t;
  t = term_t_21;
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, o_77);
  t = j_7(p_77, o_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_77);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_6;
  t = whoami_0_0(t);
  q_77 = t;
  t = term_k_6;
  s_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_21), q_77);
  t_77 = t;
  t = SSL_printnl(s_77, t_77);
  t = term_t_6;
  r_77 = t;
  t = SSL_exit(r_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  t = term_g_11;
  u_77 = t;
  t = term_w_21;
  v_77 = t;
  t = term_x_21;
  t = g_7(u_77, v_77, t);
  return(t);
}
static ATerm c_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_38, j_38);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = SSL_addr(i_38, j_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
  x_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_77;
      t = j_89(t);
    }
  else
    {
      ATerm c_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_77 = ATgetFirst((ATermList) t);
          z_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_77;
      t = foldr_2_0(j_89, k_89, t);
      c_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_77, c_78);
      t = k_89(t);
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
  t = term_v_15;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(y_38, z_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_78 = NULL,r_38 = NULL,v_38 = NULL;
  t = times_0_0(t);
  v_38 = t;
  t = SSL_explode_term(v_38);
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_38;
  t = foldr_2_0(x_4, z_4, t);
  f_78 = t;
  t = SSL_TicksToSeconds(f_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_78;
        if((r_78 != t))
          {
            _fail(t);
          }
        t = q_78;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATmakeAppl(sym__2, r_78, s_78);
        {
          ATerm f_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_78, s_78);
              LocalPopChoice(h_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(r_78, s_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_78, s_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm w_78 = NULL;
  w_78 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
        t = term_g_11;
        z_78 = t;
        t = term_f_20;
        a_79 = t;
        t = term_g_20;
        t = g_7(z_78, a_79, t);
        y_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_78, term_t_6);
        t = geq_0_0(t);
        t = w_78;
        t = a_98(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = w_78;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,f_79 = NULL,g_79 = NULL;
  t = run_time_0_0(t);
  c_79 = t;
  t = term_i_6;
  t = whoami_0_0(t);
  d_79 = t;
  t = term_k_6;
  f_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_22), c_79), term_l_22), d_79);
  g_79 = t;
  t = SSL_printnl(f_79, g_79);
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_22), c_79), term_l_22), d_79));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_15;
  h_79 = t;
  t = SSL_exit(h_79);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL;
  s_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_79 = ATgetArgument(t, 0);
          {
            ATerm y_39 = NULL,c_22 = NULL;
            t = SSLgetAnnotations(s_79);
            y_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_79);
            c_22 = t;
            t = SSLsetAnnotations(c_22, y_39);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_79 = NULL,l_79 = NULL;
      t = term_g_11;
      k_79 = t;
      t = term_r_22;
      l_79 = t;
      t = term_s_22;
      t = g_7(k_79, l_79, t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = fetch_1_0(c_5, t);
    }
  t = q_100(t);
  return(t);
}
static ATerm k_7 (ATerm h_53, ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm u_79 = NULL;
  t = SSL_hashtable_put(j_53, h_53, i_53);
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_79);
  return(t);
}
static ATerm l_7 (ATerm k_53, ATerm l_53, ATerm t)
{
  t = SSL_hashtable_get(l_53, k_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_51, ATerm t)
{
  ATerm d_80 = NULL;
  t = table_hashtable_0_0(t);
  d_80 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL;
        t = d_80;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_7(m_51, l_40, t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm w_43 = NULL;
          t = m_51;
          t = table_create_0_0(t);
          t = d_80;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_7(m_51, w_43, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm g_80 = NULL;
  t = SSL_hashtable_create(p_53, q_53);
  g_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_80);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,l_80 = NULL,m_80 = NULL;
  h_80 = t;
  t = term_v_22;
  l_80 = t;
  t = term_w_22;
  m_80 = t;
  t = h_80;
  t = new_hashtable_0_2(l_80, m_80, t);
  i_80 = t;
  t = h_80;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(h_80, i_80, j_80, t);
  t = h_80;
  return(t);
}
static ATerm e_7 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm n_80 = NULL;
  t = SSL_hashtable_remove(n_53, m_53);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_80);
  return(t);
}
static ATerm f_7 (ATerm r_53, ATerm t)
{
  ATerm o_80 = NULL;
  t = SSL_hashtable_destroy(r_53);
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_80);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_80 = NULL;
  t = SSL_table_hashtable();
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_80);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
  q_80 = t;
  t = table_hashtable_0_0(t);
  r_80 = t;
  t = lookup_table_0_1(q_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(t_80, t);
  t = r_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(q_80, s_80, t);
  t = q_80;
  return(t);
}
ATerm map_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  static ATerm i_81 (ATerm t)
  {
    ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
    f_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_81;
      }
    else
      {
        ATerm c_46 = NULL,f_46 = NULL,g_46 = NULL,e_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_81 = ATgetFirst((ATermList) t);
            h_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_81);
        c_46 = t;
        t = g_81;
        t = s_82(t);
        f_46 = t;
        t = h_81;
        t = i_81(t);
        g_46 = t;
        t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
        e_22 = t;
        t = SSLsetAnnotations(e_22, c_46);
      }
    return(t);
  }
  t = i_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_81 = ATgetFirst((ATermList) t);
      m_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_81 = NULL,r_81 = NULL;
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_81)), not_null(r_81));
          return(t);
        }
        t = m_81;
        t = i_0(t);
        if(((q_81 != NULL) && (q_81 != t)))
          _fail(t);
        else
          q_81 = t;
        t = l_81;
        t = g_0(t);
        if(((r_81 != NULL) && (r_81 != t)))
          _fail(t);
        else
          r_81 = t;
        t = m_81;
        t = reverse_acc_2_0(g_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,g_22 = NULL;
  z_81 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_81);
  x_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_81);
  g_22 = t;
  t = SSLsetAnnotations(g_22, x_81);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_82 = NULL;
  b_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_82), term_x_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_81 = NULL,w_81 = NULL;
      t = term_g_11;
      v_81 = t;
      t = term_w_21;
      w_81 = t;
      t = term_x_21;
      t = g_7(v_81, w_81, t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = fetch_1_0(e_5, t);
    }
  t = term_a_23;
  t = echo_0_0(t);
  t = term_j_21;
  t_81 = t;
  t = term_k_21;
  u_81 = t;
  t = term_b_23;
  t = g_7(t_81, u_81, t);
  t = reverse_acc_2_0(_id, f_5, t);
  t = map_1_0(g_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
  d_82 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_23 = ATgetFirst((ATermList) t);
                ATerm f_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_82;
          }
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, d_82);
      }
  }
  e_82 = t;
  t = term_g_19;
  f_82 = t;
  t = SSL_printnl(f_82, e_82);
  t = d_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL;
  t = term_g_11;
  k_82 = t;
  t = term_w_21;
  l_82 = t;
  t = term_x_21;
  t = g_7(k_82, l_82, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  t = term_g_23;
  m_82 = t;
  t = term_i_6;
  n_82 = t;
  t = term_h_23;
  t = j_7(m_82, n_82, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm p_82 = NULL,r_82 = NULL,u_82 = NULL,v_82 = NULL;
  t = term_g_23;
  u_82 = t;
  t = term_i_6;
  v_82 = t;
  t = term_h_23;
  t = j_7(u_82, v_82, t);
  t = term_j_23;
  p_82 = t;
  t = term_i_6;
  r_82 = t;
  t = term_k_23;
  t = j_7(p_82, r_82, t);
  t = term_l_23;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_5, j_5, k_5, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = Option_3_0(l_5, m_5, n_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,i_22 = NULL;
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
  t = m_61(t);
  z_82 = t;
  t = y_82;
  t = n_61(t);
  a_83 = t;
  t = (ATerm) ATinsert(CheckATermList(a_83), z_82);
  i_22 = t;
  t = SSLsetAnnotations(i_22, w_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm i_83 = NULL,l_83 = NULL,m_83 = NULL,p_83 = NULL,r_83 = NULL,s_83 = NULL,m_22 = NULL;
  i_83 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_23;
        t = t_102(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
      }
  }
  t = i_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_83 = ATgetFirst((ATermList) t);
      p_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_83);
  l_83 = t;
  t = term_w_21;
  s_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, m_83);
  t = j_7(s_83, m_83, t);
  t = p_83;
  {
    static ATerm g_84 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_23 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_83 = NULL;
              x_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_83;
              LocalPopChoice(b_24);
            }
          else
            {
              t = z_23;
              t = t_102(t);
              t = Cons_2_0(_id, g_84, t);
            }
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          {
            ATerm a_84 = NULL,b_84 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_84 = ATgetFirst((ATermList) t);
                b_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_84), (ATerm) ATmakeAppl(sym_Undefined_1, a_84));
          }
        }
      return(t);
    }
    t = g_84(t);
  }
  r_83 = t;
  t = (ATerm) ATinsert(CheckATermList(r_83), (ATerm) ATmakeAppl(sym_Program_1, m_83));
  m_22 = t;
  t = SSLsetAnnotations(m_22, l_83);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  if(match_string(t, "--help"))
    {
      t = t_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_84;
        }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  t = term_r_22;
  u_84 = t;
  t = term_i_6;
  v_84 = t;
  t = term_c_24;
  t = j_7(u_84, v_84, t);
  t = term_d_24;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
  n_84 = t;
  t = term_j_21;
  o_84 = t;
  t = term_f_24;
  t = lookup_table_0_1(o_84, t);
  s_84 = t;
  t = term_k_21;
  p_84 = t;
  t = (ATerm) ATempty;
  q_84 = t;
  t = s_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(p_84, q_84, r_84, t);
  t = n_84;
  {
    static ATerm o_5 (ATerm t)
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_102(t);
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          {
            ATerm i_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_5, r_5, s_5, t);
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_5, t);
  }
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_85 = NULL;
        g_85 = t;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_46 = NULL;
              t = g_85;
              {
                ATerm o_24 = t;
                int p_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_46 = NULL,p_46 = NULL;
                    t = term_g_11;
                    o_46 = t;
                    t = term_r_22;
                    p_46 = t;
                    t = term_s_22;
                    t = g_7(o_46, p_46, t);
                    LocalPopChoice(p_24);
                  }
                else
                  {
                    t = o_24;
                    t = fetch_1_0(t_5, t);
                  }
              }
              t = g_85;
              t = default_system_usage_0_0(t);
              t = term_v_15;
              n_46 = t;
              t = SSL_exit(n_46);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
                t = term_g_11;
                u_46 = t;
                t = term_g_23;
                v_46 = t;
                t = term_q_24;
                t = g_7(u_46, v_46, t);
                t = g_85;
                t = default_system_about_0_0(t);
                t = term_v_15;
                t_46 = t;
                t = SSL_exit(t_46);
              }
            }
        }
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
              static ATerm u_5 (ATerm t)
              {
                ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,q_22 = NULL;
                m_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_85);
                k_85 = t;
                t = l_85;
                if(((l_84 != NULL) && (l_84 != t)))
                  _fail(t);
                else
                  l_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_85);
                q_22 = t;
                t = SSLsetAnnotations(q_22, k_85);
                return(t);
              }
              t = fetch_1_0(u_5, t);
              t = term_k_6;
              i_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_v_24);
              j_85 = t;
              t = SSL_printnl(i_85, j_85);
              t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_v_24));
              t = default_system_usage_0_0(t);
              t = term_t_6;
              h_85 = t;
              t = SSL_exit(h_85);
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
            }
        }
      }
  }
  m_84 = t;
  t = term_j_21;
  t = table_destroy_0_0(t);
  t = m_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t = parse_options_1_0(s_100, t);
  r_85 = t;
  t = term_w_24;
  t = table_create_0_0(t);
  t = term_w_24;
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_24, term_x_24, r_85);
  t = lookup_table_0_1(s_85, t);
  v_85 = t;
  t = term_x_24;
  t_85 = t;
  t = v_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(t_85, r_85, u_85, t);
  t = r_85;
  t = u_100(t);
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_100, t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm c_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_25);
            }
          else
            {
              t = c_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = if_verbose2_1_0(f_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  t = term_d_7;
  w_85 = t;
  t = term_i_6;
  x_85 = t;
  t = term_i_7;
  t = j_7(w_85, x_85, t);
  t = term_m_7;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_n_7;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL;
  y_85 = t;
  t = term_g_11;
  c_86 = t;
  t = term_w_21;
  d_86 = t;
  t = term_x_21;
  t = g_7(c_86, d_86, t);
  z_85 = t;
  t = term_k_6;
  a_86 = t;
  t = (ATerm) ATinsert(ATempty, z_85);
  b_86 = t;
  t = SSL_printnl(a_86, b_86);
  t = y_85;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t)
  {
    ATerm f_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_100(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = f_25;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm m_25 = t;
                int n_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_25);
                  }
                else
                  {
                    t = m_25;
                    {
                      ATerm o_25 = t;
                      int p_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_6, c_6, d_6, t);
                          LocalPopChoice(p_25);
                        }
                      else
                        {
                          t = o_25;
                          {
                            ATerm q_25 = t;
                            int r_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_25);
                              }
                            else
                              {
                                t = q_25;
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
  static ATerm a_6 (ATerm t)
  {
    ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
    f_86 = t;
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm g_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_6, t);
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
          t = term_u_25;
          e_86 = t;
        }
    }
    t = not_null(e_86);
    t = ReadFromFile_0_0(t);
    g_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_86, g_86);
    t = apply_strategy_1_0(b_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_5, d_100, y_5, a_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

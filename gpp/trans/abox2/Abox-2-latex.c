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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_n_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_k_20;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_a_16;
ATerm term_l_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
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
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
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
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_i_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_i_6);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_l_15);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_15);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_i_6);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_o_21);
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
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_i_6);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm foldr_3_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm collect_om_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t);
static ATerm x_41 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm i_74 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm k_6 (ATerm p_18, ATerm t);
ATerm listtd_1_0 (ATerm d_82 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm l_72 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm o_81 (ATerm), ATerm t);
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
static ATerm l_6 (ATerm q_20, ATerm r_20, ATerm t);
ATerm filter_1_0 (ATerm e_88 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm g_72 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm g_55 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm m_6 (ATerm n_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm v_81 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_81 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm n_6 (ATerm j_15, ATerm t);
static ATerm o_6 (ATerm g_38, ATerm h_38, ATerm t);
ATerm while_not_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm s_65 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_74 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm q_6 (ATerm e_35, ATerm f_35, ATerm t);
static ATerm r_6 (ATerm g_20, ATerm h_20, ATerm t);
static ATerm t_6 (ATerm k_80 (ATerm), ATerm t_208, ATerm m_20, ATerm t);
static ATerm s_6 (ATerm c_20, ATerm d_20, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm t);
static ATerm i_69 (ATerm c_69, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_6 (ATerm i_20, ATerm t);
static ATerm w_6 (ATerm g_35, ATerm h_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_70 (ATerm s_69, ATerm t);
static ATerm u_70 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm t);
static ATerm v_70 (ATerm g_70, ATerm h_70, ATerm i_70, ATerm t);
static ATerm x_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_81 (ATerm), ATerm t);
static ATerm v_6 (ATerm x_33, ATerm y_33, ATerm t);
ATerm debug_1_0 (ATerm i_80 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_95 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm x_44, ATerm y_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_7 (ATerm x_49, ATerm y_49, ATerm w_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_6 (ATerm a_38, ATerm b_38, ATerm t);
ATerm foldr_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_95 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_80 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm o_51, ATerm p_51, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_59 (ATerm), ATerm p_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t);
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
  t = term_j_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_7), j_0), term_p_6);
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
  t = term_i_6;
  s_0 = t;
  t = term_i_7;
  t = d_7(q_0, s_0, t);
  t = term_k_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_l_7;
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
  t = term_m_7;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, t_0);
  t = d_7(u_0, t_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_n_7;
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
  t = term_o_7;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, z_0);
  t = d_7(c_1, z_0, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_p_7;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm v_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_0, x_0, y_0, t);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = v_7;
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
                          int e_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(e_8);
                            }
                          else
                            {
                              t = b_8;
                              {
                                ATerm f_8 = t;
                                int g_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_1, d_1, f_1, t);
                                    LocalPopChoice(g_8);
                                  }
                                else
                                  {
                                    t = f_8;
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
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = p_1;
            t = at_end_1_0(j_1, t);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
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
ATerm foldr_3_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  x_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
      t = c_87(t);
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
      t = e_87(t);
      c_2 = t;
      t = z_1;
      t = foldr_3_0(c_87, d_87, e_87, t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, d_2);
      t = d_87(t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL;
      t = d_86(t);
      g_2 = t;
      t = (ATerm) ATinsert(ATempty, g_2);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm n_1 (ATerm t)
        {
          t = collect_om_2_0(d_86, e_86, t);
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
        t = foldr_3_0(k_1, e_86, n_1, t);
      }
    }
  return(t);
}
static ATerm x_41 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_is_int(n_2);
  t = SSL_int_to_string(n_2);
  i_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), o_2), term_q_8), i_3), term_o_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL,q_3 = NULL,z_3 = NULL,d_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      o_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
      t = o_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_8), z_3), term_s_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_3 = ATgetFirst((ATermList) t);
              j_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_8), z_3), term_v_8), q_3), term_u_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          o_3 = ATgetArgument(t, 0);
          z_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), z_3), term_v_8), o_3), term_y_8);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              o_3 = ATgetArgument(t, 0);
              z_3 = ATgetArgument(t, 1);
              k_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), k_3), term_v_8), z_3), term_q_8), o_3), term_a_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  o_3 = ATgetArgument(t, 0);
                  z_3 = ATgetArgument(t, 1);
                  k_3 = ATgetArgument(t, 2);
                  l_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), l_3), term_v_8), k_3), term_q_8), z_3), term_q_8), o_3), term_c_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      o_3 = ATgetArgument(t, 0);
                      z_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), z_3), term_v_8), o_3), term_e_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          o_3 = ATgetArgument(t, 0);
                          z_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), z_3), term_h_9), o_3), term_g_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              o_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), o_3), term_j_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  o_3 = ATgetArgument(t, 0);
                                  z_3 = ATgetArgument(t, 1);
                                  t = o_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm l_9 = t;
                                      int m_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = x_41(o_3, z_3, d_4, t);
                                          LocalPopChoice(m_9);
                                        }
                                      else
                                        {
                                          t = l_9;
                                          {
                                            ATerm n_9 = t;
                                            int o_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_9), z_3), term_p_9);
                                                LocalPopChoice(o_9);
                                              }
                                            else
                                              {
                                                t = n_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), z_3), term_v_8), o_3), term_r_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm s_9 = t;
                                      int t_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = x_41(o_3, z_3, d_4, t);
                                          LocalPopChoice(t_9);
                                        }
                                      else
                                        {
                                          t = s_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), z_3), term_v_8), o_3), term_r_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      o_3 = ATgetArgument(t, 0);
                                      z_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_v_9), o_3), term_u_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          o_3 = ATgetArgument(t, 0);
                                          z_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_q_8), o_3), term_w_9);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              o_3 = ATgetArgument(t, 0);
                                              z_3 = ATgetArgument(t, 1);
                                              t = o_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_x_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_y_9);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_z_9);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_a_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_b_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_c_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_d_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_e_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_f_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_g_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_h_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_i_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_j_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_k_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_l_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_m_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_n_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_o_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_p_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_q_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_r_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_s_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_t_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_u_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  q_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_9), z_3), term_q_8), q_3), term_v_10);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_w_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_x_10;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_y_10;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_z_10;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_a_11;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(i_74, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = i_74(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_41 = NULL;
      t = term_o_7;
      t = get_config_0_0(t);
      y_41 = t;
      t = (ATerm) ATinsert(ATempty, y_41);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  h_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_43;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_43 = ATgetFirst((ATermList) t);
          j_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 = NULL,e_1 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(h_43);
            a_1 = t;
            t = i_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_43;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), i_43);
            h_0 = t;
            t = SSLsetAnnotations(h_0, a_1);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            {
              ATerm h_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 = NULL,w_1 = NULL,h_2 = NULL,k_2 = NULL,r_0 = NULL;
                  t = SSLgetAnnotations(h_43);
                  h_2 = t;
                  t = i_43;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = i_43;
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
                      t = i_43;
                    }
                  t = (ATerm) ATinsert(CheckATermList(j_43), i_43);
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
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm p_3 = NULL,t_3 = NULL,v_0 = NULL;
                    t = SSLgetAnnotations(h_43);
                    p_3 = t;
                    t = j_43;
                    t = flat_list_0_0(t);
                    t_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(t_3), i_43);
                    v_0 = t;
                    t = SSLsetAnnotations(v_0, p_3);
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
  ATerm p_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_11) != AT_INT) || (ATgetInt((ATermInt) t_11) != 34)))
        _fail(t);
      p_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(p_43), term_u_11), term_u_11);
  return(t);
}
static ATerm k_6 (ATerm p_18, ATerm t)
{
  ATerm o_43 = NULL;
  t = p_18;
  t = at_suffix_1_0(t_1, t);
  o_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_43), term_v_11), term_v_11);
  return(t);
}
ATerm listtd_1_0 (ATerm d_82 (ATerm), ATerm t)
{
  static ATerm d_44 (ATerm t)
  {
    ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
    t = d_82(t);
    a_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_44;
      }
    else
      {
        ATerm c_4 = NULL,h_4 = NULL,d_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_44 = ATgetFirst((ATermList) t);
            c_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_44);
        c_4 = t;
        t = c_44;
        t = d_44(t);
        h_4 = t;
        t = (ATerm) ATinsert(CheckATermList(h_4), b_44);
        d_5 = t;
        t = SSLsetAnnotations(d_5, c_4);
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_7 = ATgetFirst((ATermList) t);
      h_7 = (ATerm) ATgetNext((ATermList) t);
      t = g_7;
      if(match_int(t, 34))
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_7;
              t = k_6(h_7, t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              t = j_7;
            }
        }
      else
        {
          t = j_7;
        }
    }
  else
    {
      t = j_7;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  if(match_int(t, 32))
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_12 = NULL;
          t = term_a_12;
          b_12 = t;
          t = SSL_explode_string(b_12);
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          t = x_8;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm d_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_12 = NULL;
              t = term_g_12;
              c_12 = t;
              t = SSL_explode_string(c_12);
              LocalPopChoice(f_12);
            }
          else
            {
              t = d_12;
              t = x_8;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm h_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_12 = NULL;
                  t = term_l_12;
                  e_12 = t;
                  t = SSL_explode_string(e_12);
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = h_12;
                  t = x_8;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm r_12 = t;
                  int t_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_12 = NULL;
                      t = term_w_12;
                      i_12 = t;
                      t = SSL_explode_string(i_12);
                      LocalPopChoice(t_12);
                    }
                  else
                    {
                      t = r_12;
                      t = x_8;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm x_12 = t;
                      int y_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_12 = NULL;
                          t = term_z_12;
                          j_12 = t;
                          t = SSL_explode_string(j_12);
                          LocalPopChoice(y_12);
                        }
                      else
                        {
                          t = x_12;
                          t = x_8;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm c_13 = t;
                          int d_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_12 = NULL;
                              t = term_e_13;
                              m_12 = t;
                              t = SSL_explode_string(m_12);
                              LocalPopChoice(d_13);
                            }
                          else
                            {
                              t = c_13;
                              t = x_8;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm g_13 = t;
                              int h_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_12 = NULL;
                                  t = term_j_13;
                                  n_12 = t;
                                  t = SSL_explode_string(n_12);
                                  LocalPopChoice(h_13);
                                }
                              else
                                {
                                  t = g_13;
                                  t = x_8;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm k_13 = t;
                                  int l_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm o_12 = NULL;
                                      t = term_n_13;
                                      o_12 = t;
                                      t = SSL_explode_string(o_12);
                                      LocalPopChoice(l_13);
                                    }
                                  else
                                    {
                                      t = k_13;
                                      t = x_8;
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
                                          ATerm p_12 = NULL;
                                          t = term_q_13;
                                          p_12 = t;
                                          t = SSL_explode_string(p_12);
                                          LocalPopChoice(p_13);
                                        }
                                      else
                                        {
                                          t = o_13;
                                          t = x_8;
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
                                              ATerm q_12 = NULL;
                                              t = term_t_13;
                                              q_12 = t;
                                              t = SSL_explode_string(q_12);
                                              LocalPopChoice(s_13);
                                            }
                                          else
                                            {
                                              t = r_13;
                                              t = x_8;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm u_13 = t;
                                              int v_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_12 = NULL;
                                                  t = term_w_13;
                                                  s_12 = t;
                                                  t = SSL_explode_string(s_12);
                                                  LocalPopChoice(v_13);
                                                }
                                              else
                                                {
                                                  t = u_13;
                                                  t = x_8;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm x_13 = t;
                                                  int y_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_12 = NULL;
                                                      t = term_z_13;
                                                      u_12 = t;
                                                      t = SSL_explode_string(u_12);
                                                      LocalPopChoice(y_13);
                                                    }
                                                  else
                                                    {
                                                      t = x_13;
                                                      t = x_8;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm a_14 = t;
                                                      int b_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_12 = NULL;
                                                          t = term_c_14;
                                                          v_12 = t;
                                                          t = SSL_explode_string(v_12);
                                                          LocalPopChoice(b_14);
                                                        }
                                                      else
                                                        {
                                                          t = a_14;
                                                          t = x_8;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm d_14 = t;
                                                          int e_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_13 = NULL;
                                                              t = term_g_14;
                                                              a_13 = t;
                                                              t = SSL_explode_string(a_13);
                                                              LocalPopChoice(e_14);
                                                            }
                                                          else
                                                            {
                                                              t = d_14;
                                                              t = x_8;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm h_14 = t;
                                                              int i_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_13 = NULL;
                                                                  t = term_j_14;
                                                                  b_13 = t;
                                                                  t = SSL_explode_string(b_13);
                                                                  LocalPopChoice(i_14);
                                                                }
                                                              else
                                                                {
                                                                  t = h_14;
                                                                  t = x_8;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = x_8;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm b_47 = NULL;
  b_47 = t;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_47 = NULL;
        t = term_m_14;
        d_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_14, b_47);
        t = a_7(d_47, b_47, t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm z_6 = NULL;
          t = SSL_explode_string(b_47);
          t = listtd_1_0(u_1, t);
          t = map_1_0(a_2, t);
          t = flat_list_0_0(t);
          z_6 = t;
          t = SSL_implode_string(z_6);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  static ATerm l_48 (ATerm t)
  {
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
    i_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_48 = ATgetFirst((ATermList) t);
        h_48 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_13 = NULL,i_13 = NULL,m_13 = NULL,m_5 = NULL;
              t = SSLgetAnnotations(i_48);
              i_13 = t;
              t = g_48;
              t = l_72(t);
              m_13 = t;
              t = (ATerm) ATinsert(CheckATermList(h_48), m_13);
              m_5 = t;
              t = SSLsetAnnotations(m_5, i_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_14 = ATgetFirst((ATermList) t);
                  f_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_13;
              t = l_48(t);
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = i_48;
            }
        }
      }
    else
      {
        t = i_48;
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  static ATerm a_49 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_81(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,f_14 = NULL,s_14 = NULL,t_5 = NULL;
          x_48 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_48 = ATgetFirst((ATermList) t);
              z_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_48);
          f_14 = t;
          t = z_48;
          t = a_49(t);
          s_14 = t;
          t = (ATerm) ATinsert(CheckATermList(s_14), y_48);
          t_5 = t;
          t = SSLsetAnnotations(t_5, f_14);
        }
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm l_49 = NULL;
  l_49 = t;
  if(match_int(t, 9))
    {
      t = l_49;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = l_49;
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
  ATerm e_49 = NULL,k_49 = NULL;
  t = remove_trailing_1_0(b_2, t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_2 (ATerm t)
        {
          ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,y_5 = NULL;
          q_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_49 = ATgetFirst((ATermList) t);
              o_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_49);
          m_49 = t;
          t = n_49;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = o_49;
          {
            static ATerm i_2 (ATerm t)
            {
              if(((e_49 != NULL) && (e_49 != t)))
                _fail(t);
              else
                e_49 = t;
              return(t);
            }
            t = Cons_2_0(f_2, i_2, t);
          }
          p_49 = t;
          t = (ATerm) ATinsert(CheckATermList(p_49), n_49);
          y_5 = t;
          t = SSLsetAnnotations(y_5, m_49);
          t = not_null(e_49);
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
  k_49 = t;
  t = SSL_implode_string(k_49);
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
  ATerm a_51 = NULL;
  a_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_14), a_51);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  d_50 = t;
  t = SSL_explode_string(d_50);
  t = reverse_acc_2_0(_id, j_2, t);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, (ATerm) ATempty);
  {
    static ATerm b_51 (ATerm t)
    {
      ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
      if(match_cons(t, sym__2))
        {
          g_50 = ATgetArgument(t, 0);
          j_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_50;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm n_50 = NULL;
          t = j_50;
          t = LatexComment_0_0(t);
          n_50 = t;
          t = (ATerm) ATinsert(ATempty, n_50);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_50 = ATgetFirst((ATermList) t);
              i_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_50;
          if(match_int(t, 10))
            {
              ATerm w_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_50 = NULL,s_50 = NULL;
                  t = j_50;
                  t = LatexComment_0_0(t);
                  r_50 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_50, (ATerm) ATempty);
                  t = b_51(t);
                  s_50 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_50), r_50);
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = w_14;
                  t = (ATerm) ATmakeAppl(sym__2, i_50, (ATerm) ATinsert(CheckATermList(j_50), h_50));
                  t = b_51(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, i_50, (ATerm) ATinsert(CheckATermList(j_50), h_50));
              t = b_51(t);
            }
        }
      return(t);
    }
    t = b_51(t);
  }
  t = remove_trailing_1_0(l_2, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = remove_trailing_1_0(q_2, t);
  t = map_1_0(r_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm y_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_14;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  t = filter_1_0(s_2, t);
  d_15 = t;
  t = term_z_14;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_14, d_15);
  t = l_6(c_15, d_15, t);
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
  ATerm c_51 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = term_e_7;
    }
  c_51 = t;
  t = SSL_int_to_string(c_51);
  return(t);
}
static ATerm l_6 (ATerm q_20, ATerm r_20, ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  t = r_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_20;
    }
  else
    {
      ATerm m_15 = NULL,q_15 = NULL,a_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_51 = ATgetFirst((ATermList) t);
          v_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_20);
      m_15 = t;
      t = v_51;
      {
        static ATerm u_15 (ATerm t)
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_15 = NULL;
              r_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_15;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm s_15 = NULL;
                t = Cons_2_0(_id, u_15, t);
                s_15 = t;
                t = (ATerm) ATinsert(CheckATermList(s_15), q_20);
              }
            }
          return(t);
        }
        t = u_15(t);
      }
      q_15 = t;
      t = (ATerm) ATinsert(CheckATermList(q_15), u_51);
      a_6 = t;
      t = SSLsetAnnotations(a_6, m_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_52;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_52 = ATgetFirst((ATermList) t);
          n_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,c_6 = NULL;
            t = SSLgetAnnotations(l_52);
            b_16 = t;
            t = m_52;
            t = e_88(t);
            e_16 = t;
            t = n_52;
            t = filter_1_0(e_88, t);
            f_16 = t;
            t = (ATerm) ATinsert(CheckATermList(f_16), e_16);
            c_6 = t;
            t = SSLsetAnnotations(c_6, b_16);
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = n_52;
            t = filter_1_0(e_88, t);
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
  ATerm q_52 = NULL;
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      t = term_l_15;
    }
  q_52 = t;
  t = SSL_int_to_string(q_52);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm r_52 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,f_6 = NULL;
    w_52 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        t_52 = ATgetArgument(t, 0);
        u_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_52);
    s_52 = t;
    t = t_52;
    t = g_72(t);
    v_52 = t;
    t = u_52;
    if(((r_52 != NULL) && (r_52 != t)))
      _fail(t);
    else
      r_52 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, v_52, u_52);
    f_6 = t;
    t = SSLsetAnnotations(f_6, s_52);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(r_52));
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
  ATerm x_52 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = term_l_15;
    }
  x_52 = t;
  t = SSL_int_to_string(x_52);
  return(t);
}
static ATerm g_55 (ATerm e_53, ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm k_53 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(g_53);
  k_53 = t;
  t = f_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_53), e_53);
  u_7 = t;
  t = SSLsetAnnotations(u_7, k_53);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,c_8 = NULL;
  s_54 = t;
  if(match_cons(t, sym_C_2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_54);
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, q_54, r_54);
  c_8 = t;
  t = SSLsetAnnotations(c_8, p_54);
  return(t);
}
static ATerm m_6 (ATerm n_15, ATerm t)
{
  static ATerm f_55 (ATerm t)
  {
    static ATerm h_55 (ATerm o_53, ATerm p_53, ATerm q_53, ATerm t)
    {
      ATerm u_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,z_7 = NULL,w_7 = NULL;
      t = SSLgetAnnotations(q_53);
      u_53 = t;
      t = o_53;
      if(match_cons(t, sym_C_2))
        {
          z_53 = ATgetArgument(t, 0);
          a_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_53);
      y_53 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, z_53, a_54);
      w_7 = t;
      t = SSLsetAnnotations(w_7, y_53);
      b_54 = t;
      t = p_53;
      t = Cons_2_0(_id, f_55, t);
      x_53 = t;
      t = (ATerm) ATinsert(CheckATermList(x_53), b_54);
      z_7 = t;
      t = SSLsetAnnotations(z_7, u_53);
      return(t);
    }
    static ATerm i_55 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm t)
    {
      ATerm k_54 = NULL,n_54 = NULL,d_8 = NULL;
      t = SSLgetAnnotations(g_54);
      k_54 = t;
      t = f_54;
      t = Cons_2_0(x_2, f_55, t);
      n_54 = t;
      t = (ATerm) ATinsert(CheckATermList(n_54), e_54);
      d_8 = t;
      t = SSLsetAnnotations(d_8, k_54);
      return(t);
    }
    ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
    t_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_54 = ATgetFirst((ATermList) t);
            v_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_54 = ATgetFirst((ATermList) t);
            x_54 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm t_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_55(u_54, v_54, t_54, t);
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = t_15;
                  {
                    ATerm w_15 = t;
                    int x_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_55(u_54, v_54, t_54, t);
                        LocalPopChoice(x_15);
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm y_15 = t;
                          int z_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_55(u_54, v_54, t_54, t);
                              LocalPopChoice(z_15);
                            }
                          else
                            {
                              t = y_15;
                              {
                                ATerm e_55 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(x_54), w_54);
                                t = f_55(t);
                                e_55 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(e_55), term_a_16), u_54);
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
            ATerm c_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_55(u_54, v_54, t_54, t);
                LocalPopChoice(d_16);
              }
            else
              {
                t = c_16;
                {
                  ATerm g_16 = t;
                  int h_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_55(u_54, v_54, t_54, t);
                      LocalPopChoice(h_16);
                    }
                  else
                    {
                      t = g_16;
                      t = i_55(u_54, v_54, t_54, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = n_15;
  t = f_55(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  if(match_cons(t, sym_LBL_2))
    {
      u_55 = ATgetArgument(t, 0);
      v_55 = ATgetArgument(t, 1);
      {
        ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
        t = v_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            s_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_6(s_16, t);
        t = v_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_6(r_16, t);
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, u_55, q_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm k_16 = ATgetArgument(t, 0);
          v_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_55;
      t = m_6(v_55, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  static ATerm v_56 (ATerm t)
  {
    ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
    s_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_56 = ATgetFirst((ATermList) t);
        u_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_16 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(s_56);
          z_16 = t;
          t = u_56;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(u_56), t_56);
          n_8 = t;
          t = SSLsetAnnotations(n_8, z_16);
          t = v_81(t);
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
          {
            ATerm j_17 = NULL,m_17 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(s_56);
            j_17 = t;
            t = u_56;
            t = v_56(t);
            m_17 = t;
            t = (ATerm) ATinsert(CheckATermList(m_17), t_56);
            p_8 = t;
            t = SSLsetAnnotations(p_8, j_17);
          }
        }
    }
    return(t);
  }
  t = v_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  static ATerm l_57 (ATerm t)
  {
    ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
    k_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_57 = ATgetFirst((ATermList) t);
        j_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_17 = NULL,z_17 = NULL,w_8 = NULL;
          t = SSLgetAnnotations(k_57);
          w_17 = t;
          t = j_57;
          t = l_57(t);
          z_17 = t;
          t = (ATerm) ATinsert(CheckATermList(z_17), i_57);
          w_8 = t;
          t = SSLsetAnnotations(w_8, w_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_57;
        t = k_81(t);
      }
    return(t);
  }
  t = l_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_57;
    }
  else
    {
      static ATerm y_2 (ATerm t)
      {
        t = not_null(q_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_57 = ATgetFirst((ATermList) t);
          if(((q_57 != NULL) && (q_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_57;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_58 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      o_58 = ATgetArgument(t, 0);
      {
        ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
        t = o_58;
        t = Hspace_0_0(t);
        k_18 = t;
        t = SSL_string_to_int(k_18);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_z_14);
        t = copy_0_0(t);
        i_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_n_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          o_58 = ATgetArgument(t, 0);
          {
            ATerm o_18 = NULL,q_18 = NULL,t_18 = NULL;
            t = o_58;
            t = Hspace_0_0(t);
            t_18 = t;
            t = SSL_string_to_int(t_18);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_18, term_z_14);
            t = copy_0_0(t);
            o_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_18), term_o_16);
          }
        }
      else
        {
          ATerm a_19 = NULL,c_19 = NULL,f_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              o_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_58;
          t = Hspace_0_0(t);
          f_19 = t;
          t = SSL_string_to_int(f_19);
          c_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_19, term_z_14);
          t = copy_0_0(t);
          a_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_19), term_p_16);
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_16);
  return(t);
}
static ATerm n_6 (ATerm j_15, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  t = j_15;
  t = map_1_0(z_2, t);
  l_19 = t;
  t = (ATerm) ATinsert(ATempty, term_a_16);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_a_16), l_19);
  t = l_6(k_19, l_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
static ATerm o_6 (ATerm g_38, ATerm h_38, ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_38, h_38);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = SSL_subtr(g_38, h_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  static ATerm s_58 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = z_73(t);
        t = s_58(t);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm for_3_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  t = b_74(t);
  t = while_not_2_0(c_74, d_74, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_58, w_58, (ATerm) ATempty);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm x_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if(((ATgetType(y_16) != AT_INT) || (ATgetInt((ATermInt) y_16) != 0)))
        _fail(t);
      {
        ATerm a_17 = ATgetArgument(t, 1);
      }
      x_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_58;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  if(match_cons(t, sym__3))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
      a_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_58, term_e_7);
  t = geq_0_0(t);
  t = term_e_7;
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, term_e_7);
  t = o_6(y_58, c_59, t);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_59, z_58, (ATerm) ATinsert(CheckATermList(a_59), z_58));
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
        ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,e_20 = NULL,e_11 = NULL;
        k_59 = t;
        if(match_cons(t, sym__2))
          {
            l_59 = ATgetArgument(t, 0);
            m_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_59);
        e_20 = t;
        t = l_59;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
        e_11 = t;
        t = SSLsetAnnotations(e_11, e_20);
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
      ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,g_11 = NULL;
      b_61 = t;
      if(match_cons(t, sym_R_2))
        {
          z_60 = ATgetArgument(t, 0);
          a_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_61);
      y_60 = t;
      t = a_61;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, z_60, a_61);
      g_11 = t;
      t = SSLsetAnnotations(g_11, y_60);
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
  ATerm v_59 = NULL;
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, (ATerm) ATempty);
  {
    static ATerm c_61 (ATerm t)
    {
      ATerm w_59 = NULL,x_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
      if(match_cons(t, sym__2))
        {
          z_59 = ATgetArgument(t, 0);
          c_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_59;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm h_60 = NULL;
          t = c_60;
          t = reverse_acc_2_0(_id, e_3, t);
          h_60 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, h_60));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_60 = ATgetFirst((ATermList) t);
              b_60 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_60;
          if(match_cons(t, sym_R_2))
            {
              w_59 = ATgetArgument(t, 0);
              x_59 = ATgetArgument(t, 1);
              {
                ATerm e_17 = t;
                int f_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_60 = NULL,o_60 = NULL;
                    t = c_60;
                    t = reverse_acc_2_0(_id, f_3, t);
                    n_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_60, (ATerm) ATempty);
                    t = c_61(t);
                    o_60 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_60), (ATerm) ATmakeAppl(sym_R_2, w_59, x_59)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, n_60));
                    LocalPopChoice(f_17);
                  }
                else
                  {
                    t = e_17;
                    t = (ATerm) ATmakeAppl(sym__2, b_60, (ATerm) ATinsert(CheckATermList(c_60), a_60));
                    t = c_61(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, b_60, (ATerm) ATinsert(CheckATermList(c_60), a_60));
              t = c_61(t);
            }
        }
      return(t);
    }
    t = c_61(t);
  }
  t = filter_1_0(g_3, t);
  return(t);
}
static ATerm s_65 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  t = c_64;
  if(match_cons(t, sym_KW_0))
    {
      t = c_64;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = c_64;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = c_64;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = c_64;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, c_64, d_64);
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
static ATerm m_3 (ATerm t)
{
  ATerm h_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_17;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm n_65 = NULL;
  if(match_cons(t, sym_S_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_65;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  n_64 = t;
  if(match_cons(t, sym_REF_2))
    {
      o_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, o_64, m_64);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          o_64 = ATgetArgument(t, 0);
          m_64 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, o_64, m_64);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              o_64 = ATgetArgument(t, 0);
              m_64 = ATgetArgument(t, 1);
              {
                ATerm y_23 = NULL;
                t = n_64;
                {
                  ATerm i_17 = t;
                  int k_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(o_64);
                      y_23 = t;
                      LocalPopChoice(k_17);
                    }
                  else
                    {
                      t = i_17;
                      {
                        ATerm l_17 = t;
                        int n_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,g_24 = NULL,j_24 = NULL,i_11 = NULL;
                            t = SSL_explode_string(o_64);
                            j_24 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                c_24 = ATgetFirst((ATermList) t);
                                g_24 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(j_24);
                            b_24 = t;
                            t = c_24;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(g_24), c_24);
                            i_11 = t;
                            t = SSLsetAnnotations(i_11, b_24);
                            t = (ATerm) ATinsert(ATempty, term_o_17);
                            a_24 = t;
                            t = SSL_implode_string(a_24);
                            y_23 = t;
                            LocalPopChoice(n_17);
                          }
                        else
                          {
                            t = l_17;
                            t = o_64;
                            y_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, y_23, m_64);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  o_64 = ATgetArgument(t, 0);
                  m_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, o_64, m_64);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      o_64 = ATgetArgument(t, 0);
                      m_64 = ATgetArgument(t, 1);
                      i_64 = ATgetArgument(t, 2);
                      {
                        ATerm a_25 = NULL,h_25 = NULL,i_25 = NULL,p_25 = NULL,q_25 = NULL,u_25 = NULL,v_25 = NULL,z_25 = NULL,n_26 = NULL;
                        t = i_64;
                        t = construct_rows_0_0(t);
                        i_25 = t;
                        t = m_64;
                        t = Vspace_0_0(t);
                        z_25 = t;
                        t = SSL_string_to_int(z_25);
                        a_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, a_25, term_t_16);
                        t = copy_0_0(t);
                        u_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, u_25, (ATerm) ATinsert(ATinsert(ATempty, term_v_14), term_t_16));
                        t = conc_0_0(t);
                        p_25 = t;
                        t = o_64;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            v_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = n_6(v_25, t);
                        h_25 = t;
                        t = i_25;
                        t = map_1_0(MkRows_0_0, t);
                        n_26 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_25, n_26);
                        t = l_6(p_25, n_26, t);
                        q_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, h_25, q_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          o_64 = ATgetArgument(t, 0);
                          m_64 = ATgetArgument(t, 1);
                          {
                            ATerm v_64 = NULL,w_64 = NULL,y_64 = NULL,a_65 = NULL,p_26 = NULL,z_26 = NULL;
                            t = o_64;
                            t = Hspace_0_0(t);
                            v_64 = t;
                            t = o_64;
                            t = Vspace_0_0(t);
                            w_64 = t;
                            t = o_64;
                            t = Ispace_0_0(t);
                            y_64 = t;
                            t = m_64;
                            t = filter_1_0(h_3, t);
                            z_26 = t;
                            t = term_p_17;
                            p_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_p_17, z_26);
                            t = l_6(p_26, z_26, t);
                            a_65 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, v_64, w_64, y_64, a_65);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              o_64 = ATgetArgument(t, 0);
                              m_64 = ATgetArgument(t, 1);
                              {
                                ATerm b_65 = NULL,d_65 = NULL,f_65 = NULL,e_27 = NULL,f_27 = NULL;
                                t = o_64;
                                t = Vspace_0_0(t);
                                b_65 = t;
                                t = o_64;
                                t = Ispace_0_0(t);
                                d_65 = t;
                                t = m_64;
                                t = filter_1_0(m_3, t);
                                f_27 = t;
                                t = term_q_17;
                                e_27 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_q_17, f_27);
                                t = l_6(e_27, f_27, t);
                                f_65 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, b_65, d_65, f_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  o_64 = ATgetArgument(t, 0);
                                  m_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_65 = NULL,j_65 = NULL;
                                    t = o_64;
                                    t = Hspace_0_0(t);
                                    h_65 = t;
                                    t = m_64;
                                    t = toh_0_0(t);
                                    j_65 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, h_65, j_65);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      o_64 = ATgetArgument(t, 0);
                                      m_64 = ATgetArgument(t, 1);
                                      t = o_64;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          l_64 = ATgetArgument(t, 0);
                                          t = l_64;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              j_64 = ATgetFirst((ATermList) t);
                                              k_64 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm r_17 = t;
                                                int s_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm q_27 = NULL,x_29 = NULL,y_29 = NULL;
                                                    t = j_64;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        x_29 = ATgetArgument(t, 0);
                                                        y_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm t_17 = t;
                                                      int u_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_31 = NULL,j_11 = NULL;
                                                          t = SSLgetAnnotations(j_64);
                                                          h_31 = t;
                                                          t = x_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = y_29;
                                                          q_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, x_29, y_29);
                                                          j_11 = t;
                                                          t = SSLsetAnnotations(j_11, h_31);
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
                                                                ATerm v_31 = NULL,k_11 = NULL;
                                                                t = SSLgetAnnotations(j_64);
                                                                v_31 = t;
                                                                t = x_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = y_29;
                                                                q_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, x_29, y_29);
                                                                k_11 = t;
                                                                t = SSLsetAnnotations(k_11, v_31);
                                                                LocalPopChoice(x_17);
                                                              }
                                                            else
                                                              {
                                                                t = v_17;
                                                                {
                                                                  ATerm y_17 = t;
                                                                  int a_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm i_32 = NULL,l_11 = NULL;
                                                                      t = SSLgetAnnotations(j_64);
                                                                      i_32 = t;
                                                                      t = x_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = y_29;
                                                                      q_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, x_29, y_29);
                                                                      l_11 = t;
                                                                      t = SSLsetAnnotations(l_11, i_32);
                                                                      LocalPopChoice(a_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_17;
                                                                      {
                                                                        ATerm b_18 = t;
                                                                        int c_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm u_32 = NULL,m_11 = NULL;
                                                                            t = SSLgetAnnotations(j_64);
                                                                            u_32 = t;
                                                                            t = x_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = y_29;
                                                                            q_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, x_29, y_29);
                                                                            m_11 = t;
                                                                            t = SSLsetAnnotations(m_11, u_32);
                                                                            LocalPopChoice(c_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_18;
                                                                            {
                                                                              ATerm e_33 = NULL,o_11 = NULL;
                                                                              t = SSLgetAnnotations(j_64);
                                                                              e_33 = t;
                                                                              t = x_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, x_29, y_29);
                                                                              o_11 = t;
                                                                              t = SSLsetAnnotations(o_11, e_33);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, y_29);
                                                                              q_27 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, q_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, k_64), m_64));
                                                    LocalPopChoice(s_17);
                                                  }
                                                else
                                                  {
                                                    t = r_17;
                                                    t = s_65(o_64, m_64, n_64, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = m_64;
                                                }
                                              else
                                                {
                                                  t = s_65(o_64, m_64, n_64, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = s_65(o_64, m_64, n_64, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          o_64 = ATgetArgument(t, 0);
                                          m_64 = ATgetArgument(t, 1);
                                          {
                                            ATerm m_65 = NULL;
                                            t = o_64;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = m_64;
                                            t = map_1_0(n_3, t);
                                            m_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, m_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              o_64 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = o_64;
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
ATerm topdown_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(h_74, t);
    return(t);
  }
  t = h_74(t);
  t = SRTS_all(r_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_66 = ATgetFirst((ATermList) t);
      {
        ATerm d_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            c_66 = ATgetFirst((ATermList) d_18);
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
  t = term_m_14;
  d_66 = t;
  t = SSL_table_put(d_66, b_66, c_66);
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, b_66, c_66);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  z_65 = t;
  t = term_m_14;
  a_66 = t;
  t = SSL_table_create(a_66);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_7;
        t = get_config_0_0(t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(s_3, t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
      }
  }
  t = z_65;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm h_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_is_string(u_66);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,u_20 = NULL;
  p_66 = t;
  if(match_cons(t, sym__2))
    {
      j_66 = ATgetArgument(t, 0);
      k_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_66);
  i_66 = t;
  t = k_66;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(u_3, t);
  n_66 = t;
  t = BOXENV_args_0_0(t);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, m_66, n_66);
  t = bottomup_1_0(v_3, t);
  t = collect_om_2_0(w_3, conc_0_0, t);
  o_66 = t;
  t = SSL_concat_strings(o_66);
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_66, l_66);
  u_20 = t;
  t = SSLsetAnnotations(u_20, i_66);
  return(t);
}
static ATerm q_6 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm v_66 = NULL;
  t = SSL_fputc(e_35, f_35);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_66);
  return(t);
}
static ATerm r_6 (ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm w_66 = NULL;
  t = SSL_write_term_to_stream_text(g_20, h_20);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_66);
  return(t);
}
static ATerm t_6 (ATerm k_80 (ATerm), ATerm t_208, ATerm m_20, ATerm t)
{
  ATerm x_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_208, term_r_18);
  t = x_6(t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_66, m_20);
  t = k_80(t);
  t = fclose_0_0(t);
  t = m_20;
  return(t);
}
static ATerm s_6 (ATerm c_20, ATerm d_20, ATerm t)
{
  ATerm y_66 = NULL;
  t = SSL_write_term_to_stream_baf(c_20, d_20);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_66);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm o_34 = NULL,q_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym_Stream_1))
        {
          o_34 = ATgetArgument(s_18, 0);
        }
      else
        _fail(t);
      q_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(o_34, q_34, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym_Stream_1))
        {
          v_35 = ATgetArgument(u_18, 0);
        }
      else
        _fail(t);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(v_35, w_35, t);
  p_35 = t;
  t = term_v_18;
  t_35 = t;
  t = p_35;
  if(match_cons(t, sym_Stream_1))
    {
      u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, p_35);
  t = q_6(t_35, u_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,m_68 = NULL,n_68 = NULL,x_20 = NULL,w_20 = NULL;
  d_67 = t;
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_67);
  j_67 = t;
  t = k_67;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(x_3, t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = term_y_18;
        c_67 = t;
      }
  }
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_67, l_67);
  w_20 = t;
  t = SSLsetAnnotations(w_20, j_67);
  t = d_67;
  if(match_cons(t, sym__2))
    {
      f_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_67);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_67, (ATerm) ATmakeAppl(sym__2, not_null(c_67), g_67));
  x_20 = t;
  t = SSLsetAnnotations(x_20, e_67);
  i_67 = t;
  if(match_cons(t, sym__2))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,y_20 = NULL;
        t = SSLgetAnnotations(i_67);
        a_34 = t;
        t = m_68;
        t = fetch_1_0(y_3, t);
        j_34 = t;
        t = n_68;
        if(match_cons(t, sym__2))
          {
            l_34 = ATgetArgument(t, 0);
            m_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_6(a_4, l_34, m_34, t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
        y_20 = t;
        t = SSLsetAnnotations(y_20, a_34);
        LocalPopChoice(b_19);
      }
    else
      {
        t = z_18;
        {
          ATerm i_35 = NULL,l_35 = NULL,n_35 = NULL,o_35 = NULL,f_21 = NULL;
          t = SSLgetAnnotations(i_67);
          i_35 = t;
          t = n_68;
          if(match_cons(t, sym__2))
            {
              n_35 = ATgetArgument(t, 0);
              o_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_6(b_4, n_35, o_35, t);
          l_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_68, l_35);
          f_21 = t;
          t = SSLsetAnnotations(f_21, i_35);
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
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
  u_68 = t;
  t = dtime_0_0(t);
  t = u_68;
  t = j_97(t);
  t_68 = t;
  t = dtime_0_0(t);
  q_68 = t;
  t = t_68;
  if(match_cons(t, sym__2))
    {
      r_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_68), (ATerm) ATmakeAppl(sym_Runtime_1, q_68)), s_68);
  return(t);
}
static ATerm i_69 (ATerm c_69, ATerm t)
{
  t = SSL_fclose(c_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL;
  g_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_69 = ATgetArgument(t, 0);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_69);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = i_69(g_69, t);
          }
      }
    }
  else
    {
      t = i_69(g_69, t);
    }
  return(t);
}
static ATerm u_6 (ATerm i_20, ATerm t)
{
  t = SSL_read_term_from_stream(i_20);
  return(t);
}
static ATerm w_6 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm j_69 = NULL;
  t = SSL_fopen(g_35, h_35);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_69 = NULL;
  t = SSL_stdin_stream();
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_69 = NULL;
  t = SSL_stdout_stream();
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_69 = NULL;
  t = SSL_stderr_stream();
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_69);
  return(t);
}
static ATerm t_70 (ATerm s_69, ATerm t)
{
  ATerm t_69 = NULL;
  t = SSL_explode_term(s_69);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            t_69 = ATgetFirst((ATermList) h_19);
            {
              ATerm i_19 = (ATerm) ATgetNext((ATermList) h_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_69;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_70 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,e_70 = NULL,q_21 = NULL;
  t = SSLgetAnnotations(y_69);
  b_70 = t;
  t = w_69;
  if(match_cons(t, sym_Path_1))
    {
      e_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_70, x_69);
  q_21 = t;
  t = SSLsetAnnotations(q_21, b_70);
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(z_69, a_70, t);
  return(t);
}
static ATerm v_70 (ATerm g_70, ATerm h_70, ATerm i_70, ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,o_70 = NULL,y_21 = NULL;
  t = SSLgetAnnotations(i_70);
  l_70 = t;
  t = SSL_is_string(g_70);
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_70, h_70);
  y_21 = t;
  t = SSLsetAnnotations(y_21, l_70);
  if(match_cons(t, sym__2))
    {
      j_70 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(j_70, k_70, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  if(match_cons(t, sym__2))
    {
      r_70 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
      {
        ATerm j_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_70(q_70, t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = j_19;
            {
              ATerm n_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_70(r_70, s_70, q_70, t);
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = n_19;
                  t = v_70(r_70, s_70, q_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_70(q_70, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,e_71 = NULL;
  e_71 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_71, term_r_19);
        t = x_6(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm r_36 = NULL,v_36 = NULL;
          t = term_s_19;
          v_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_19, e_71);
          t = v_6(v_36, e_71, t);
          r_36 = t;
          t = SSL_perror(r_36);
          _fail(t);
        }
      }
  }
  y_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(z_70, t);
  x_70 = t;
  t = y_70;
  t = fclose_0_0(t);
  t = x_70;
  return(t);
}
ATerm fetch_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  static ATerm d_72 (ATerm t)
  {
    ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL;
    a_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_72 = ATgetFirst((ATermList) t);
        c_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = NULL,g_39 = NULL,b_22 = NULL;
          t = SSLgetAnnotations(a_72);
          h_37 = t;
          t = b_72;
          t = d_81(t);
          g_39 = t;
          t = (ATerm) ATinsert(CheckATermList(c_72), g_39);
          b_22 = t;
          t = SSLsetAnnotations(b_22, h_37);
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm f_44 = NULL,i_44 = NULL,c_22 = NULL;
            t = SSLgetAnnotations(a_72);
            f_44 = t;
            t = c_72;
            t = d_72(t);
            i_44 = t;
            t = (ATerm) ATinsert(CheckATermList(i_44), b_72);
            c_22 = t;
            t = SSLsetAnnotations(c_22, f_44);
          }
        }
    }
    return(t);
  }
  t = d_72(t);
  return(t);
}
static ATerm v_6 (ATerm x_33, ATerm y_33, ATerm t)
{
  t = SSL_strcat(x_33, y_33);
  return(t);
}
ATerm debug_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  n_72 = t;
  t = i_80(t);
  o_72 = t;
  t = term_j_6;
  p_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_72), o_72);
  q_72 = t;
  t = SSL_printnl(p_72, q_72);
  t = n_72;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_72 = NULL;
      x_72 = t;
      t = SSL_is_string(x_72);
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
            t = map_1_0(e_4, t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
              d_73 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_73 = ATgetArgument(t, 0);
                  t = e_73;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_73 = ATgetArgument(t, 0);
                      t = e_73;
                      {
                        ATerm f_20 = t;
                        int j_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(j_20);
                          }
                        else
                          {
                            t = f_20;
                            t = debug_1_0(f_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_73 = NULL,k_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_73 = ATgetArgument(t, 0);
                          f_73 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_73;
                      t = eval_config_0_0(t);
                      j_73 = t;
                      t = f_73;
                      t = eval_config_0_0(t);
                      k_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_73, k_73);
                      t = v_6(j_73, k_73, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  o_73 = t;
  t = term_k_20;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, o_73);
  t = a_7(p_73, o_73, t);
  {
    ATerm l_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_73 = NULL,r_73 = NULL;
        t = eval_config_0_0(t);
        q_73 = t;
        t = term_k_20;
        r_73 = t;
        t = SSL_table_put(r_73, o_73, q_73);
        t = q_73;
        LocalPopChoice(n_20);
      }
    else
      {
        t = l_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_73 = NULL;
        t = term_s_20;
        t = get_config_0_0(t);
        x_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_73, term_t_20);
        t = geq_0_0(t);
        t = v_73;
        t = s_95(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = v_73;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_74 = NULL;
  g_74 = t;
  if(match_string(t, "-k"))
    {
      t = g_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_74;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  j_74 = t;
  t = SSL_string_to_int(j_74);
  k_74 = t;
  t = term_v_20;
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_20, k_74);
  t = d_7(l_74, k_74, t);
  t = j_74;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, j_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm n_74 = NULL;
  n_74 = t;
  if(match_string(t, "-S"))
    {
      t = n_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_74;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL;
  t = term_s_20;
  o_74 = t;
  t = term_l_15;
  p_74 = t;
  t = term_a_21;
  t = d_7(o_74, p_74, t);
  t = term_b_21;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  t = SSL_string_to_int(q_74);
  r_74 = t;
  t = term_s_20;
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, r_74);
  t = d_7(s_74, r_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_74);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_e_21;
  t_74 = t;
  t = term_i_6;
  u_74 = t;
  t = term_g_21;
  t = d_7(t_74, u_74, t);
  t = term_h_21;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_4, o_4, p_4, t);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = Option_3_0(q_4, r_4, s_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm v_74 = NULL;
  t = term_k_20;
  v_74 = t;
  t = SSL_table_put(v_74, x_44, y_44);
  t = (ATerm) ATmakeAppl(sym__3, term_k_20, x_44, y_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
      t = term_i_6;
      t = e_0(t);
      a_75 = t;
      t = term_n_21;
      b_75 = t;
      t = term_o_21;
      c_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_21, term_o_21, a_75);
      t = b_7(b_75, c_75, a_75, t);
      _fail(t);
    }
  else
    {
      ATerm f_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_74 = ATgetFirst((ATermList) t);
          z_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_74;
      t = c_0(t);
      t = term_i_6;
      t = d_0(t);
      f_75 = t;
      t = (ATerm) ATinsert(CheckATermList(z_74), f_75);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_75 = NULL;
  h_75 = t;
  if(match_string(t, "-o"))
    {
      t = h_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_75;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  i_75 = t;
  t = term_p_21;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, i_75);
  t = d_7(j_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_75);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
static ATerm b_7 (ATerm x_49, ATerm y_49, ATerm w_49, ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            ATerm v_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
        t = a_7(x_49, y_49, t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = (ATerm) ATempty;
      }
  }
  m_75 = t;
  t = (ATerm) ATinsert(CheckATermList(m_75), w_49);
  n_75 = t;
  t = SSL_table_put(x_49, y_49, n_75);
  t = l_75;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
      t = term_i_6;
      t = n_0(t);
      y_75 = t;
      t = term_n_21;
      z_75 = t;
      t = term_o_21;
      a_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_21, term_o_21, y_75);
      t = b_7(z_75, a_76, y_75, t);
      _fail(t);
    }
  else
    {
      ATerm e_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_75 = ATgetFirst((ATermList) t);
          v_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_75 = ATgetFirst((ATermList) t);
          x_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_75;
      t = k_0(t);
      t = w_75;
      t = l_0(t);
      e_76 = t;
      t = (ATerm) ATinsert(CheckATermList(x_75), e_76);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_76 = NULL;
  g_76 = t;
  if(match_string(t, "-i"))
    {
      t = g_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_76;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  h_76 = t;
  t = term_w_21;
  i_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, h_76);
  t = d_7(i_76, h_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_76);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_6;
  t = whoami_0_0(t);
  j_76 = t;
  t = term_j_6;
  l_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_21), j_76);
  m_76 = t;
  t = SSL_printnl(l_76, m_76);
  t = term_e_7;
  k_76 = t;
  t = SSL_exit(k_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_38, b_38);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      t = SSL_addr(a_38, b_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_76;
      t = a_87(t);
    }
  else
    {
      ATerm t_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_76 = ATgetFirst((ATermList) t);
          q_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_76;
      t = foldr_2_0(a_87, b_87, t);
      t_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_76, t_76);
      t = b_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm b_45 = NULL,g_45 = NULL;
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(b_45, g_45, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_76 = NULL,v_44 = NULL,w_44 = NULL;
  t = times_0_0(t);
  w_44 = t;
  t = SSL_explode_term(w_44);
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_44;
  t = foldr_2_0(z_4, a_5, t);
  w_76 = t;
  t = SSL_TicksToSeconds(w_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  if(match_cons(t, sym__2))
    {
      i_77 = ATgetArgument(t, 0);
      j_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_77;
        if((i_77 != t))
          {
            _fail(t);
          }
        t = h_77;
        LocalPopChoice(i_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATmakeAppl(sym__2, i_77, j_77);
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_77, j_77);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = SSL_gtr(i_77, j_77);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_77, j_77);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm n_77 = NULL;
  n_77 = t;
  {
    ATerm n_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_77 = NULL;
        t = term_s_20;
        t = get_config_0_0(t);
        p_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_77, term_e_7);
        t = geq_0_0(t);
        t = n_77;
        t = r_95(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = n_22;
        t = n_77;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,u_77 = NULL,v_77 = NULL;
  t = run_time_0_0(t);
  r_77 = t;
  t = term_i_6;
  t = whoami_0_0(t);
  s_77 = t;
  t = term_j_6;
  u_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_22), r_77), term_q_22), s_77);
  v_77 = t;
  t = SSL_printnl(u_77, v_77);
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_22), r_77), term_q_22), s_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  w_77 = t;
  t = SSL_exit(w_77);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  f_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_78 = ATgetArgument(t, 0);
          {
            ATerm n_48 = NULL,h_22 = NULL;
            t = SSLgetAnnotations(f_78);
            n_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_78);
            h_22 = t;
            t = SSLsetAnnotations(h_22, n_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = s_22;
      t = fetch_1_0(c_5, t);
    }
  t = h_98(t);
  return(t);
}
ATerm map_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  static ATerm v_78 (ATerm t)
  {
    ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
    s_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_78;
      }
    else
      {
        ATerm j_49 = NULL,v_49 = NULL,z_49 = NULL,j_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_78 = ATgetFirst((ATermList) t);
            u_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_78);
        j_49 = t;
        t = t_78;
        t = t_80(t);
        v_49 = t;
        t = u_78;
        t = v_78(t);
        z_49 = t;
        t = (ATerm) ATinsert(CheckATermList(z_49), v_49);
        j_22 = t;
        t = SSLsetAnnotations(j_22, j_49);
      }
    return(t);
  }
  t = v_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_78 = ATgetFirst((ATermList) t);
      z_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_79 = NULL,e_79 = NULL;
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_79)), not_null(e_79));
          return(t);
        }
        t = z_78;
        t = i_0(t);
        if(((d_79 != NULL) && (d_79 != t)))
          _fail(t);
        else
          d_79 = t;
        t = y_78;
        t = g_0(t);
        if(((e_79 != NULL) && (e_79 != t)))
          _fail(t);
        else
          e_79 = t;
        t = z_78;
        t = reverse_acc_2_0(g_0, e_5, t);
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
static ATerm a_7 (ATerm o_51, ATerm p_51, ATerm t)
{
  t = SSL_table_get(o_51, p_51);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,m_22 = NULL;
  k_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_79);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_79);
  m_22 = t;
  t = SSLsetAnnotations(m_22, i_79);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_79 = NULL;
  m_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_79), term_w_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_22;
      t = get_config_0_0(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = fetch_1_0(f_5, t);
    }
  t = term_a_23;
  t = echo_0_0(t);
  t = term_n_21;
  g_79 = t;
  t = term_o_21;
  h_79 = t;
  t = term_b_23;
  t = a_7(g_79, h_79, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(h_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_79;
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
            t = o_79;
          }
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, o_79);
      }
  }
  p_79 = t;
  t = term_y_18;
  q_79 = t;
  t = SSL_printnl(q_79, p_79);
  t = o_79;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL;
  t = term_g_23;
  u_79 = t;
  t = term_i_6;
  v_79 = t;
  t = term_h_23;
  t = d_7(u_79, v_79, t);
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
static ATerm n_5 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
  t = term_g_23;
  y_79 = t;
  t = term_i_6;
  z_79 = t;
  t = term_h_23;
  t = d_7(y_79, z_79, t);
  t = term_j_23;
  w_79 = t;
  t = term_i_6;
  x_79 = t;
  t = term_k_23;
  t = d_7(w_79, x_79, t);
  t = term_l_23;
  return(t);
}
static ATerm o_5 (ATerm t)
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
      t = Option_3_0(i_5, j_5, k_5, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = Option_3_0(l_5, n_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_59 (ATerm), ATerm p_59 (ATerm), ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,o_22 = NULL;
  f_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_80 = ATgetFirst((ATermList) t);
      c_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_80);
  a_80 = t;
  t = b_80;
  t = o_59(t);
  d_80 = t;
  t = c_80;
  t = p_59(t);
  e_80 = t;
  t = (ATerm) ATinsert(CheckATermList(e_80), d_80);
  o_22 = t;
  t = SSLsetAnnotations(o_22, a_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,q_80 = NULL,v_80 = NULL,w_80 = NULL,t_22 = NULL;
  m_80 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_23;
        t = k_100(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
      }
  }
  t = m_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_80 = ATgetFirst((ATermList) t);
      q_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_80);
  n_80 = t;
  t = term_a_22;
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, o_80);
  t = d_7(w_80, o_80, t);
  t = q_80;
  {
    static ATerm i_81 (ATerm t)
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_80 = NULL;
              z_80 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_80;
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              t = k_100(t);
              t = Cons_2_0(_id, i_81, t);
            }
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          {
            ATerm c_81 = NULL,f_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_81 = ATgetFirst((ATermList) t);
                f_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_81), (ATerm) ATmakeAppl(sym_Undefined_1, c_81));
          }
        }
      return(t);
    }
    t = i_81(t);
  }
  v_80 = t;
  t = (ATerm) ATinsert(CheckATermList(v_80), (ATerm) ATmakeAppl(sym_Program_1, o_80));
  t_22 = t;
  t = SSLsetAnnotations(t_22, n_80);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm a_82 = NULL;
  a_82 = t;
  if(match_string(t, "--help"))
    {
      t = a_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_82;
        }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  t = term_v_22;
  b_82 = t;
  t = term_i_6;
  c_82 = t;
  t = term_w_23;
  t = d_7(b_82, c_82, t);
  t = term_x_23;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL;
  t_81 = t;
  t = term_n_21;
  x_81 = t;
  t = term_o_21;
  y_81 = t;
  t = (ATerm) ATempty;
  z_81 = t;
  t = SSL_table_put(x_81, y_81, z_81);
  t = t_81;
  {
    static ATerm p_5 (ATerm t)
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_100(t);
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          {
            ATerm f_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_5, r_5, s_5, t);
                LocalPopChoice(h_24);
              }
            else
              {
                t = f_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_5, t);
  }
  {
    ATerm i_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_82 = NULL;
        l_82 = t;
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_52 = NULL;
              t = l_82;
              {
                ATerm n_24 = t;
                int o_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(o_24);
                  }
                else
                  {
                    t = n_24;
                    t = fetch_1_0(u_5, t);
                  }
              }
              t = l_82;
              t = default_system_usage_0_0(t);
              t = term_l_15;
              a_52 = t;
              t = SSL_exit(a_52);
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              {
                ATerm a_53 = NULL;
                t = term_g_23;
                t = get_config_0_0(t);
                t = l_82;
                t = default_system_about_0_0(t);
                t = term_l_15;
                a_53 = t;
                t = SSL_exit(a_53);
              }
            }
        }
        LocalPopChoice(k_24);
      }
    else
      {
        t = i_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
              static ATerm v_5 (ATerm t)
              {
                ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,z_22 = NULL;
                r_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_82);
                p_82 = t;
                t = q_82;
                if(((r_81 != NULL) && (r_81 != t)))
                  _fail(t);
                else
                  r_81 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_82);
                z_22 = t;
                t = SSLsetAnnotations(z_22, p_82);
                return(t);
              }
              t = fetch_1_0(v_5, t);
              t = term_j_6;
              n_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_81)), term_r_24);
              o_82 = t;
              t = SSL_printnl(n_82, o_82);
              t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_81)), term_r_24));
              t = default_system_usage_0_0(t);
              t = term_e_7;
              m_82 = t;
              t = SSL_exit(m_82);
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
            }
        }
      }
  }
  s_81 = t;
  t = term_n_21;
  u_81 = t;
  t = SSL_table_destroy(u_81);
  t = s_81;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  t = parse_options_1_0(j_98, t);
  w_82 = t;
  t = term_s_24;
  z_82 = t;
  t = SSL_table_create(z_82);
  t = term_s_24;
  x_82 = t;
  t = term_t_24;
  y_82 = t;
  t = SSL_table_put(x_82, y_82, w_82);
  t = w_82;
  t = l_98(t);
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_98, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_98(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = if_verbose2_1_0(g_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL;
  t = term_f_7;
  a_83 = t;
  t = term_i_6;
  b_83 = t;
  t = term_i_7;
  t = d_7(a_83, b_83, t);
  t = term_k_7;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  c_83 = t;
  t = term_a_22;
  t = get_config_0_0(t);
  d_83 = t;
  t = term_j_6;
  e_83 = t;
  t = (ATerm) ATinsert(ATempty, d_83);
  f_83 = t;
  t = SSL_printnl(e_83, f_83);
  t = c_83;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_97(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                ATerm d_25 = t;
                int e_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_25);
                  }
                else
                  {
                    t = d_25;
                    {
                      ATerm f_25 = t;
                      int g_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_6, d_6, e_6, t);
                          LocalPopChoice(g_25);
                        }
                      else
                        {
                          t = f_25;
                          {
                            ATerm j_25 = t;
                            int k_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_25);
                              }
                            else
                              {
                                t = j_25;
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
    ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
    h_83 = t;
    {
      ATerm l_25 = t;
      int m_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_83 != NULL) && (g_83 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_83 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_6, t);
          LocalPopChoice(m_25);
        }
      else
        {
          t = l_25;
          t = term_n_25;
          g_83 = t;
        }
    }
    t = not_null(g_83);
    t = ReadFromFile_0_0(t);
    i_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_83, i_83);
    t = apply_strategy_1_0(s_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_5, u_97, x_5, z_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
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
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
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
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
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
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
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
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_m_20;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_z_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_b_16;
ATerm term_m_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_v_11;
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
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
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
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_o_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_o_6);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_m_15);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_15);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_o_6);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_p_21);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_o_6);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_o_6);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_o_6);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
ATerm foldr_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm collect_om_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t);
static ATerm u_41 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm p_72 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm j_6 (ATerm p_18, ATerm t);
ATerm listtd_1_0 (ATerm j_80 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm latex_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm s_70 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm u_79 (ATerm), ATerm t);
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
static ATerm k_6 (ATerm o_20, ATerm p_20, ATerm t);
ATerm filter_1_0 (ATerm h_86 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm n_70 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm d_55 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm l_6 (ATerm n_15, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm b_80 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_79 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm m_6 (ATerm j_15, ATerm t);
static ATerm n_6 (ATerm z_37, ATerm a_38, ATerm t);
ATerm while_not_2_0 (ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm p_65 (ATerm z_63, ATerm a_64, ATerm b_64, ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_72 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm abox2latex_0_0 (ATerm t);
static ATerm q_6 (ATerm y_34, ATerm z_34, ATerm t);
static ATerm r_6 (ATerm g_20, ATerm h_20, ATerm t);
static ATerm t_6 (ATerm r_78 (ATerm), ATerm x_205, ATerm k_20, ATerm t);
static ATerm s_6 (ATerm c_20, ATerm d_20, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_95 (ATerm), ATerm t);
static ATerm f_69 (ATerm z_68, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_6 (ATerm i_20, ATerm t);
static ATerm v_6 (ATerm a_35, ATerm b_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_70 (ATerm p_69, ATerm t);
static ATerm y_70 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t);
static ATerm z_70 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_79 (ATerm), ATerm t);
static ATerm p_6 (ATerm r_33, ATerm s_33, ATerm t);
ATerm debug_1_0 (ATerm p_78 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm q_93 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_7 (ATerm u_43, ATerm v_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_7 (ATerm u_48, ATerm v_48, ATerm t_48, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm t_37, ATerm u_37, ATerm t);
ATerm foldr_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_93 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm need_help_1_0 (ATerm f_96 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_79 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm l_50, ATerm m_50, ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_98 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm parse_options_1_0 (ATerm h_98 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm iowrap_3_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t);
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
  t = term_o_6;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_y_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), j_0), term_b_7);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_f_7;
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
  t = term_h_7;
  q_0 = t;
  t = term_o_6;
  s_0 = t;
  t = term_j_7;
  t = c_7(q_0, s_0, t);
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
  t = term_n_7;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, t_0);
  t = c_7(u_0, t_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_o_7;
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
  t = term_p_7;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, z_0);
  t = c_7(c_1, z_0, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
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
                    ATerm z_7 = t;
                    int a_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_8);
                      }
                    else
                      {
                        t = z_7;
                        {
                          ATerm d_8 = t;
                          int e_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(e_8);
                            }
                          else
                            {
                              t = d_8;
                              {
                                ATerm f_8 = t;
                                int h_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(b_1, d_1, f_1, t);
                                    LocalPopChoice(h_8);
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
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_1 (ATerm t)
            {
              t = r_1;
              return(t);
            }
            t = p_1;
            t = at_end_1_0(j_1, t);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
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
ATerm foldr_3_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  x_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
      t = f_85(t);
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
      t = h_85(t);
      c_2 = t;
      t = z_1;
      t = foldr_3_0(f_85, g_85, h_85, t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, d_2);
      t = g_85(t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL;
      t = j_84(t);
      g_2 = t;
      t = (ATerm) ATinsert(ATempty, g_2);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        static ATerm n_1 (ATerm t)
        {
          t = collect_om_2_0(j_84, k_84, t);
          return(t);
        }
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm n_8 = ATgetArgument(t, 0);
            a_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_0;
        t = foldr_3_0(k_1, k_84, n_1, t);
      }
    }
  return(t);
}
static ATerm u_41 (ATerm n_2, ATerm o_2, ATerm p_2, ATerm t)
{
  ATerm h_3 = NULL;
  t = SSL_is_int(n_2);
  t = SSL_int_to_string(n_2);
  h_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), o_2), term_q_8), h_3), term_p_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL,n_3 = NULL,s_3 = NULL,t_3 = NULL,z_3 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      s_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
      t = s_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), z_3), term_s_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_3 = ATgetFirst((ATermList) t);
              i_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_8), z_3), term_y_8), t_3), term_v_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          s_3 = ATgetArgument(t, 0);
          z_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_9), z_3), term_y_8), s_3), term_z_8);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              s_3 = ATgetArgument(t, 0);
              z_3 = ATgetArgument(t, 1);
              l_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), l_3), term_y_8), z_3), term_q_8), s_3), term_b_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  s_3 = ATgetArgument(t, 0);
                  z_3 = ATgetArgument(t, 1);
                  l_3 = ATgetArgument(t, 2);
                  n_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_9), n_3), term_y_8), l_3), term_q_8), z_3), term_q_8), s_3), term_d_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      s_3 = ATgetArgument(t, 0);
                      z_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), z_3), term_y_8), s_3), term_f_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          s_3 = ATgetArgument(t, 0);
                          z_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_9), z_3), term_i_9), s_3), term_h_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              s_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), s_3), term_k_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  s_3 = ATgetArgument(t, 0);
                                  z_3 = ATgetArgument(t, 1);
                                  t = s_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm m_9 = t;
                                      int n_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_41(s_3, z_3, c_4, t);
                                          LocalPopChoice(n_9);
                                        }
                                      else
                                        {
                                          t = m_9;
                                          {
                                            ATerm o_9 = t;
                                            int p_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), z_3), term_q_9);
                                                LocalPopChoice(p_9);
                                              }
                                            else
                                              {
                                                t = o_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), z_3), term_y_8), s_3), term_s_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm t_9 = t;
                                      int u_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_41(s_3, z_3, c_4, t);
                                          LocalPopChoice(u_9);
                                        }
                                      else
                                        {
                                          t = t_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_9), z_3), term_y_8), s_3), term_s_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      s_3 = ATgetArgument(t, 0);
                                      z_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_w_9), s_3), term_v_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          s_3 = ATgetArgument(t, 0);
                                          z_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_q_8), s_3), term_x_9);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              s_3 = ATgetArgument(t, 0);
                                              z_3 = ATgetArgument(t, 1);
                                              t = s_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_y_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_z_9);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_a_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_b_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_c_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_d_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_e_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_f_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_g_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_h_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_i_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_j_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_k_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_l_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_m_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_n_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_o_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_p_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_q_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_r_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_s_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_t_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_u_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_v_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  t_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_9), z_3), term_q_8), t_3), term_w_10);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_x_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_y_10;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_z_10;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_a_11;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_b_11;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(p_72, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = p_72(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_41 = NULL;
      t = term_p_7;
      t = get_config_0_0(t);
      v_41 = t;
      t = (ATerm) ATinsert(ATempty, v_41);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_43;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_43 = ATgetFirst((ATermList) t);
          g_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 = NULL,e_1 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(e_43);
            a_1 = t;
            t = f_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_43;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), f_43);
            h_0 = t;
            t = SSLsetAnnotations(h_0, a_1);
            LocalPopChoice(h_11);
          }
        else
          {
            t = f_11;
            {
              ATerm m_11 = t;
              int p_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 = NULL,w_1 = NULL,h_2 = NULL,k_2 = NULL,r_0 = NULL;
                  t = SSLgetAnnotations(e_43);
                  h_2 = t;
                  t = f_43;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_43;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm q_11 = ATgetFirst((ATermList) t);
                          ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_43;
                    }
                  t = (ATerm) ATinsert(CheckATermList(g_43), f_43);
                  r_0 = t;
                  t = SSLsetAnnotations(r_0, h_2);
                  k_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm s_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = k_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_11 = ATgetFirst((ATermList) t);
                      q_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_1, q_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(p_11);
                }
              else
                {
                  t = m_11;
                  {
                    ATerm o_3 = NULL,r_3 = NULL,v_0 = NULL;
                    t = SSLgetAnnotations(e_43);
                    o_3 = t;
                    t = g_43;
                    t = flat_list_0_0(t);
                    r_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(r_3), f_43);
                    v_0 = t;
                    t = SSLsetAnnotations(v_0, o_3);
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
  ATerm m_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(u_11) != AT_INT) || (ATgetInt((ATermInt) u_11) != 34)))
        _fail(t);
      m_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(m_43), term_v_11), term_v_11);
  return(t);
}
static ATerm j_6 (ATerm p_18, ATerm t)
{
  ATerm l_43 = NULL;
  t = p_18;
  t = at_suffix_1_0(t_1, t);
  l_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_43), term_w_11), term_w_11);
  return(t);
}
ATerm listtd_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  static ATerm c_44 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
    t = j_80(t);
    z_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_43;
      }
    else
      {
        ATerm d_4 = NULL,j_4 = NULL,d_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_44 = ATgetFirst((ATermList) t);
            b_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_43);
        d_4 = t;
        t = b_44;
        t = c_44(t);
        j_4 = t;
        t = (ATerm) ATinsert(CheckATermList(j_4), a_44);
        d_5 = t;
        t = SSLsetAnnotations(d_5, d_4);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL,m_7 = NULL;
  m_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_7 = ATgetFirst((ATermList) t);
      i_7 = (ATerm) ATgetNext((ATermList) t);
      t = g_7;
      if(match_int(t, 34))
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_7;
              t = j_6(i_7, t);
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              t = m_7;
            }
        }
      else
        {
          t = m_7;
        }
    }
  else
    {
      t = m_7;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  if(match_int(t, 32))
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_12 = NULL;
          t = term_c_12;
          b_12 = t;
          t = SSL_explode_string(b_12);
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          t = x_8;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_12 = NULL;
              t = term_g_12;
              d_12 = t;
              t = SSL_explode_string(d_12);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = x_8;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm j_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_12 = NULL;
                  t = term_q_12;
                  h_12 = t;
                  t = SSL_explode_string(h_12);
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = j_12;
                  t = x_8;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm s_12 = t;
                  int v_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_12 = NULL;
                      t = term_w_12;
                      i_12 = t;
                      t = SSL_explode_string(i_12);
                      LocalPopChoice(v_12);
                    }
                  else
                    {
                      t = s_12;
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
                          ATerm l_12 = NULL;
                          t = term_c_13;
                          l_12 = t;
                          t = SSL_explode_string(l_12);
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
                          ATerm d_13 = t;
                          int e_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_12 = NULL;
                              t = term_f_13;
                              m_12 = t;
                              t = SSL_explode_string(m_12);
                              LocalPopChoice(e_13);
                            }
                          else
                            {
                              t = d_13;
                              t = x_8;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm g_13 = t;
                              int i_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_12 = NULL;
                                  t = term_k_13;
                                  n_12 = t;
                                  t = SSL_explode_string(n_12);
                                  LocalPopChoice(i_13);
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
                                  ATerm l_13 = t;
                                  int n_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm o_12 = NULL;
                                      t = term_o_13;
                                      o_12 = t;
                                      t = SSL_explode_string(o_12);
                                      LocalPopChoice(n_13);
                                    }
                                  else
                                    {
                                      t = l_13;
                                      t = x_8;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm p_13 = t;
                                      int q_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_12 = NULL;
                                          t = term_r_13;
                                          p_12 = t;
                                          t = SSL_explode_string(p_12);
                                          LocalPopChoice(q_13);
                                        }
                                      else
                                        {
                                          t = p_13;
                                          t = x_8;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm s_13 = t;
                                          int t_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm r_12 = NULL;
                                              t = term_u_13;
                                              r_12 = t;
                                              t = SSL_explode_string(r_12);
                                              LocalPopChoice(t_13);
                                            }
                                          else
                                            {
                                              t = s_13;
                                              t = x_8;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm v_13 = t;
                                              int w_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_12 = NULL;
                                                  t = term_x_13;
                                                  t_12 = t;
                                                  t = SSL_explode_string(t_12);
                                                  LocalPopChoice(w_13);
                                                }
                                              else
                                                {
                                                  t = v_13;
                                                  t = x_8;
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
                                                      ATerm u_12 = NULL;
                                                      t = term_a_14;
                                                      u_12 = t;
                                                      t = SSL_explode_string(u_12);
                                                      LocalPopChoice(z_13);
                                                    }
                                                  else
                                                    {
                                                      t = y_13;
                                                      t = x_8;
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
                                                          ATerm z_12 = NULL;
                                                          t = term_d_14;
                                                          z_12 = t;
                                                          t = SSL_explode_string(z_12);
                                                          LocalPopChoice(c_14);
                                                        }
                                                      else
                                                        {
                                                          t = b_14;
                                                          t = x_8;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm e_14 = t;
                                                          int g_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_13 = NULL;
                                                              t = term_h_14;
                                                              a_13 = t;
                                                              t = SSL_explode_string(a_13);
                                                              LocalPopChoice(g_14);
                                                            }
                                                          else
                                                            {
                                                              t = e_14;
                                                              t = x_8;
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
                                                                  ATerm b_13 = NULL;
                                                                  t = term_k_14;
                                                                  b_13 = t;
                                                                  t = SSL_explode_string(b_13);
                                                                  LocalPopChoice(j_14);
                                                                }
                                                              else
                                                                {
                                                                  t = i_14;
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
  ATerm y_46 = NULL;
  y_46 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL;
        t = term_n_14;
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_14, y_46);
        t = z_6(a_47, y_46, t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
          ATerm e_7 = NULL;
          t = SSL_explode_string(y_46);
          t = listtd_1_0(u_1, t);
          t = map_1_0(a_2, t);
          t = flat_list_0_0(t);
          e_7 = t;
          t = SSL_implode_string(e_7);
        }
      }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  static ATerm n_48 (ATerm t)
  {
    ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
    k_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_48 = ATgetFirst((ATermList) t);
        j_48 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL,j_13 = NULL,m_13 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(k_48);
              j_13 = t;
              t = i_48;
              t = s_70(t);
              m_13 = t;
              t = (ATerm) ATinsert(CheckATermList(j_48), m_13);
              p_5 = t;
              t = SSLsetAnnotations(p_5, j_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_14 = ATgetFirst((ATermList) t);
                  h_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_13;
              t = n_48(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = k_48;
            }
        }
      }
    else
      {
        t = k_48;
      }
    return(t);
  }
  t = n_48(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  static ATerm g_49 (ATerm t)
  {
    ATerm r_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = r_14;
        {
          ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,f_14 = NULL,s_14 = NULL,w_5 = NULL;
          d_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_49 = ATgetFirst((ATermList) t);
              f_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_49);
          f_14 = t;
          t = f_49;
          t = g_49(t);
          s_14 = t;
          t = (ATerm) ATinsert(CheckATermList(s_14), e_49);
          w_5 = t;
          t = SSLsetAnnotations(w_5, f_14);
        }
      }
    return(t);
  }
  t = g_49(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_49 = NULL;
  m_49 = t;
  if(match_int(t, 9))
    {
      t = m_49;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = m_49;
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
  ATerm k_49 = NULL,l_49 = NULL;
  t = remove_trailing_1_0(b_2, t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_2 (ATerm t)
        {
          ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,y_5 = NULL;
          r_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_49 = ATgetFirst((ATermList) t);
              p_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_49);
          n_49 = t;
          t = o_49;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = p_49;
          {
            static ATerm i_2 (ATerm t)
            {
              if(((k_49 != NULL) && (k_49 != t)))
                _fail(t);
              else
                k_49 = t;
              return(t);
            }
            t = Cons_2_0(f_2, i_2, t);
          }
          q_49 = t;
          t = (ATerm) ATinsert(CheckATermList(q_49), o_49);
          y_5 = t;
          t = SSLsetAnnotations(y_5, n_49);
          t = not_null(k_49);
          return(t);
        }
        t = at_suffix_1_0(e_2, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
      }
  }
  l_49 = t;
  t = SSL_implode_string(l_49);
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
  ATerm z_50 = NULL;
  z_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_14), z_50);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  a_50 = t;
  t = SSL_explode_string(a_50);
  t = reverse_acc_2_0(_id, j_2, t);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, (ATerm) ATempty);
  {
    static ATerm a_51 (ATerm t)
    {
      ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
      if(match_cons(t, sym__2))
        {
          d_50 = ATgetArgument(t, 0);
          g_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_50;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm k_50 = NULL;
          t = g_50;
          t = LatexComment_0_0(t);
          k_50 = t;
          t = (ATerm) ATinsert(ATempty, k_50);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_50 = ATgetFirst((ATermList) t);
              f_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_50;
          if(match_int(t, 10))
            {
              ATerm x_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_50 = NULL,r_50 = NULL;
                  t = g_50;
                  t = LatexComment_0_0(t);
                  q_50 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATempty);
                  t = a_51(t);
                  r_50 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_50), q_50);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATinsert(CheckATermList(g_50), e_50));
                  t = a_51(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATinsert(CheckATermList(g_50), e_50));
              t = a_51(t);
            }
        }
      return(t);
    }
    t = a_51(t);
  }
  t = remove_trailing_1_0(l_2, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = remove_trailing_1_0(q_2, t);
  t = map_1_0(r_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  t = filter_1_0(s_2, t);
  d_15 = t;
  t = term_a_15;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, d_15);
  t = k_6(c_15, d_15, t);
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
  ATerm b_51 = NULL;
  ATerm b_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = b_15;
      t = term_f_7;
    }
  b_51 = t;
  t = SSL_int_to_string(b_51);
  return(t);
}
static ATerm k_6 (ATerm o_20, ATerm p_20, ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = p_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_20;
    }
  else
    {
      ATerm o_15 = NULL,r_15 = NULL,a_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_51 = ATgetFirst((ATermList) t);
          s_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_20);
      o_15 = t;
      t = s_51;
      {
        static ATerm v_15 (ATerm t)
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 = NULL;
              s_15 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_15;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              {
                ATerm t_15 = NULL;
                t = Cons_2_0(_id, v_15, t);
                t_15 = t;
                t = (ATerm) ATinsert(CheckATermList(t_15), o_20);
              }
            }
          return(t);
        }
        t = v_15(t);
      }
      r_15 = t;
      t = (ATerm) ATinsert(CheckATermList(r_15), r_51);
      a_6 = t;
      t = SSLsetAnnotations(a_6, o_15);
    }
  return(t);
}
ATerm filter_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_52;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_52 = ATgetFirst((ATermList) t);
          k_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(i_52);
            c_16 = t;
            t = j_52;
            t = h_86(t);
            f_16 = t;
            t = k_52;
            t = filter_1_0(h_86, t);
            g_16 = t;
            t = (ATerm) ATinsert(CheckATermList(g_16), f_16);
            d_6 = t;
            t = SSLsetAnnotations(d_6, c_16);
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            t = k_52;
            t = filter_1_0(h_86, t);
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
  ATerm n_52 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = term_m_15;
    }
  n_52 = t;
  t = SSL_int_to_string(n_52);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm n_70 (ATerm), ATerm t)
{
  ATerm o_52 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,i_6 = NULL;
    t_52 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        q_52 = ATgetArgument(t, 0);
        r_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_52);
    p_52 = t;
    t = q_52;
    t = n_70(t);
    s_52 = t;
    t = r_52;
    if(((o_52 != NULL) && (o_52 != t)))
      _fail(t);
    else
      o_52 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, s_52, r_52);
    i_6 = t;
    t = SSLsetAnnotations(i_6, p_52);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(o_52));
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
  ATerm u_52 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = term_m_15;
    }
  u_52 = t;
  t = SSL_int_to_string(u_52);
  return(t);
}
static ATerm d_55 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm h_53 = NULL,v_7 = NULL;
  t = SSLgetAnnotations(d_53);
  h_53 = t;
  t = c_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_53), b_53);
  v_7 = t;
  t = SSLsetAnnotations(v_7, h_53);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,c_8 = NULL;
  p_54 = t;
  if(match_cons(t, sym_C_2))
    {
      n_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_54);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, n_54, o_54);
  c_8 = t;
  t = SSLsetAnnotations(c_8, m_54);
  return(t);
}
static ATerm l_6 (ATerm n_15, ATerm t)
{
  static ATerm c_55 (ATerm t)
  {
    static ATerm e_55 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
    {
      ATerm r_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,b_8 = NULL,y_7 = NULL;
      t = SSLgetAnnotations(n_53);
      r_53 = t;
      t = l_53;
      if(match_cons(t, sym_C_2))
        {
          w_53 = ATgetArgument(t, 0);
          x_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_53);
      v_53 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, w_53, x_53);
      y_7 = t;
      t = SSLsetAnnotations(y_7, v_53);
      y_53 = t;
      t = m_53;
      t = Cons_2_0(_id, c_55, t);
      u_53 = t;
      t = (ATerm) ATinsert(CheckATermList(u_53), y_53);
      b_8 = t;
      t = SSLsetAnnotations(b_8, r_53);
      return(t);
    }
    static ATerm f_55 (ATerm b_54, ATerm c_54, ATerm d_54, ATerm t)
    {
      ATerm h_54 = NULL,k_54 = NULL,g_8 = NULL;
      t = SSLgetAnnotations(d_54);
      h_54 = t;
      t = c_54;
      t = Cons_2_0(x_2, c_55, t);
      k_54 = t;
      t = (ATerm) ATinsert(CheckATermList(k_54), b_54);
      g_8 = t;
      t = SSLsetAnnotations(g_8, h_54);
      return(t);
    }
    ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
    q_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_54 = ATgetFirst((ATermList) t);
            s_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_54 = ATgetFirst((ATermList) t);
            u_54 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm u_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_55(r_54, s_54, q_54, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = u_15;
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_55(r_54, s_54, q_54, t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm z_15 = t;
                          int a_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_55(r_54, s_54, q_54, t);
                              LocalPopChoice(a_16);
                            }
                          else
                            {
                              t = z_15;
                              {
                                ATerm b_55 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(u_54), t_54);
                                t = c_55(t);
                                b_55 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(b_55), term_b_16), r_54);
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
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_55(r_54, s_54, q_54, t);
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
                {
                  ATerm h_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_55(r_54, s_54, q_54, t);
                      LocalPopChoice(i_16);
                    }
                  else
                    {
                      t = h_16;
                      t = f_55(r_54, s_54, q_54, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = n_15;
  t = c_55(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym_LBL_2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
        t = s_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(t_16, t);
        t = s_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            s_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(s_16, t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, r_55, r_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          s_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_55;
      t = l_6(s_55, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  static ATerm s_56 (ATerm t)
  {
    ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
    p_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_56 = ATgetFirst((ATermList) t);
        r_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 = NULL,o_8 = NULL;
          t = SSLgetAnnotations(p_56);
          a_17 = t;
          t = r_56;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_56), q_56);
          o_8 = t;
          t = SSLsetAnnotations(o_8, a_17);
          t = b_80(t);
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm k_17 = NULL,n_17 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(p_56);
            k_17 = t;
            t = r_56;
            t = s_56(t);
            n_17 = t;
            t = (ATerm) ATinsert(CheckATermList(n_17), q_56);
            t_8 = t;
            t = SSLsetAnnotations(t_8, k_17);
          }
        }
    }
    return(t);
  }
  t = s_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  static ATerm i_57 (ATerm t)
  {
    ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
    h_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_57 = ATgetFirst((ATermList) t);
        g_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_17 = NULL,b_18 = NULL,w_8 = NULL;
          t = SSLgetAnnotations(h_57);
          x_17 = t;
          t = g_57;
          t = i_57(t);
          b_18 = t;
          t = (ATerm) ATinsert(CheckATermList(b_18), f_57);
          w_8 = t;
          t = SSLsetAnnotations(w_8, x_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_57;
        t = q_79(t);
      }
    return(t);
  }
  t = i_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_57;
    }
  else
    {
      static ATerm y_2 (ATerm t)
      {
        t = not_null(n_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_57 = ATgetFirst((ATermList) t);
          if(((n_57 != NULL) && (n_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_57;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm n_58 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      n_58 = ATgetArgument(t, 0);
      {
        ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
        t = n_58;
        t = Hspace_0_0(t);
        k_18 = t;
        t = SSL_string_to_int(k_18);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_a_15);
        t = copy_0_0(t);
        i_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_o_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          n_58 = ATgetArgument(t, 0);
          {
            ATerm o_18 = NULL,q_18 = NULL,w_18 = NULL;
            t = n_58;
            t = Hspace_0_0(t);
            w_18 = t;
            t = SSL_string_to_int(w_18);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_18, term_a_15);
            t = copy_0_0(t);
            o_18 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_18), term_p_16);
          }
        }
      else
        {
          ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              n_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_58;
          t = Hspace_0_0(t);
          e_19 = t;
          t = SSL_string_to_int(e_19);
          c_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_19, term_a_15);
          t = copy_0_0(t);
          b_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, b_19), term_q_16);
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_16);
  return(t);
}
static ATerm m_6 (ATerm j_15, ATerm t)
{
  ATerm l_19 = NULL,o_19 = NULL;
  t = j_15;
  t = map_1_0(z_2, t);
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_16);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_16), o_19);
  t = k_6(l_19, o_19, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
static ATerm n_6 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_37, a_38);
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      t = SSL_subtr(z_37, a_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm t)
{
  static ATerm r_58 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_72(t);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = g_72(t);
        t = r_58(t);
      }
    return(t);
  }
  t = r_58(t);
  return(t);
}
ATerm for_3_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  t = i_72(t);
  t = while_not_2_0(j_72, k_72, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL;
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_58, v_58, (ATerm) ATempty);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm w_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      if(((ATgetType(z_16) != AT_INT) || (ATgetInt((ATermInt) z_16) != 0)))
        _fail(t);
      {
        ATerm b_17 = ATgetArgument(t, 1);
      }
      w_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_58;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  if(match_cons(t, sym__3))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
      z_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_58, term_f_7);
  t = geq_0_0(t);
  t = term_f_7;
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_58, term_f_7);
  t = n_6(x_58, b_59, t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_59, y_58, (ATerm) ATinsert(CheckATermList(z_58), y_58));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_3, c_3, d_3, t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,z_19 = NULL,e_11 = NULL;
        j_59 = t;
        if(match_cons(t, sym__2))
          {
            k_59 = ATgetArgument(t, 0);
            l_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_59);
        z_19 = t;
        t = k_59;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
        e_11 = t;
        t = SSLsetAnnotations(e_11, z_19);
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
  ATerm e_17 = t;
  if((PushChoice() == 0))
    {
      ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,g_11 = NULL;
      y_60 = t;
      if(match_cons(t, sym_R_2))
        {
          w_60 = ATgetArgument(t, 0);
          x_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_60);
      v_60 = t;
      t = x_60;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, w_60, x_60);
      g_11 = t;
      t = SSLsetAnnotations(g_11, v_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_17;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm s_59 = NULL;
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_59, (ATerm) ATempty);
  {
    static ATerm z_60 (ATerm t)
    {
      ATerm t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
      if(match_cons(t, sym__2))
        {
          w_59 = ATgetArgument(t, 0);
          z_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_59;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_60 = NULL;
          t = z_59;
          t = reverse_acc_2_0(_id, e_3, t);
          e_60 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, e_60));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_59 = ATgetFirst((ATermList) t);
              y_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_59;
          if(match_cons(t, sym_R_2))
            {
              t_59 = ATgetArgument(t, 0);
              u_59 = ATgetArgument(t, 1);
              {
                ATerm f_17 = t;
                int g_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_60 = NULL,l_60 = NULL;
                    t = z_59;
                    t = reverse_acc_2_0(_id, f_3, t);
                    k_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_59, (ATerm) ATempty);
                    t = z_60(t);
                    l_60 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(l_60), (ATerm) ATmakeAppl(sym_R_2, t_59, u_59)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, k_60));
                    LocalPopChoice(g_17);
                  }
                else
                  {
                    t = f_17;
                    t = (ATerm) ATmakeAppl(sym__2, y_59, (ATerm) ATinsert(CheckATermList(z_59), x_59));
                    t = z_60(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, y_59, (ATerm) ATinsert(CheckATermList(z_59), x_59));
              t = z_60(t);
            }
        }
      return(t);
    }
    t = z_60(t);
  }
  t = filter_1_0(g_3, t);
  return(t);
}
static ATerm p_65 (ATerm z_63, ATerm a_64, ATerm b_64, ATerm t)
{
  t = z_63;
  if(match_cons(t, sym_KW_0))
    {
      t = z_63;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = z_63;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = z_63;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = z_63;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, z_63, a_64);
  return(t);
}
static ATerm j_3 (ATerm t)
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
static ATerm k_3 (ATerm t)
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
static ATerm m_3 (ATerm t)
{
  ATerm k_65 = NULL;
  if(match_cons(t, sym_S_1))
    {
      k_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_65;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  k_64 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_64 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, l_64, j_64);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          l_64 = ATgetArgument(t, 0);
          j_64 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, l_64, j_64);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              l_64 = ATgetArgument(t, 0);
              j_64 = ATgetArgument(t, 1);
              {
                ATerm y_23 = NULL;
                t = k_64;
                {
                  ATerm j_17 = t;
                  int l_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(l_64);
                      y_23 = t;
                      LocalPopChoice(l_17);
                    }
                  else
                    {
                      t = j_17;
                      {
                        ATerm m_17 = t;
                        int o_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,k_24 = NULL,i_11 = NULL;
                            t = SSL_explode_string(l_64);
                            k_24 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_24 = ATgetFirst((ATermList) t);
                                i_24 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(k_24);
                            f_24 = t;
                            t = g_24;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(i_24), g_24);
                            i_11 = t;
                            t = SSLsetAnnotations(i_11, f_24);
                            t = (ATerm) ATinsert(ATempty, term_p_17);
                            c_24 = t;
                            t = SSL_implode_string(c_24);
                            y_23 = t;
                            LocalPopChoice(o_17);
                          }
                        else
                          {
                            t = m_17;
                            t = l_64;
                            y_23 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, y_23, j_64);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  l_64 = ATgetArgument(t, 0);
                  j_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, l_64, j_64);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      l_64 = ATgetArgument(t, 0);
                      j_64 = ATgetArgument(t, 1);
                      f_64 = ATgetArgument(t, 2);
                      {
                        ATerm e_25 = NULL,m_25 = NULL,q_25 = NULL,r_25 = NULL,v_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,v_26 = NULL;
                        t = f_64;
                        t = construct_rows_0_0(t);
                        q_25 = t;
                        t = j_64;
                        t = Vspace_0_0(t);
                        z_25 = t;
                        t = SSL_string_to_int(z_25);
                        e_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, e_25, term_u_16);
                        t = copy_0_0(t);
                        x_25 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_25, (ATerm) ATinsert(ATinsert(ATempty, term_w_14), term_u_16));
                        t = conc_0_0(t);
                        r_25 = t;
                        t = l_64;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            y_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_6(y_25, t);
                        m_25 = t;
                        t = q_25;
                        t = map_1_0(MkRows_0_0, t);
                        v_26 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_25, v_26);
                        t = k_6(r_25, v_26, t);
                        v_25 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, m_25, v_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          l_64 = ATgetArgument(t, 0);
                          j_64 = ATgetArgument(t, 1);
                          {
                            ATerm s_64 = NULL,t_64 = NULL,v_64 = NULL,x_64 = NULL,a_27 = NULL,b_27 = NULL;
                            t = l_64;
                            t = Hspace_0_0(t);
                            s_64 = t;
                            t = l_64;
                            t = Vspace_0_0(t);
                            t_64 = t;
                            t = l_64;
                            t = Ispace_0_0(t);
                            v_64 = t;
                            t = j_64;
                            t = filter_1_0(j_3, t);
                            b_27 = t;
                            t = term_q_17;
                            a_27 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_q_17, b_27);
                            t = k_6(a_27, b_27, t);
                            x_64 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, s_64, t_64, v_64, x_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              l_64 = ATgetArgument(t, 0);
                              j_64 = ATgetArgument(t, 1);
                              {
                                ATerm y_64 = NULL,a_65 = NULL,c_65 = NULL,e_27 = NULL,f_27 = NULL;
                                t = l_64;
                                t = Vspace_0_0(t);
                                y_64 = t;
                                t = l_64;
                                t = Ispace_0_0(t);
                                a_65 = t;
                                t = j_64;
                                t = filter_1_0(k_3, t);
                                f_27 = t;
                                t = term_r_17;
                                e_27 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_r_17, f_27);
                                t = k_6(e_27, f_27, t);
                                c_65 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, y_64, a_65, c_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  l_64 = ATgetArgument(t, 0);
                                  j_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_65 = NULL,g_65 = NULL;
                                    t = l_64;
                                    t = Hspace_0_0(t);
                                    e_65 = t;
                                    t = j_64;
                                    t = toh_0_0(t);
                                    g_65 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, e_65, g_65);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      l_64 = ATgetArgument(t, 0);
                                      j_64 = ATgetArgument(t, 1);
                                      t = l_64;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          i_64 = ATgetArgument(t, 0);
                                          t = i_64;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              g_64 = ATgetFirst((ATermList) t);
                                              h_64 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm s_17 = t;
                                                int t_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm p_27 = NULL,a_30 = NULL,e_30 = NULL;
                                                    t = g_64;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        a_30 = ATgetArgument(t, 0);
                                                        e_30 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm u_17 = t;
                                                      int v_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_31 = NULL,j_11 = NULL;
                                                          t = SSLgetAnnotations(g_64);
                                                          i_31 = t;
                                                          t = a_30;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = e_30;
                                                          p_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, a_30, e_30);
                                                          j_11 = t;
                                                          t = SSLsetAnnotations(j_11, i_31);
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
                                                                ATerm x_31 = NULL,k_11 = NULL;
                                                                t = SSLgetAnnotations(g_64);
                                                                x_31 = t;
                                                                t = a_30;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = e_30;
                                                                p_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, a_30, e_30);
                                                                k_11 = t;
                                                                t = SSLsetAnnotations(k_11, x_31);
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
                                                                      ATerm k_32 = NULL,l_11 = NULL;
                                                                      t = SSLgetAnnotations(g_64);
                                                                      k_32 = t;
                                                                      t = a_30;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = e_30;
                                                                      p_27 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, a_30, e_30);
                                                                      l_11 = t;
                                                                      t = SSLsetAnnotations(l_11, k_32);
                                                                      LocalPopChoice(a_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_17;
                                                                      {
                                                                        ATerm c_18 = t;
                                                                        int d_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm t_32 = NULL,n_11 = NULL;
                                                                            t = SSLgetAnnotations(g_64);
                                                                            t_32 = t;
                                                                            t = a_30;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = e_30;
                                                                            p_27 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, a_30, e_30);
                                                                            n_11 = t;
                                                                            t = SSLsetAnnotations(n_11, t_32);
                                                                            LocalPopChoice(d_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_18;
                                                                            {
                                                                              ATerm n_33 = NULL,o_11 = NULL;
                                                                              t = SSLgetAnnotations(g_64);
                                                                              n_33 = t;
                                                                              t = a_30;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, a_30, e_30);
                                                                              o_11 = t;
                                                                              t = SSLsetAnnotations(o_11, n_33);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, e_30);
                                                                              p_27 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, p_27, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, h_64), j_64));
                                                    LocalPopChoice(t_17);
                                                  }
                                                else
                                                  {
                                                    t = s_17;
                                                    t = p_65(l_64, j_64, k_64, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = j_64;
                                                }
                                              else
                                                {
                                                  t = p_65(l_64, j_64, k_64, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = p_65(l_64, j_64, k_64, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          l_64 = ATgetArgument(t, 0);
                                          j_64 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_65 = NULL;
                                            t = l_64;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = j_64;
                                            t = map_1_0(m_3, t);
                                            j_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, j_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              l_64 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = l_64;
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
ATerm topdown_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  static ATerm p_3 (ATerm t)
  {
    t = topdown_1_0(o_72, t);
    return(t);
  }
  t = o_72(t);
  t = SRTS_all(p_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_65 = ATgetFirst((ATermList) t);
      {
        ATerm e_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
          {
            z_65 = ATgetFirst((ATermList) e_18);
            {
              ATerm f_18 = (ATerm) ATgetNext((ATermList) e_18);
              if(((ATgetType(f_18) != AT_LIST) || !(ATisEmpty(f_18))))
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
  a_66 = t;
  t = SSL_table_put(a_66, y_65, z_65);
  t = (ATerm) ATmakeAppl(sym__3, term_n_14, y_65, z_65);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  w_65 = t;
  t = term_n_14;
  x_65 = t;
  t = SSL_table_create(x_65);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_7;
        t = get_config_0_0(t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(q_3, t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
      }
  }
  t = w_65;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = n_18;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm r_66 = NULL;
  r_66 = t;
  t = SSL_is_string(r_66);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,v_20 = NULL;
  m_66 = t;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_66);
  f_66 = t;
  t = h_66;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(u_3, t);
  k_66 = t;
  t = BOXENV_args_0_0(t);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, j_66, k_66);
  t = bottomup_1_0(v_3, t);
  t = collect_om_2_0(w_3, conc_0_0, t);
  l_66 = t;
  t = SSL_concat_strings(l_66);
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_66, i_66);
  v_20 = t;
  t = SSLsetAnnotations(v_20, f_66);
  return(t);
}
static ATerm q_6 (ATerm y_34, ATerm z_34, ATerm t)
{
  ATerm s_66 = NULL;
  t = SSL_fputc(y_34, z_34);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_66);
  return(t);
}
static ATerm r_6 (ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm t_66 = NULL;
  t = SSL_write_term_to_stream_text(g_20, h_20);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_66);
  return(t);
}
static ATerm t_6 (ATerm r_78 (ATerm), ATerm x_205, ATerm k_20, ATerm t)
{
  ATerm u_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_205, term_s_18);
  t = w_6(t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_66, k_20);
  t = r_78(t);
  t = fclose_0_0(t);
  t = k_20;
  return(t);
}
static ATerm s_6 (ATerm c_20, ATerm d_20, ATerm t)
{
  ATerm v_66 = NULL;
  t = SSL_write_term_to_stream_baf(c_20, d_20);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_66);
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
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym_Stream_1))
        {
          o_34 = ATgetArgument(t_18, 0);
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
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,b_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym_Stream_1))
        {
          u_35 = ATgetArgument(u_18, 0);
        }
      else
        _fail(t);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(u_35, b_36, t);
  r_35 = t;
  t = term_v_18;
  s_35 = t;
  t = r_35;
  if(match_cons(t, sym_Stream_1))
    {
      t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, r_35);
  t = q_6(s_35, t_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,j_68 = NULL,k_68 = NULL,y_20 = NULL,x_20 = NULL;
  a_67 = t;
  if(match_cons(t, sym__2))
    {
      h_67 = ATgetArgument(t, 0);
      i_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_67);
  g_67 = t;
  t = h_67;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_66 != NULL) && (z_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(x_3, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = term_z_18;
        z_66 = t;
      }
  }
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_67, i_67);
  x_20 = t;
  t = SSLsetAnnotations(x_20, g_67);
  t = a_67;
  if(match_cons(t, sym__2))
    {
      c_67 = ATgetArgument(t, 0);
      d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_67);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_67, (ATerm) ATmakeAppl(sym__2, not_null(z_66), d_67));
  y_20 = t;
  t = SSLsetAnnotations(y_20, b_67);
  f_67 = t;
  if(match_cons(t, sym__2))
    {
      j_68 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,i_34 = NULL,k_34 = NULL,m_34 = NULL,n_34 = NULL,z_20 = NULL;
        t = SSLgetAnnotations(f_67);
        f_34 = t;
        t = j_68;
        t = fetch_1_0(y_3, t);
        i_34 = t;
        t = k_68;
        if(match_cons(t, sym__2))
          {
            m_34 = ATgetArgument(t, 0);
            n_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_6(a_4, m_34, n_34, t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_34, k_34);
        z_20 = t;
        t = SSLsetAnnotations(z_20, f_34);
        LocalPopChoice(d_19);
      }
    else
      {
        t = a_19;
        {
          ATerm h_35 = NULL,l_35 = NULL,p_35 = NULL,q_35 = NULL,c_21 = NULL;
          t = SSLgetAnnotations(f_67);
          h_35 = t;
          t = k_68;
          if(match_cons(t, sym__2))
            {
              p_35 = ATgetArgument(t, 0);
              q_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_6(b_4, p_35, q_35, t);
          l_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_68, l_35);
          c_21 = t;
          t = SSLsetAnnotations(c_21, h_35);
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
ATerm apply_strategy_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  r_68 = t;
  t = dtime_0_0(t);
  t = r_68;
  t = h_95(t);
  q_68 = t;
  t = dtime_0_0(t);
  n_68 = t;
  t = q_68;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_68), (ATerm) ATmakeAppl(sym_Runtime_1, n_68)), p_68);
  return(t);
}
static ATerm f_69 (ATerm z_68, ATerm t)
{
  t = SSL_fclose(z_68);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL;
  d_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_69 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_69);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = f_69(d_69, t);
          }
      }
    }
  else
    {
      t = f_69(d_69, t);
    }
  return(t);
}
static ATerm u_6 (ATerm i_20, ATerm t)
{
  t = SSL_read_term_from_stream(i_20);
  return(t);
}
static ATerm v_6 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm g_69 = NULL;
  t = SSL_fopen(a_35, b_35);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_69 = NULL;
  t = SSL_stdin_stream();
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_69 = NULL;
  t = SSL_stdout_stream();
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_69 = NULL;
  t = SSL_stderr_stream();
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_69);
  return(t);
}
static ATerm x_70 (ATerm p_69, ATerm t)
{
  ATerm q_69 = NULL;
  t = SSL_explode_term(p_69);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            q_69 = ATgetFirst((ATermList) i_19);
            {
              ATerm j_19 = (ATerm) ATgetNext((ATermList) i_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_69;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_70 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,b_70 = NULL,s_21 = NULL;
  t = SSLgetAnnotations(v_69);
  y_69 = t;
  t = t_69;
  if(match_cons(t, sym_Path_1))
    {
      b_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_70, u_69);
  s_21 = t;
  t = SSLsetAnnotations(s_21, y_69);
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(w_69, x_69, t);
  return(t);
}
static ATerm z_70 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,p_70 = NULL,t_21 = NULL;
  t = SSLgetAnnotations(f_70);
  i_70 = t;
  t = SSL_is_string(d_70);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_70, e_70);
  t_21 = t;
  t = SSLsetAnnotations(t_21, i_70);
  if(match_cons(t, sym__2))
    {
      g_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(g_70, h_70, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  if(match_cons(t, sym__2))
    {
      v_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
      {
        ATerm k_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_70(u_70, t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = k_19;
            {
              ATerm n_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_70(v_70, w_70, u_70, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = n_19;
                  t = z_70(v_70, w_70, u_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_70(u_70, t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_71 = NULL;
      d_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_71, term_t_19);
      t = w_6(t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = debug_1_0(e_4, t);
      _fail(t);
    }
  b_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(c_71, t);
  a_71 = t;
  t = b_71;
  t = fclose_0_0(t);
  t = a_71;
  return(t);
}
ATerm fetch_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  static ATerm b_72 (ATerm t)
  {
    ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
    y_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_71 = ATgetFirst((ATermList) t);
        a_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_36 = NULL,e_37 = NULL,w_21 = NULL;
          t = SSLgetAnnotations(y_71);
          u_36 = t;
          t = z_71;
          t = k_79(t);
          e_37 = t;
          t = (ATerm) ATinsert(CheckATermList(a_72), e_37);
          w_21 = t;
          t = SSLsetAnnotations(w_21, u_36);
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm n_43 = NULL,e_44 = NULL,z_21 = NULL;
            t = SSLgetAnnotations(y_71);
            n_43 = t;
            t = a_72;
            t = b_72(t);
            e_44 = t;
            t = (ATerm) ATinsert(CheckATermList(e_44), z_71);
            z_21 = t;
            t = SSLsetAnnotations(z_21, n_43);
          }
        }
    }
    return(t);
  }
  t = b_72(t);
  return(t);
}
static ATerm p_6 (ATerm r_33, ATerm s_33, ATerm t)
{
  t = SSL_strcat(r_33, s_33);
  return(t);
}
ATerm debug_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm e_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
  e_72 = t;
  t = p_78(t);
  l_72 = t;
  t = term_y_6;
  m_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_72), l_72);
  n_72 = t;
  t = SSL_printnl(m_72, n_72);
  t = e_72;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_72 = NULL;
      w_72 = t;
      t = SSL_is_string(w_72);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            {
              ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
              c_73 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_73 = ATgetArgument(t, 0);
                  t = d_73;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_73 = ATgetArgument(t, 0);
                      t = d_73;
                      {
                        ATerm j_20 = t;
                        int l_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(l_20);
                          }
                        else
                          {
                            t = j_20;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_73 = NULL,j_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_73 = ATgetArgument(t, 0);
                          e_73 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_73;
                      t = eval_config_0_0(t);
                      i_73 = t;
                      t = e_73;
                      t = eval_config_0_0(t);
                      j_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_73, j_73);
                      t = p_6(i_73, j_73, t);
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
  ATerm n_73 = NULL,o_73 = NULL;
  n_73 = t;
  t = term_m_20;
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, n_73);
  t = z_6(o_73, n_73, t);
  {
    ATerm n_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_73 = NULL,q_73 = NULL;
        t = eval_config_0_0(t);
        p_73 = t;
        t = term_m_20;
        q_73 = t;
        t = SSL_table_put(q_73, n_73, p_73);
        t = p_73;
        LocalPopChoice(q_20);
      }
    else
      {
        t = n_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm u_73 = NULL;
  u_73 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_73 = NULL;
        t = term_t_20;
        t = get_config_0_0(t);
        w_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_73, term_u_20);
        t = geq_0_0(t);
        t = u_73;
        t = q_93(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = u_73;
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_73 = NULL;
  z_73 = t;
  if(match_string(t, "-k"))
    {
      t = z_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_73;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  a_74 = t;
  t = SSL_string_to_int(a_74);
  b_74 = t;
  t = term_w_20;
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, b_74);
  t = c_7(c_74, b_74, t);
  t = a_74;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm e_74 = NULL;
  e_74 = t;
  if(match_string(t, "-S"))
    {
      t = e_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_74;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  t = term_t_20;
  f_74 = t;
  t = term_m_15;
  g_74 = t;
  t = term_b_21;
  t = c_7(f_74, g_74, t);
  t = term_d_21;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
  h_74 = t;
  t = SSL_string_to_int(h_74);
  i_74 = t;
  t = term_t_20;
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, i_74);
  t = c_7(j_74, i_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_74);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  t = term_g_21;
  k_74 = t;
  t = term_o_6;
  l_74 = t;
  t = term_h_21;
  t = c_7(k_74, l_74, t);
  t = term_i_21;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, n_4, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = Option_3_0(r_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm m_74 = NULL;
  t = term_m_20;
  m_74 = t;
  t = SSL_table_put(m_74, u_43, v_43);
  t = (ATerm) ATmakeAppl(sym__3, term_m_20, u_43, v_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
      t = term_o_6;
      t = e_0(t);
      r_74 = t;
      t = term_o_21;
      s_74 = t;
      t = term_p_21;
      t_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_21, term_p_21, r_74);
      t = a_7(s_74, t_74, r_74, t);
      _fail(t);
    }
  else
    {
      ATerm w_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_74 = ATgetFirst((ATermList) t);
          q_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_74;
      t = c_0(t);
      t = term_o_6;
      t = d_0(t);
      w_74 = t;
      t = (ATerm) ATinsert(CheckATermList(q_74), w_74);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  if(match_string(t, "-o"))
    {
      t = y_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_74;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL;
  z_74 = t;
  t = term_q_21;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, z_74);
  t = c_7(a_75, z_74, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_74);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
static ATerm a_7 (ATerm u_48, ATerm v_48, ATerm t_48, ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            ATerm y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
        t = z_6(u_48, v_48, t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATempty;
      }
  }
  d_75 = t;
  t = (ATerm) ATinsert(CheckATermList(d_75), t_48);
  e_75 = t;
  t = SSL_table_put(u_48, v_48, e_75);
  t = c_75;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
      t = term_o_6;
      t = n_0(t);
      p_75 = t;
      t = term_o_21;
      q_75 = t;
      t = term_p_21;
      r_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_21, term_p_21, p_75);
      t = a_7(q_75, r_75, p_75, t);
      _fail(t);
    }
  else
    {
      ATerm v_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_75 = ATgetFirst((ATermList) t);
          m_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_75 = ATgetFirst((ATermList) t);
          o_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_75;
      t = k_0(t);
      t = n_75;
      t = l_0(t);
      v_75 = t;
      t = (ATerm) ATinsert(CheckATermList(o_75), v_75);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  if(match_string(t, "-i"))
    {
      t = x_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_75;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  y_75 = t;
  t = term_a_22;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, y_75);
  t = c_7(z_75, y_75, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_75);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_6;
  t = whoami_0_0(t);
  a_76 = t;
  t = term_y_6;
  c_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_22), a_76);
  d_76 = t;
  t = SSL_printnl(c_76, d_76);
  t = term_f_7;
  b_76 = t;
  t = SSL_exit(b_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_22;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_37, u_37);
      LocalPopChoice(g_22);
    }
  else
    {
      t = e_22;
      t = SSL_addr(t_37, u_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
  f_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_76;
      t = d_85(t);
    }
  else
    {
      ATerm k_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_76 = ATgetFirst((ATermList) t);
          h_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_76;
      t = foldr_2_0(d_85, e_85, t);
      k_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_76, k_76);
      t = e_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  if(match_cons(t, sym__2))
    {
      w_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(w_44, x_44, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_76 = NULL,s_44 = NULL,t_44 = NULL;
  t = times_0_0(t);
  t_44 = t;
  t = SSL_explode_term(t_44);
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_44;
  t = foldr_2_0(a_5, b_5, t);
  n_76 = t;
  t = SSL_TicksToSeconds(n_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  if(match_cons(t, sym__2))
    {
      z_76 = ATgetArgument(t, 0);
      a_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_77;
        if((z_76 != t))
          {
            _fail(t);
          }
        t = y_76;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = (ATerm) ATmakeAppl(sym__2, z_76, a_77);
        {
          ATerm m_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_76, a_77);
              LocalPopChoice(o_22);
            }
          else
            {
              t = m_22;
              t = SSL_gtr(z_76, a_77);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_76, a_77);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm e_77 = NULL;
  e_77 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_77 = NULL;
        t = term_t_20;
        t = get_config_0_0(t);
        g_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_77, term_f_7);
        t = geq_0_0(t);
        t = e_77;
        t = p_93(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = e_77;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,l_77 = NULL,m_77 = NULL;
  t = run_time_0_0(t);
  i_77 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  j_77 = t;
  t = term_y_6;
  l_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), i_77), term_r_22), j_77);
  m_77 = t;
  t = SSL_printnl(l_77, m_77);
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), i_77), term_r_22), j_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_15;
  n_77 = t;
  t = SSL_exit(n_77);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  w_77 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_77;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_77 = ATgetArgument(t, 0);
          {
            ATerm s_47 = NULL,f_22 = NULL;
            t = SSLgetAnnotations(w_77);
            s_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_77);
            f_22 = t;
            t = SSLsetAnnotations(f_22, s_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_77;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_22;
      t = get_config_0_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = fetch_1_0(e_5, t);
    }
  t = f_96(t);
  return(t);
}
ATerm map_1_0 (ATerm a_79 (ATerm), ATerm t)
{
  static ATerm m_78 (ATerm t)
  {
    ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
    j_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_78;
      }
    else
      {
        ATerm q_48 = NULL,j_49 = NULL,u_49 = NULL,h_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_78 = ATgetFirst((ATermList) t);
            l_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_78);
        q_48 = t;
        t = k_78;
        t = a_79(t);
        j_49 = t;
        t = l_78;
        t = m_78(t);
        u_49 = t;
        t = (ATerm) ATinsert(CheckATermList(u_49), j_49);
        h_22 = t;
        t = SSLsetAnnotations(h_22, q_48);
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,s_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_78 = ATgetFirst((ATermList) t);
      s_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_78 = NULL,z_78 = NULL;
        static ATerm f_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_78)), not_null(z_78));
          return(t);
        }
        t = s_78;
        t = i_0(t);
        if(((x_78 != NULL) && (x_78 != t)))
          _fail(t);
        else
          x_78 = t;
        t = q_78;
        t = g_0(t);
        if(((z_78 != NULL) && (z_78 != t)))
          _fail(t);
        else
          z_78 = t;
        t = s_78;
        t = reverse_acc_2_0(g_0, f_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_6 (ATerm l_50, ATerm m_50, ATerm t)
{
  t = SSL_table_get(l_50, m_50);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,j_22 = NULL;
  h_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_79);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_79);
  j_22 = t;
  t = SSLsetAnnotations(j_22, f_79);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm j_79 = NULL;
  j_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_79), term_x_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  ATerm y_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_22;
      t = get_config_0_0(t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = y_22;
      t = fetch_1_0(g_5, t);
    }
  t = term_b_23;
  t = echo_0_0(t);
  t = term_o_21;
  d_79 = t;
  t = term_p_21;
  e_79 = t;
  t = term_c_23;
  t = z_6(d_79, e_79, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(i_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
  n_79 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_23 = ATgetFirst((ATermList) t);
                ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_79;
          }
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = (ATerm) ATinsert(ATempty, n_79);
      }
  }
  o_79 = t;
  t = term_z_18;
  p_79 = t;
  t = SSL_printnl(p_79, o_79);
  t = n_79;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL;
  t = term_h_23;
  x_79 = t;
  t = term_o_6;
  y_79 = t;
  t = term_i_23;
  t = c_7(x_79, y_79, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,d_80 = NULL,e_80 = NULL;
  t = term_h_23;
  d_80 = t;
  t = term_o_6;
  e_80 = t;
  t = term_i_23;
  t = c_7(d_80, e_80, t);
  t = term_k_23;
  z_79 = t;
  t = term_o_6;
  a_80 = t;
  t = term_l_23;
  t = c_7(z_79, a_80, t);
  t = term_m_23;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, l_5, t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      t = Option_3_0(m_5, n_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,l_80 = NULL,m_80 = NULL,n_22 = NULL;
  m_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_80 = ATgetFirst((ATermList) t);
      h_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_80);
  f_80 = t;
  t = g_80;
  t = v_57(t);
  i_80 = t;
  t = h_80;
  t = w_57(t);
  l_80 = t;
  t = (ATerm) ATinsert(CheckATermList(l_80), i_80);
  n_22 = t;
  t = SSLsetAnnotations(n_22, f_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,w_80 = NULL,x_80 = NULL,t_22 = NULL;
  r_80 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_23;
        t = i_98(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
      }
  }
  t = r_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_80 = ATgetFirst((ATermList) t);
      u_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_80);
  s_80 = t;
  t = term_d_22;
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, t_80);
  t = c_7(x_80, t_80, t);
  t = u_80;
  {
    static ATerm h_81 (ATerm t)
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_81 = NULL;
              a_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_81;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = i_98(t);
              t = Cons_2_0(_id, h_81, t);
            }
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          {
            ATerm d_81 = NULL,e_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_81 = ATgetFirst((ATermList) t);
                e_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_81), (ATerm) ATmakeAppl(sym_Undefined_1, d_81));
          }
        }
      return(t);
    }
    t = h_81(t);
  }
  w_80 = t;
  t = (ATerm) ATinsert(CheckATermList(w_80), (ATerm) ATmakeAppl(sym_Program_1, t_80));
  t_22 = t;
  t = SSLsetAnnotations(t_22, s_80);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm t_81 = NULL;
  t_81 = t;
  if(match_string(t, "--help"))
    {
      t = t_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_81;
        }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  t = term_w_22;
  u_81 = t;
  t = term_o_6;
  v_81 = t;
  t = term_x_23;
  t = c_7(u_81, v_81, t);
  t = term_z_23;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL;
  o_81 = t;
  t = term_o_21;
  q_81 = t;
  t = term_p_21;
  r_81 = t;
  t = (ATerm) ATempty;
  s_81 = t;
  t = SSL_table_put(q_81, r_81, s_81);
  t = o_81;
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm b_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_98(t);
          LocalPopChoice(d_24);
        }
      else
        {
          t = b_24;
          {
            ATerm e_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_5, s_5, t_5, t);
                LocalPopChoice(h_24);
              }
            else
              {
                t = e_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
  }
  {
    ATerm j_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_82 = NULL;
        c_82 = t;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_51 = NULL;
              t = c_82;
              {
                ATerm o_24 = t;
                int p_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_24);
                  }
                else
                  {
                    t = o_24;
                    t = fetch_1_0(u_5, t);
                  }
              }
              t = c_82;
              t = default_system_usage_0_0(t);
              t = term_m_15;
              e_51 = t;
              t = SSL_exit(e_51);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm v_52 = NULL;
                t = term_h_23;
                t = get_config_0_0(t);
                t = c_82;
                t = default_system_about_0_0(t);
                t = term_m_15;
                v_52 = t;
                t = SSL_exit(v_52);
              }
            }
        }
        LocalPopChoice(l_24);
      }
    else
      {
        t = j_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
              static ATerm v_5 (ATerm t)
              {
                ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,z_22 = NULL;
                i_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_82);
                g_82 = t;
                t = h_82;
                if(((m_81 != NULL) && (m_81 != t)))
                  _fail(t);
                else
                  m_81 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_82);
                z_22 = t;
                t = SSLsetAnnotations(z_22, g_82);
                return(t);
              }
              t = fetch_1_0(v_5, t);
              t = term_y_6;
              e_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_81)), term_s_24);
              f_82 = t;
              t = SSL_printnl(e_82, f_82);
              t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_81)), term_s_24));
              t = default_system_usage_0_0(t);
              t = term_f_7;
              d_82 = t;
              t = SSL_exit(d_82);
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
            }
        }
      }
  }
  n_81 = t;
  t = term_o_21;
  p_81 = t;
  t = SSL_table_destroy(p_81);
  t = n_81;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  t = parse_options_1_0(h_96, t);
  n_82 = t;
  t = term_t_24;
  q_82 = t;
  t = SSL_table_create(q_82);
  t = term_t_24;
  o_82 = t;
  t = term_u_24;
  p_82 = t;
  t = SSL_table_put(o_82, p_82, n_82);
  t = n_82;
  t = j_96(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_96, t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm x_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_96(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_24);
            }
          else
            {
              t = x_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = if_verbose2_1_0(g_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  t = term_h_7;
  r_82 = t;
  t = term_o_6;
  s_82 = t;
  t = term_j_7;
  t = c_7(r_82, s_82, t);
  t = term_k_7;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  t_82 = t;
  t = term_d_22;
  t = get_config_0_0(t);
  u_82 = t;
  t = term_y_6;
  v_82 = t;
  t = (ATerm) ATinsert(ATempty, u_82);
  w_82 = t;
  t = SSL_printnl(v_82, w_82);
  t = t_82;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t)
{
  static ATerm x_5 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_95(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                ATerm d_25 = t;
                int f_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(f_25);
                  }
                else
                  {
                    t = d_25;
                    {
                      ATerm g_25 = t;
                      int h_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_6, e_6, f_6, t);
                          LocalPopChoice(h_25);
                        }
                      else
                        {
                          t = g_25;
                          {
                            ATerm i_25 = t;
                            int j_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_25);
                              }
                            else
                              {
                                t = i_25;
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
  static ATerm b_6 (ATerm t)
  {
    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
    y_82 = t;
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_82 != NULL) && (x_82 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_6, t);
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          t = term_n_25;
          x_82 = t;
        }
    }
    t = not_null(x_82);
    t = ReadFromFile_0_0(t);
    z_82 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_82, z_82);
    t = apply_strategy_1_0(q_95, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_5, s_95, z_5, b_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

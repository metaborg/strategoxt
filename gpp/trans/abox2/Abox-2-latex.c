#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_FILE_1;
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
Symbol sym_ALLTT_1;
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
static void init_module_constructors (void)
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
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
  sym_ALLTT_1 = ATmakeSymbol("ALLTT", 1, ATfalse);
  ATprotectSymbol(sym_ALLTT_1);
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
}
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_h_11;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_m_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically by \n", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001-2004 Merijn de Jonge (mdejonge@cs.uu.nl) \n", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{alltt}\n", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\\end{alltt}\n", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("alltt", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm try_1_0 (ATerm k_104 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm c_86 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm x_15 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm l_90 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm z_13 (ATerm z_5, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm r_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm a_14 (ATerm v_5, ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm k_91 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm y_13 (ATerm y_7, ATerm t);
ATerm listtd_1_0 (ATerm z_91 (ATerm), ATerm t);
static ATerm z_42 (ATerm g_41, ATerm h_41, ATerm i_41, ATerm t);
static ATerm a_43 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm b_14 (ATerm k_8, ATerm i_8, ATerm t);
static ATerm c_14 (ATerm c_8, ATerm g_8, ATerm d_8, ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm _2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm d_14 (ATerm a_15 (ATerm), ATerm b_15 (ATerm), ATerm c_15 (ATerm), ATerm b_9, ATerm a_9, ATerm t);
static ATerm e_14 (ATerm y_14 (ATerm), ATerm z_14 (ATerm), ATerm w_8, ATerm u_8, ATerm x_8, ATerm v_8, ATerm t);
ATerm foldl_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_90 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm v_14 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm thread_map_1_0 (ATerm u_98 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_99 (ATerm), ATerm t);
static ATerm f_14 (ATerm f_15 (ATerm), ATerm r_9, ATerm s_9, ATerm t_9, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_column_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm unzip_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm g_14 (ATerm j_15 (ATerm), ATerm q_10, ATerm p_10, ATerm l_10, ATerm n_10, ATerm k_10, ATerm t);
ATerm do_A_column_1_0 (ATerm j_15 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm FitToMax_1_0 (ATerm l_15 (ATerm), ATerm t);
ATerm split_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm abox2text_1_0 (ATerm b_0 (ATerm), ATerm t);
ATerm add_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm h_14 (ATerm j_7, ATerm k_7, ATerm t);
ATerm Cons_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm escape_special_characters_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm abox2alltt_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm try_abox2alltt_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_90 (ATerm), ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm i_108 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm Abox_2_latex_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm io_Abox_2_latex_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL;
  d_0 = t;
  t = xtc_new_file_0_0(t);
  g_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_0, term_m_5);
  t = open_file_0_0(t);
  t = d_0;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        ATerm j_0 = NULL;
        t = is_string_0_0(t);
        j_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_0, (ATerm) ATinsert(ATempty, j_0));
        t = print_0_0(t);
        t = j_0;
        return(t);
      }
      t = try_1_0(e_0, t);
      return(t);
    }
    t = topdown_1_0(c_0, t);
  }
  t = g_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_0);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm l_0 = NULL;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_5), l_0), term_t_5);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_5;
      t = get_config_0_0(t);
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      t = (ATerm) ATempty;
    }
  t = map_1_0(f_0, t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  t = term_a_6;
  t = tables2text_0_0(t);
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_6), term_n_6), term_m_6), term_b_6), term_l_6), term_k_6), term_j_6), term_i_6), term_h_6), term_b_6), o_0), term_f_6), term_e_6), term_b_6), term_d_6), term_b_6), term_c_6), term_b_6);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_ALLTT_1))
    {
      x_0 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_6), x_0), term_o_6);
    }
  else
    {
      if(match_cons(t, sym_BOXENV_2))
        {
          x_0 = ATgetArgument(t, 0);
          z_0 = ATgetArgument(t, 1);
          t = x_0;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_6), z_0), term_q_6);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_0 = ATgetFirst((ATermList) t);
                  u_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_0;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_6), z_0), term_t_6), y_0), term_s_6);
            }
        }
      else
        {
          if(match_cons(t, sym_HBOX_2))
            {
              x_0 = ATgetArgument(t, 0);
              z_0 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_6), z_0), term_t_6), x_0), term_u_6);
            }
          else
            {
              if(match_cons(t, sym_VBOX_3))
                {
                  x_0 = ATgetArgument(t, 0);
                  z_0 = ATgetArgument(t, 1);
                  v_0 = ATgetArgument(t, 2);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_6), v_0), term_t_6), z_0), term_x_6), x_0), term_w_6);
                }
              else
                {
                  if(match_cons(t, sym_HVBOX_4))
                    {
                      x_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      w_0 = ATgetArgument(t, 3);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_7), w_0), term_t_6), v_0), term_x_6), z_0), term_x_6), x_0), term_z_6);
                    }
                  else
                    {
                      if(match_cons(t, sym_ABOX_2))
                        {
                          x_0 = ATgetArgument(t, 0);
                          z_0 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), z_0), term_t_6), x_0), term_b_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_ALTBOX_2))
                            {
                              x_0 = ATgetArgument(t, 0);
                              z_0 = ATgetArgument(t, 1);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_7), z_0), term_e_7), x_0), term_d_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_CBOX_1))
                                {
                                  x_0 = ATgetArgument(t, 0);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), x_0), term_g_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBOX_2))
                                    {
                                      x_0 = ATgetArgument(t, 0);
                                      z_0 = ATgetArgument(t, 1);
                                      t = x_0;
                                      if(match_string(t, "="))
                                        {
                                          ATerm l_7 = t;
                                          int n_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm n_15 = NULL;
                                              t = x_0;
                                              t = is_int_0_0(t);
                                              t = x_0;
                                              t = int_to_string_0_0(t);
                                              n_15 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), z_0), term_x_6), n_15), term_o_7);
                                              LocalPopChoice(n_7);
                                            }
                                          else
                                            {
                                              t = l_7;
                                              {
                                                ATerm q_7 = t;
                                                int r_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), z_0), term_s_7);
                                                    LocalPopChoice(r_7);
                                                  }
                                                else
                                                  {
                                                    t = q_7;
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), z_0), term_t_6), x_0), term_u_7);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm v_7 = t;
                                          int w_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm x_17 = NULL;
                                              t = x_0;
                                              t = is_int_0_0(t);
                                              t = x_0;
                                              t = int_to_string_0_0(t);
                                              x_17 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), z_0), term_x_6), x_17), term_o_7);
                                              LocalPopChoice(w_7);
                                            }
                                          else
                                            {
                                              t = v_7;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), z_0), term_t_6), x_0), term_u_7);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBLBOX_2))
                                        {
                                          x_0 = ATgetArgument(t, 0);
                                          z_0 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_0), term_a_8), x_0), term_x_7);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REFBOX_2))
                                            {
                                              x_0 = ATgetArgument(t, 0);
                                              z_0 = ATgetArgument(t, 1);
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_x_6), x_0), term_b_8);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_BOXFONT_2))
                                                {
                                                  x_0 = ATgetArgument(t, 0);
                                                  z_0 = ATgetArgument(t, 1);
                                                  t = x_0;
                                                  if(match_cons(t, sym_KW_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_e_8);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_VAR_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_f_8);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_NUM_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_h_8);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_MATH_0))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_j_8);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "sf"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_m_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "rm"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_n_8);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "tt"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_o_8);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "md"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_p_8);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "bf"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_q_8);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "up"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_r_8);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "it"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_s_8);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sc"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_t_8);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "sl"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_z_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "em"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_c_9);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "tiny"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_d_9);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "scriptsize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_e_9);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_f_9);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "small"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_g_9);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "normalsize"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_i_9);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_j_9);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "Large"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_k_9);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_l_9);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_m_9);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_n_9);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      y_0 = ATgetArgument(t, 0);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_0), term_x_6), y_0), term_o_9);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
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
                                                      t = term_q_9;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_R_0))
                                                        {
                                                          t = term_u_9;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_L_0))
                                                            {
                                                              t = term_v_9;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_EOR_0))
                                                                {
                                                                  t = term_w_9;
                                                                }
                                                              else
                                                                {
                                                                  if(!(match_cons(t, sym_CSEP_0)))
                                                                    _fail(t);
                                                                  t = term_x_9;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_34 = NULL;
      t = term_a_10;
      t = get_config_0_0(t);
      q_34 = t;
      t = (ATerm) ATinsert(ATempty, q_34);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm x_15 (ATerm), ATerm t)
{
  static ATerm w_34 (ATerm t);
  static ATerm w_34 (ATerm t)
  {
    static ATerm h_0 (ATerm t);
    static ATerm h_0 (ATerm t)
    {
      ATerm u_34 = NULL;
      t = Cons_2_0(x_15, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm b_10 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_34;
      t = w_34(t);
      return(t);
    }
    t = try_1_0(h_0, t);
    return(t);
  }
  t = w_34(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_int(t, 9))
    {
      t = z_34;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  t = remove_trailing_1_0(i_0, t);
  {
    static ATerm p_0 (ATerm t);
    static ATerm p_0 (ATerm t)
    {
      static ATerm q_0 (ATerm t);
      static ATerm q_0 (ATerm t)
      {
        static ATerm a_1 (ATerm t);
        static ATerm a_1 (ATerm t)
        {
          static ATerm c_1 (ATerm t);
          static ATerm c_1 (ATerm t)
          {
            if(((y_34 != NULL) && (y_34 != t)))
              _fail(t);
            else
              y_34 = t;
            return(t);
          }
          t = Cons_2_0(b_1, c_1, t);
          return(t);
        }
        t = Cons_2_0(r_0, a_1, t);
        t = not_null(y_34);
        return(t);
      }
      t = at_suffix_1_0(q_0, t);
      return(t);
    }
    t = try_1_0(p_0, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_5), z_35);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = reverse_0_0(t);
  t = split_2_0(_id, d_1, t);
  {
    static ATerm a_36 (ATerm t);
    static ATerm a_36 (ATerm t)
    {
      ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
      if(match_cons(t, sym__2))
        {
          g_35 = ATgetArgument(t, 0);
          j_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_35;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm n_35 = NULL;
          t = j_35;
          t = LatexComment_0_0(t);
          n_35 = t;
          t = (ATerm) ATinsert(ATempty, n_35);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_35 = ATgetFirst((ATermList) t);
              i_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_35;
          if(match_int(t, 10))
            {
              ATerm c_10 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_35 = NULL,s_35 = NULL;
                  t = j_35;
                  t = LatexComment_0_0(t);
                  r_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_35, (ATerm) ATempty);
                  t = a_36(t);
                  s_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_35), r_35);
                  LocalPopChoice(d_10);
                }
              else
                {
                  t = c_10;
                  t = (ATerm) ATmakeAppl(sym__2, i_35, (ATerm) ATinsert(CheckATermList(j_35), h_35));
                  t = a_36(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, i_35, (ATerm) ATinsert(CheckATermList(j_35), h_35));
              t = a_36(t);
            }
        }
      return(t);
    }
    t = a_36(t);
  }
  t = remove_trailing_1_0(e_1, t);
  t = reverse_0_0(t);
  t = remove_trailing_1_0(f_1, t);
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm e_10 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  t = filter_1_0(h_1, t);
  t = separate_by_1_0(i_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(j_1, t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = h_10;
      t = term_o_10;
    }
  t = int_to_string_0_0(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_1, t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      t = term_t_10;
    }
  t = int_to_string_0_0(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(l_1, t);
      LocalPopChoice(y_10);
    }
  else
    {
      t = u_10;
      t = term_t_10;
    }
  t = int_to_string_0_0(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,s_0 = NULL;
  n_36 = t;
  if(match_cons(t, sym_C_2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_36);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, l_36, m_36);
  s_0 = t;
  t = SSLsetAnnotations(s_0, k_36);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,t_0 = NULL;
  t_36 = t;
  if(match_cons(t, sym_C_2))
    {
      r_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, r_36, s_36);
  t_0 = t;
  t = SSLsetAnnotations(t_0, q_36);
  return(t);
}
static ATerm z_13 (ATerm z_5, ATerm t)
{
  static ATerm a_37 (ATerm t);
  static ATerm a_37 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm d_11 = t;
                int e_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm n_1 (ATerm t);
                    static ATerm n_1 (ATerm t)
                    {
                      t = Cons_2_0(_id, a_37, t);
                      return(t);
                    }
                    t = Cons_2_0(m_1, n_1, t);
                    LocalPopChoice(e_11);
                  }
                else
                  {
                    t = d_11;
                    {
                      ATerm f_11 = t;
                      int g_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm o_1 (ATerm t);
                          static ATerm o_1 (ATerm t)
                          {
                            t = Cons_2_0(p_1, a_37, t);
                            return(t);
                          }
                          t = Cons_2_0(_id, o_1, t);
                          LocalPopChoice(g_11);
                        }
                      else
                        {
                          t = f_11;
                          {
                            ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_36 = ATgetFirst((ATermList) t);
                                w_36 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = w_36;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                x_36 = ATgetFirst((ATermList) t);
                                y_36 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(y_36), x_36);
                            t = a_37(t);
                            z_36 = t;
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(z_36), term_h_11), v_36);
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
  t = z_5;
  t = a_37(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym_LBL_2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
      {
        ATerm k_0 = NULL,m_0 = NULL,n_0 = NULL;
        t = n_37;
        if(match_cons(t, sym_R_2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            n_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_13(n_0, t);
        t = n_37;
        if(match_cons(t, sym_R_2))
          {
            ATerm m_11 = ATgetArgument(t, 0);
            m_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_13(m_0, t);
        k_0 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, m_37, k_0);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm n_11 = ATgetArgument(t, 0);
          n_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_37;
      t = z_13(n_37, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_37 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      u_37 = ATgetArgument(t, 0);
      {
        ATerm w_37 = NULL,x_37 = NULL;
        t = u_37;
        t = Hspace_0_0(t);
        t = string_to_int_0_0(t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_g_10);
        t = copy_0_0(t);
        w_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_37), term_o_11);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          u_37 = ATgetArgument(t, 0);
          {
            ATerm z_37 = NULL,a_38 = NULL;
            t = u_37;
            t = Hspace_0_0(t);
            t = string_to_int_0_0(t);
            a_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_38, term_g_10);
            t = copy_0_0(t);
            z_37 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, z_37), term_p_11);
          }
        }
      else
        {
          ATerm c_38 = NULL,e_38 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              u_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_37;
          t = Hspace_0_0(t);
          t = string_to_int_0_0(t);
          e_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_38, term_g_10);
          t = copy_0_0(t);
          c_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, c_38), term_q_11);
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_11);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_11);
  return(t);
}
static ATerm a_14 (ATerm v_5, ATerm t)
{
  t = v_5;
  t = map_1_0(q_1, t);
  t = separate_by_1_0(r_1, t);
  t = concat_0_0(t);
  t = at_last_1_0(s_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm s_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_11) != AT_INT) || (ATgetInt((ATermInt) s_11) != 34)))
        _fail(t);
      s_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_34), term_t_11), term_t_11);
  return(t);
}
static ATerm y_13 (ATerm y_7, ATerm t)
{
  ATerm r_34 = NULL;
  t = y_7;
  t = at_suffix_1_0(t_1, t);
  r_34 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_34), term_u_11), term_u_11);
  return(t);
}
static ATerm z_42 (ATerm g_41, ATerm h_41, ATerm i_41, ATerm t)
{
  t = g_41;
  if(match_cons(t, sym_KW_0))
    {
      t = g_41;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = g_41;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = g_41;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = g_41;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, g_41, h_41);
  return(t);
}
static ATerm a_43 (ATerm m_41, ATerm n_41, ATerm t)
{
  t = m_41;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, m_41);
        t = table_get_0_0(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = string_as_chars_1_0(u_1, t);
      }
  }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = escape_special_characters_0_0(t);
  t = listtd_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = try_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm p_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_11) != AT_INT) || (ATgetInt((ATermInt) y_11) != 34)))
        _fail(t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_13(p_41, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_11;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm b_12 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_12;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_c_12;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_42 = NULL;
  if(match_cons(t, sym_S_1))
    {
      v_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_42;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  v_41 = t;
  if(match_cons(t, sym_REF_2))
    {
      w_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, w_41, u_41);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          w_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, w_41, u_41);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              w_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
              {
                ATerm a_5 = NULL;
                t = v_41;
                {
                  ATerm d_12 = t;
                  int e_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_41;
                      t = string_to_int_0_0(t);
                      a_5 = t;
                      LocalPopChoice(e_12);
                    }
                  else
                    {
                      t = d_12;
                      {
                        ATerm f_12 = t;
                        int g_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_41;
                            t = explode_string_0_0(t);
                            t = Cons_2_0(y_1, _id, t);
                            t = (ATerm) ATinsert(ATempty, term_h_12);
                            t = implode_string_0_0(t);
                            a_5 = t;
                            LocalPopChoice(g_12);
                          }
                        else
                          {
                            t = f_12;
                            t = w_41;
                            a_5 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, a_5, u_41);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  w_41 = ATgetArgument(t, 0);
                  u_41 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, w_41, u_41);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      w_41 = ATgetArgument(t, 0);
                      u_41 = ATgetArgument(t, 1);
                      q_41 = ATgetArgument(t, 2);
                      {
                        ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
                        t = q_41;
                        t = construct_rows_0_0(t);
                        o_5 = t;
                        t = u_41;
                        t = Vspace_0_0(t);
                        t = string_to_int_0_0(t);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, l_5, term_r_11);
                        t = copy_0_0(t);
                        r_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_5, (ATerm) ATinsert(ATinsert(ATempty, term_u_5), term_r_11));
                        t = conc_0_0(t);
                        p_5 = t;
                        t = w_41;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            s_5 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_14(s_5, t);
                        n_5 = t;
                        t = o_5;
                        t = map_1_0(MkRows_0_0, t);
                        {
                          static ATerm z_1 (ATerm t);
                          static ATerm z_1 (ATerm t)
                          {
                            t = p_5;
                            return(t);
                          }
                          t = separate_by_1_0(z_1, t);
                        }
                        q_5 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, n_5, q_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          w_41 = ATgetArgument(t, 0);
                          u_41 = ATgetArgument(t, 1);
                          {
                            ATerm d_42 = NULL,e_42 = NULL,g_42 = NULL,i_42 = NULL;
                            t = w_41;
                            t = Hspace_0_0(t);
                            d_42 = t;
                            t = w_41;
                            t = Vspace_0_0(t);
                            e_42 = t;
                            t = w_41;
                            t = Ispace_0_0(t);
                            g_42 = t;
                            t = u_41;
                            t = filter_1_0(b_2, t);
                            t = separate_by_1_0(c_2, t);
                            i_42 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, d_42, e_42, g_42, i_42);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              w_41 = ATgetArgument(t, 0);
                              u_41 = ATgetArgument(t, 1);
                              {
                                ATerm j_42 = NULL,l_42 = NULL,n_42 = NULL;
                                t = w_41;
                                t = Vspace_0_0(t);
                                j_42 = t;
                                t = w_41;
                                t = Ispace_0_0(t);
                                l_42 = t;
                                t = u_41;
                                t = filter_1_0(d_2, t);
                                t = separate_by_1_0(e_2, t);
                                n_42 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, j_42, l_42, n_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  w_41 = ATgetArgument(t, 0);
                                  u_41 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_42 = NULL,r_42 = NULL;
                                    t = w_41;
                                    t = Hspace_0_0(t);
                                    p_42 = t;
                                    t = u_41;
                                    t = toh_0_0(t);
                                    r_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, p_42, r_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      w_41 = ATgetArgument(t, 0);
                                      u_41 = ATgetArgument(t, 1);
                                      t = w_41;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          t_41 = ATgetArgument(t, 0);
                                          t = t_41;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              r_41 = ATgetFirst((ATermList) t);
                                              s_41 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm i_12 = t;
                                                int j_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm g_6 = NULL,i_7 = NULL,m_7 = NULL;
                                                    t = r_41;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        i_7 = ATgetArgument(t, 0);
                                                        m_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm k_12 = t;
                                                      int l_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_7 = NULL,v_1 = NULL;
                                                          t = SSLgetAnnotations(r_41);
                                                          z_7 = t;
                                                          t = i_7;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = m_7;
                                                          g_6 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, i_7, m_7);
                                                          v_1 = t;
                                                          t = SSLsetAnnotations(v_1, z_7);
                                                          LocalPopChoice(l_12);
                                                        }
                                                      else
                                                        {
                                                          t = k_12;
                                                          {
                                                            ATerm m_12 = t;
                                                            int n_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_8 = NULL,a_2 = NULL;
                                                                t = SSLgetAnnotations(r_41);
                                                                l_8 = t;
                                                                t = i_7;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = m_7;
                                                                g_6 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, i_7, m_7);
                                                                a_2 = t;
                                                                t = SSLsetAnnotations(a_2, l_8);
                                                                LocalPopChoice(n_12);
                                                              }
                                                            else
                                                              {
                                                                t = m_12;
                                                                {
                                                                  ATerm o_12 = t;
                                                                  int p_12 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm y_8 = NULL,f_2 = NULL;
                                                                      t = SSLgetAnnotations(r_41);
                                                                      y_8 = t;
                                                                      t = i_7;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = m_7;
                                                                      g_6 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, i_7, m_7);
                                                                      f_2 = t;
                                                                      t = SSLsetAnnotations(f_2, y_8);
                                                                      LocalPopChoice(p_12);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_12;
                                                                      {
                                                                        ATerm q_12 = t;
                                                                        int r_12 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm h_9 = NULL,g_2 = NULL;
                                                                            t = SSLgetAnnotations(r_41);
                                                                            h_9 = t;
                                                                            t = i_7;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = m_7;
                                                                            g_6 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, i_7, m_7);
                                                                            g_2 = t;
                                                                            t = SSLsetAnnotations(g_2, h_9);
                                                                            LocalPopChoice(r_12);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_12;
                                                                            {
                                                                              ATerm p_9 = NULL,l_2 = NULL;
                                                                              t = SSLgetAnnotations(r_41);
                                                                              p_9 = t;
                                                                              t = i_7;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, i_7, m_7);
                                                                              l_2 = t;
                                                                              t = SSLsetAnnotations(l_2, p_9);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, m_7);
                                                                              g_6 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, g_6, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, s_41), u_41));
                                                    LocalPopChoice(j_12);
                                                  }
                                                else
                                                  {
                                                    t = i_12;
                                                    t = z_42(w_41, u_41, v_41, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = u_41;
                                                }
                                              else
                                                {
                                                  t = z_42(w_41, u_41, v_41, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = z_42(w_41, u_41, v_41, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          w_41 = ATgetArgument(t, 0);
                                          u_41 = ATgetArgument(t, 1);
                                          {
                                            ATerm u_42 = NULL;
                                            t = w_41;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = u_41;
                                            t = map_1_0(h_2, t);
                                            u_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, u_42);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              w_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = a_43(w_41, v_41, t);
                                        }
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
ATerm get_width_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_10;
      t = get_config_0_0(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      t = term_u_12;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm k_8, ATerm i_8, ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = k_8;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(i_2, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = term_t_10;
      }
  }
  t = inc_0_0(t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, term_x_12);
  t = copy_char_0_0(t);
  g_43 = t;
  t = k_8;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(j_2, t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = term_t_10;
      }
  }
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, term_a_13);
  t = copy_char_0_0(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, term_a_13);
  t = copy_char_0_0(t);
  i_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_43), h_43), g_43);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm c_14 (ATerm c_8, ATerm g_8, ATerm d_8, ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_8, d_8);
  t = b_14(c_8, d_8, t);
  n_43 = t;
  t = g_8;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = map_1_0(Fst_0_0, t);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, p_43);
  t = separate_by_0_0(t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_43, m_43);
  return(t);
}
static ATerm d_14 (ATerm a_15 (ATerm), ATerm b_15 (ATerm), ATerm c_15 (ATerm), ATerm b_9, ATerm a_9, ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,w_43 = NULL;
  t = term_a_6;
  t = c_15(t);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, w_43);
  t = a_15(t);
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_6;
  t = b_15(t);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_43, u_43);
  t = add_0_0(t);
  t_43 = t;
  t = (ATerm) ATinsert(CheckATermList(a_9), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_43), t_43));
  return(t);
}
static ATerm e_14 (ATerm y_14 (ATerm), ATerm z_14 (ATerm), ATerm w_8, ATerm u_8, ATerm x_8, ATerm v_8, ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,c_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_8, x_8);
  t = y_14(t);
  if(match_cons(t, sym__2))
    {
      x_43 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_6;
  t = get_width_0_0(t);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, c_44);
  t = leq_0_0(t);
  t = term_a_6;
  t = z_14(t);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, a_44);
  t = add_0_0(t);
  z_43 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_8), x_43), z_43));
  return(t);
}
ATerm SOpt_value_1_0 (ATerm v_14 (ATerm), ATerm t)
{
  ATerm d_44 = NULL;
  static ATerm k_2 (ATerm t);
  static ATerm k_2 (ATerm t)
  {
    ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,v_3 = NULL;
    i_44 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        f_44 = ATgetArgument(t, 0);
        g_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_44);
    e_44 = t;
    t = f_44;
    t = v_14(t);
    h_44 = t;
    t = g_44;
    if(((d_44 != NULL) && (d_44 != t)))
      _fail(t);
    else
      d_44 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, h_44, g_44);
    v_3 = t;
    t = SSLsetAnnotations(v_3, e_44);
    return(t);
  }
  t = fetch_1_0(k_2, t);
  t = not_null(d_44);
  t = string_to_int_0_0(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm c_13 = t;
  if((PushChoice() == 0))
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,f_10 = NULL,i_10 = NULL,m_10 = NULL,z_3 = NULL;
            u_44 = t;
            if(match_cons(t, sym_H_2))
              {
                v_44 = ATgetArgument(t, 0);
                w_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_44);
            f_10 = t;
            t = v_44;
            t = Nil_0_0(t);
            i_10 = t;
            t = w_44;
            t = Nil_0_0(t);
            m_10 = t;
            t = (ATerm) ATmakeAppl(sym_H_2, i_10, m_10);
            z_3 = t;
            t = SSLsetAnnotations(z_3, f_10);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_13;
    }
  return(t);
}
static ATerm f_14 (ATerm f_15 (ATerm), ATerm r_9, ATerm s_9, ATerm t_9, ATerm t)
{
  static ATerm m_2 (ATerm t);
  static ATerm n_2 (ATerm t);
  static ATerm m_2 (ATerm t)
  {
    ATerm y_44 = NULL;
    y_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_44, r_9);
    t = f_15(t);
    return(t);
  }
  static ATerm n_2 (ATerm t)
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm z_44 = NULL;
      z_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_44, s_9);
      t = f_15(t);
      return(t);
    }
    t = map_1_0(o_2, t);
    return(t);
  }
  t = t_9;
  t = Cons_2_0(m_2, n_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = Cons_2_0(q_2, Nil_0_0, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = Cons_2_0(Nil_0_0, Nil_0_0, t);
    }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm h_13 = t;
  if((PushChoice() == 0))
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm j_45 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
            j_45 = t;
            t = SSL_explode_term(j_45);
            if(match_cons(t, sym__2))
              {
                v_10 = ATgetArgument(t, 0);
                w_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_10;
            t = Cons_2_0(_id, p_2, t);
            x_10 = t;
            t = SSL_mkterm(v_10, x_10);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_13;
    }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm t_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,z_45 = NULL;
  v_45 = t;
  if(match_cons(t, sym__3))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
      z_45 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_45;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm m_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_13);
        t = z_45;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm p_13 = ATgetArgument(t, 0);
                  t_45 = ATgetArgument(t, 1);
                  {
                    ATerm q_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(o_13);
              t = w_45;
              if(match_int(t, 1))
                {
                  ATerm r_13 = t;
                  int s_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, w_45, term_o_10);
                      t = gt_0_0(t);
                      t = z_45;
                      t = align_left_0_0(t);
                      LocalPopChoice(s_13);
                    }
                  else
                    {
                      t = r_13;
                      t = t_45;
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym__2, w_45, term_o_10);
                  t = gt_0_0(t);
                  t = z_45;
                  t = align_left_0_0(t);
                }
            }
          else
            {
              t = n_13;
              t = (ATerm) ATmakeAppl(sym__2, w_45, term_o_10);
              t = gt_0_0(t);
              t = z_45;
              t = align_left_0_0(t);
            }
        }
      }
    else
      {
        t = k_13;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm v_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_13);
              t = z_45;
              t = align_center_0_0(t);
            }
          else
            {
              t = t_13;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm w_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_45;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = map_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = try_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = flatten_list_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm j_15 (ATerm), ATerm q_10, ATerm p_10, ATerm l_10, ATerm n_10, ATerm k_10, ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  t = l_10;
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      ATerm v_46 = NULL;
      v_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_46, n_10);
      t = j_15(t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = unzip_0_0(t);
  t = _2_0(s_2, list_max_0_0, t);
  if(match_cons(t, sym__2))
    {
      o_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_46, n_10);
  t = subt_0_0(t);
  p_46 = t;
  {
    ATerm x_13 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_o_10);
        t = gt_0_0(t);
        LocalPopChoice(i_14);
        {
          ATerm w_46 = NULL,y_46 = NULL;
          t = q_10;
          if(match_cons(t, sym_AC_1))
            {
              y_46 = ATgetArgument(t, 0);
              t = y_46;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  y_46 = ATgetArgument(t, 0);
                  t = y_46;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      y_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_46;
                }
            }
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(v_2, t);
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = term_o_10;
              }
          }
          w_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_46, term_a_13);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_13;
        t = term_l_14;
      }
  }
  q_46 = t;
  t = o_46;
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      ATerm c_47 = NULL,d_47 = NULL;
      d_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_10, q_10, (ATerm) ATmakeAppl(sym__3, term_a_13, d_47, p_46));
      t = align_column_0_0(t);
      c_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_47, q_46);
      t = conc_strings_0_0(t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  r_46 = t;
  t = q_46;
  t = string_length_0_0(t);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, n_46);
  t = add_0_0(t);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, (ATerm) ATinsert(CheckATermList(k_10), r_46));
  return(t);
}
ATerm do_A_column_1_0 (ATerm j_15 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      if(match_cons(m_14, sym__2))
        {
          e_47 = ATgetArgument(m_14, 0);
          {
            ATerm o_14 = ATgetArgument(m_14, 1);
            if(match_cons(o_14, sym__2))
              {
                f_47 = ATgetArgument(o_14, 0);
                g_47 = ATgetArgument(o_14, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm n_14 = ATgetArgument(t, 1);
        if(match_cons(n_14, sym__2))
          {
            h_47 = ATgetArgument(n_14, 0);
            i_47 = ATgetArgument(n_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_14(j_15, e_47, f_47, g_47, h_47, i_47, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm l_15 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  n_47 = t;
  t = length_0_0(t);
  k_47 = t;
  t = term_a_6;
  t = l_15(t);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_47, k_47);
  t = subt_0_0(t);
  l_47 = t;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_47, term_t_10);
        t = gt_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_47, (ATerm) ATempty);
        t = copy_0_0(t);
        m_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_47, m_47);
        t = conc_0_0(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = n_47;
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_47), term_t_14);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_14 = t;
  if((PushChoice() == 0))
    {
      ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,b_4 = NULL;
      b_49 = t;
      if(match_cons(t, sym_R_2))
        {
          y_48 = ATgetArgument(t, 0);
          z_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_49);
      x_48 = t;
      t = z_48;
      t = Nil_0_0(t);
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, y_48, a_49);
      b_4 = t;
      t = SSLsetAnnotations(b_4, x_48);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, x_2, t);
  {
    static ATerm c_49 (ATerm t);
    static ATerm c_49 (ATerm t)
    {
      ATerm v_47 = NULL,w_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,c_48 = NULL;
      if(match_cons(t, sym__2))
        {
          y_47 = ATgetArgument(t, 0);
          c_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_47;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm h_48 = NULL;
          t = c_48;
          t = reverse_0_0(t);
          h_48 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, h_48));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_47 = ATgetFirst((ATermList) t);
              a_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_47;
          if(match_cons(t, sym_R_2))
            {
              v_47 = ATgetArgument(t, 0);
              w_47 = ATgetArgument(t, 1);
              {
                ATerm w_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_48 = NULL,n_48 = NULL;
                    t = c_48;
                    t = reverse_0_0(t);
                    m_48 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATempty);
                    t = c_49(t);
                    n_48 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_48), (ATerm) ATmakeAppl(sym_R_2, v_47, w_47)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, m_48));
                    LocalPopChoice(x_14);
                  }
                else
                  {
                    t = w_14;
                    t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATinsert(CheckATermList(c_48), z_47));
                    t = c_49(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATinsert(CheckATermList(c_48), z_47));
              t = c_49(t);
            }
        }
      return(t);
    }
    t = c_49(t);
  }
  t = filter_1_0(y_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_51 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_51;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = _2_0(reverse_0_0, _id, t);
  return(t);
}
ATerm abox2text_1_0 (ATerm b_0 (ATerm), ATerm t)
{
  static ATerm r_54 (ATerm l_50, ATerm m_50, ATerm n_50, ATerm o_50, ATerm p_50, ATerm t);
  static ATerm s_54 (ATerm c_51, ATerm d_51, ATerm e_51, ATerm f_51, ATerm t);
  static ATerm t_54 (ATerm n_51, ATerm o_51, ATerm p_51, ATerm q_51, ATerm t);
  static ATerm u_54 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm g_52, ATerm t);
  static ATerm r_54 (ATerm l_50, ATerm m_50, ATerm n_50, ATerm o_50, ATerm p_50, ATerm t)
  {
    ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,w_50 = NULL,z_50 = NULL;
    t = n_50;
    t = construct_rows_0_0(t);
    t = map_1_0(z_2, t);
    {
      static ATerm a_3 (ATerm t);
      static ATerm a_3 (ATerm t)
      {
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          t = l_50;
          t = length_0_0(t);
          return(t);
        }
        t = FitToMax_1_0(b_3, t);
        return(t);
      }
      t = map_1_0(a_3, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_0_0(t);
    t = add_indices_0_0(t);
    t = reverse_0_0(t);
    s_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_50, s_50);
    t = zip_0_0(t);
    t_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_50, (ATerm) ATmakeAppl(sym__2, o_50, (ATerm) ATempty));
    {
      static ATerm c_3 (ATerm t);
      static ATerm c_3 (ATerm t)
      {
        t = do_A_column_1_0(b_0, t);
        return(t);
      }
      t = foldl_1_0(c_3, t);
    }
    if(match_cons(t, sym__2))
      {
        w_50 = ATgetArgument(t, 0);
        u_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_50;
    t = reverse_0_0(t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm d_3 (ATerm t);
      static ATerm d_3 (ATerm t)
      {
        ATerm b_51 = NULL;
        b_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, w_50);
        return(t);
      }
      t = map_1_0(d_3, t);
    }
    z_50 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_50, z_50, o_50);
    t = c_14(m_50, z_50, o_50, t);
    return(t);
  }
  static ATerm s_54 (ATerm c_51, ATerm d_51, ATerm e_51, ATerm f_51, ATerm t)
  {
    ATerm h_51 = NULL,i_51 = NULL,l_51 = NULL;
    t = c_51;
    {
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(e_3, t);
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
          t = term_t_10;
        }
    }
    l_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_51, l_51);
    t = add_0_0(t);
    i_51 = t;
    t = d_51;
    t = filter_1_0(is_real_vbox_0_0, t);
    h_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_51);
      }
    else
      {
        ATerm m_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, e_51, i_51, h_51);
        t = f_14(b_0, e_51, i_51, h_51, t);
        m_51 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_51, m_51, e_51);
        t = c_14(c_51, m_51, e_51, t);
      }
    return(t);
  }
  static ATerm t_54 (ATerm n_51, ATerm o_51, ATerm p_51, ATerm q_51, ATerm t)
  {
    ATerm t_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      static ATerm r_3 (ATerm t);
      static ATerm r_3 (ATerm t)
      {
        ATerm c_52 = NULL;
        c_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_52, not_null(w_51));
        t = subt_0_0(t);
        return(t);
      }
      t = _2_0(q_3, r_3, t);
      return(t);
    }
    t = n_51;
    {
      ATerm i_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(f_3, t);
          LocalPopChoice(k_15);
        }
      else
        {
          t = i_15;
          t = term_o_10;
        }
    }
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_51, term_a_13);
    t = copy_char_0_0(t);
    v_51 = t;
    t = string_length_0_0(t);
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = o_51;
    t = filter_1_0(is_real_hbox_0_0, t);
    t_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_51, p_51);
    {
      static ATerm g_3 (ATerm t);
      static ATerm g_3 (ATerm t)
      {
        static ATerm n_3 (ATerm t);
        static ATerm n_3 (ATerm t)
        {
          ATerm z_51 = NULL;
          z_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_51, z_51);
          t = add_0_0(t);
          return(t);
        }
        t = b_0(t);
        t = _2_0(_id, n_3, t);
        return(t);
      }
      t = thread_map_1_0(g_3, t);
    }
    {
      static ATerm o_3 (ATerm t);
      static ATerm o_3 (ATerm t)
      {
        ATerm a_52 = NULL;
        a_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_51, a_52);
        t = separate_by_0_0(t);
        return(t);
      }
      t = _2_0(o_3, _id, t);
    }
    t = try_1_0(p_3, t);
    return(t);
  }
  static ATerm u_54 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm g_52, ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
    t = d_52;
    {
      ATerm m_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(s_3, t);
          LocalPopChoice(o_15);
        }
      else
        {
          t = m_15;
          t = term_o_10;
        }
    }
    q_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_52, term_a_13);
    t = copy_char_0_0(t);
    k_52 = t;
    t = d_52;
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(t_3, t);
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          t = term_t_10;
        }
    }
    t = inc_0_0(t);
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_52, term_x_12);
    t = copy_char_0_0(t);
    t = k_52;
    t = string_length_0_0(t);
    i_52 = t;
    t = d_52;
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(u_3, t);
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = term_t_10;
        }
    }
    o_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_52, o_52);
    t = add_0_0(t);
    j_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_52)));
    {
      static ATerm w_3 (ATerm t);
      static ATerm w_3 (ATerm t)
      {
        ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
        v_52 = t;
        if(match_cons(t, sym__2))
          {
            w_52 = ATgetArgument(t, 0);
            x_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_52;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_52 = ATgetFirst((ATermList) t);
            u_52 = (ATerm) ATgetNext((ATermList) t);
            t = r_52;
            if(match_cons(t, sym__2))
              {
                s_52 = ATgetArgument(t, 0);
                t_52 = ATgetArgument(t, 1);
                {
                  ATerm t_15 = t;
                  int u_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm x_3 (ATerm t);
                      static ATerm x_3 (ATerm t)
                      {
                        t = i_52;
                        return(t);
                      }
                      t = v_52;
                      t = e_14(b_0, x_3, w_52, s_52, t_52, u_52, t);
                      LocalPopChoice(u_15);
                    }
                  else
                    {
                      t = t_15;
                      {
                        static ATerm y_3 (ATerm t);
                        static ATerm a_4 (ATerm t);
                        static ATerm y_3 (ATerm t)
                        {
                          t = i_52;
                          return(t);
                        }
                        static ATerm a_4 (ATerm t)
                        {
                          t = j_52;
                          return(t);
                        }
                        t = v_52;
                        t = d_14(b_0, y_3, a_4, w_52, x_52, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm c_4 (ATerm t);
                static ATerm d_4 (ATerm t);
                static ATerm c_4 (ATerm t)
                {
                  t = i_52;
                  return(t);
                }
                static ATerm d_4 (ATerm t)
                {
                  t = j_52;
                  return(t);
                }
                t = v_52;
                t = d_14(b_0, c_4, d_4, w_52, x_52, t);
              }
          }
        else
          {
            static ATerm e_4 (ATerm t);
            static ATerm k_4 (ATerm t);
            static ATerm e_4 (ATerm t)
            {
              t = i_52;
              return(t);
            }
            static ATerm k_4 (ATerm t)
            {
              t = j_52;
              return(t);
            }
            t = v_52;
            t = d_14(b_0, e_4, k_4, w_52, x_52, t);
          }
        return(t);
      }
      t = foldl_1_0(w_3, t);
    }
    t = reverse_0_0(t);
    t = map_1_0(l_4, t);
    {
      static ATerm m_4 (ATerm t);
      static ATerm m_4 (ATerm t)
      {
        static ATerm n_4 (ATerm t);
        static ATerm n_4 (ATerm t)
        {
          ATerm j_53 = NULL;
          j_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_52, j_53);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(n_4, _id, t);
        return(t);
      }
      t = map_1_0(m_4, t);
    }
    n_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_52, n_52, f_52);
    t = c_14(d_52, n_52, f_52, t);
    return(t);
  }
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  s_53 = t;
  if(match_cons(t, sym__2))
    {
      t_53 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_14, w_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_53 = ATgetFirst((ATermList) t);
          v_53 = (ATerm) ATgetNext((ATermList) t);
          t = v_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_53, w_53);
          t = b_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              u_53 = ATgetArgument(t, 0);
              v_53 = ATgetArgument(t, 1);
              {
                ATerm j_11 = NULL,k_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, u_53, w_53);
                t = b_0(t);
                j_11 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_15 = ATgetArgument(t, 0);
                    k_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, u_53, v_53), w_53);
                {
                  ATerm w_15 = t;
                  int y_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_11 = NULL;
                      t = get_width_0_0(t);
                      l_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
                      t = leq_0_0(t);
                      LocalPopChoice(y_15);
                      t = j_11;
                    }
                  else
                    {
                      t = w_15;
                      t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
                      t = b_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  u_53 = ATgetArgument(t, 0);
                  v_53 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, u_53, v_53), w_53);
                  t = b_0(t);
                }
              else
                {
                  ATerm z_15 = t;
                  int a_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm b_16 = ATgetArgument(t, 0);
                          v_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(a_16);
                      t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
                      t = b_0(t);
                    }
                  else
                    {
                      t = z_15;
                      {
                        ATerm c_16 = t;
                        int d_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm e_16 = ATgetArgument(t, 0);
                                v_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_16);
                            t = v_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                l_53 = ATgetFirst((ATermList) t);
                                n_53 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = l_53;
                            if(match_cons(t, sym_S_1))
                              {
                                m_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_53;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, m_53, w_53);
                          }
                        else
                          {
                            t = c_16;
                            if(match_cons(t, sym_S_1))
                              {
                                u_53 = ATgetArgument(t, 0);
                                {
                                  ATerm m_54 = NULL,n_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, u_53, w_53);
                                  t = h_14(u_53, w_53, t);
                                  n_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, w_53, n_54);
                                  t = add_0_0(t);
                                  m_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, u_53, m_54);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    u_53 = ATgetArgument(t, 0);
                                    v_53 = ATgetArgument(t, 1);
                                    r_53 = ATgetArgument(t, 2);
                                    t = u_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        q_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = r_53;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        o_53 = ATgetFirst((ATermList) t);
                                        p_53 = (ATerm) ATgetNext((ATermList) t);
                                        t = p_53;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = o_53;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm f_16 = t;
                                                int j_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = r_54(q_53, v_53, r_53, w_53, s_53, t);
                                                    LocalPopChoice(j_16);
                                                  }
                                                else
                                                  {
                                                    t = f_16;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = r_54(q_53, v_53, r_53, w_53, s_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_53;
                                            t = r_54(q_53, v_53, r_53, w_53, s_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm k_16 = t;
                                            int l_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = r_54(q_53, v_53, r_53, w_53, s_53, t);
                                                LocalPopChoice(l_16);
                                              }
                                            else
                                              {
                                                t = k_16;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_53);
                                              }
                                          }
                                        else
                                          {
                                            t = r_54(q_53, v_53, r_53, w_53, s_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        u_53 = ATgetArgument(t, 0);
                                        v_53 = ATgetArgument(t, 1);
                                        t = s_54(u_53, v_53, w_53, s_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            u_53 = ATgetArgument(t, 0);
                                            v_53 = ATgetArgument(t, 1);
                                            t = t_54(u_53, v_53, w_53, s_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                u_53 = ATgetArgument(t, 0);
                                                v_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = u_54(u_53, v_53, w_53, s_53, t);
                                          }
                                      }
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
static ATerm h_14 (ATerm j_7, ATerm k_7, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_x_12), j_7);
  t = string_tokenize_0_0(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_54 = NULL,z_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_t_10;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_54 = ATgetFirst((ATermList) t);
                z_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_54;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_54;
            t = string_length_0_0(t);
          }
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm b_55 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          b_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_55, k_7);
          t = subt_0_0(t);
        }
      }
  }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  g_55 = t;
                  t = Hd_0_0(t);
                  e_55 = t;
                  t = g_55;
                  t = Tl_0_0(t);
                  f_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = try_1_0(p_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(match_int(t, 32))
    {
      t = term_u_16;
      t = explode_string_0_0(t);
    }
  else
    {
      if(match_int(t, 35))
        {
          t = term_v_16;
          t = explode_string_0_0(t);
        }
      else
        {
          if(match_int(t, 36))
            {
              t = term_w_16;
              t = explode_string_0_0(t);
            }
          else
            {
              if(match_int(t, 37))
                {
                  t = term_x_16;
                  t = explode_string_0_0(t);
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      t = term_y_16;
                      t = explode_string_0_0(t);
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          t = term_z_16;
                          t = explode_string_0_0(t);
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              t = term_a_17;
                              t = explode_string_0_0(t);
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  t = term_b_17;
                                  t = explode_string_0_0(t);
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      t = term_c_17;
                                      t = explode_string_0_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          t = term_d_17;
                                          t = explode_string_0_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              t = term_e_17;
                                              t = explode_string_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  t = term_f_17;
                                                  t = explode_string_0_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      t = term_g_17;
                                                      t = explode_string_0_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          t = term_h_17;
                                                          t = explode_string_0_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 126)))
                                                            _fail(t);
                                                          t = term_i_17;
                                                          t = explode_string_0_0(t);
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm escape_special_characters_0_0 (ATerm t)
{
  t = map_1_0(o_4, t);
  t = flat_list_0_0(t);
  return(t);
}
ATerm abox2alltt_1_0 (ATerm a_0 (ATerm), ATerm t)
{
  static ATerm w_58 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm c_58, ATerm t);
  static ATerm w_58 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm c_58, ATerm t)
  {
    ATerm g_58 = NULL,h_58 = NULL;
    t = z_57;
    if(match_cons(t, sym_KW_0))
      {
        t = z_57;
      }
    else
      {
        if(match_cons(t, sym_VAR_0))
          {
            t = z_57;
          }
        else
          {
            if(match_cons(t, sym_NUM_0))
              {
                t = z_57;
              }
            else
              {
                if(!(match_cons(t, sym_MATH_0)))
                  _fail(t);
                t = z_57;
              }
          }
      }
    t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
    t = a_0(t);
    if(match_cons(t, sym__2))
      {
        g_58 = ATgetArgument(t, 0);
        h_58 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, z_57, g_58), h_58);
    return(t);
  }
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,q_58 = NULL,r_58 = NULL;
  m_58 = t;
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_58;
  if(match_cons(t, sym_S_1))
    {
      o_58 = ATgetArgument(t, 0);
      {
        ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
        t = o_58;
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, o_58);
              t = table_get_0_0(t);
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
              t = string_as_chars_1_0(escape_special_characters_0_0, t);
            }
        }
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_58, r_58);
        t = h_14(o_58, r_58, t);
        i_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_58, i_16);
        t = add_0_0(t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_16, h_16);
      }
    }
  else
    {
      if(match_cons(t, sym_FBOX_2))
        {
          o_58 = ATgetArgument(t, 0);
          q_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_58;
      if(match_cons(t, sym_F_1))
        {
          l_58 = ATgetArgument(t, 0);
          t = l_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_58 = ATgetFirst((ATermList) t);
              k_58 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm l_17 = t;
                int m_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_17 = NULL,w_17 = NULL,i_18 = NULL,c_21 = NULL,k_21 = NULL;
                    t = j_58;
                    if(match_cons(t, sym_FFID_2))
                      {
                        c_21 = ATgetArgument(t, 0);
                        k_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm o_17 = t;
                      int p_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_35 = NULL,f_4 = NULL;
                          t = SSLgetAnnotations(j_58);
                          b_35 = t;
                          t = c_21;
                          if(!(match_cons(t, sym_FM_0)))
                            _fail(t);
                          t = k_21;
                          n_17 = t;
                          t = (ATerm) ATmakeAppl(sym_FFID_2, c_21, k_21);
                          f_4 = t;
                          t = SSLsetAnnotations(f_4, b_35);
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
                                ATerm f_36 = NULL,g_4 = NULL;
                                t = SSLgetAnnotations(j_58);
                                f_36 = t;
                                t = c_21;
                                if(!(match_cons(t, sym_SE_0)))
                                  _fail(t);
                                t = k_21;
                                n_17 = t;
                                t = (ATerm) ATmakeAppl(sym_FFID_2, c_21, k_21);
                                g_4 = t;
                                t = SSLsetAnnotations(g_4, f_36);
                                LocalPopChoice(r_17);
                              }
                            else
                              {
                                t = q_17;
                                {
                                  ATerm s_17 = t;
                                  int t_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_38 = NULL,h_4 = NULL;
                                      t = SSLgetAnnotations(j_58);
                                      h_38 = t;
                                      t = c_21;
                                      if(!(match_cons(t, sym_SH_0)))
                                        _fail(t);
                                      t = k_21;
                                      n_17 = t;
                                      t = (ATerm) ATmakeAppl(sym_FFID_2, c_21, k_21);
                                      h_4 = t;
                                      t = SSLsetAnnotations(h_4, h_38);
                                      LocalPopChoice(t_17);
                                    }
                                  else
                                    {
                                      t = s_17;
                                      {
                                        ATerm u_17 = t;
                                        int v_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_38 = NULL,i_4 = NULL;
                                            t = SSLgetAnnotations(j_58);
                                            o_38 = t;
                                            t = c_21;
                                            if(!(match_cons(t, sym_SZ_0)))
                                              _fail(t);
                                            t = k_21;
                                            n_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_FFID_2, c_21, k_21);
                                            i_4 = t;
                                            t = SSLsetAnnotations(i_4, o_38);
                                            LocalPopChoice(v_17);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            {
                                              ATerm v_38 = NULL,j_4 = NULL;
                                              t = SSLgetAnnotations(j_58);
                                              v_38 = t;
                                              t = c_21;
                                              if(!(match_cons(t, sym_CL_0)))
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_FFID_2, c_21, k_21);
                                              j_4 = t;
                                              t = SSLsetAnnotations(j_4, v_38);
                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, k_21);
                                              n_17 = t;
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, k_58), q_58), r_58);
                    t = a_0(t);
                    if(match_cons(t, sym__2))
                      {
                        w_17 = ATgetArgument(t, 0);
                        i_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, n_17, w_17), i_18);
                    LocalPopChoice(m_17);
                  }
                else
                  {
                    t = l_17;
                    t = w_58(o_58, q_58, r_58, m_58, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm y_17 = t;
                  int z_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, q_58, r_58);
                      t = a_0(t);
                      LocalPopChoice(z_17);
                    }
                  else
                    {
                      t = y_17;
                      t = w_58(o_58, q_58, r_58, m_58, t);
                    }
                }
              else
                {
                  t = w_58(o_58, q_58, r_58, m_58, t);
                }
            }
        }
      else
        {
          t = w_58(o_58, q_58, r_58, m_58, t);
        }
    }
  return(t);
}
ATerm try_abox2alltt_0_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2alltt_1_0(try_abox2alltt_0_0, t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_1_0(try_abox2alltt_0_0, t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm c_59 = NULL;
              c_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_59), term_e_18);
              t = fatal_error_0_0(t);
            }
          }
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_f_18;
  t = get_config_0_0(t);
  t = ReadFromFile_0_0(t);
  t = map_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_59 = ATgetFirst((ATermList) t);
      {
        ATerm g_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
          {
            g_59 = ATgetFirst((ATermList) g_18);
            {
              ATerm h_18 = (ATerm) ATgetNext((ATermList) g_18);
              if(((ATgetType(h_18) != AT_LIST) || !(ATisEmpty(h_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_11, f_59, g_59);
  t = table_put_0_0(t);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm e_59 = NULL;
  e_59 = t;
  t = term_x_11;
  t = table_create_0_0(t);
  t = try_1_0(q_4, t);
  t = e_59;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_l_18;
  t = set_config_0_0(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_o_18;
  t = set_config_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  if(match_string(t, "-t"))
    {
      t = j_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = j_59;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm k_59 = NULL;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, k_59);
  t = set_config_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  if(match_string(t, "-w"))
    {
      t = l_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = l_59;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_59 = NULL;
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, m_59);
  t = set_config_0_0(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm Abox_2_latex_options_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, t_4, u_4, t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_4, w_4, x_4, t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            {
              ATerm w_18 = t;
              int x_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(y_4, z_4, b_5, t);
                  LocalPopChoice(x_18);
                }
              else
                {
                  t = w_18;
                  t = ArgOption_3_0(c_5, d_5, e_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_latex_options_0_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = xtc_io_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  t = load_latex_table_0_0(t);
  t = read_from_0_0(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL;
        p_59 = t;
        t = term_j_18;
        t = get_config_0_0(t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("alltt", 0, ATtrue)))
          _fail(t);
        t = p_59;
        LocalPopChoice(b_19);
        {
          ATerm q_59 = NULL,r_59 = NULL;
          r_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_59, term_t_10);
          t = try_abox2alltt_0_0(t);
          t = Fst_0_0(t);
          q_59 = t;
          t = (ATerm) ATmakeAppl(sym_ALLTT_1, q_59);
          t = bottomup_1_0(i_5, t);
        }
      }
    else
      {
        t = a_19;
        {
          ATerm s_59 = NULL,t_59 = NULL;
          t = topdown_1_0(j_5, t);
          t_59 = t;
          t = BOXENV_args_0_0(t);
          s_59 = t;
          t = (ATerm) ATmakeAppl(sym_BOXENV_2, s_59, t_59);
          t = bottomup_1_0(k_5, t);
        }
      }
  }
  o_59 = t;
  t = term_a_6;
  t = create_header_0_0(t);
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, o_59), n_59), term_u_5);
  t = topdown_print_to_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = try_1_0(Latex2text_0_0, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = try_1_0(Abox2latex_0_0, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = try_1_0(Latex2text_0_0, t);
  return(t);
}
ATerm io_Abox_2_latex_0_0 (ATerm t)
{
  t = option_wrap_2_0(f_5, g_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_latex_0_0(t);
  return(t);
}

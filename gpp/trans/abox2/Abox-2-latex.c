#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_FILE_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_CL_0;
static Symbol sym_SZ_0;
static Symbol sym_SH_0;
static Symbol sym_SE_0;
static Symbol sym_FM_0;
static Symbol sym_MATH_0;
static Symbol sym_NUM_0;
static Symbol sym_VAR_0;
static Symbol sym_KW_0;
static Symbol sym_F_1;
static Symbol sym_FFID_2;
static Symbol sym_AOPTIONS_1;
static Symbol sym_AR_1;
static Symbol sym_AC_1;
static Symbol sym_AL_1;
static Symbol sym_IS_0;
static Symbol sym_HS_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_L_2;
static Symbol sym_C_2;
static Symbol sym_REF_2;
static Symbol sym_LBL_2;
static Symbol sym_FBOX_2;
static Symbol sym_R_2;
static Symbol sym_A_3;
static Symbol sym_ALT_2;
static Symbol sym_HV_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static Symbol sym_ALLTT_1;
static Symbol sym_BOXENV_2;
static Symbol sym_HBOX_2;
static Symbol sym_VBOX_3;
static Symbol sym_HVBOX_4;
static Symbol sym_ABOX_2;
static Symbol sym_ALTBOX_2;
static Symbol sym_CBOX_1;
static Symbol sym_LBOX_2;
static Symbol sym_LBLBOX_2;
static Symbol sym_REFBOX_2;
static Symbol sym_C_0;
static Symbol sym_R_0;
static Symbol sym_L_0;
static Symbol sym_EOR_0;
static Symbol sym_CSEP_0;
static Symbol sym_BOXFONT_2;
static Symbol sym_BOXCOLOR_1;
static void init_module_constructors (void)
{
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
static ATerm term_q_18;
static ATerm term_m_18;
static ATerm term_k_18;
static ATerm term_j_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_a_18;
static ATerm term_z_17;
static ATerm term_y_17;
static ATerm term_u_17;
static ATerm term_t_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_r_16;
static ATerm term_p_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_i_16;
static ATerm term_u_14;
static ATerm term_m_14;
static ATerm term_l_13;
static ATerm term_i_13;
static ATerm term_c_13;
static ATerm term_h_12;
static ATerm term_z_11;
static ATerm term_x_11;
static ATerm term_s_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_j_11;
static ATerm term_i_11;
static ATerm term_d_11;
static ATerm term_b_11;
static ATerm term_x_10;
static ATerm term_e_10;
static ATerm term_b_10;
static ATerm term_x_9;
static ATerm term_p_9;
static ATerm term_m_9;
static ATerm term_l_9;
static ATerm term_k_9;
static ATerm term_j_9;
static ATerm term_i_9;
static ATerm term_h_9;
static ATerm term_g_9;
static ATerm term_f_9;
static ATerm term_e_9;
static ATerm term_c_9;
static ATerm term_a_9;
static ATerm term_z_8;
static ATerm term_y_8;
static ATerm term_x_8;
static ATerm term_w_8;
static ATerm term_v_8;
static ATerm term_u_8;
static ATerm term_t_8;
static ATerm term_s_8;
static ATerm term_r_8;
static ATerm term_q_8;
static ATerm term_p_8;
static ATerm term_o_8;
static ATerm term_n_8;
static ATerm term_m_8;
static ATerm term_l_8;
static ATerm term_k_8;
static ATerm term_i_8;
static ATerm term_h_8;
static ATerm term_g_8;
static ATerm term_e_8;
static ATerm term_d_8;
static ATerm term_c_8;
static ATerm term_z_7;
static ATerm term_x_7;
static ATerm term_w_7;
static ATerm term_t_7;
static ATerm term_s_7;
static ATerm term_p_7;
static ATerm term_o_7;
static ATerm term_n_7;
static ATerm term_g_7;
static ATerm term_e_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_a_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_x_6;
static ATerm term_w_6;
static ATerm term_v_6;
static ATerm term_u_6;
static ATerm term_s_6;
static ATerm term_r_6;
static ATerm term_q_6;
static ATerm term_p_6;
static ATerm term_o_6;
static ATerm term_n_6;
static ATerm term_m_6;
static ATerm term_l_6;
static ATerm term_k_6;
static ATerm term_j_6;
static ATerm term_i_6;
static ATerm term_h_6;
static ATerm term_g_6;
static ATerm term_f_6;
static ATerm term_e_6;
static ATerm term_t_5;
static ATerm term_s_5;
static ATerm term_r_5;
static ATerm term_q_5;
static ATerm term_n_5;
static ATerm term_l_5;
static ATerm term_k_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically by \n", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001-2004 Merijn de Jonge (mdejonge@cs.uu.nl) \n", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
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
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("alltt", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_d_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm try_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm i_94 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm e_19 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm t_0 (ATerm t);
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
ATerm separate_by_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm v_5 (ATerm j_8, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_101 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_5 (ATerm f_8, ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm l_101 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm u_5 (ATerm i_10, ATerm t);
ATerm listtd_1_0 (ATerm a_102 (ATerm), ATerm t);
static ATerm v_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t);
static ATerm w_42 (ATerm i_41, ATerm j_41, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm x_5 (ATerm u_10, ATerm s_10, ATerm t);
static ATerm y_5 (ATerm m_10, ATerm q_10, ATerm n_10, ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm _2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm z_5 (ATerm g_18 (ATerm), ATerm h_18 (ATerm), ATerm i_18 (ATerm), ATerm l_11, ATerm k_11, ATerm t);
static ATerm a_6 (ATerm e_18 (ATerm), ATerm f_18 (ATerm), ATerm g_11, ATerm e_11, ATerm h_11, ATerm f_11, ATerm t);
ATerm foldl_1_0 (ATerm u_107 (ATerm), ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm b_18 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm thread_map_1_0 (ATerm g_108 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_108 (ATerm), ATerm t);
static ATerm b_6 (ATerm l_18 (ATerm), ATerm b_12, ATerm c_12, ATerm d_12, ATerm t);
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
static ATerm c_6 (ATerm p_18 (ATerm), ATerm a_13, ATerm z_12, ATerm v_12, ATerm x_12, ATerm u_12, ATerm t);
ATerm do_A_column_1_0 (ATerm p_18 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm FitToMax_1_0 (ATerm s_18 (ATerm), ATerm t);
ATerm split_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm abox2text_1_0 (ATerm h_0 (ATerm), ATerm t);
ATerm add_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm d_6 (ATerm t_9, ATerm u_9, ATerm t);
ATerm Cons_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm escape_special_characters_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm abox2alltt_1_0 (ATerm b_0 (ATerm), ATerm t);
ATerm try_abox2alltt_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_5 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm e_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm b_4 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm Abox_2_latex_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
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
  ATerm a_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = xtc_new_file_0_0(t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_0, term_k_5);
  t = open_file_0_0(t);
  t = a_0;
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
        t = (ATerm) ATmakeAppl(sym__2, f_0, (ATerm) ATinsert(ATempty, j_0));
        t = print_0_0(t);
        t = j_0;
        return(t);
      }
      t = try_1_0(e_0, t);
      return(t);
    }
    t = topdown_1_0(c_0, t);
  }
  t = f_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_0);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm l_0 = NULL;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_5), l_0), term_l_5);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_5;
      t = get_config_0_0(t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      t = (ATerm) ATempty;
    }
  t = map_1_0(i_0, t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm p_0 = NULL;
  t = term_r_5;
  t = tables2text_0_0(t);
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_5), term_n_6), term_m_6), term_s_5), term_l_6), term_k_6), term_j_6), term_i_6), term_h_6), term_s_5), p_0), term_g_6), term_f_6), term_s_5), term_e_6), term_s_5), term_t_5), term_s_5);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym_ALLTT_1))
    {
      y_0 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_6), y_0), term_o_6);
    }
  else
    {
      if(match_cons(t, sym_BOXENV_2))
        {
          y_0 = ATgetArgument(t, 0);
          a_1 = ATgetArgument(t, 1);
          t = y_0;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_6), a_1), term_q_6);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_0 = ATgetFirst((ATermList) t);
                  v_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_0;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_6), a_1), term_u_6), z_0), term_s_6);
            }
        }
      else
        {
          if(match_cons(t, sym_HBOX_2))
            {
              y_0 = ATgetArgument(t, 0);
              a_1 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_6), a_1), term_u_6), y_0), term_v_6);
            }
          else
            {
              if(match_cons(t, sym_VBOX_3))
                {
                  y_0 = ATgetArgument(t, 0);
                  a_1 = ATgetArgument(t, 1);
                  w_0 = ATgetArgument(t, 2);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_6), w_0), term_u_6), a_1), term_y_6), y_0), term_x_6);
                }
              else
                {
                  if(match_cons(t, sym_HVBOX_4))
                    {
                      y_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      w_0 = ATgetArgument(t, 2);
                      x_0 = ATgetArgument(t, 3);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_7), x_0), term_u_6), w_0), term_y_6), a_1), term_y_6), y_0), term_a_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_ABOX_2))
                        {
                          y_0 = ATgetArgument(t, 0);
                          a_1 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_7), a_1), term_u_6), y_0), term_c_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_ALTBOX_2))
                            {
                              y_0 = ATgetArgument(t, 0);
                              a_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_7), a_1), term_g_7), y_0), term_e_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_CBOX_1))
                                {
                                  y_0 = ATgetArgument(t, 0);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), y_0), term_o_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBOX_2))
                                    {
                                      y_0 = ATgetArgument(t, 0);
                                      a_1 = ATgetArgument(t, 1);
                                      t = y_0;
                                      if(match_string(t, "="))
                                        {
                                          ATerm q_7 = t;
                                          int r_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm f_15 = NULL;
                                              t = y_0;
                                              t = is_int_0_0(t);
                                              t = y_0;
                                              t = int_to_string_0_0(t);
                                              f_15 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), a_1), term_y_6), f_15), term_s_7);
                                              LocalPopChoice(r_7);
                                            }
                                          else
                                            {
                                              t = q_7;
                                              {
                                                ATerm u_7 = t;
                                                int v_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), a_1), term_w_7);
                                                    LocalPopChoice(v_7);
                                                  }
                                                else
                                                  {
                                                    t = u_7;
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_7), a_1), term_u_6), y_0), term_z_7);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm a_8 = t;
                                          int b_8 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm k_17 = NULL;
                                              t = y_0;
                                              t = is_int_0_0(t);
                                              t = y_0;
                                              t = int_to_string_0_0(t);
                                              k_17 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), a_1), term_y_6), k_17), term_s_7);
                                              LocalPopChoice(b_8);
                                            }
                                          else
                                            {
                                              t = a_8;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_7), a_1), term_u_6), y_0), term_z_7);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBLBOX_2))
                                        {
                                          y_0 = ATgetArgument(t, 0);
                                          a_1 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_1), term_d_8), y_0), term_c_8);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REFBOX_2))
                                            {
                                              y_0 = ATgetArgument(t, 0);
                                              a_1 = ATgetArgument(t, 1);
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_y_6), y_0), term_e_8);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_BOXFONT_2))
                                                {
                                                  y_0 = ATgetArgument(t, 0);
                                                  a_1 = ATgetArgument(t, 1);
                                                  t = y_0;
                                                  if(match_cons(t, sym_KW_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_g_8);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_VAR_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_h_8);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_NUM_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_i_8);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_MATH_0))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_k_8);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "sf"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_l_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "rm"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_m_8);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "tt"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_n_8);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "md"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_o_8);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "bf"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_p_8);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "up"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_q_8);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "it"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_r_8);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sc"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_s_8);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "sl"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_t_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "em"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_u_8);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "tiny"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_v_8);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "scriptsize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_w_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_x_8);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "small"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_y_8);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "normalsize"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_z_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_a_9);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "Large"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_c_9);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_e_9);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_f_9);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_g_9);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      z_0 = ATgetArgument(t, 0);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_1), term_y_6), z_0), term_h_9);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
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
                                                      t = term_i_9;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_R_0))
                                                        {
                                                          t = term_j_9;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_L_0))
                                                            {
                                                              t = term_k_9;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_EOR_0))
                                                                {
                                                                  t = term_l_9;
                                                                }
                                                              else
                                                                {
                                                                  if(!(match_cons(t, sym_CSEP_0)))
                                                                    _fail(t);
                                                                  t = term_m_9;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_34 = NULL;
      t = term_p_9;
      t = get_config_0_0(t);
      r_34 = t;
      t = (ATerm) ATinsert(ATempty, r_34);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm e_19 (ATerm), ATerm t)
{
  static ATerm x_34 (ATerm t);
  static ATerm x_34 (ATerm t)
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm v_34 = NULL;
      t = Cons_2_0(e_19, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_9 = ATgetFirst((ATermList) t);
          v_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      t = x_34(t);
      return(t);
    }
    t = try_1_0(k_0, t);
    return(t);
  }
  t = x_34(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  if(match_int(t, 9))
    {
      t = a_35;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = a_35;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
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
  ATerm z_34 = NULL;
  t = remove_trailing_1_0(m_0, t);
  {
    static ATerm n_0 (ATerm t);
    static ATerm n_0 (ATerm t)
    {
      static ATerm s_0 (ATerm t);
      static ATerm s_0 (ATerm t)
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          static ATerm c_1 (ATerm t);
          static ATerm c_1 (ATerm t)
          {
            if(((z_34 != NULL) && (z_34 != t)))
              _fail(t);
            else
              z_34 = t;
            return(t);
          }
          t = Cons_2_0(b_1, c_1, t);
          return(t);
        }
        t = Cons_2_0(t_0, u_0, t);
        t = not_null(z_34);
        return(t);
      }
      t = at_suffix_1_0(s_0, t);
      return(t);
    }
    t = try_1_0(n_0, t);
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
  ATerm a_36 = NULL;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_5), a_36);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = reverse_0_0(t);
  t = split_2_0(_id, d_1, t);
  {
    static ATerm b_36 (ATerm t);
    static ATerm b_36 (ATerm t)
    {
      ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
      if(match_cons(t, sym__2))
        {
          h_35 = ATgetArgument(t, 0);
          k_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_35;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_35 = NULL;
          t = k_35;
          t = LatexComment_0_0(t);
          o_35 = t;
          t = (ATerm) ATinsert(ATempty, o_35);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_35 = ATgetFirst((ATermList) t);
              j_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_35;
          if(match_int(t, 10))
            {
              ATerm s_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_35 = NULL,t_35 = NULL;
                  t = k_35;
                  t = LatexComment_0_0(t);
                  s_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATempty);
                  t = b_36(t);
                  t_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_35), s_35);
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = s_9;
                  t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATinsert(CheckATermList(k_35), i_35));
                  t = b_36(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, j_35, (ATerm) ATinsert(CheckATermList(k_35), i_35));
              t = b_36(t);
            }
        }
      return(t);
    }
    t = b_36(t);
  }
  t = remove_trailing_1_0(e_1, t);
  t = reverse_0_0(t);
  t = remove_trailing_1_0(f_1, t);
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm w_9 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_9;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_x_9;
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
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(j_1, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = term_b_10;
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
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_1, t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = term_e_10;
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(l_1, t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_e_10;
    }
  t = int_to_string_0_0(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,d_0 = NULL;
  o_36 = t;
  if(match_cons(t, sym_C_2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, m_36, n_36);
  d_0 = t;
  t = SSLsetAnnotations(d_0, l_36);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,g_0 = NULL;
  u_36 = t;
  if(match_cons(t, sym_C_2))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, s_36, t_36);
  g_0 = t;
  t = SSLsetAnnotations(g_0, r_36);
  return(t);
}
static ATerm v_5 (ATerm j_8, ATerm t)
{
  static ATerm b_37 (ATerm t);
  static ATerm b_37 (ATerm t)
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        {
          ATerm l_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(o_10);
            }
          else
            {
              t = l_10;
              {
                ATerm p_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm n_1 (ATerm t);
                    static ATerm n_1 (ATerm t)
                    {
                      t = Cons_2_0(_id, b_37, t);
                      return(t);
                    }
                    t = Cons_2_0(m_1, n_1, t);
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = p_10;
                    {
                      ATerm v_10 = t;
                      int w_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm o_1 (ATerm t);
                          static ATerm o_1 (ATerm t)
                          {
                            t = Cons_2_0(p_1, b_37, t);
                            return(t);
                          }
                          t = Cons_2_0(_id, o_1, t);
                          LocalPopChoice(w_10);
                        }
                      else
                        {
                          t = v_10;
                          {
                            ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                w_36 = ATgetFirst((ATermList) t);
                                x_36 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = x_36;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                y_36 = ATgetFirst((ATermList) t);
                                z_36 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(z_36), y_36);
                            t = b_37(t);
                            a_37 = t;
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(a_37), term_x_10), w_36);
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
  t = j_8;
  t = b_37(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_LBL_2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      {
        ATerm o_0 = NULL,q_0 = NULL,r_0 = NULL;
        t = o_37;
        if(match_cons(t, sym_R_2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_5(r_0, t);
        t = o_37;
        if(match_cons(t, sym_R_2))
          {
            ATerm z_10 = ATgetArgument(t, 0);
            q_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_5(q_0, t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, n_37, o_0);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          o_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_37;
      t = v_5(o_37, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm v_37 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      v_37 = ATgetArgument(t, 0);
      {
        ATerm x_37 = NULL,y_37 = NULL;
        t = v_37;
        t = Hspace_0_0(t);
        t = string_to_int_0_0(t);
        y_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_37, term_x_9);
        t = copy_0_0(t);
        x_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_37), term_b_11);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm a_38 = NULL,b_38 = NULL;
            t = v_37;
            t = Hspace_0_0(t);
            t = string_to_int_0_0(t);
            b_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_38, term_x_9);
            t = copy_0_0(t);
            a_38 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_38), term_d_11);
          }
        }
      else
        {
          ATerm d_38 = NULL,e_38 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              v_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_37;
          t = Hspace_0_0(t);
          t = string_to_int_0_0(t);
          e_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_38, term_x_9);
          t = copy_0_0(t);
          d_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_i_11);
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_10);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_11);
  return(t);
}
static ATerm w_5 (ATerm f_8, ATerm t)
{
  t = f_8;
  t = map_1_0(q_1, t);
  t = separate_by_1_0(r_1, t);
  t = concat_0_0(t);
  t = at_last_1_0(t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_11) != AT_INT) || (ATgetInt((ATermInt) m_11) != 34)))
        _fail(t);
      t_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_34), term_n_11), term_n_11);
  return(t);
}
static ATerm u_5 (ATerm i_10, ATerm t)
{
  ATerm s_34 = NULL;
  t = i_10;
  t = at_suffix_1_0(u_1, t);
  s_34 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_34), term_o_11), term_o_11);
  return(t);
}
static ATerm v_42 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t)
{
  t = c_41;
  if(match_cons(t, sym_KW_0))
    {
      t = c_41;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = c_41;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = c_41;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = c_41;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, c_41, d_41);
  return(t);
}
static ATerm w_42 (ATerm i_41, ATerm j_41, ATerm t)
{
  t = i_41;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, i_41);
        t = table_get_0_0(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = string_as_chars_1_0(v_1, t);
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = escape_special_characters_0_0(t);
  t = listtd_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = try_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm l_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_11) != AT_INT) || (ATgetInt((ATermInt) t_11) != 34)))
        _fail(t);
      l_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_5(l_41, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm u_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_11;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_11;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_z_11;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_42 = NULL;
  if(match_cons(t, sym_S_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_42;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  r_41 = t;
  if(match_cons(t, sym_REF_2))
    {
      s_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, s_41, q_41);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          s_41 = ATgetArgument(t, 0);
          q_41 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, s_41, q_41);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              s_41 = ATgetArgument(t, 0);
              q_41 = ATgetArgument(t, 1);
              {
                ATerm t_6 = NULL;
                t = r_41;
                {
                  ATerm a_12 = t;
                  int e_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_41;
                      t = string_to_int_0_0(t);
                      t_6 = t;
                      LocalPopChoice(e_12);
                    }
                  else
                    {
                      t = a_12;
                      {
                        ATerm f_12 = t;
                        int g_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = s_41;
                            t = explode_string_0_0(t);
                            t = Cons_2_0(z_1, _id, t);
                            t = (ATerm) ATinsert(ATempty, term_h_12);
                            t = implode_string_0_0(t);
                            t_6 = t;
                            LocalPopChoice(g_12);
                          }
                        else
                          {
                            t = f_12;
                            t = s_41;
                            t_6 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, t_6, q_41);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  s_41 = ATgetArgument(t, 0);
                  q_41 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, s_41, q_41);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      s_41 = ATgetArgument(t, 0);
                      q_41 = ATgetArgument(t, 1);
                      m_41 = ATgetArgument(t, 2);
                      {
                        ATerm f_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
                        t = m_41;
                        t = construct_rows_0_0(t);
                        i_7 = t;
                        t = q_41;
                        t = Vspace_0_0(t);
                        t = string_to_int_0_0(t);
                        f_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_7, term_j_11);
                        t = copy_0_0(t);
                        l_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, l_7, (ATerm) ATinsert(ATinsert(ATempty, term_n_5), term_j_11));
                        t = conc_0_0(t);
                        j_7 = t;
                        t = s_41;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            m_7 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_5(m_7, t);
                        h_7 = t;
                        t = i_7;
                        t = map_1_0(MkRows_0_0, t);
                        {
                          static ATerm a_2 (ATerm t);
                          static ATerm a_2 (ATerm t)
                          {
                            t = j_7;
                            return(t);
                          }
                          t = separate_by_1_0(a_2, t);
                        }
                        k_7 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, h_7, k_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          s_41 = ATgetArgument(t, 0);
                          q_41 = ATgetArgument(t, 1);
                          {
                            ATerm z_41 = NULL,a_42 = NULL,c_42 = NULL,e_42 = NULL;
                            t = s_41;
                            t = Hspace_0_0(t);
                            z_41 = t;
                            t = s_41;
                            t = Vspace_0_0(t);
                            a_42 = t;
                            t = s_41;
                            t = Ispace_0_0(t);
                            c_42 = t;
                            t = q_41;
                            t = filter_1_0(b_2, t);
                            t = separate_by_1_0(e_2, t);
                            e_42 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, z_41, a_42, c_42, e_42);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              s_41 = ATgetArgument(t, 0);
                              q_41 = ATgetArgument(t, 1);
                              {
                                ATerm f_42 = NULL,h_42 = NULL,j_42 = NULL;
                                t = s_41;
                                t = Vspace_0_0(t);
                                f_42 = t;
                                t = s_41;
                                t = Ispace_0_0(t);
                                h_42 = t;
                                t = q_41;
                                t = filter_1_0(f_2, t);
                                t = separate_by_1_0(g_2, t);
                                j_42 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, f_42, h_42, j_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  s_41 = ATgetArgument(t, 0);
                                  q_41 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_42 = NULL,n_42 = NULL;
                                    t = s_41;
                                    t = Hspace_0_0(t);
                                    l_42 = t;
                                    t = q_41;
                                    t = toh_0_0(t);
                                    n_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, l_42, n_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      s_41 = ATgetArgument(t, 0);
                                      q_41 = ATgetArgument(t, 1);
                                      t = s_41;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          p_41 = ATgetArgument(t, 0);
                                          t = p_41;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              n_41 = ATgetFirst((ATermList) t);
                                              o_41 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm i_12 = t;
                                                int j_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm y_7 = NULL,b_9 = NULL,d_9 = NULL;
                                                    t = n_41;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        b_9 = ATgetArgument(t, 0);
                                                        d_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm n_12 = t;
                                                      int o_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_9 = NULL,s_1 = NULL;
                                                          t = SSLgetAnnotations(n_41);
                                                          q_9 = t;
                                                          t = b_9;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = d_9;
                                                          y_7 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, b_9, d_9);
                                                          s_1 = t;
                                                          t = SSLsetAnnotations(s_1, q_9);
                                                          LocalPopChoice(o_12);
                                                        }
                                                      else
                                                        {
                                                          t = n_12;
                                                          {
                                                            ATerm p_12 = t;
                                                            int q_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_10 = NULL,w_1 = NULL;
                                                                t = SSLgetAnnotations(n_41);
                                                                a_10 = t;
                                                                t = b_9;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = d_9;
                                                                y_7 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, b_9, d_9);
                                                                w_1 = t;
                                                                t = SSLsetAnnotations(w_1, a_10);
                                                                LocalPopChoice(q_12);
                                                              }
                                                            else
                                                              {
                                                                t = p_12;
                                                                {
                                                                  ATerm r_12 = t;
                                                                  int s_12 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm h_10 = NULL,c_2 = NULL;
                                                                      t = SSLgetAnnotations(n_41);
                                                                      h_10 = t;
                                                                      t = b_9;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = d_9;
                                                                      y_7 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, b_9, d_9);
                                                                      c_2 = t;
                                                                      t = SSLsetAnnotations(c_2, h_10);
                                                                      LocalPopChoice(s_12);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_12;
                                                                      {
                                                                        ATerm t_12 = t;
                                                                        int w_12 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm t_10 = NULL,d_2 = NULL;
                                                                            t = SSLgetAnnotations(n_41);
                                                                            t_10 = t;
                                                                            t = b_9;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = d_9;
                                                                            y_7 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, b_9, d_9);
                                                                            d_2 = t;
                                                                            t = SSLsetAnnotations(d_2, t_10);
                                                                            LocalPopChoice(w_12);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_12;
                                                                            {
                                                                              ATerm c_11 = NULL,h_2 = NULL;
                                                                              t = SSLgetAnnotations(n_41);
                                                                              c_11 = t;
                                                                              t = b_9;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, b_9, d_9);
                                                                              h_2 = t;
                                                                              t = SSLsetAnnotations(h_2, c_11);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, d_9);
                                                                              y_7 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, y_7, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, o_41), q_41));
                                                    LocalPopChoice(j_12);
                                                  }
                                                else
                                                  {
                                                    t = i_12;
                                                    t = v_42(s_41, q_41, r_41, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = q_41;
                                                }
                                              else
                                                {
                                                  t = v_42(s_41, q_41, r_41, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = v_42(s_41, q_41, r_41, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          s_41 = ATgetArgument(t, 0);
                                          q_41 = ATgetArgument(t, 1);
                                          {
                                            ATerm q_42 = NULL;
                                            t = s_41;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = q_41;
                                            t = map_1_0(i_2, t);
                                            q_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, q_42);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              s_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = w_42(s_41, r_41, t);
                                        }
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
  ATerm y_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_9;
      t = get_config_0_0(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = y_12;
      t = term_c_13;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm u_10, ATerm s_10, ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,g_43 = NULL,h_43 = NULL;
  t = u_10;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(j_2, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = term_e_10;
      }
  }
  t = inc_0_0(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, term_i_13);
  t = copy_char_0_0(t);
  c_43 = t;
  t = u_10;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_2, t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = term_e_10;
      }
  }
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_43, term_l_13);
  t = copy_char_0_0(t);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_l_13);
  t = copy_char_0_0(t);
  e_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_43), d_43), c_43);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm m_10, ATerm q_10, ATerm n_10, ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
  t = x_5(m_10, n_10, t);
  j_43 = t;
  t = q_10;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10;
  t = map_1_0(Fst_0_0, t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, l_43);
  t = separate_by_0_0(t);
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, i_43);
  return(t);
}
static ATerm z_5 (ATerm g_18 (ATerm), ATerm h_18 (ATerm), ATerm i_18 (ATerm), ATerm l_11, ATerm k_11, ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,r_43 = NULL;
  t = term_r_5;
  t = i_18(t);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_11, r_43);
  t = g_18(t);
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_5;
  t = h_18(t);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, p_43);
  t = add_0_0(t);
  o_43 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_43), o_43));
  return(t);
}
static ATerm a_6 (ATerm e_18 (ATerm), ATerm f_18 (ATerm), ATerm g_11, ATerm e_11, ATerm h_11, ATerm f_11, ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
  t = e_18(t);
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_5;
  t = get_width_0_0(t);
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, x_43);
  t = leq_0_0(t);
  t = term_r_5;
  t = f_18(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, v_43);
  t = add_0_0(t);
  u_43 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_11), s_43), u_43));
  return(t);
}
ATerm SOpt_value_1_0 (ATerm b_18 (ATerm), ATerm t)
{
  ATerm y_43 = NULL;
  static ATerm l_2 (ATerm t);
  static ATerm l_2 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,j_3 = NULL;
    d_44 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        a_44 = ATgetArgument(t, 0);
        b_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_44);
    z_43 = t;
    t = a_44;
    t = b_18(t);
    c_44 = t;
    t = b_44;
    if(((y_43 != NULL) && (y_43 != t)))
      _fail(t);
    else
      y_43 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, c_44, b_44);
    j_3 = t;
    t = SSLsetAnnotations(j_3, z_43);
    return(t);
  }
  t = fetch_1_0(l_2, t);
  t = not_null(y_43);
  t = string_to_int_0_0(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm n_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,r_11 = NULL,v_11 = NULL,w_11 = NULL,s_3 = NULL;
            p_44 = t;
            if(match_cons(t, sym_H_2))
              {
                q_44 = ATgetArgument(t, 0);
                r_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_44);
            r_11 = t;
            t = q_44;
            t = Nil_0_0(t);
            v_11 = t;
            t = r_44;
            t = Nil_0_0(t);
            w_11 = t;
            t = (ATerm) ATmakeAppl(sym_H_2, v_11, w_11);
            s_3 = t;
            t = SSLsetAnnotations(s_3, r_11);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_13;
    }
  return(t);
}
static ATerm b_6 (ATerm l_18 (ATerm), ATerm b_12, ATerm c_12, ATerm d_12, ATerm t)
{
  static ATerm m_2 (ATerm t);
  static ATerm n_2 (ATerm t);
  static ATerm m_2 (ATerm t)
  {
    ATerm t_44 = NULL;
    t_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_44, b_12);
    t = l_18(t);
    return(t);
  }
  static ATerm n_2 (ATerm t)
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm u_44 = NULL;
      u_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_44, c_12);
      t = l_18(t);
      return(t);
    }
    t = map_1_0(o_2, t);
    return(t);
  }
  t = d_12;
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = Cons_2_0(Nil_0_0, Nil_0_0, t);
    }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm s_13 = t;
  if((PushChoice() == 0))
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm d_45 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
            d_45 = t;
            t = SSL_explode_term(d_45);
            if(match_cons(t, sym__2))
              {
                k_12 = ATgetArgument(t, 0);
                l_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_12;
            t = Cons_2_0(_id, p_2, t);
            m_12 = t;
            t = SSL_mkterm(k_12, m_12);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_13;
    }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm p_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,v_45 = NULL;
  r_45 = t;
  if(match_cons(t, sym__3))
    {
      s_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
      v_45 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_45;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm x_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_13);
        t = v_45;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm a_14 = ATgetArgument(t, 0);
                  p_45 = ATgetArgument(t, 1);
                  {
                    ATerm b_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_13);
              t = s_45;
              if(match_int(t, 1))
                {
                  ATerm c_14 = t;
                  int d_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, s_45, term_b_10);
                      t = gt_0_0(t);
                      t = v_45;
                      t = align_left_0_0(t);
                      LocalPopChoice(d_14);
                    }
                  else
                    {
                      t = c_14;
                      t = p_45;
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym__2, s_45, term_b_10);
                  t = gt_0_0(t);
                  t = v_45;
                  t = align_left_0_0(t);
                }
            }
          else
            {
              t = y_13;
              t = (ATerm) ATmakeAppl(sym__2, s_45, term_b_10);
              t = gt_0_0(t);
              t = v_45;
              t = align_left_0_0(t);
            }
        }
      }
    else
      {
        t = v_13;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm g_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(f_14);
              t = v_45;
              t = align_center_0_0(t);
            }
          else
            {
              t = e_14;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm h_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_45;
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
static ATerm c_6 (ATerm p_18 (ATerm), ATerm a_13, ATerm z_12, ATerm v_12, ATerm x_12, ATerm u_12, ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  t = v_12;
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      ATerm s_46 = NULL;
      s_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_46, x_12);
      t = p_18(t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = unzip_0_0(t);
  t = _2_0(s_2, list_max_0_0, t);
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_46, x_12);
  t = subt_0_0(t);
  l_46 = t;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_12, term_b_10);
        t = gt_0_0(t);
        LocalPopChoice(j_14);
        {
          ATerm t_46 = NULL,w_46 = NULL;
          t = a_13;
          if(match_cons(t, sym_AC_1))
            {
              w_46 = ATgetArgument(t, 0);
              t = w_46;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  w_46 = ATgetArgument(t, 0);
                  t = w_46;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      w_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_46;
                }
            }
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(v_2, t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = term_b_10;
              }
          }
          t_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_46, term_l_13);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = i_14;
        t = term_m_14;
      }
  }
  m_46 = t;
  t = k_46;
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      ATerm a_47 = NULL,b_47 = NULL;
      b_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_12, a_13, (ATerm) ATmakeAppl(sym__3, term_l_13, b_47, l_46));
      t = align_column_0_0(t);
      a_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_47, m_46);
      t = conc_strings_0_0(t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  n_46 = t;
  t = m_46;
  t = string_length_0_0(t);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, j_46);
  t = add_0_0(t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, (ATerm) ATinsert(CheckATermList(u_12), n_46));
  return(t);
}
ATerm do_A_column_1_0 (ATerm p_18 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if(match_cons(n_14, sym__2))
        {
          c_47 = ATgetArgument(n_14, 0);
          {
            ATerm p_14 = ATgetArgument(n_14, 1);
            if(match_cons(p_14, sym__2))
              {
                d_47 = ATgetArgument(p_14, 0);
                e_47 = ATgetArgument(p_14, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm o_14 = ATgetArgument(t, 1);
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
  t = c_6(p_18, c_47, d_47, e_47, f_47, g_47, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm s_18 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  l_47 = t;
  t = length_0_0(t);
  i_47 = t;
  t = term_r_5;
  t = s_18(t);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_47, i_47);
  t = subt_0_0(t);
  j_47 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_47, term_e_10);
        t = gt_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, j_47, (ATerm) ATempty);
        t = copy_0_0(t);
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_47, k_47);
        t = conc_0_0(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = l_47;
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_47), term_u_14);
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
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,u_3 = NULL;
      z_48 = t;
      if(match_cons(t, sym_R_2))
        {
          w_48 = ATgetArgument(t, 0);
          x_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_48);
      v_48 = t;
      t = x_48;
      t = Nil_0_0(t);
      y_48 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, w_48, y_48);
      u_3 = t;
      t = SSLsetAnnotations(u_3, v_48);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, x_2, t);
  {
    static ATerm a_49 (ATerm t);
    static ATerm a_49 (ATerm t)
    {
      ATerm t_47 = NULL,u_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
      if(match_cons(t, sym__2))
        {
          w_47 = ATgetArgument(t, 0);
          z_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_47;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm f_48 = NULL;
          t = z_47;
          t = reverse_0_0(t);
          f_48 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_48));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_47 = ATgetFirst((ATermList) t);
              y_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_47;
          if(match_cons(t, sym_R_2))
            {
              t_47 = ATgetArgument(t, 0);
              u_47 = ATgetArgument(t, 1);
              {
                ATerm w_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_48 = NULL,m_48 = NULL;
                    t = z_47;
                    t = reverse_0_0(t);
                    l_48 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATempty);
                    t = a_49(t);
                    m_48 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(m_48), (ATerm) ATmakeAppl(sym_R_2, t_47, u_47)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, l_48));
                    LocalPopChoice(x_14);
                  }
                else
                  {
                    t = w_14;
                    t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATinsert(CheckATermList(z_47), x_47));
                    t = a_49(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATinsert(CheckATermList(z_47), x_47));
              t = a_49(t);
            }
        }
      return(t);
    }
    t = a_49(t);
  }
  t = filter_1_0(y_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm y_50 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_50;
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
static ATerm l_3 (ATerm t)
{
  ATerm z_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = _2_0(reverse_0_0, _id, t);
  return(t);
}
ATerm abox2text_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  static ATerm t_54 (ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm n_50, ATerm t);
  static ATerm u_54 (ATerm b_51, ATerm c_51, ATerm d_51, ATerm e_51, ATerm t);
  static ATerm v_54 (ATerm m_51, ATerm n_51, ATerm o_51, ATerm p_51, ATerm t);
  static ATerm w_54 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm g_52, ATerm t);
  static ATerm t_54 (ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm n_50, ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,u_50 = NULL,x_50 = NULL;
    t = l_50;
    t = construct_rows_0_0(t);
    t = map_1_0(z_2, t);
    {
      static ATerm a_3 (ATerm t);
      static ATerm a_3 (ATerm t)
      {
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          t = j_50;
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
    q_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_50, q_50);
    t = zip_0_0(t);
    r_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_50, (ATerm) ATmakeAppl(sym__2, m_50, (ATerm) ATempty));
    {
      static ATerm c_3 (ATerm t);
      static ATerm c_3 (ATerm t)
      {
        t = do_A_column_1_0(h_0, t);
        return(t);
      }
      t = foldl_1_0(c_3, t);
    }
    if(match_cons(t, sym__2))
      {
        u_50 = ATgetArgument(t, 0);
        s_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = s_50;
    t = reverse_0_0(t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm d_3 (ATerm t);
      static ATerm d_3 (ATerm t)
      {
        ATerm z_50 = NULL;
        z_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_50, u_50);
        return(t);
      }
      t = map_1_0(d_3, t);
    }
    x_50 = t;
    t = (ATerm) ATmakeAppl(sym__3, k_50, x_50, m_50);
    t = y_5(k_50, x_50, m_50, t);
    return(t);
  }
  static ATerm u_54 (ATerm b_51, ATerm c_51, ATerm d_51, ATerm e_51, ATerm t)
  {
    ATerm g_51 = NULL,h_51 = NULL,k_51 = NULL;
    t = b_51;
    {
      ATerm a_15 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(e_3, t);
          LocalPopChoice(b_15);
        }
      else
        {
          t = a_15;
          t = term_e_10;
        }
    }
    k_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_51, k_51);
    t = add_0_0(t);
    h_51 = t;
    t = c_51;
    t = filter_1_0(is_real_vbox_0_0, t);
    g_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_51);
      }
    else
      {
        ATerm l_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, d_51, h_51, g_51);
        t = b_6(h_0, d_51, h_51, g_51, t);
        l_51 = t;
        t = (ATerm) ATmakeAppl(sym__3, b_51, l_51, d_51);
        t = y_5(b_51, l_51, d_51, t);
      }
    return(t);
  }
  static ATerm v_54 (ATerm m_51, ATerm n_51, ATerm o_51, ATerm p_51, ATerm t)
  {
    ATerm s_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
    static ATerm k_3 (ATerm t);
    static ATerm k_3 (ATerm t)
    {
      static ATerm m_3 (ATerm t);
      static ATerm m_3 (ATerm t)
      {
        ATerm c_52 = NULL;
        c_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_52, not_null(v_51));
        t = subt_0_0(t);
        return(t);
      }
      t = _2_0(l_3, m_3, t);
      return(t);
    }
    t = m_51;
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(f_3, t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = term_b_10;
        }
    }
    w_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_51, term_l_13);
    t = copy_char_0_0(t);
    u_51 = t;
    t = string_length_0_0(t);
    if(((v_51 != NULL) && (v_51 != t)))
      _fail(t);
    else
      v_51 = t;
    t = n_51;
    t = filter_1_0(is_real_hbox_0_0, t);
    s_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_51, o_51);
    {
      static ATerm g_3 (ATerm t);
      static ATerm g_3 (ATerm t)
      {
        static ATerm h_3 (ATerm t);
        static ATerm h_3 (ATerm t)
        {
          ATerm y_51 = NULL;
          y_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_51, y_51);
          t = add_0_0(t);
          return(t);
        }
        t = h_0(t);
        t = _2_0(_id, h_3, t);
        return(t);
      }
      t = thread_map_1_0(g_3, t);
    }
    {
      static ATerm i_3 (ATerm t);
      static ATerm i_3 (ATerm t)
      {
        ATerm a_52 = NULL;
        a_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_51, a_52);
        t = separate_by_0_0(t);
        return(t);
      }
      t = _2_0(i_3, _id, t);
    }
    t = try_1_0(k_3, t);
    return(t);
  }
  static ATerm w_54 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm g_52, ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
    t = d_52;
    {
      ATerm e_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(n_3, t);
          LocalPopChoice(g_15);
        }
      else
        {
          t = e_15;
          t = term_b_10;
        }
    }
    q_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_52, term_l_13);
    t = copy_char_0_0(t);
    k_52 = t;
    t = d_52;
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(o_3, t);
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          t = term_e_10;
        }
    }
    t = inc_0_0(t);
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_52, term_i_13);
    t = copy_char_0_0(t);
    t = k_52;
    t = string_length_0_0(t);
    i_52 = t;
    t = d_52;
    {
      ATerm j_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(p_3, t);
          LocalPopChoice(k_15);
        }
      else
        {
          t = j_15;
          t = term_e_10;
        }
    }
    o_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_52, o_52);
    t = add_0_0(t);
    j_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_52)));
    {
      static ATerm q_3 (ATerm t);
      static ATerm q_3 (ATerm t)
      {
        ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
        w_52 = t;
        if(match_cons(t, sym__2))
          {
            x_52 = ATgetArgument(t, 0);
            y_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_52;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_52 = ATgetFirst((ATermList) t);
            v_52 = (ATerm) ATgetNext((ATermList) t);
            t = r_52;
            if(match_cons(t, sym__2))
              {
                s_52 = ATgetArgument(t, 0);
                t_52 = ATgetArgument(t, 1);
                {
                  ATerm l_15 = t;
                  int m_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm r_3 (ATerm t);
                      static ATerm r_3 (ATerm t)
                      {
                        t = i_52;
                        return(t);
                      }
                      t = w_52;
                      t = a_6(h_0, r_3, x_52, s_52, t_52, v_52, t);
                      LocalPopChoice(m_15);
                    }
                  else
                    {
                      t = l_15;
                      {
                        static ATerm t_3 (ATerm t);
                        static ATerm v_3 (ATerm t);
                        static ATerm t_3 (ATerm t)
                        {
                          t = i_52;
                          return(t);
                        }
                        static ATerm v_3 (ATerm t)
                        {
                          t = j_52;
                          return(t);
                        }
                        t = w_52;
                        t = z_5(h_0, t_3, v_3, x_52, y_52, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm w_3 (ATerm t);
                static ATerm x_3 (ATerm t);
                static ATerm w_3 (ATerm t)
                {
                  t = i_52;
                  return(t);
                }
                static ATerm x_3 (ATerm t)
                {
                  t = j_52;
                  return(t);
                }
                t = w_52;
                t = z_5(h_0, w_3, x_3, x_52, y_52, t);
              }
          }
        else
          {
            static ATerm f_4 (ATerm t);
            static ATerm g_4 (ATerm t);
            static ATerm f_4 (ATerm t)
            {
              t = i_52;
              return(t);
            }
            static ATerm g_4 (ATerm t)
            {
              t = j_52;
              return(t);
            }
            t = w_52;
            t = z_5(h_0, f_4, g_4, x_52, y_52, t);
          }
        return(t);
      }
      t = foldl_1_0(q_3, t);
    }
    t = reverse_0_0(t);
    t = map_1_0(h_4, t);
    {
      static ATerm j_4 (ATerm t);
      static ATerm j_4 (ATerm t)
      {
        static ATerm k_4 (ATerm t);
        static ATerm k_4 (ATerm t)
        {
          ATerm l_53 = NULL;
          l_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_52, l_53);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(k_4, _id, t);
        return(t);
      }
      t = map_1_0(j_4, t);
    }
    n_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_52, n_52, f_52);
    t = y_5(d_52, n_52, f_52, t);
    return(t);
  }
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  u_53 = t;
  if(match_cons(t, sym__2))
    {
      v_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_53;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_14, y_53);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_53 = ATgetFirst((ATermList) t);
          x_53 = (ATerm) ATgetNext((ATermList) t);
          t = x_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_53, y_53);
          t = h_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              w_53 = ATgetArgument(t, 0);
              x_53 = ATgetArgument(t, 1);
              {
                ATerm d_13 = NULL,e_13 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, w_53, y_53);
                t = h_0(t);
                d_13 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm n_15 = ATgetArgument(t, 0);
                    e_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, w_53, x_53), y_53);
                {
                  ATerm o_15 = t;
                  int p_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_13 = NULL;
                      t = get_width_0_0(t);
                      f_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
                      t = leq_0_0(t);
                      LocalPopChoice(p_15);
                      t = d_13;
                    }
                  else
                    {
                      t = o_15;
                      t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
                      t = h_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  w_53 = ATgetArgument(t, 0);
                  x_53 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, w_53, x_53), y_53);
                  t = h_0(t);
                }
              else
                {
                  ATerm q_15 = t;
                  int r_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm s_15 = ATgetArgument(t, 0);
                          x_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(r_15);
                      t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
                      t = h_0(t);
                    }
                  else
                    {
                      t = q_15;
                      {
                        ATerm t_15 = t;
                        int u_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm v_15 = ATgetArgument(t, 0);
                                x_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_15);
                            t = x_53;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                n_53 = ATgetFirst((ATermList) t);
                                p_53 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = n_53;
                            if(match_cons(t, sym_S_1))
                              {
                                o_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = p_53;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, o_53, y_53);
                          }
                        else
                          {
                            t = t_15;
                            if(match_cons(t, sym_S_1))
                              {
                                w_53 = ATgetArgument(t, 0);
                                {
                                  ATerm o_54 = NULL,p_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, w_53, y_53);
                                  t = d_6(w_53, y_53, t);
                                  p_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, y_53, p_54);
                                  t = add_0_0(t);
                                  o_54 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, w_53, o_54);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    w_53 = ATgetArgument(t, 0);
                                    x_53 = ATgetArgument(t, 1);
                                    t_53 = ATgetArgument(t, 2);
                                    t = w_53;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        s_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = t_53;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        q_53 = ATgetFirst((ATermList) t);
                                        r_53 = (ATerm) ATgetNext((ATermList) t);
                                        t = r_53;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = q_53;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm w_15 = t;
                                                int x_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_54(s_53, x_53, t_53, y_53, u_53, t);
                                                    LocalPopChoice(x_15);
                                                  }
                                                else
                                                  {
                                                    t = w_15;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_53);
                                                  }
                                              }
                                            else
                                              {
                                                t = t_54(s_53, x_53, t_53, y_53, u_53, t);
                                              }
                                          }
                                        else
                                          {
                                            t = q_53;
                                            t = t_54(s_53, x_53, t_53, y_53, u_53, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm y_15 = t;
                                            int z_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = t_54(s_53, x_53, t_53, y_53, u_53, t);
                                                LocalPopChoice(z_15);
                                              }
                                            else
                                              {
                                                t = y_15;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_53);
                                              }
                                          }
                                        else
                                          {
                                            t = t_54(s_53, x_53, t_53, y_53, u_53, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        w_53 = ATgetArgument(t, 0);
                                        x_53 = ATgetArgument(t, 1);
                                        t = u_54(w_53, x_53, y_53, u_53, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            w_53 = ATgetArgument(t, 0);
                                            x_53 = ATgetArgument(t, 1);
                                            t = v_54(w_53, x_53, y_53, u_53, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                w_53 = ATgetArgument(t, 0);
                                                x_53 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = w_54(w_53, x_53, y_53, u_53, t);
                                          }
                                      }
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
static ATerm d_6 (ATerm t_9, ATerm u_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_13), t_9);
  t = string_tokenize_0_0(t);
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL,b_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_e_10;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_55 = ATgetFirst((ATermList) t);
                b_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_55;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_55;
            t = string_length_0_0(t);
          }
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm d_55 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          d_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_55, u_9);
          t = subt_0_0(t);
        }
      }
  }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
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
                  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  i_55 = t;
                  t = Hd_0_0(t);
                  g_55 = t;
                  t = i_55;
                  t = Tl_0_0(t);
                  h_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_55, h_55);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = try_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if(match_int(t, 32))
    {
      t = term_i_16;
      t = explode_string_0_0(t);
    }
  else
    {
      if(match_int(t, 35))
        {
          t = term_j_16;
          t = explode_string_0_0(t);
        }
      else
        {
          if(match_int(t, 36))
            {
              t = term_k_16;
              t = explode_string_0_0(t);
            }
          else
            {
              if(match_int(t, 37))
                {
                  t = term_l_16;
                  t = explode_string_0_0(t);
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      t = term_m_16;
                      t = explode_string_0_0(t);
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          t = term_n_16;
                          t = explode_string_0_0(t);
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              t = term_o_16;
                              t = explode_string_0_0(t);
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  t = term_p_16;
                                  t = explode_string_0_0(t);
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      t = term_r_16;
                                      t = explode_string_0_0(t);
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          t = term_u_16;
                                          t = explode_string_0_0(t);
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              t = term_v_16;
                                              t = explode_string_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  t = term_w_16;
                                                  t = explode_string_0_0(t);
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      t = term_x_16;
                                                      t = explode_string_0_0(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          t = term_y_16;
                                                          t = explode_string_0_0(t);
                                                        }
                                                      else
                                                        {
                                                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 126)))
                                                            _fail(t);
                                                          t = term_z_16;
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
  t = map_1_0(l_4, t);
  t = flat_list_0_0(t);
  return(t);
}
ATerm abox2alltt_1_0 (ATerm b_0 (ATerm), ATerm t)
{
  static ATerm u_58 (ATerm y_57, ATerm z_57, ATerm a_58, ATerm b_58, ATerm t);
  static ATerm u_58 (ATerm y_57, ATerm z_57, ATerm a_58, ATerm b_58, ATerm t)
  {
    ATerm f_58 = NULL,g_58 = NULL;
    t = y_57;
    if(match_cons(t, sym_KW_0))
      {
        t = y_57;
      }
    else
      {
        if(match_cons(t, sym_VAR_0))
          {
            t = y_57;
          }
        else
          {
            if(match_cons(t, sym_NUM_0))
              {
                t = y_57;
              }
            else
              {
                if(!(match_cons(t, sym_MATH_0)))
                  _fail(t);
                t = y_57;
              }
          }
      }
    t = (ATerm) ATmakeAppl(sym__2, z_57, a_58);
    t = b_0(t);
    if(match_cons(t, sym__2))
      {
        f_58 = ATgetArgument(t, 0);
        g_58 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, y_57, f_58), g_58);
    return(t);
  }
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
  l_58 = t;
  if(match_cons(t, sym__2))
    {
      m_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_58;
  if(match_cons(t, sym_S_1))
    {
      n_58 = ATgetArgument(t, 0);
      {
        ATerm q_16 = NULL,s_16 = NULL,t_16 = NULL;
        t = n_58;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, term_s_11, n_58);
              t = table_get_0_0(t);
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              t = string_as_chars_1_0(escape_special_characters_0_0, t);
            }
        }
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_58, p_58);
        t = d_6(n_58, p_58, t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_58, t_16);
        t = add_0_0(t);
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, s_16);
      }
    }
  else
    {
      if(match_cons(t, sym_FBOX_2))
        {
          n_58 = ATgetArgument(t, 0);
          o_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_58;
      if(match_cons(t, sym_F_1))
        {
          k_58 = ATgetArgument(t, 0);
          t = k_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_58 = ATgetFirst((ATermList) t);
              j_58 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm c_17 = t;
                int d_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_17 = NULL,n_18 = NULL,o_18 = NULL,i_21 = NULL,j_21 = NULL;
                    t = i_58;
                    if(match_cons(t, sym_FFID_2))
                      {
                        i_21 = ATgetArgument(t, 0);
                        j_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_36 = NULL,y_3 = NULL;
                          t = SSLgetAnnotations(i_58);
                          c_36 = t;
                          t = i_21;
                          if(!(match_cons(t, sym_FM_0)))
                            _fail(t);
                          t = j_21;
                          v_17 = t;
                          t = (ATerm) ATmakeAppl(sym_FFID_2, i_21, j_21);
                          y_3 = t;
                          t = SSLsetAnnotations(y_3, c_36);
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          {
                            ATerm g_17 = t;
                            int h_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_37 = NULL,i_4 = NULL;
                                t = SSLgetAnnotations(i_58);
                                t_37 = t;
                                t = i_21;
                                if(!(match_cons(t, sym_SE_0)))
                                  _fail(t);
                                t = j_21;
                                v_17 = t;
                                t = (ATerm) ATmakeAppl(sym_FFID_2, i_21, j_21);
                                i_4 = t;
                                t = SSLsetAnnotations(i_4, t_37);
                                LocalPopChoice(h_17);
                              }
                            else
                              {
                                t = g_17;
                                {
                                  ATerm i_17 = t;
                                  int j_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm l_38 = NULL,z_4 = NULL;
                                      t = SSLgetAnnotations(i_58);
                                      l_38 = t;
                                      t = i_21;
                                      if(!(match_cons(t, sym_SH_0)))
                                        _fail(t);
                                      t = j_21;
                                      v_17 = t;
                                      t = (ATerm) ATmakeAppl(sym_FFID_2, i_21, j_21);
                                      z_4 = t;
                                      t = SSLsetAnnotations(z_4, l_38);
                                      LocalPopChoice(j_17);
                                    }
                                  else
                                    {
                                      t = i_17;
                                      {
                                        ATerm l_17 = t;
                                        int m_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_38 = NULL,g_5 = NULL;
                                            t = SSLgetAnnotations(i_58);
                                            s_38 = t;
                                            t = i_21;
                                            if(!(match_cons(t, sym_SZ_0)))
                                              _fail(t);
                                            t = j_21;
                                            v_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_FFID_2, i_21, j_21);
                                            g_5 = t;
                                            t = SSLsetAnnotations(g_5, s_38);
                                            LocalPopChoice(m_17);
                                          }
                                        else
                                          {
                                            t = l_17;
                                            {
                                              ATerm v_44 = NULL,h_5 = NULL;
                                              t = SSLgetAnnotations(i_58);
                                              v_44 = t;
                                              t = i_21;
                                              if(!(match_cons(t, sym_CL_0)))
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_FFID_2, i_21, j_21);
                                              h_5 = t;
                                              t = SSLsetAnnotations(h_5, v_44);
                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, j_21);
                                              v_17 = t;
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, j_58), o_58), p_58);
                    t = b_0(t);
                    if(match_cons(t, sym__2))
                      {
                        n_18 = ATgetArgument(t, 0);
                        o_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, v_17, n_18), o_18);
                    LocalPopChoice(d_17);
                  }
                else
                  {
                    t = c_17;
                    t = u_58(n_58, o_58, p_58, l_58, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
                      t = b_0(t);
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      t = u_58(n_58, o_58, p_58, l_58, t);
                    }
                }
              else
                {
                  t = u_58(n_58, o_58, p_58, l_58, t);
                }
            }
        }
      else
        {
          t = u_58(n_58, o_58, p_58, l_58, t);
        }
    }
  return(t);
}
ATerm try_abox2alltt_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2alltt_1_0(try_abox2alltt_0_0, t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_1_0(try_abox2alltt_0_0, t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm a_59 = NULL;
              a_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_59), term_t_17);
              t = fatal_error_0_0(t);
            }
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_u_17;
  t = get_config_0_0(t);
  t = ReadFromFile_0_0(t);
  t = map_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_59 = ATgetFirst((ATermList) t);
      {
        ATerm w_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
          {
            e_59 = ATgetFirst((ATermList) w_17);
            {
              ATerm x_17 = (ATerm) ATgetNext((ATermList) w_17);
              if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_11, d_59, e_59);
  t = table_put_0_0(t);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  t = term_s_11;
  t = table_create_0_0(t);
  t = try_1_0(n_4, t);
  t = c_59;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_a_18;
  t = set_config_0_0(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_c_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_j_18;
  t = set_config_0_0(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm h_59 = NULL;
  h_59 = t;
  if(match_string(t, "-t"))
    {
      t = h_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = h_59;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm i_59 = NULL;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, i_59);
  t = set_config_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  if(match_string(t, "-w"))
    {
      t = j_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = j_59;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_59 = NULL;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, k_59);
  t = set_config_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm Abox_2_latex_options_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, q_4, r_4, t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = r_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(s_4, t_4, u_4, t);
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
                  t = ArgOption_3_0(v_4, w_4, x_4, t);
                  LocalPopChoice(x_18);
                }
              else
                {
                  t = w_18;
                  t = ArgOption_3_0(y_4, a_5, b_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
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
static ATerm d_5 (ATerm t)
{
  t = xtc_io_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = load_latex_table_0_0(t);
  t = read_from_0_0(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_59 = NULL;
        n_59 = t;
        t = term_y_17;
        t = get_config_0_0(t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("alltt", 0, ATtrue)))
          _fail(t);
        t = n_59;
        LocalPopChoice(b_19);
        {
          ATerm o_59 = NULL,p_59 = NULL;
          p_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_59, term_e_10);
          t = try_abox2alltt_0_0(t);
          t = Fst_0_0(t);
          o_59 = t;
          t = (ATerm) ATmakeAppl(sym_ALLTT_1, o_59);
          t = bottomup_1_0(f_5, t);
        }
      }
    else
      {
        t = a_19;
        {
          ATerm q_59 = NULL,r_59 = NULL;
          t = topdown_1_0(i_5, t);
          r_59 = t;
          t = BOXENV_args_0_0(t);
          q_59 = t;
          t = (ATerm) ATmakeAppl(sym_BOXENV_2, q_59, r_59);
          t = bottomup_1_0(j_5, t);
        }
      }
  }
  m_59 = t;
  t = term_r_5;
  t = create_header_0_0(t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, m_59), l_59), term_n_5);
  t = topdown_print_to_0_0(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = try_1_0(Latex2text_0_0, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = try_1_0(Abox2latex_0_0, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = try_1_0(Latex2text_0_0, t);
  return(t);
}
ATerm io_Abox_2_latex_0_0 (ATerm t)
{
  t = option_wrap_2_0(c_5, d_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_latex_0_0(t);
  return(t);
}

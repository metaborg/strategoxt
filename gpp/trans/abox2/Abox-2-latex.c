#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_u_22;
ATerm term_a_22;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_n_17;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_i_16;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_s_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_i_12;
ATerm term_g_12;
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
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_t_9;
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
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_13);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__3, term_v_7, term_u_20, term_s_7);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm Abox2latex_options_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm foldr_3_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm collect_set_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm u_30 (ATerm g_2, ATerm h_2, ATerm i_2, ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm LatexComment_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm make_latex_comment_0_0 (ATerm);
ATerm FFID_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm toh_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm separate_by_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm filter_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm h_79 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm C_2_0 (ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm g_3 (ATerm);
ATerm table_row_0_0 (ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm table_def_0_0 (ATerm);
ATerm while_not_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm R_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm m_43 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm x_44 (ATerm r_44, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_101 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_105 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm parse_options_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm iowrap_3_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_0 = NULL,l_0 = NULL;
  k_0 = t;
  t = term_s_7;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_0;
  return(t);
}
ATerm q_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_7;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)), m_0);
  t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, m_0);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm n_0 = NULL;
  n_0 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), n_0);
  t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_f_8, n_0);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
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
                  t = Option_3_0(q_0, r_0, s_0, t);
                  ;
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_8);
                      }
                    else
                      {
                        t = n_8;
                        {
                          ATerm p_8 = t;
                          int q_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(q_8);
                            }
                          else
                            {
                              t = p_8;
                              {
                                ATerm r_8 = t;
                                int s_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(t_0, v_0, y_0, t);
                                    ;
                                    LocalPopChoice(s_8);
                                  }
                                else
                                  {
                                    t = r_8;
                                    t = ArgOption_3_0(z_0, a_1, b_1, t);
                                  }
                              }
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
ATerm f_1 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = SSL_explode_string(p_0);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  o_0 = t;
  t = SSL_implode_string(o_0);
  return(t);
}
ATerm foldr_3_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_93(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm u_0 = NULL,e_1 = NULL,n_1 = NULL,o_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_0 = ATgetFirst((ATermList) t);
            e_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_0;
        t = g_93(t);
        n_1 = t;
        t = e_1;
        t = foldr_3_0(e_93, f_93, g_93, t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        t = f_93(t);
      }
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 = NULL,x_0 = NULL;
      ATerm k_1 (ATerm t)
      {
        t = not_null(x_0);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((w_0 != NULL) && (w_0 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_0 = ATgetArgument(t, 0);
          if(((x_0 != NULL) && (x_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(w_0);
      t = at_end_1_0(k_1, t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm c_1 = NULL,d_1 = NULL;
        c_1 = t;
        t = SSL_explode_term(c_1);
        if(match_cons(t, sym__2))
          {
            ATerm x_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            d_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_1;
        t = concat_0_0(t);
      }
    }
  return(t);
}
ATerm collect_set_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 = NULL;
      t = c_92(t);
      u_1 = t;
      t = (ATerm) ATinsert(ATempty, u_1);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm c_0 = NULL,e_0 = NULL;
        c_0 = t;
        t = SSL_explode_term(c_0);
        if(match_cons(t, sym__2))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            e_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_0;
        {
          ATerm j_1 (ATerm t)
          {
            t = collect_set_1_0(c_92, t);
            return(t);
          }
          t = foldr_3_0(g_1, h_1, j_1, t);
        }
      }
    }
  return(t);
}
ATerm u_30 (ATerm g_2, ATerm h_2, ATerm i_2, ATerm t)
{
  ATerm z_2 = NULL;
  t = SSL_is_int(g_2);
  t = SSL_int_to_string(g_2);
  z_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), h_2), term_c_9), z_2), term_b_9);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,n_3 = NULL,o_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      e_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
      t = e_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), n_3), term_e_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_3 = ATgetFirst((ATermList) t);
              a_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), n_3), term_h_9), f_3), term_g_9);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          e_3 = ATgetArgument(t, 0);
          n_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_9), n_3), term_h_9), e_3), term_i_9);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              e_3 = ATgetArgument(t, 0);
              n_3 = ATgetArgument(t, 1);
              c_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), c_3), term_h_9), n_3), term_c_9), e_3), term_k_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  e_3 = ATgetArgument(t, 0);
                  n_3 = ATgetArgument(t, 1);
                  c_3 = ATgetArgument(t, 2);
                  d_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_9), d_3), term_h_9), c_3), term_c_9), n_3), term_c_9), e_3), term_m_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      e_3 = ATgetArgument(t, 0);
                      n_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), n_3), term_h_9), e_3), term_o_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          e_3 = ATgetArgument(t, 0);
                          n_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_9), n_3), term_r_9), e_3), term_q_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              e_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_9), e_3), term_t_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  e_3 = ATgetArgument(t, 0);
                                  n_3 = ATgetArgument(t, 1);
                                  t = e_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm v_9 = t;
                                      int w_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_30(e_3, n_3, o_3, t);
                                          ;
                                          LocalPopChoice(w_9);
                                        }
                                      else
                                        {
                                          t = v_9;
                                          {
                                            ATerm x_9 = t;
                                            int y_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), n_3), term_z_9);
                                                ;
                                                LocalPopChoice(y_9);
                                              }
                                            else
                                              {
                                                t = x_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_10), n_3), term_h_9), e_3), term_b_10);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm c_10 = t;
                                      int d_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_30(e_3, n_3, o_3, t);
                                          ;
                                          LocalPopChoice(d_10);
                                        }
                                      else
                                        {
                                          t = c_10;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_10), n_3), term_h_9), e_3), term_b_10);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      e_3 = ATgetArgument(t, 0);
                                      n_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_3), term_f_10), e_3), term_e_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          e_3 = ATgetArgument(t, 0);
                                          n_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_c_9), e_3), term_g_10);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              e_3 = ATgetArgument(t, 0);
                                              n_3 = ATgetArgument(t, 1);
                                              t = e_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_h_10);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_i_10);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_j_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_k_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_l_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_m_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_n_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_o_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_p_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_q_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_r_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_s_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_t_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_u_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_v_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_w_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_x_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_y_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_z_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_a_11);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_b_11);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_c_11);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_d_11);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_e_11);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  f_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), n_3), term_c_9), f_3), term_f_11);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_g_11;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_h_11;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_i_11;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_j_11;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_k_11;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = bottomup_1_0(k_81, t);
    return(t);
  }
  t = SRTS_all(l_1, t);
  t = k_81(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)));
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 = NULL;
            t = eval_config_0_0(t);
            i_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), i_1);
            t = i_1;
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
          }
        v_30 = t;
        t = (ATerm) ATinsert(ATempty, v_30);
      }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_31;
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
      t = b_31;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(m_1, flat_list_0_0, t);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
                  t = Cons_2_0(p_1, _id, t);
                  y_30 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_30 = ATgetFirst((ATermList) t);
                      {
                        ATerm x_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = y_30;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_11 = ATgetFirst((ATermList) t);
                      a_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_30, a_31);
                  {
                    ATerm z_11 = t;
                    int a_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm c_12 = ATgetArgument(t, 0);
                            ATerm d_12 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = z_30;
                        {
                          ATerm r_1 (ATerm t)
                          {
                            t = a_31;
                            return(t);
                          }
                          t = at_end_1_0(r_1, t);
                        }
                        ;
                        LocalPopChoice(a_12);
                      }
                    else
                      {
                        t = z_11;
                        {
                          ATerm q_1 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_30, a_31));
                          if(match_cons(t, sym__2))
                            {
                              ATerm e_12 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) e_12) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              q_1 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = q_1;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm k_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_12) != AT_INT) || (ATgetInt((ATermInt) f_12) != 34)))
        _fail(t);
      k_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_31), term_g_12), term_g_12);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(h_12) != AT_INT) || (ATgetInt((ATermInt) h_12) != 34)))
        _fail(t);
      i_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_31;
  t = at_suffix_1_0(s_1, t);
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_31), term_i_12), term_i_12);
  return(t);
}
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm l_31 (ATerm t)
  {
    t = k_88(t);
    {
      ATerm j_12 = t;
      int k_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_12);
        }
      else
        {
          t = j_12;
          t = Cons_2_0(_id, l_31, t);
        }
    }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_int(t, 32))
        {
          t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue)));
        }
      else
        {
          if(match_int(t, 35))
            {
              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue)));
            }
          else
            {
              if(match_int(t, 36))
                {
                  t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue)));
                }
              else
                {
                  if(match_int(t, 37))
                    {
                      t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue)));
                    }
                  else
                    {
                      if(match_int(t, 38))
                        {
                          t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue)));
                        }
                      else
                        {
                          if(match_int(t, 45))
                            {
                              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue)));
                            }
                          else
                            {
                              if(match_int(t, 60))
                                {
                                  t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue)));
                                }
                              else
                                {
                                  if(match_int(t, 62))
                                    {
                                      t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue)));
                                    }
                                  else
                                    {
                                      if(match_int(t, 92))
                                        {
                                          t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue)));
                                        }
                                      else
                                        {
                                          if(match_int(t, 94))
                                            {
                                              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue)));
                                            }
                                          else
                                            {
                                              if(match_int(t, 95))
                                                {
                                                  t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue)));
                                                }
                                              else
                                                {
                                                  if(match_int(t, 123))
                                                    {
                                                      t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue)));
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 124))
                                                        {
                                                          t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue)));
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 125))
                                                            {
                                                              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue)));
                                                            }
                                                          else
                                                            {
                                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 126)))
                                                                _fail(t);
                                                              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm latex_string_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL;
      o_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), o_32);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        c_2 = t;
        t = SSL_explode_string(c_2);
        t = listtd_1_0(t_1, t);
        t = map_1_0(v_1, t);
        t = flat_list_0_0(t);
        d_2 = t;
        t = SSL_implode_string(d_2);
      }
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm l_33 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        t = Cons_2_0(m_79, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_12 = ATgetFirst((ATermList) t);
            k_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_33;
        t = l_33(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm m_33 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_87(t);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = Cons_2_0(_id, m_33, t);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  if(match_int(t, 9))
    {
      t = q_33;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = q_33;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  t = remove_trailing_1_0(w_1, t);
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              if(((o_33 != NULL) && (o_33 != t)))
                _fail(t);
              else
                o_33 = t;
              return(t);
            }
            t = Cons_2_0(a_2, b_2, t);
            return(t);
          }
          t = Cons_2_0(y_1, z_1, t);
          t = not_null(o_33);
          return(t);
        }
        t = at_suffix_1_0(x_1, t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
      }
    p_33 = t;
    t = SSL_implode_string(p_33);
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_12), q_34);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm u_33 = NULL,s_3 = NULL;
  u_33 = t;
  t = SSL_explode_string(u_33);
  t = reverse_acc_2_0(_id, e_2, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATempty);
  {
    ATerm r_34 (ATerm t)
    {
      ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
      if(match_cons(t, sym__2))
        {
          w_33 = ATgetArgument(t, 0);
          z_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_33;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_34 = NULL;
          t = z_33;
          t = LatexComment_0_0(t);
          e_34 = t;
          t = (ATerm) ATinsert(ATempty, e_34);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_33 = ATgetFirst((ATermList) t);
              y_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_33;
          if(match_int(t, 10))
            {
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_34 = NULL,j_34 = NULL;
                  t = z_33;
                  t = LatexComment_0_0(t);
                  i_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATempty);
                  t = r_34(t);
                  j_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_34), i_34);
                  ;
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = z_12;
                  t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(CheckATermList(z_33), x_33));
                  t = r_34(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(CheckATermList(z_33), x_33));
              t = r_34(t);
            }
        }
      return(t);
    }
    t = r_34(t);
    t = remove_trailing_1_0(f_2, t);
    t = reverse_acc_2_0(_id, j_2, t);
    t = remove_trailing_1_0(k_2, t);
    t = map_1_0(l_2, t);
  }
  return(t);
}
ATerm FFID_2_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  x_34 = t;
  if(match_cons(t, sym_FFID_2))
    {
      t_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  s_34 = t;
  t = t_34;
  t = i_71(t);
  v_34 = t;
  t = u_34;
  t = j_71(t);
  w_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, v_34, w_34), s_34);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_13 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_13;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  t = filter_1_0(m_2, t);
  t = separate_by_1_0(n_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_2, t);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = term_f_13;
    }
  a_35 = t;
  t = SSL_int_to_string(a_35);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_35;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm p_2 (ATerm t)
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                {
                  ATerm d_35 = NULL;
                  t = Cons_2_0(_id, p_2, t);
                  d_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_35), b_35);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, p_2, t);
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
  t = term_k_13;
  return(t);
}
ATerm separate_by_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  f_35 = t;
  t = if_verbose2_1_0(q_2, t);
  t = term_s_7;
  t = w_86(t);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, f_35);
  t = separate_by_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              t = filter_1_0(f_94, t);
              return(t);
            }
            t = Cons_2_0(f_94, r_2, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm l_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_13 = ATgetFirst((ATermList) t);
                  l_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_35;
              t = filter_1_0(f_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm o_35 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(s_2, t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = term_s_13;
    }
  o_35 = t;
  t = SSL_int_to_string(o_35);
  return(t);
}
ATerm SOpt_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  u_35 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  p_35 = t;
  t = q_35;
  t = e_72(t);
  s_35 = t;
  t = r_35;
  t = f_72(t);
  t_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, s_35, t_35), p_35);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm x_35 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm u_2 (ATerm t)
    {
      if(((x_35 != NULL) && (x_35 != t)))
        _fail(t);
      else
        x_35 = t;
      return(t);
    }
    t = SOpt_2_0(h_79, u_2, t);
    return(t);
  }
  t = fetch_1_0(t_2, t);
  t = SSL_string_to_int(not_null(x_35));
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(v_2, t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      t = term_s_13;
    }
  y_35 = t;
  t = SSL_int_to_string(y_35);
  return(t);
}
ATerm C_2_0 (ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_C_2))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_36);
  z_35 = t;
  t = a_36;
  t = a_71(t);
  c_36 = t;
  t = b_36;
  t = b_71(t);
  d_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, c_36, d_36), z_35);
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = C_2_0(_id, _id, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = C_2_0(_id, _id, t);
  return(t);
}
ATerm table_row_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_36;
  {
    ATerm v_36 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, w_2, t);
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                {
                  ATerm b_14 = t;
                  int c_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = Cons_2_0(_id, v_36, t);
                        return(t);
                      }
                      t = Cons_2_0(x_2, y_2, t);
                      ;
                      LocalPopChoice(c_14);
                    }
                  else
                    {
                      t = b_14;
                      {
                        ATerm d_14 = t;
                        int e_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_3 (ATerm t)
                            {
                              t = Cons_2_0(g_3, v_36, t);
                              return(t);
                            }
                            t = Cons_2_0(_id, b_3, t);
                            ;
                            LocalPopChoice(e_14);
                          }
                        else
                          {
                            t = d_14;
                            {
                              ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  q_36 = ATgetFirst((ATermList) t);
                                  r_36 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = r_36;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  s_36 = ATgetFirst((ATermList) t);
                                  t_36 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(t_36), s_36);
                              t = v_36(t);
                              u_36 = t;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_36), term_f_14), q_36);
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
    t = v_36(t);
  }
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
      if(match_cons(t, sym_LBL_2))
        {
          a_37 = ATgetArgument(t, 0);
          b_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_37;
      t = table_row_0_0(t);
      t = b_37;
      t = table_row_0_0(t);
      c_37 = t;
      t = (ATerm) ATmakeAppl(sym_LBLBOX_2, a_37, c_37);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      t = table_row_0_0(t);
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm d_37 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_3, t);
        t = c_88(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = Cons_2_0(_id, d_37, t);
      }
    return(t);
  }
  t = d_37(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm z_37 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      z_37 = ATgetArgument(t, 0);
      {
        ATerm g_4 = NULL,j_4 = NULL,n_4 = NULL;
        t = z_37;
        t = Hspace_0_0(t);
        j_4 = t;
        t = SSL_string_to_int(j_4);
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_c_13);
        t = copy_0_0(t);
        n_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_k_14);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          z_37 = ATgetArgument(t, 0);
          {
            ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
            t = z_37;
            t = Hspace_0_0(t);
            d_5 = t;
            t = SSL_string_to_int(d_5);
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_5, term_c_13);
            t = copy_0_0(t);
            e_5 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, e_5), term_l_14);
          }
        }
      else
        {
          ATerm o_5 = NULL,x_5 = NULL,y_5 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              z_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_37;
          t = Hspace_0_0(t);
          x_5 = t;
          t = SSL_string_to_int(x_5);
          o_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_5, term_c_13);
          t = copy_0_0(t);
          y_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_5), term_m_14);
        }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_14);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_14);
  return(t);
}
ATerm table_def_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_37;
  t = map_1_0(i_3, t);
  t = separate_by_1_0(j_3, t);
  t = concat_0_0(t);
  t = at_last_1_0(k_3, t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm d_38 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_81(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = b_81(t);
        t = d_38(t);
      }
    return(t);
  }
  t = d_38(t);
  return(t);
}
ATerm for_3_0 (ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  t = d_81(t);
  t = while_not_2_0(e_81, f_81, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_38, f_38, (ATerm) ATempty);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm k_38 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(((ATgetType(r_14) != AT_INT) || (ATgetInt((ATermInt) r_14) != 0)))
        _fail(t);
      {
        ATerm s_14 = ATgetArgument(t, 1);
      }
      k_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_38;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,p_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__3))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
      p_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_38, term_f_13);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, l_38, term_f_13);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(l_38, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = SSL_subtr(l_38, (ATerm) ATmakeInt(1));
      }
    u_38 = t;
    t = (ATerm) ATmakeAppl(sym__3, u_38, m_38, (ATerm) ATinsert(CheckATermList(p_38), m_38));
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_3, m_3, p_3, t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = _2_0(q_3, _id, t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm R_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym_R_2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_39);
  v_38 = t;
  t = w_38;
  t = q_71(t);
  y_38 = t;
  t = x_38;
  t = r_71(t);
  z_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, y_38, z_38), v_38);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm x_14 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, v_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATempty);
  {
    ATerm h_40 (ATerm t)
    {
      ATerm g_39 = NULL,h_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
      if(match_cons(t, sym__2))
        {
          j_39 = ATgetArgument(t, 0);
          m_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm r_39 = NULL;
          t = m_39;
          t = reverse_acc_2_0(_id, r_3, t);
          r_39 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, r_39));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_39 = ATgetFirst((ATermList) t);
              l_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_39;
          if(match_cons(t, sym_R_2))
            {
              g_39 = ATgetArgument(t, 0);
              h_39 = ATgetArgument(t, 1);
              {
                ATerm y_14 = t;
                int z_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_39 = NULL,y_39 = NULL;
                    t = m_39;
                    t = reverse_acc_2_0(_id, t_3, t);
                    x_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATempty);
                    t = h_40(t);
                    y_39 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(y_39), (ATerm) ATmakeAppl(sym_R_2, g_39, h_39)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, x_39));
                    ;
                    LocalPopChoice(z_14);
                  }
                else
                  {
                    t = y_14;
                    t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATinsert(CheckATermList(m_39), k_39));
                    t = h_40(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATinsert(CheckATermList(m_39), k_39));
              t = h_40(t);
            }
        }
      return(t);
    }
    t = h_40(t);
    t = filter_1_0(u_3, t);
  }
  return(t);
}
ATerm m_43 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm t)
{
  t = x_41;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_KW_0)))
          _fail(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_VAR_0)))
                _fail(t);
              ;
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_NUM_0)))
                      _fail(t);
                    ;
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    if(!(match_cons(t, sym_MATH_0)))
                      _fail(t);
                  }
              }
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, x_41, y_41);
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_12), term_n_14);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm g_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_15;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm i_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_15;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(!(match_cons(t, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm h_43 = NULL;
  if(match_cons(t, sym_S_1))
    {
      h_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_43;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  h_42 = t;
  if(match_cons(t, sym_REF_2))
    {
      i_42 = ATgetArgument(t, 0);
      g_42 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, i_42, g_42);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          i_42 = ATgetArgument(t, 0);
          g_42 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, i_42, g_42);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              i_42 = ATgetArgument(t, 0);
              g_42 = ATgetArgument(t, 1);
              {
                ATerm a_7 = NULL;
                t = h_42;
                {
                  ATerm k_15 = t;
                  int l_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(i_42);
                      a_7 = t;
                      ;
                      LocalPopChoice(l_15);
                    }
                  else
                    {
                      t = k_15;
                      {
                        ATerm m_15 = t;
                        int n_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_explode_string(i_42);
                            t = Cons_2_0(w_3, _id, t);
                            t = SSL_implode_string((ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(61)));
                            a_7 = t;
                            ;
                            LocalPopChoice(n_15);
                          }
                        else
                          {
                            t = m_15;
                            t = i_42;
                            a_7 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, a_7, g_42);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  i_42 = ATgetArgument(t, 0);
                  g_42 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, i_42, g_42);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      i_42 = ATgetArgument(t, 0);
                      g_42 = ATgetArgument(t, 1);
                      c_42 = ATgetArgument(t, 2);
                      {
                        ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
                        t = c_42;
                        t = construct_rows_0_0(t);
                        x_7 = t;
                        t = g_42;
                        t = Vspace_0_0(t);
                        z_7 = t;
                        t = SSL_string_to_int(z_7);
                        y_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, y_7, term_n_14);
                        t = copy_0_0(t);
                        a_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATinsert(ATinsert(ATempty, term_y_12), term_n_14));
                        {
                          ATerm o_15 = t;
                          int p_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm q_15 = ATgetArgument(t, 0);
                                  ATerm r_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = a_8;
                              t = at_end_1_0(x_3, t);
                              ;
                              LocalPopChoice(p_15);
                            }
                          else
                            {
                              t = o_15;
                              {
                                ATerm b_12 = NULL;
                                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(sym_EOR_0))));
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm s_15 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
                                      _fail(t);
                                    b_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = b_12;
                                t = concat_0_0(t);
                              }
                            }
                          b_8 = t;
                          t = i_42;
                          t = table_def_0_0(t);
                          c_8 = t;
                          t = x_7;
                          t = map_1_0(MkRows_0_0, t);
                          {
                            ATerm y_3 (ATerm t)
                            {
                              t = b_8;
                              return(t);
                            }
                            t = separate_by_1_0(y_3, t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_ABOX_2, c_8, d_8);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          i_42 = ATgetArgument(t, 0);
                          g_42 = ATgetArgument(t, 1);
                          {
                            ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
                            t = i_42;
                            t = Hspace_0_0(t);
                            r_42 = t;
                            t = i_42;
                            t = Vspace_0_0(t);
                            s_42 = t;
                            t = i_42;
                            t = Ispace_0_0(t);
                            t_42 = t;
                            t = g_42;
                            t = filter_1_0(z_3, t);
                            t = separate_by_1_0(a_4, t);
                            u_42 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, r_42, s_42, t_42, u_42);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              i_42 = ATgetArgument(t, 0);
                              g_42 = ATgetArgument(t, 1);
                              {
                                ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
                                t = i_42;
                                t = Vspace_0_0(t);
                                x_42 = t;
                                t = i_42;
                                t = Ispace_0_0(t);
                                y_42 = t;
                                t = g_42;
                                t = filter_1_0(b_4, t);
                                t = separate_by_1_0(c_4, t);
                                z_42 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, x_42, y_42, z_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  i_42 = ATgetArgument(t, 0);
                                  g_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_43 = NULL,d_43 = NULL;
                                    t = i_42;
                                    t = Hspace_0_0(t);
                                    c_43 = t;
                                    t = g_42;
                                    t = toh_0_0(t);
                                    d_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, c_43, d_43);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      i_42 = ATgetArgument(t, 0);
                                      g_42 = ATgetArgument(t, 1);
                                      t = i_42;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          f_42 = ATgetArgument(t, 0);
                                          t = f_42;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              d_42 = ATgetFirst((ATermList) t);
                                              e_42 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm t_15 = t;
                                                int u_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm y_13 = NULL,q_14 = NULL;
                                                    t = d_42;
                                                    {
                                                      ATerm v_15 = t;
                                                      int w_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_4 (ATerm t)
                                                          {
                                                            if(((q_14 != NULL) && (q_14 != t)))
                                                              _fail(t);
                                                            else
                                                              q_14 = t;
                                                            return(t);
                                                          }
                                                          t = FFID_2_0(d_4, e_4, t);
                                                          ;
                                                          LocalPopChoice(w_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
                                                          {
                                                            ATerm x_15 = t;
                                                            int y_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_4 (ATerm t)
                                                                {
                                                                  if(((q_14 != NULL) && (q_14 != t)))
                                                                    _fail(t);
                                                                  else
                                                                    q_14 = t;
                                                                  return(t);
                                                                }
                                                                t = FFID_2_0(f_4, h_4, t);
                                                                ;
                                                                LocalPopChoice(y_15);
                                                              }
                                                            else
                                                              {
                                                                t = x_15;
                                                                {
                                                                  ATerm a_16 = t;
                                                                  int b_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm k_4 (ATerm t)
                                                                      {
                                                                        if(((q_14 != NULL) && (q_14 != t)))
                                                                          _fail(t);
                                                                        else
                                                                          q_14 = t;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2_0(i_4, k_4, t);
                                                                      ;
                                                                      LocalPopChoice(b_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_16;
                                                                      {
                                                                        ATerm c_16 = t;
                                                                        int d_16 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm m_4 (ATerm t)
                                                                            {
                                                                              if(((q_14 != NULL) && (q_14 != t)))
                                                                                _fail(t);
                                                                              else
                                                                                q_14 = t;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2_0(l_4, m_4, t);
                                                                            ;
                                                                            LocalPopChoice(d_16);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_16;
                                                                            {
                                                                              ATerm p_4 (ATerm t)
                                                                              {
                                                                                if(((y_13 != NULL) && (y_13 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  y_13 = t;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2_0(o_4, p_4, t);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(y_13));
                                                                              q_14 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(q_14), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, e_42), g_42));
                                                    }
                                                    ;
                                                    LocalPopChoice(u_15);
                                                  }
                                                else
                                                  {
                                                    t = t_15;
                                                    t = m_43(i_42, g_42, h_42, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  ATerm e_16 = t;
                                                  int f_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_42;
                                                      ;
                                                      LocalPopChoice(f_16);
                                                    }
                                                  else
                                                    {
                                                      t = e_16;
                                                      t = m_43(i_42, g_42, h_42, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = m_43(i_42, g_42, h_42, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = m_43(i_42, g_42, h_42, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          i_42 = ATgetArgument(t, 0);
                                          g_42 = ATgetArgument(t, 1);
                                          {
                                            ATerm g_43 = NULL;
                                            t = i_42;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = g_42;
                                            t = map_1_0(q_4, t);
                                            g_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, g_43);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              i_42 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = i_42;
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
ATerm topdown_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  t = j_81(t);
  {
    ATerm r_4 (ATerm t)
    {
      t = topdown_1_0(j_81, t);
      return(t);
    }
    t = SRTS_all(r_4, t);
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_43 = ATgetFirst((ATermList) t);
      {
        ATerm g_16 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
          {
            p_43 = ATgetFirst((ATermList) g_16);
            {
              ATerm h_16 = (ATerm) ATgetNext((ATermList) g_16);
              if(((ATgetType(h_16) != AT_LIST) || !(ATisEmpty(h_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), o_43, p_43);
  t = (ATerm) ATmakeAppl(sym__3, term_i_16, o_43, p_43);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)));
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)));
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_15 = NULL;
              t = eval_config_0_0(t);
              z_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)), z_15);
              t = z_15;
              ;
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
            }
          t = ReadFromFile_0_0(t);
          t = map_1_0(s_4, t);
        }
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
      }
    t = n_43;
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(u_4, t);
  q_43 = t;
  t = BOXENV_args_0_0(t);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, r_43, q_43);
  t = bottomup_1_0(v_4, t);
  t = collect_set_1_0(w_4, t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  t = SSL_is_string(s_43);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = _2_0(_id, t_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  if(match_cons(t, sym__2))
    {
      t_43 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_43, term_r_16);
  t = open_stream_0_0(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_43, u_43);
  t = q_99(t);
  t = fclose_0_0(t);
  t = u_43;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = fetch_1_0(f_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = WriteToFile_1_0(g_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if(match_cons(s_16, sym_Stream_1))
        {
          y_43 = ATgetArgument(s_16, 0);
        }
      else
        _fail(t);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(y_43, z_43);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_44);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = WriteToFile_1_0(i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if(match_cons(t_16, sym_Stream_1))
        {
          b_44 = ATgetArgument(t_16, 0);
        }
      else
        _fail(t);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(b_44, c_44);
  d_44 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), d_44);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_44);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  w_43 = t;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_43 != NULL) && (x_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_4, t);
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          t = term_w_16;
          if(((x_43 != NULL) && (x_43 != t)))
            _fail(t);
          else
            x_43 = t;
        }
      return(t);
    }
    t = _2_0(x_4, _id, t);
    t = w_43;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm e_17 = NULL;
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), e_17);
        return(t);
      }
      t = _2_0(_id, z_4, t);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_5, b_5, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = _2_0(_id, h_5, t);
          }
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
ATerm apply_strategy_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  f_44 = t;
  t = dtime_0_0(t);
  t = f_44;
  t = s_102(t);
  g_44 = t;
  t = dtime_0_0(t);
  h_44 = t;
  t = g_44;
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_44), (ATerm) ATmakeAppl(sym_Runtime_1, h_44)), j_44);
  return(t);
}
ATerm x_44 (ATerm r_44, ATerm t)
{
  t = SSL_fclose(r_44);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_44 = ATgetArgument(t, 0);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_44);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = x_44(v_44, t);
          }
      }
    }
  else
    {
      t = x_44(v_44, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_45 = NULL;
  t = SSL_stdin_stream();
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_stdout_stream();
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_45 = NULL;
  t = SSL_stderr_stream();
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_45);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm k_45 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_45;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  t = SSL_is_string(o_45);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      ATerm c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,b_19 = NULL;
        y_18 = t;
        t = SSL_explode_term(y_18);
        if(match_cons(t, sym__2))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_17 = ATgetArgument(t, 1);
              if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
                {
                  b_19 = ATgetFirst((ATermList) h_17);
                  {
                    ATerm i_17 = (ATerm) ATgetNext((ATermList) h_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_19;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_19;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_19;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_19;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = d_17;
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
              t = _2_0(j_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_45 = ATgetArgument(t, 0);
                  i_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_45, i_45);
              j_45 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_45);
              ;
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
              {
                ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
                t = _2_0(k_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_45 = ATgetArgument(t, 0);
                    m_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_45, m_45);
                n_45 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_45);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_45 = NULL;
      s_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_45, term_n_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm c_22 = NULL;
        c_22 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_22), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = c_22;
        _fail(t);
      }
    }
  p_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_45);
  q_45 = t;
  t = p_45;
  t = fclose_0_0(t);
  t = q_45;
  return(t);
}
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm x_45 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_87, _id, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = Cons_2_0(_id, x_45, t);
      }
    return(t);
  }
  t = x_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm a_46 = NULL,b_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_46 = ATgetFirst((ATermList) t);
            b_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_46;
        {
          ATerm l_5 (ATerm t)
          {
            t = b_46;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm h_46 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_46, t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_87(t);
      }
    return(t);
  }
  t = h_46(t);
  return(t);
}
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  n_46 = t;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_46);
  i_46 = t;
  t = j_46;
  t = b_66(t);
  l_46 = t;
  t = k_46;
  t = c_66(t);
  m_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_46, m_46), i_46);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  t = SSL_explode_string(s_46);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = SSL_explode_string(t_46);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  t = _2_0(m_5, n_5, t);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_46 = NULL,w_46 = NULL;
        if(match_cons(t, sym__2))
          {
            v_46 = ATgetArgument(t, 0);
            w_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_46;
        {
          ATerm p_5 (ATerm t)
          {
            t = w_46;
            return(t);
          }
          t = at_end_1_0(p_5, t);
        }
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        {
          ATerm w_23 = NULL,z_23 = NULL;
          w_23 = t;
          t = SSL_explode_term(w_23);
          if(match_cons(t, sym__2))
            {
              ATerm w_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_23;
          t = concat_0_0(t);
        }
      }
    r_46 = t;
    t = SSL_implode_string(r_46);
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_47 = NULL;
      g_47 = t;
      t = SSL_is_string(g_47);
      ;
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
            t = map_1_0(q_5, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
              k_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_47 = ATgetArgument(t, 0);
                  t = l_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_47 = ATgetArgument(t, 0);
                      t = l_47;
                      {
                        ATerm d_18 = t;
                        int e_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_47);
                            {
                              ATerm f_18 = t;
                              int g_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_27 = NULL;
                                  t = eval_config_0_0(t);
                                  v_27 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_47, v_27);
                                  t = v_27;
                                  ;
                                  LocalPopChoice(g_18);
                                }
                              else
                                {
                                  t = f_18;
                                }
                            }
                            ;
                            LocalPopChoice(e_18);
                          }
                        else
                          {
                            t = d_18;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_47), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = l_47;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_47 = NULL,r_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_47 = ATgetArgument(t, 0);
                          m_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_47;
                      t = eval_config_0_0(t);
                      q_47 = t;
                      t = m_47;
                      t = eval_config_0_0(t);
                      r_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_47, r_47);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_47 = NULL,y_47 = NULL;
      w_47 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_28 = NULL;
            t = eval_config_0_0(t);
            c_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_28);
            t = c_28;
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
          }
        y_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_47, term_l_18);
        t = geq_0_0(t);
        t = w_47;
        t = b_101(t);
      }
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "-k"))
    {
      t = a_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_48;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  t = SSL_string_to_int(b_48);
  c_48 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_48);
  t = b_48;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, s_5, t_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "-S"))
    {
      t = e_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_48;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_n_18;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  f_48 = t;
  t = SSL_string_to_int(f_48);
  g_48 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_48);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_48);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
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
            t = ArgOption_3_0(z_5, a_6, b_6, t);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = Option_3_0(d_6, e_6, f_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_48 = NULL;
      t = term_s_7;
      t = d_0(t);
      m_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, m_48);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_48;
      t = a_0(t);
      t = term_s_7;
      t = b_0(t);
      p_48 = t;
      t = (ATerm) ATinsert(CheckATermList(l_48), p_48);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_string(t, "-o"))
    {
      t = r_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_48;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_48);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_48);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  if(match_cons(t, sym__3))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
      x_48 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
  {
    ATerm a_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_48, w_48);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
    y_48 = t;
    t = SSL_table_put(v_48, w_48, (ATerm) ATinsert(CheckATermList(y_48), x_48));
    t = (ATerm) ATmakeAppl(sym__3, v_48, w_48, x_48);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_49 = NULL;
      t = term_s_7;
      t = j_0(t);
      k_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, k_49);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          h_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_49 = ATgetFirst((ATermList) t);
          j_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = h_0(t);
      t = i_49;
      t = i_0(t);
      o_49 = t;
      t = (ATerm) ATinsert(CheckATermList(j_49), o_49);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  if(match_string(t, "-i"))
    {
      t = q_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_49;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm r_49 = NULL;
  r_49 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_49);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_49);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_7;
  t = whoami_0_0(t);
  s_49 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_49));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        t = eval_config_0_0(t);
        g_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_28);
        t = g_28;
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_93(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm v_49 = NULL,w_49 = NULL,z_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_49 = ATgetFirst((ATermList) t);
            w_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_49;
        t = foldr_2_0(c_93, d_93, t);
        z_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_49, z_49);
        t = d_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_28, m_28);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = SSL_addr(l_28, m_28);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_50 = NULL,h_28 = NULL,i_28 = NULL;
  t = times_0_0(t);
  h_28 = t;
  t = SSL_explode_term(h_28);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28;
  t = foldr_2_0(m_6, n_6, t);
  c_50 = t;
  t = SSL_TicksToSeconds(c_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_50;
        if((q_50 != t))
          {
            _fail(t);
          }
        t = p_50;
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = p_50;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_50, r_50);
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = SSL_gtr(q_50, r_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_50 = NULL,w_50 = NULL;
      u_50 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_28 = NULL;
            t = eval_config_0_0(t);
            z_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_28);
            t = z_28;
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
          }
        w_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_50, term_f_13);
        t = geq_0_0(t);
        t = u_50;
        t = a_101(t);
      }
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  t = run_time_0_0(t);
  y_50 = t;
  t = term_s_7;
  t = whoami_0_0(t);
  z_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_50), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_50));
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), y_50), term_w_19), z_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_29 = NULL;
            t = eval_config_0_0(t);
            d_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_29);
            t = d_29;
            ;
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
          }
      }
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = fetch_1_0(p_6, t);
    }
  t = q_103(t);
  return(t);
}
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm a_51 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2_0(a_87, a_51, t);
      }
    return(t);
  }
  t = a_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      d_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_51 = NULL,i_51 = NULL;
        t = d_51;
        t = g_0(t);
        h_51 = t;
        t = c_51;
        t = f_0(t);
        i_51 = t;
        t = d_51;
        {
          ATerm q_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_51), i_51);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  m_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_51);
  j_51 = t;
  t = k_51;
  t = v_78(t);
  l_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_51), j_51);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm p_51 = NULL;
  p_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_51), term_i_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_29 = NULL;
            t = eval_config_0_0(t);
            h_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_29);
            t = h_29;
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
          }
      }
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = fetch_1_0(r_6, t);
    }
  t = term_n_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, s_6, t);
  t = map_1_0(t_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_51);
  q_51 = t;
  t = r_51;
  t = w_78(t);
  s_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_51), q_51);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_20 = ATgetFirst((ATermList) t);
                ATerm r_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_51;
          }
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATinsert(ATempty, x_51);
      }
    y_51 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_51);
    t = x_51;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL;
        t = eval_config_0_0(t);
        n_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_29);
        t = n_29;
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_20;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_20;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = Option_3_0(x_6, y_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  h_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_52 = ATgetFirst((ATermList) t);
      e_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_52);
  c_52 = t;
  t = d_52;
  t = q_70(t);
  f_52 = t;
  t = e_52;
  t = r_70(t);
  g_52 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_52), f_52), c_52);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm m_52 = NULL;
  m_52 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_52);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_21;
        t = t_105(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
      }
    t = l_52;
    {
      ATerm c_7 (ATerm t)
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = t_105(t);
                t = Cons_2_0(_id, c_7, t);
              }
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm o_52 = NULL,p_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_52 = ATgetFirst((ATermList) t);
                  p_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_52), (ATerm) ATmakeAppl(sym_Undefined_1, o_52));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_7, c_7, t);
    }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  if(match_string(t, "--help"))
    {
      t = z_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_52;
        }
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_21;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_52;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_105(t);
          ;
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
                t = Option_3_0(e_7, f_7, g_7, t);
                ;
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_7, t);
    {
      ATerm o_21 = t;
      int p_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_53 = NULL;
          e_53 = t;
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_53;
                {
                  ATerm s_21 = t;
                  int t_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_21 = t;
                        int v_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_30 = NULL;
                            t = eval_config_0_0(t);
                            h_30 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_30);
                            t = h_30;
                            ;
                            LocalPopChoice(v_21);
                          }
                        else
                          {
                            t = u_21;
                          }
                      }
                      ;
                      LocalPopChoice(t_21);
                    }
                  else
                    {
                      t = s_21;
                      t = fetch_1_0(h_7, t);
                    }
                  t = e_53;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_31 = NULL;
                      t = eval_config_0_0(t);
                      o_31 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), o_31);
                      t = o_31;
                      ;
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                    }
                  t = e_53;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_21);
        }
      else
        {
          t = o_21;
          {
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm j_7 (ATerm t)
                  {
                    if(((x_52 != NULL) && (x_52 != t)))
                      _fail(t);
                    else
                      x_52 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_7, t);
                  return(t);
                }
                t = fetch_1_0(i_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_52)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_52)), term_a_22));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
              }
          }
        }
      y_52 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm h_53 = NULL;
  t = parse_options_1_0(s_103, t);
  h_53 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), h_53);
  t = h_53;
  t = u_103(t);
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_103, t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = if_verbose2_1_0(q_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_7;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  i_53 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL;
        t = eval_config_0_0(t);
        s_31 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_31);
        t = s_31;
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
      }
    j_53 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, j_53));
    t = i_53;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_103(t);
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              {
                ATerm m_22 = t;
                int n_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_22);
                  }
                else
                  {
                    t = m_22;
                    {
                      ATerm o_22 = t;
                      int p_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_7, o_7, p_7, t);
                          ;
                          LocalPopChoice(p_22);
                        }
                      else
                        {
                          t = o_22;
                          {
                            ATerm q_22 = t;
                            int r_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_22);
                              }
                            else
                              {
                                t = q_22;
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
  ATerm m_7 (ATerm t)
  {
    ATerm k_53 = NULL,l_53 = NULL,v_31 = NULL;
    k_53 = t;
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_53 != NULL) && (l_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_7, t);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          t = term_u_22;
          l_53 = t;
        }
      t = not_null(l_53);
      t = ReadFromFile_0_0(t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_53, v_31);
      t = apply_strategy_1_0(b_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_7, d_103, l_7, m_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

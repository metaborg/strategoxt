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
ATerm term_v_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_w_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_k_11;
ATerm term_j_11;
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
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
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
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_12);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__3, term_a_8, term_t_18, term_g_12);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Abox2latex_options_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm foldr_3_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm);
ATerm crush_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm);
ATerm collect_set_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm latex2text_0_0 (ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm string_as_chars_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm u_72 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm LatexComment_0_0 (ATerm);
ATerm make_latex_comment_0_0 (ATerm);
ATerm FFID_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm);
ATerm toh_0_0 (ATerm);
ATerm hs_length_0_0 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm dissuader_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm separate_by_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm is_length_0_0 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm p_72 (ATerm), ATerm);
ATerm vs_length_0_0 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm C_2_0 (ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm);
ATerm table_row_0_0 (ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm table_def_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm R_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm _2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm x_72 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_98 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm io_Abox_2_latex_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0_0(t);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              ATerm g_1 = NULL;
              g_1 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)), g_1);
              t = (ATerm) ATmakeAppl(sym__3, term_a_8, term_b_8, g_1);
              return(t);
            }
            ATerm k_0 (ATerm t)
            {
              t = term_c_8;
              return(t);
            }
            t = ArgOption_3_0(c_0, e_0, k_0, t);
            ;
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
              ATerm l_0 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_0 (ATerm t)
              {
                ATerm h_1 = NULL;
                h_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), h_1);
                t = (ATerm) ATmakeAppl(sym__3, term_a_8, term_d_8, h_1);
                return(t);
              }
              ATerm n_0 (ATerm t)
              {
                t = term_e_8;
                return(t);
              }
              t = ArgOption_3_0(l_0, m_0, n_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm i_1 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm j_1 = NULL;
    j_1 = t;
    t = SSL_explode_string(j_1);
    return(t);
  }
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  i_1 = t;
  t = SSL_implode_string(i_1);
  return(t);
}
ATerm foldr_3_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_86(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_1 = ATgetFirst((ATermList) t);
            n_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_1;
        t = n_86(t);
        q_1 = t;
        t = n_1;
        t = foldr_3_0(l_86, m_86, n_86, t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
        t = m_86(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL;
  s_1 = t;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  t = foldr_3_0(e_90, f_90, g_90, t);
  return(t);
}
ATerm collect_set_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 = NULL;
      t = j_85(t);
      u_1 = t;
      t = (ATerm) ATinsert(ATempty, u_1);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm p_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm q_0 (ATerm t)
        {
          t = collect_set_1_0(j_85, t);
          return(t);
        }
        t = crush_3_0(p_0, conc_0_0, q_0, t);
      }
    }
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm b_31 (ATerm f_2, ATerm h_2, ATerm j_2, ATerm t)
  {
    ATerm p_3 = NULL;
    t = SSL_is_int(f_2);
    t = SSL_int_to_string(f_2);
    p_3 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), h_2), term_m_8), p_3), term_l_8);
    return(t);
  }
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      u_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
      t = u_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), w_3), term_o_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_3 = ATgetFirst((ATermList) t);
              q_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), w_3), term_r_8), v_3), term_q_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          u_3 = ATgetArgument(t, 0);
          w_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_8), w_3), term_r_8), u_3), term_s_8);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              u_3 = ATgetArgument(t, 0);
              w_3 = ATgetArgument(t, 1);
              r_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_8), r_3), term_r_8), w_3), term_m_8), u_3), term_u_8);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  u_3 = ATgetArgument(t, 0);
                  w_3 = ATgetArgument(t, 1);
                  r_3 = ATgetArgument(t, 2);
                  s_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_8), s_3), term_r_8), r_3), term_m_8), w_3), term_m_8), u_3), term_w_8);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      u_3 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), w_3), term_r_8), u_3), term_y_8);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          u_3 = ATgetArgument(t, 0);
                          w_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), w_3), term_b_9), u_3), term_a_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              u_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), u_3), term_d_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  u_3 = ATgetArgument(t, 0);
                                  w_3 = ATgetArgument(t, 1);
                                  t = u_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm f_9 = t;
                                      int g_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = b_31(u_3, w_3, x_3, t);
                                          ;
                                          LocalPopChoice(g_9);
                                        }
                                      else
                                        {
                                          t = f_9;
                                          {
                                            ATerm h_9 = t;
                                            int i_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), w_3), term_j_9);
                                                ;
                                                LocalPopChoice(i_9);
                                              }
                                            else
                                              {
                                                t = h_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), w_3), term_r_8), u_3), term_l_9);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm m_9 = t;
                                      int n_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = b_31(u_3, w_3, x_3, t);
                                          ;
                                          LocalPopChoice(n_9);
                                        }
                                      else
                                        {
                                          t = m_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), w_3), term_r_8), u_3), term_l_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      u_3 = ATgetArgument(t, 0);
                                      w_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_p_9), u_3), term_o_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          u_3 = ATgetArgument(t, 0);
                                          w_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_m_8), u_3), term_q_9);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              u_3 = ATgetArgument(t, 0);
                                              w_3 = ATgetArgument(t, 1);
                                              t = u_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_r_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_s_9);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_t_9);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_u_9);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_v_9);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_w_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_x_9);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_y_9);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_z_9);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_a_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_b_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_c_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_d_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_e_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_f_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_g_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_h_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_i_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_j_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_k_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_l_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_m_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_n_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_o_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  v_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), w_3), term_m_8), v_3), term_p_10);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_q_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_r_10;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_s_10;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_t_10;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_u_10;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = bottomup_1_0(s_74, t);
    return(t);
  }
  t = SRTS_all(r_0, t);
  t = s_74(t);
  return(t);
}
ATerm latex2text_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = try_1_0(Latex2text_0_0, t);
    return(t);
  }
  t = bottomup_1_0(s_0, t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_31 = NULL;
      t = term_d_8;
      t = get_config_0_0(t);
      c_31 = t;
      t = (ATerm) ATinsert(ATempty, c_31);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(t_0, flat_list_0_0, t);
            ;
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
                  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
                  ATerm u_0 (ATerm t)
                  {
                    ATerm h_31 = NULL;
                    h_31 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = h_31;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_11 = ATgetFirst((ATermList) t);
                            ATerm e_11 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = h_31;
                      }
                    return(t);
                  }
                  t = Cons_2_0(u_0, _id, t);
                  e_31 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_31 = ATgetFirst((ATermList) t);
                      {
                        ATerm f_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = e_31;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_11 = ATgetFirst((ATermList) t);
                      g_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_11 = ATgetFirst((ATermList) t);
      if(((ATgetType(h_11) != AT_INT) || (ATgetInt((ATermInt) h_11) != 34)))
        _fail(t);
      l_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_31;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm n_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_11 = ATgetFirst((ATermList) t);
          if(((ATgetType(i_11) != AT_INT) || (ATgetInt((ATermInt) i_11) != 34)))
            _fail(t);
          n_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_31), term_j_11), term_j_11);
      return(t);
    }
    t = at_suffix_1_0(v_0, t);
    m_31 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(m_31), term_k_11), term_k_11);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm o_31 (ATerm t)
  {
    t = r_81(t);
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          t = Cons_2_0(_id, o_31, t);
        }
    }
    return(t);
  }
  t = o_31(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  t = SSL_explode_string(p_31);
  t = v_89(t);
  q_31 = t;
  t = SSL_implode_string(q_31);
  return(t);
}
ATerm latex_string_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32 = NULL;
      k_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), k_32);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = try_1_0(replace_quotes_0_0, t);
            return(t);
          }
          t = listtd_1_0(a_1, t);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
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
                return(t);
              }
              t = try_1_0(f_1, t);
              return(t);
            }
            t = map_1_0(e_1, t);
            t = flat_list_0_0(t);
          }
          return(t);
        }
        t = string_as_chars_1_0(z_0, t);
      }
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm d_33 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      ATerm c_33 = NULL;
      t = Cons_2_0(u_72, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_11 = ATgetFirst((ATermList) t);
          c_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_33;
      t = d_33(t);
      return(t);
    }
    t = try_1_0(l_1, t);
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm e_33 (ATerm t)
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_81(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = Cons_2_0(_id, e_33, t);
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm i_33 = NULL;
    i_33 = t;
    if(match_int(t, 9))
      {
        t = i_33;
      }
    else
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
          _fail(t);
        t = i_33;
      }
    return(t);
  }
  t = remove_trailing_1_0(o_1, t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
              _fail(t);
            return(t);
          }
          ATerm b_2 (ATerm t)
          {
            g_33 = t;
            return(t);
          }
          t = Cons_2_0(a_2, b_2, t);
          return(t);
        }
        t = Cons_2_0(y_1, z_1, t);
        t = not_null(g_33);
        return(t);
      }
      t = at_suffix_1_0(x_1, t);
      return(t);
    }
    t = try_1_0(p_1, t);
    h_33 = t;
    t = SSL_implode_string(h_33);
  }
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  t = SSL_explode_string(m_33);
  t = reverse_0_0(t);
  {
    ATerm d_2 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = split_2_0(_id, d_2, t);
    {
      ATerm i_34 (ATerm t)
      {
        ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
        if(match_cons(t, sym__2))
          {
            o_33 = ATgetArgument(t, 0);
            r_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_33;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm v_33 = NULL;
            t = r_33;
            t = LatexComment_0_0(t);
            v_33 = t;
            t = (ATerm) ATinsert(ATempty, v_33);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_33 = ATgetFirst((ATermList) t);
                q_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_33;
            if(match_int(t, 10))
              {
                ATerm s_11 = t;
                int t_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_33 = NULL,a_34 = NULL;
                    t = r_33;
                    t = LatexComment_0_0(t);
                    z_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_33, (ATerm) ATempty);
                    t = i_34(t);
                    a_34 = t;
                    t = (ATerm) ATinsert(CheckATermList(a_34), z_33);
                    ;
                    LocalPopChoice(t_11);
                  }
                else
                  {
                    t = s_11;
                    t = (ATerm) ATmakeAppl(sym__2, q_33, (ATerm) ATinsert(CheckATermList(r_33), p_33));
                    t = i_34(t);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym__2, q_33, (ATerm) ATinsert(CheckATermList(r_33), p_33));
                t = i_34(t);
              }
          }
        return(t);
      }
      t = i_34(t);
      {
        ATerm e_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1_0(e_2, t);
        t = reverse_0_0(t);
        {
          ATerm g_2 (ATerm t)
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1_0(g_2, t);
          {
            ATerm i_2 (ATerm t)
            {
              ATerm h_34 = NULL;
              h_34 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_u_11), h_34);
              return(t);
            }
            t = map_1_0(i_2, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm FFID_2_0 (ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_FFID_2))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_34);
  j_34 = t;
  t = k_34;
  t = q_64(t);
  m_34 = t;
  t = l_34;
  t = r_64(t);
  n_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, m_34, n_34), j_34);
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm v_11 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_11;
      }
    return(t);
  }
  t = filter_1_0(k_2, t);
  {
    ATerm l_2 (ATerm t)
    {
      t = term_w_11;
      return(t);
    }
    t = separate_by_1_0(l_2, t);
  }
  return(t);
}
ATerm hs_length_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        if(!(match_cons(t, sym_HS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(m_2, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = term_z_11;
    }
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  t = hs_length_0_0(t);
  s_34 = t;
  t = SSL_int_to_string(s_34);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym__2))
    {
      t_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_34;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm n_2 (ATerm t)
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                {
                  ATerm v_34 = NULL;
                  t = Cons_2_0(_id, n_2, t);
                  v_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_34), t_34);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, n_2, t);
        }
      }
  }
  return(t);
}
ATerm dissuader_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  {
    ATerm o_2 (ATerm t)
    {
      t = o_92(t);
      {
        ATerm u_2 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = debug_1_0(u_2, t);
      }
      return(t);
    }
    t = if_verbose2_1_0(o_2, t);
    t = x_34;
  }
  return(t);
}
ATerm separate_by_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,d_35 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = dissuader_1_0(v_2, t);
  y_34 = t;
  t = term_g_12;
  t = e_80(t);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_35, y_34);
  t = separate_by_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              t = filter_1_0(m_87, t);
              return(t);
            }
            t = Cons_2_0(m_87, y_2, t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm n_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_12 = ATgetFirst((ATermList) t);
                  n_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_35;
              t = filter_1_0(m_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm is_length_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        if(!(match_cons(t, sym_IS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(z_2, t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = term_o_12;
    }
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm p_35 = NULL;
  t = is_length_0_0(t);
  p_35 = t;
  t = SSL_int_to_string(p_35);
  return(t);
}
ATerm SOpt_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  v_35 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      r_35 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  q_35 = t;
  t = r_35;
  t = m_65(t);
  t_35 = t;
  t = s_35;
  t = n_65(t);
  u_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, t_35, u_35), q_35);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  ATerm z_35 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      z_35 = t;
      return(t);
    }
    t = SOpt_2_0(p_72, b_3, t);
    return(t);
  }
  t = fetch_1_0(a_3, t);
  t = SSL_string_to_int(not_null(z_35));
  return(t);
}
ATerm vs_length_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        if(!(match_cons(t, sym_VS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(c_3, t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = term_o_12;
    }
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm a_36 = NULL;
  t = vs_length_0_0(t);
  a_36 = t;
  t = SSL_int_to_string(a_36);
  return(t);
}
ATerm C_2_0 (ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  g_36 = t;
  if(match_cons(t, sym_C_2))
    {
      c_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_36);
  b_36 = t;
  t = c_36;
  t = i_64(t);
  e_36 = t;
  t = d_36;
  t = j_64(t);
  f_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, e_36, f_36), b_36);
  return(t);
}
ATerm table_row_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_36;
  {
    ATerm x_36 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(_id, d_3, t);
                ;
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
                {
                  ATerm w_12 = t;
                  int x_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = C_2_0(_id, _id, t);
                        return(t);
                      }
                      ATerm f_3 (ATerm t)
                      {
                        t = Cons_2_0(_id, x_36, t);
                        return(t);
                      }
                      t = Cons_2_0(e_3, f_3, t);
                      ;
                      LocalPopChoice(x_12);
                    }
                  else
                    {
                      t = w_12;
                      {
                        ATerm y_12 = t;
                        int z_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_3 (ATerm t)
                            {
                              ATerm h_3 (ATerm t)
                              {
                                t = C_2_0(_id, _id, t);
                                return(t);
                              }
                              t = Cons_2_0(h_3, x_36, t);
                              return(t);
                            }
                            t = Cons_2_0(_id, g_3, t);
                            ;
                            LocalPopChoice(z_12);
                          }
                        else
                          {
                            t = y_12;
                            {
                              ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  s_36 = ATgetFirst((ATermList) t);
                                  t_36 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = t_36;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  u_36 = ATgetFirst((ATermList) t);
                                  v_36 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = x_36(t);
                              w_36 = t;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_36), term_a_13), s_36);
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
    t = x_36(t);
  }
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
      if(match_cons(t, sym_LBL_2))
        {
          c_37 = ATgetArgument(t, 0);
          d_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_37;
      t = table_row_0_0(t);
      t = d_37;
      t = table_row_0_0(t);
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym_LBLBOX_2, c_37, e_37);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      t = table_row_0_0(t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm f_37 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, i_3, t);
        t = j_81(t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = Cons_2_0(_id, f_37, t);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm table_def_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_37;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm b_38 = NULL;
      if(match_cons(t, sym_AL_1))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
            t = b_38;
            t = Hspace_0_0(t);
            x_0 = t;
            t = SSL_string_to_int(x_0);
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_0, term_w_11);
            t = copy_0_0(t);
            y_0 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, y_0), term_f_13);
          }
        }
      else
        {
          if(match_cons(t, sym_AC_1))
            {
              b_38 = ATgetArgument(t, 0);
              {
                ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
                t = b_38;
                t = Hspace_0_0(t);
                c_1 = t;
                t = SSL_string_to_int(c_1);
                b_1 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_1, term_w_11);
                t = copy_0_0(t);
                d_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_g_13);
              }
            }
          else
            {
              ATerm k_1 = NULL,v_1 = NULL,w_1 = NULL;
              if(match_cons(t, sym_AR_1))
                {
                  b_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_38;
              t = Hspace_0_0(t);
              v_1 = t;
              t = SSL_string_to_int(v_1);
              k_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_1, term_w_11);
              t = copy_0_0(t);
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_h_13);
            }
        }
      return(t);
    }
    t = map_1_0(k_3, t);
    {
      ATerm l_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_a_13);
        return(t);
      }
      t = separate_by_1_0(l_3, t);
      t = concat_0_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATempty, term_i_13);
          return(t);
        }
        t = at_last_1_0(m_3, t);
      }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm t)
{
  ATerm f_38 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_74(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = j_74(t);
        t = f_38(t);
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
ATerm for_3_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  t = l_74(t);
  t = while_not_2_0(m_74, n_74, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm g_38 = NULL,h_38 = NULL;
        if(match_cons(t, sym__2))
          {
            g_38 = ATgetArgument(t, 0);
            h_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, g_38, h_38, (ATerm) ATempty);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        ATerm i_38 = NULL;
        if(match_cons(t, sym__3))
          {
            ATerm n_13 = ATgetArgument(t, 0);
            if(((ATgetType(n_13) != AT_INT) || (ATgetInt((ATermInt) n_13) != 0)))
              _fail(t);
            {
              ATerm o_13 = ATgetArgument(t, 1);
            }
            i_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_38;
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
        if(match_cons(t, sym__3))
          {
            j_38 = ATgetArgument(t, 0);
            k_38 = ATgetArgument(t, 1);
            l_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_38, term_z_11);
        t = geq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, j_38, term_z_11);
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(j_38, (ATerm) ATmakeInt(1));
              ;
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = SSL_subtr(j_38, (ATerm) ATmakeInt(1));
            }
          m_38 = t;
          t = (ATerm) ATmakeAppl(sym__3, m_38, k_38, (ATerm) ATinsert(CheckATermList(l_38), k_38));
        }
        return(t);
      }
      t = for_3_0(o_3, t_3, y_3, t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm z_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          return(t);
        }
        t = _2_0(z_3, _id, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym_R_2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_38);
  n_38 = t;
  t = o_38;
  t = y_64(t);
  q_38 = t;
  t = p_38;
  t = z_64(t);
  r_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, q_38, r_38), n_38);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2_0(_id, a_4, t);
  {
    ATerm z_39 (ATerm t)
    {
      ATerm z_38 = NULL,a_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
      if(match_cons(t, sym__2))
        {
          c_39 = ATgetArgument(t, 0);
          f_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm k_39 = NULL;
          t = f_39;
          t = reverse_0_0(t);
          k_39 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, k_39));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_39 = ATgetFirst((ATermList) t);
              e_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_39;
          if(match_cons(t, sym_R_2))
            {
              z_38 = ATgetArgument(t, 0);
              a_39 = ATgetArgument(t, 1);
              {
                ATerm r_13 = t;
                int s_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_39 = NULL,q_39 = NULL;
                    t = f_39;
                    t = reverse_0_0(t);
                    p_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_39, (ATerm) ATempty);
                    t = z_39(t);
                    q_39 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(q_39), (ATerm) ATmakeAppl(sym_R_2, z_38, a_39)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, p_39));
                    ;
                    LocalPopChoice(s_13);
                  }
                else
                  {
                    t = r_13;
                    t = (ATerm) ATmakeAppl(sym__2, e_39, (ATerm) ATinsert(CheckATermList(f_39), d_39));
                    t = z_39(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, e_39, (ATerm) ATinsert(CheckATermList(f_39), d_39));
              t = z_39(t);
            }
        }
      return(t);
    }
    t = z_39(t);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm t_13 = t;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, c_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_13;
          }
        return(t);
      }
      t = filter_1_0(b_4, t);
    }
  }
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm c_43 (ATerm l_41, ATerm m_41, ATerm n_41, ATerm t)
  {
    t = l_41;
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(!(match_cons(t, sym_KW_0)))
            _fail(t);
          ;
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(!(match_cons(t, sym_VAR_0)))
                  _fail(t);
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                {
                  ATerm y_13 = t;
                  int z_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_NUM_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(z_13);
                    }
                  else
                    {
                      t = y_13;
                      if(!(match_cons(t, sym_MATH_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, l_41, m_41);
    }
    return(t);
  }
  ATerm q_41 = NULL,r_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym_REF_2))
    {
      y_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, y_41, w_41);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          y_41 = ATgetArgument(t, 0);
          w_41 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, y_41, w_41);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              y_41 = ATgetArgument(t, 0);
              w_41 = ATgetArgument(t, 1);
              {
                ATerm c_2 = NULL;
                t = x_41;
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(y_41);
                      c_2 = t;
                      ;
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      {
                        ATerm c_14 = t;
                        int d_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_explode_string(y_41);
                            {
                              ATerm d_4 (ATerm t)
                              {
                                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                                  _fail(t);
                                return(t);
                              }
                              t = Cons_2_0(d_4, _id, t);
                              t = SSL_implode_string((ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(61)));
                              c_2 = t;
                            }
                            ;
                            LocalPopChoice(d_14);
                          }
                        else
                          {
                            t = c_14;
                            t = y_41;
                            c_2 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, c_2, w_41);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  y_41 = ATgetArgument(t, 0);
                  w_41 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, y_41, w_41);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      y_41 = ATgetArgument(t, 0);
                      w_41 = ATgetArgument(t, 1);
                      q_41 = ATgetArgument(t, 2);
                      {
                        ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,w_2 = NULL,x_2 = NULL;
                        t = q_41;
                        t = construct_rows_0_0(t);
                        p_2 = t;
                        t = w_41;
                        t = Vspace_0_0(t);
                        r_2 = t;
                        t = SSL_string_to_int(r_2);
                        q_2 = t;
                        t = (ATerm) ATmakeAppl(sym__2, q_2, term_i_13);
                        t = copy_0_0(t);
                        s_2 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_2, (ATerm) ATinsert(ATinsert(ATempty, term_u_11), term_i_13));
                        t = conc_0_0(t);
                        t_2 = t;
                        t = y_41;
                        t = table_def_0_0(t);
                        w_2 = t;
                        t = p_2;
                        t = map_1_0(MkRows_0_0, t);
                        {
                          ATerm e_4 (ATerm t)
                          {
                            t = t_2;
                            return(t);
                          }
                          t = separate_by_1_0(e_4, t);
                          x_2 = t;
                          t = (ATerm) ATmakeAppl(sym_ABOX_2, w_2, x_2);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          y_41 = ATgetArgument(t, 0);
                          w_41 = ATgetArgument(t, 1);
                          {
                            ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                            t = y_41;
                            t = Hspace_0_0(t);
                            h_42 = t;
                            t = y_41;
                            t = Vspace_0_0(t);
                            i_42 = t;
                            t = y_41;
                            t = Ispace_0_0(t);
                            j_42 = t;
                            t = w_41;
                            {
                              ATerm f_4 (ATerm t)
                              {
                                ATerm e_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = e_14;
                                  }
                                return(t);
                              }
                              t = filter_1_0(f_4, t);
                              {
                                ATerm g_4 (ATerm t)
                                {
                                  t = term_f_14;
                                  return(t);
                                }
                                t = separate_by_1_0(g_4, t);
                                k_42 = t;
                                t = (ATerm) ATmakeAppl(sym_HVBOX_4, h_42, i_42, j_42, k_42);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              y_41 = ATgetArgument(t, 0);
                              w_41 = ATgetArgument(t, 1);
                              {
                                ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
                                t = y_41;
                                t = Vspace_0_0(t);
                                n_42 = t;
                                t = y_41;
                                t = Ispace_0_0(t);
                                o_42 = t;
                                t = w_41;
                                {
                                  ATerm h_4 (ATerm t)
                                  {
                                    ATerm g_14 = t;
                                    if((PushChoice() == 0))
                                      {
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = g_14;
                                      }
                                    return(t);
                                  }
                                  t = filter_1_0(h_4, t);
                                  {
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_h_14;
                                      return(t);
                                    }
                                    t = separate_by_1_0(i_4, t);
                                    p_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_VBOX_3, n_42, o_42, p_42);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  y_41 = ATgetArgument(t, 0);
                                  w_41 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_42 = NULL,t_42 = NULL;
                                    t = y_41;
                                    t = Hspace_0_0(t);
                                    s_42 = t;
                                    t = w_41;
                                    t = toh_0_0(t);
                                    t_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, s_42, t_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      y_41 = ATgetArgument(t, 0);
                                      w_41 = ATgetArgument(t, 1);
                                      t = y_41;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          v_41 = ATgetArgument(t, 0);
                                          t = v_41;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              r_41 = ATgetFirst((ATermList) t);
                                              u_41 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm i_14 = t;
                                                int j_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm j_3 = NULL,n_3 = NULL;
                                                    t = r_41;
                                                    {
                                                      ATerm k_14 = t;
                                                      int l_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_4 (ATerm t)
                                                          {
                                                            if(!(match_cons(t, sym_FM_0)))
                                                              _fail(t);
                                                            return(t);
                                                          }
                                                          ATerm k_4 (ATerm t)
                                                          {
                                                            n_3 = t;
                                                            return(t);
                                                          }
                                                          t = FFID_2_0(j_4, k_4, t);
                                                          ;
                                                          LocalPopChoice(l_14);
                                                        }
                                                      else
                                                        {
                                                          t = k_14;
                                                          {
                                                            ATerm m_14 = t;
                                                            int n_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_4 (ATerm t)
                                                                {
                                                                  if(!(match_cons(t, sym_SE_0)))
                                                                    _fail(t);
                                                                  return(t);
                                                                }
                                                                ATerm m_4 (ATerm t)
                                                                {
                                                                  n_3 = t;
                                                                  return(t);
                                                                }
                                                                t = FFID_2_0(l_4, m_4, t);
                                                                ;
                                                                LocalPopChoice(n_14);
                                                              }
                                                            else
                                                              {
                                                                t = m_14;
                                                                {
                                                                  ATerm o_14 = t;
                                                                  int p_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm n_4 (ATerm t)
                                                                      {
                                                                        if(!(match_cons(t, sym_SH_0)))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      ATerm o_4 (ATerm t)
                                                                      {
                                                                        n_3 = t;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2_0(n_4, o_4, t);
                                                                      ;
                                                                      LocalPopChoice(p_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_14;
                                                                      {
                                                                        ATerm q_14 = t;
                                                                        int r_14 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm p_4 (ATerm t)
                                                                            {
                                                                              if(!(match_cons(t, sym_SZ_0)))
                                                                                _fail(t);
                                                                              return(t);
                                                                            }
                                                                            ATerm q_4 (ATerm t)
                                                                            {
                                                                              n_3 = t;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2_0(p_4, q_4, t);
                                                                            ;
                                                                            LocalPopChoice(r_14);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_14;
                                                                            {
                                                                              ATerm r_4 (ATerm t)
                                                                              {
                                                                                if(!(match_cons(t, sym_CL_0)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm s_4 (ATerm t)
                                                                              {
                                                                                j_3 = t;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2_0(r_4, s_4, t);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(j_3));
                                                                              n_3 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(n_3), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, u_41), w_41));
                                                    }
                                                    ;
                                                    LocalPopChoice(j_14);
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    t = c_43(y_41, w_41, x_41, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  ATerm s_14 = t;
                                                  int t_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = w_41;
                                                      ;
                                                      LocalPopChoice(t_14);
                                                    }
                                                  else
                                                    {
                                                      t = s_14;
                                                      t = c_43(y_41, w_41, x_41, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = c_43(y_41, w_41, x_41, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = c_43(y_41, w_41, x_41, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          y_41 = ATgetArgument(t, 0);
                                          w_41 = ATgetArgument(t, 1);
                                          {
                                            ATerm w_42 = NULL;
                                            t = y_41;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = w_41;
                                            {
                                              ATerm t_4 (ATerm t)
                                              {
                                                ATerm x_42 = NULL;
                                                if(match_cons(t, sym_S_1))
                                                  {
                                                    x_42 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = x_42;
                                                t = make_latex_comment_0_0(t);
                                                return(t);
                                              }
                                              t = map_1_0(t_4, t);
                                              w_42 = t;
                                              t = (ATerm) ATmakeAppl(sym_CBOX_1, w_42);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              y_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = y_41;
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
ATerm topdown_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  t = r_74(t);
  {
    ATerm u_4 (ATerm t)
    {
      t = topdown_1_0(r_74, t);
      return(t);
    }
    t = SRTS_all(u_4, t);
  }
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)));
  {
    ATerm v_4 (ATerm t)
    {
      t = term_b_8;
      t = get_config_0_0(t);
      t = ReadFromFile_0_0(t);
      {
        ATerm w_4 (ATerm t)
        {
          ATerm e_43 = NULL,f_43 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_43 = ATgetFirst((ATermList) t);
              {
                ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
                  {
                    f_43 = ATgetFirst((ATermList) u_14);
                    {
                      ATerm v_14 = (ATerm) ATgetNext((ATermList) u_14);
                      if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), e_43, f_43);
          t = (ATerm) ATmakeAppl(sym__3, term_w_14, e_43, f_43);
          return(t);
        }
        t = map_1_0(w_4, t);
      }
      return(t);
    }
    t = try_1_0(v_4, t);
    t = d_43;
  }
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm g_43 = NULL,h_43 = NULL;
    t = load_latex_table_0_0(t);
    {
      ATerm y_4 (ATerm t)
      {
        t = try_1_0(Abox2latex_0_0, t);
        return(t);
      }
      t = topdown_1_0(y_4, t);
      g_43 = t;
      t = BOXENV_args_0_0(t);
      h_43 = t;
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, h_43, g_43);
      t = latex2text_0_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm i_43 = NULL;
          i_43 = t;
          t = SSL_is_string(i_43);
          return(t);
        }
        t = collect_set_1_0(z_4, t);
        t = concat_strings_0_0(t);
      }
    }
    return(t);
  }
  t = _2_0(_id, x_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  j_43 = t;
  t = term_g_12;
  t = whoami_0_0(t);
  k_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_43), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_43;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm n_43 = NULL,o_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_43 = ATgetFirst((ATermList) t);
            o_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_43;
        {
          ATerm c_5 (ATerm t)
          {
            t = o_43;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_5, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  s_43 = t;
  t = SSL_explode_term(s_43);
  if(match_cons(t, sym__2))
    {
      ATerm z_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_43;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm u_43 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_43, t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_80(t);
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_43;
  {
    ATerm d_5 (ATerm t)
    {
      t = v_43;
      return(t);
    }
    t = at_end_1_0(d_5, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_43 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm y_43 = NULL;
    y_43 = t;
    t = SSL_explode_string(y_43);
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm z_43 = NULL;
    z_43 = t;
    t = SSL_explode_string(z_43);
    return(t);
  }
  t = _2_0(e_5, f_5, t);
  t = conc_0_0(t);
  x_43 = t;
  t = SSL_implode_string(x_43);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_44 = NULL;
      f_44 = t;
      t = SSL_is_string(f_44);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(g_5, t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
              j_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_44 = ATgetArgument(t, 0);
                  t = k_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_44 = ATgetArgument(t, 0);
                      t = k_44;
                      {
                        ATerm i_15 = t;
                        int j_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_15);
                          }
                        else
                          {
                            t = i_15;
                            {
                              ATerm h_5 (ATerm t)
                              {
                                t = term_k_15;
                                return(t);
                              }
                              t = debug_1_0(h_5, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm p_44 = NULL,q_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_44 = ATgetArgument(t, 0);
                          l_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_44;
                      t = eval_config_0_0(t);
                      p_44 = t;
                      t = l_44;
                      t = eval_config_0_0(t);
                      q_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
                      t = conc_strings_0_0(t);
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
  ATerm t_44 = NULL;
  t_44 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_44);
  {
    ATerm i_5 (ATerm t)
    {
      ATerm u_44 = NULL;
      t = eval_config_0_0(t);
      u_44 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_44, u_44);
      t = u_44;
      return(t);
    }
    t = try_1_0(i_5, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL;
    w_44 = t;
    t = term_l_15;
    t = get_config_0_0(t);
    x_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_44, term_m_15);
    t = geq_0_0(t);
    t = w_44;
    t = y_93(t);
    return(t);
  }
  t = try_1_0(j_5, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm n_15 = ATgetArgument(t, 0);
        if(match_cons(n_15, sym_Stream_1))
          {
            y_44 = ATgetArgument(n_15, 0);
          }
        else
          _fail(t);
        z_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(y_44, z_44);
    a_45 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), a_45);
    b_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, b_45);
    return(t);
  }
  t = WriteToFile_1_0(k_5, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      c_45 = ATgetArgument(t, 0);
      d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_45, term_o_15);
  t = open_stream_0_0(t);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_45, d_45);
  t = u_92(t);
  t = fclose_0_0(t);
  t = d_45;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_15 = ATgetArgument(t, 0);
        if(match_cons(p_15, sym_Stream_1))
          {
            f_45 = ATgetArgument(p_15, 0);
          }
        else
          _fail(t);
        g_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_45, g_45);
    h_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_45);
    return(t);
  }
  t = WriteToFile_1_0(l_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                j_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(n_5, t);
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_s_15;
          j_45 = t;
        }
      return(t);
    }
    t = _2_0(m_5, _id, t);
    t = i_45;
    {
      ATerm o_5 (ATerm t)
      {
        ATerm p_5 (ATerm t)
        {
          t = not_null(j_45);
          return(t);
        }
        t = split_2_0(p_5, _id, t);
        return(t);
      }
      t = _2_0(_id, o_5, t);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              ATerm r_5 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(r_5, t);
              return(t);
            }
            t = _2_0(q_5, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  k_45 = t;
  t = dtime_0_0(t);
  t = k_45;
  t = w_95(t);
  l_45 = t;
  t = dtime_0_0(t);
  m_45 = t;
  t = l_45;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_45), (ATerm) ATmakeAppl(sym_Runtime_1, m_45)), o_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_46 (ATerm w_45, ATerm t)
  {
    t = SSL_fclose(w_45);
    return(t);
  }
  ATerm z_45 = NULL,a_46 = NULL;
  a_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_45 = ATgetArgument(t, 0);
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_45);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            t = c_46(a_46, t);
          }
      }
    }
  else
    {
      t = c_46(a_46, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  d_46 = t;
  t = g_92(t);
  e_46 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_46), e_46));
  t = d_46;
  return(t);
}
ATerm _2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  k_46 = t;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  f_46 = t;
  t = g_46;
  t = p_62(t);
  i_46 = t;
  t = h_46;
  t = q_62(t);
  j_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_46, j_46), f_46);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_46 = NULL;
  t = SSL_stdin_stream();
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_46);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_stdout_stream();
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_46);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_46 = NULL;
  t = SSL_stderr_stream();
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_46);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_46;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_46;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_46;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      ATerm y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        a_5 = t;
        t = SSL_explode_term(a_5);
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_16 = ATgetArgument(t, 1);
              if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                {
                  b_5 = ATgetFirst((ATermList) c_16);
                  {
                    ATerm d_16 = (ATerm) ATgetNext((ATermList) c_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_46 = NULL,w_46 = NULL,z_46 = NULL;
              ATerm s_5 (ATerm t)
              {
                ATerm a_47 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_47;
                return(t);
              }
              t = _2_0(s_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_46 = ATgetArgument(t, 0);
                  w_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_46, w_46);
              z_46 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_46);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              {
                ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
                ATerm t_5 (ATerm t)
                {
                  ATerm e_47 = NULL;
                  e_47 = t;
                  t = SSL_is_string(e_47);
                  return(t);
                }
                t = _2_0(t_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_47 = ATgetArgument(t, 0);
                    c_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_47, c_47);
                d_47 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_47);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = NULL;
      i_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_47, term_i_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm u_5 (ATerm t)
        {
          t = term_j_16;
          return(t);
        }
        t = debug_1_0(u_5, t);
        _fail(t);
      }
    }
  f_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_47);
  g_47 = t;
  t = f_47;
  t = fclose_0_0(t);
  t = g_47;
  return(t);
}
ATerm split_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  t = y_87(t);
  l_47 = t;
  t = k_47;
  t = z_87(t);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  n_47 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              o_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_5, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = term_m_16;
        o_47 = t;
      }
    t = n_47;
    {
      ATerm w_5 (ATerm t)
      {
        t = not_null(o_47);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_5, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm q_47 = NULL;
    q_47 = t;
    if(match_string(t, "-k"))
      {
        t = q_47;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_47;
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm r_47 = NULL,s_47 = NULL;
    r_47 = t;
    t = SSL_string_to_int(r_47);
    s_47 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_47);
    t = r_47;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_n_16;
    return(t);
  }
  t = ArgOption_3_0(x_5, y_5, z_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6 (ATerm t)
      {
        ATerm u_47 = NULL;
        u_47 = t;
        if(match_string(t, "-S"))
          {
            t = u_47;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_47;
          }
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_16;
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = term_r_16;
        return(t);
      }
      t = Option_3_0(a_6, b_6, c_6, t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm e_6 (ATerm t)
            {
              ATerm v_47 = NULL,w_47 = NULL;
              v_47 = t;
              t = SSL_string_to_int(v_47);
              w_47 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_47);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_47);
              return(t);
            }
            ATerm f_6 (ATerm t)
            {
              t = term_u_16;
              return(t);
            }
            t = ArgOption_3_0(d_6, e_6, f_6, t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm g_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_v_16;
                return(t);
              }
              ATerm i_6 (ATerm t)
              {
                t = term_w_16;
                return(t);
              }
              t = Option_3_0(g_6, h_6, i_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm y_47 = NULL;
    y_47 = t;
    if(match_string(t, "-o"))
      {
        t = y_47;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_47;
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm z_47 = NULL;
    z_47 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_47);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_47);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm m_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_17;
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = Option_3_0(m_6, n_6, o_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  c_48 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_48;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_48 = ATgetFirst((ATermList) t);
          e_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_48 = ATgetFirst((ATermList) t);
          g_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_48;
      t = h_0(t);
      t = f_48;
      t = i_0(t);
      k_48 = t;
      t = (ATerm) ATinsert(CheckATermList(g_48), k_48);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm m_48 = NULL;
    m_48 = t;
    if(match_string(t, "-i"))
      {
        t = m_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_48;
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm n_48 = NULL;
    n_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_48);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_48);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  t = ArgOption_3_0(p_6, q_6, r_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_12;
  t = whoami_0_0(t);
  o_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), o_48));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_86(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm r_48 = NULL,s_48 = NULL,v_48 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_48 = ATgetFirst((ATermList) t);
            s_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_48;
        t = foldr_2_0(j_86, k_86, t);
        v_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_48, v_48);
        t = k_86(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  w_48 = t;
  t = SSL_explode_term(w_48);
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_48;
  t = foldr_2_0(c_90, d_90, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_48 = NULL;
  t = times_0_0(t);
  {
    ATerm s_6 (ATerm t)
    {
      t = term_o_12;
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm z_48 = NULL,a_49 = NULL;
      if(match_cons(t, sym__2))
        {
          z_48 = ATgetArgument(t, 0);
          a_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_48, a_49);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = SSL_addr(z_48, a_49);
          }
      }
      return(t);
    }
    t = crush_2_0(s_6, t_6, t);
    y_48 = t;
    t = SSL_TicksToSeconds(y_48);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_49;
        if((k_49 != t))
          {
            _fail(t);
          }
        t = j_49;
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = j_49;
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_49, l_49);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = SSL_gtr(k_49, l_49);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm o_49 = NULL,p_49 = NULL;
    o_49 = t;
    t = term_l_15;
    t = get_config_0_0(t);
    p_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_49, term_z_11);
    t = geq_0_0(t);
    t = o_49;
    t = x_93(t);
    return(t);
  }
  t = try_1_0(u_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm r_49 = NULL,s_49 = NULL;
    t = run_time_0_0(t);
    r_49 = t;
    t = term_g_12;
    t = whoami_0_0(t);
    s_49 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_49), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_49));
    t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_17), r_49), term_u_17), s_49));
    return(t);
  }
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm w_6 (ATerm t)
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = b_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_6, t);
      }
    }
  t = u_96(t);
  return(t);
}
ATerm map_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm u_49 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = Cons_2_0(i_80, u_49, t);
      }
    return(t);
  }
  t = u_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_49 = ATgetFirst((ATermList) t);
      x_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_50 = NULL,c_50 = NULL;
        t = x_49;
        t = g_0(t);
        b_50 = t;
        t = w_49;
        t = f_0(t);
        c_50 = t;
        t = x_49;
        {
          ATerm x_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_50), c_50);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_12;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_50);
  d_50 = t;
  t = e_50;
  t = d_72(t);
  f_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, f_50), d_50);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm z_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm a_7 (ATerm t)
    {
      ATerm m_50 = NULL;
      m_50 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_50), term_i_18);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(a_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  q_50 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  n_50 = t;
  t = o_50;
  t = e_72(t);
  p_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_50), n_50);
  return(t);
}
ATerm fetch_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm u_50 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_80, _id, t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = Cons_2_0(_id, u_50, t);
      }
    return(t);
  }
  t = u_50(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  t = fetch_1_0(u_97, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  w_50 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_18 = ATgetFirst((ATermList) t);
                ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_50;
          }
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATinsert(ATempty, w_50);
      }
    x_50 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_50);
    t = w_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_72(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_18;
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        t = term_v_18;
        return(t);
      }
      t = Option_3_0(b_7, c_7, d_7, t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm e_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_18;
          return(t);
        }
        ATerm g_7 (ATerm t)
        {
          t = term_x_18;
          return(t);
        }
        t = Option_3_0(e_7, f_7, g_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  if(match_cons(t, sym__3))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      f_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_51, e_51);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_51, e_51);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATempty;
      }
    g_51 = t;
    t = SSL_table_put(d_51, e_51, (ATerm) ATinsert(CheckATermList(g_51), f_51));
    t = (ATerm) ATmakeAppl(sym__3, d_51, e_51, f_51);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm n_51 = NULL;
  t = term_g_12;
  t = z_98(t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_19, term_d_19, n_51);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_51;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm z_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_51 = ATgetFirst((ATermList) t);
          r_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_51;
      t = a_0(t);
      t = term_g_12;
      t = b_0(t);
      z_51 = t;
      t = (ATerm) ATinsert(CheckATermList(r_51), z_51);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm b_52 = NULL;
    b_52 = t;
    if(match_string(t, "--help"))
      {
        t = b_52;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = b_52;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = b_52;
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_e_19;
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_f_19;
    return(t);
  }
  t = Option_3_0(h_7, i_7, j_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
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
  t = y_63(t);
  f_52 = t;
  t = e_52;
  t = z_63(t);
  g_52 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_52), f_52), c_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  {
    ATerm k_7 (ATerm t)
    {
      t = term_g_19;
      t = x_98(t);
      return(t);
    }
    t = try_1_0(k_7, t);
    t = o_52;
    {
      ATerm l_7 (ATerm t)
      {
        ATerm p_52 = NULL;
        p_52 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_52);
        t = (ATerm) ATmakeAppl(sym_Program_1, p_52);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = x_98(t);
                t = Cons_2_0(_id, m_7, t);
              }
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm r_52 = NULL,s_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_52 = ATgetFirst((ATermList) t);
                  s_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_52), (ATerm) ATmakeAppl(sym_Undefined_1, r_52));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_7, m_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_52;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_98(t);
          ;
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          {
            ATerm n_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_19);
              }
            else
              {
                t = n_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_7, t);
    {
      ATerm o_7 (ATerm t)
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_53 = NULL;
            l_53 = t;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_53;
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_17;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        {
                          ATerm p_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(p_7, t);
                        }
                      }
                    t = l_53;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = term_t_18;
                  t = get_config_0_0(t);
                  t = l_53;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm q_7 (ATerm t)
              {
                ATerm r_7 (ATerm t)
                {
                  z_52 = t;
                  return(t);
                }
                t = Undefined_1_0(r_7, t);
                return(t);
              }
              t = option_defined_1_0(q_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_52)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_52)), term_v_19));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_7, t);
      a_53 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_53;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm t)
{
  ATerm k_8 = NULL;
  t = parse_options_1_0(w_96, t);
  k_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_8);
  t = k_8;
  t = y_96(t);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_96, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_96(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(l_96, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_7, n_96, o_96, t_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm v_7 (ATerm t)
    {
      ATerm o_53 = NULL,p_53 = NULL;
      o_53 = t;
      t = term_j_17;
      t = get_config_0_0(t);
      p_53 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_53));
      t = o_53;
      return(t);
    }
    t = if_verbose2_1_0(v_7, t);
    return(t);
  }
  t = iowrap_4_0(f_96, g_96, h_96, u_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  t = iowrap_3_0(d_96, e_96, default_usage_0_0, t);
  return(t);
}
ATerm io_Abox_2_latex_0_0 (ATerm t)
{
  t = iowrap_2_0(abox2latex_0_0, Abox2latex_options_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_latex_0_0(t);
  return(t);
}

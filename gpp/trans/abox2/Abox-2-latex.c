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
ATerm term_x_22;
ATerm term_e_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_s_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
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
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_13);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__3, term_p_8, term_a_21, term_a_8);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Abox2latex_options_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm foldr_3_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm);
ATerm collect_set_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm LatexComment_0_0 (ATerm);
ATerm make_latex_comment_0_0 (ATerm);
ATerm FFID_2_0 (ATerm x_64 (ATerm), ATerm y_64 (ATerm), ATerm);
ATerm toh_0_0 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm separate_by_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm filter_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm C_2_0 (ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm);
ATerm table_row_0_0 (ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm at_last_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm table_def_0_0 (ATerm);
ATerm while_not_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm);
ATerm for_3_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm R_2_0 (ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm y_74 (ATerm), ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_94 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_99 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
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
  t = term_a_8;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_0;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
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
                  ATerm p_0 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm q_0 (ATerm t)
                  {
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                    t = term_h_8;
                    return(t);
                  }
                  ATerm s_0 (ATerm t)
                  {
                    t = term_i_8;
                    return(t);
                  }
                  t = Option_3_0(p_0, q_0, s_0, t);
                  ;
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = f_8;
                  {
                    ATerm j_8 = t;
                    int k_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
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
                              t = keep_option_0_0(t);
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
                                    ATerm t_0 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm u_0 (ATerm t)
                                    {
                                      ATerm m_0 = NULL;
                                      m_0 = t;
                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)), m_0);
                                      t = (ATerm) ATmakeAppl(sym__3, term_p_8, term_q_8, m_0);
                                      return(t);
                                    }
                                    ATerm z_0 (ATerm t)
                                    {
                                      t = term_r_8;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(t_0, u_0, z_0, t);
                                    ;
                                    LocalPopChoice(o_8);
                                  }
                                else
                                  {
                                    t = n_8;
                                    {
                                      ATerm a_1 (ATerm t)
                                      {
                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
                                          _fail(t);
                                        return(t);
                                      }
                                      ATerm d_1 (ATerm t)
                                      {
                                        ATerm n_0 = NULL;
                                        n_0 = t;
                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), n_0);
                                        t = (ATerm) ATmakeAppl(sym__3, term_p_8, term_s_8, n_0);
                                        return(t);
                                      }
                                      ATerm e_1 (ATerm t)
                                      {
                                        t = term_t_8;
                                        return(t);
                                      }
                                      t = ArgOption_3_0(a_1, d_1, e_1, t);
                                    }
                                  }
                              }
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm r_0 = NULL;
    r_0 = t;
    t = SSL_explode_string(r_0);
    return(t);
  }
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  o_0 = t;
  t = SSL_implode_string(o_0);
  return(t);
}
ATerm foldr_3_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_86(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm v_0 = NULL,w_0 = NULL,b_1 = NULL,c_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_0 = ATgetFirst((ATermList) t);
            w_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_0;
        t = v_86(t);
        b_1 = t;
        t = w_0;
        t = foldr_3_0(t_86, u_86, v_86, t);
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, c_1);
        t = u_86(t);
      }
    }
  return(t);
}
ATerm collect_set_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL;
      t = r_85(t);
      h_1 = t;
      t = (ATerm) ATinsert(ATempty, h_1);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm b_0 = NULL,f_0 = NULL;
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            f_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_0;
        {
          ATerm g_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 = NULL,y_0 = NULL;
                if(match_cons(t, sym__2))
                  {
                    x_0 = ATgetArgument(t, 0);
                    y_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_0;
                {
                  ATerm k_1 (ATerm t)
                  {
                    t = y_0;
                    return(t);
                  }
                  t = at_end_1_0(k_1, t);
                }
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm p_1 = NULL,q_1 = NULL;
                  p_1 = t;
                  t = SSL_explode_term(p_1);
                  if(match_cons(t, sym__2))
                    {
                      ATerm b_9 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      q_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_1;
                  t = concat_0_0(t);
                }
              }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            t = collect_set_1_0(r_85, t);
            return(t);
          }
          t = foldr_3_0(g_1, i_1, j_1, t);
        }
      }
    }
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm h_31 (ATerm t_1, ATerm u_1, ATerm v_1, ATerm t)
  {
    ATerm h_3 = NULL;
    t = SSL_is_int(t_1);
    t = SSL_int_to_string(t_1);
    h_3 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), u_1), term_e_9), h_3), term_c_9);
    return(t);
  }
  ATerm i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      m_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      t = m_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_9), p_3), term_h_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_3 = ATgetFirst((ATermList) t);
              i_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), p_3), term_k_9), o_3), term_j_9);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          m_3 = ATgetArgument(t, 0);
          p_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_9), p_3), term_k_9), m_3), term_l_9);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              m_3 = ATgetArgument(t, 0);
              p_3 = ATgetArgument(t, 1);
              k_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), k_3), term_k_9), p_3), term_e_9), m_3), term_n_9);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  m_3 = ATgetArgument(t, 0);
                  p_3 = ATgetArgument(t, 1);
                  k_3 = ATgetArgument(t, 2);
                  l_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_9), l_3), term_k_9), k_3), term_e_9), p_3), term_e_9), m_3), term_q_9);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      m_3 = ATgetArgument(t, 0);
                      p_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_9), p_3), term_k_9), m_3), term_t_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          m_3 = ATgetArgument(t, 0);
                          p_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), p_3), term_w_9), m_3), term_v_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              m_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), m_3), term_y_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  m_3 = ATgetArgument(t, 0);
                                  p_3 = ATgetArgument(t, 1);
                                  t = m_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm a_10 = t;
                                      int b_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = h_31(m_3, p_3, r_3, t);
                                          ;
                                          LocalPopChoice(b_10);
                                        }
                                      else
                                        {
                                          t = a_10;
                                          {
                                            ATerm c_10 = t;
                                            int d_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_10), p_3), term_e_10);
                                                ;
                                                LocalPopChoice(d_10);
                                              }
                                            else
                                              {
                                                t = c_10;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), p_3), term_k_9), m_3), term_g_10);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm h_10 = t;
                                      int i_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = h_31(m_3, p_3, r_3, t);
                                          ;
                                          LocalPopChoice(i_10);
                                        }
                                      else
                                        {
                                          t = h_10;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), p_3), term_k_9), m_3), term_g_10);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      m_3 = ATgetArgument(t, 0);
                                      p_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_3), term_k_10), m_3), term_j_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          m_3 = ATgetArgument(t, 0);
                                          p_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_e_9), m_3), term_l_10);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              m_3 = ATgetArgument(t, 0);
                                              p_3 = ATgetArgument(t, 1);
                                              t = m_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_m_10);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_n_10);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_o_10);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_p_10);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_q_10);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_r_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_s_10);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_t_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_u_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_v_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_w_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_x_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_y_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_z_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_a_11);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_b_11);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_c_11);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_d_11);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_e_11);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_f_11);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_g_11);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_h_11);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_i_11);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_j_11);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  o_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_10), p_3), term_e_9), o_3), term_k_11);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_l_11;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_m_11;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_n_11;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_o_11;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_p_11;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = bottomup_1_0(z_74, t);
    return(t);
  }
  t = SRTS_all(l_1, t);
  t = z_74(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_31 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)));
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL;
            t = eval_config_0_0(t);
            y_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue)), y_1);
            t = y_1;
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
          }
        i_31 = t;
        t = (ATerm) ATinsert(ATempty, i_31);
      }
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(m_1, flat_list_0_0, t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm z_11 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
                  ATerm n_1 (ATerm t)
                  {
                    ATerm o_31 = NULL;
                    o_31 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_31;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_12 = ATgetFirst((ATermList) t);
                            ATerm d_12 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = o_31;
                      }
                    return(t);
                  }
                  t = Cons_2_0(n_1, _id, t);
                  l_31 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_31 = ATgetFirst((ATermList) t);
                      {
                        ATerm e_12 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = l_31;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm f_12 = ATgetFirst((ATermList) t);
                      n_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, m_31, n_31);
                  {
                    ATerm g_12 = t;
                    int i_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm j_12 = ATgetArgument(t, 0);
                            ATerm k_12 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = m_31;
                        {
                          ATerm o_1 (ATerm t)
                          {
                            t = n_31;
                            return(t);
                          }
                          t = at_end_1_0(o_1, t);
                        }
                        ;
                        LocalPopChoice(i_12);
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm h_2 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_31, n_31));
                          if(match_cons(t, sym__2))
                            {
                              ATerm l_12 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              h_2 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = h_2;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = z_11;
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
  ATerm v_31 = NULL,w_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_12) != AT_INT) || (ATgetInt((ATermInt) m_12) != 34)))
        _fail(t);
      v_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_31;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm x_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_12 = ATgetFirst((ATermList) t);
          if(((ATgetType(n_12) != AT_INT) || (ATgetInt((ATermInt) n_12) != 34)))
            _fail(t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(x_31), term_o_12), term_o_12);
      return(t);
    }
    t = at_suffix_1_0(r_1, t);
    w_31 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(w_31), term_p_12), term_p_12);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm y_31 (ATerm t)
  {
    t = z_81(t);
    {
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(r_12);
        }
      else
        {
          t = q_12;
          t = Cons_2_0(_id, y_31, t);
        }
    }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm latex_string_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_32 = NULL;
      w_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), w_32);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        k_2 = t;
        t = SSL_explode_string(k_2);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = replace_quotes_0_0(t);
                ;
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
              }
            return(t);
          }
          t = listtd_1_0(s_1, t);
          {
            ATerm w_1 (ATerm t)
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
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
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                }
              return(t);
            }
            t = map_1_0(w_1, t);
            t = flat_list_0_0(t);
            l_2 = t;
            t = SSL_implode_string(l_2);
          }
        }
      }
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm r_33 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL;
        t = Cons_2_0(b_73, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_13 = ATgetFirst((ATermList) t);
            q_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_33;
        t = r_33(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    return(t);
  }
  t = r_33(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm s_33 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_81(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = Cons_2_0(_id, s_33, t);
      }
    return(t);
  }
  t = s_33(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm w_33 = NULL;
    w_33 = t;
    if(match_int(t, 9))
      {
        t = w_33;
      }
    else
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
          _fail(t);
        t = w_33;
      }
    return(t);
  }
  t = remove_trailing_1_0(x_1, t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
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
            ATerm c_2 (ATerm t)
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
                _fail(t);
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              if(((u_33 != NULL) && (u_33 != t)))
                _fail(t);
              else
                u_33 = t;
              return(t);
            }
            t = Cons_2_0(c_2, d_2, t);
            return(t);
          }
          t = Cons_2_0(a_2, b_2, t);
          t = not_null(u_33);
          return(t);
        }
        t = at_suffix_1_0(z_1, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
    v_33 = t;
    t = SSL_implode_string(v_33);
  }
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm a_34 = NULL,q_3 = NULL;
  a_34 = t;
  t = SSL_explode_string(a_34);
  {
    ATerm e_2 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, e_2, t);
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_3, (ATerm) ATempty);
    {
      ATerm w_34 (ATerm t)
      {
        ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
        if(match_cons(t, sym__2))
          {
            c_34 = ATgetArgument(t, 0);
            f_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_34;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_34 = NULL;
            t = f_34;
            t = LatexComment_0_0(t);
            j_34 = t;
            t = (ATerm) ATinsert(ATempty, j_34);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_34 = ATgetFirst((ATermList) t);
                e_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_34;
            if(match_int(t, 10))
              {
                ATerm f_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_34 = NULL,o_34 = NULL;
                    t = f_34;
                    t = LatexComment_0_0(t);
                    n_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATempty);
                    t = w_34(t);
                    o_34 = t;
                    t = (ATerm) ATinsert(CheckATermList(o_34), n_34);
                    ;
                    LocalPopChoice(g_13);
                  }
                else
                  {
                    t = f_13;
                    t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATinsert(CheckATermList(f_34), d_34));
                    t = w_34(t);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATinsert(CheckATermList(f_34), d_34));
                t = w_34(t);
              }
          }
        return(t);
      }
      t = w_34(t);
      {
        ATerm f_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1_0(f_2, t);
        {
          ATerm g_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2_0(_id, g_2, t);
          {
            ATerm i_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            t = remove_trailing_1_0(i_2, t);
            {
              ATerm j_2 (ATerm t)
              {
                ATerm v_34 = NULL;
                v_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, term_h_13), v_34);
                return(t);
              }
              t = map_1_0(j_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm FFID_2_0 (ATerm x_64 (ATerm), ATerm y_64 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym_FFID_2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  x_34 = t;
  t = y_34;
  t = x_64(t);
  e_35 = t;
  t = z_34;
  t = y_64(t);
  f_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, e_35, f_35), x_34);
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm i_13 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_13;
      }
    return(t);
  }
  t = filter_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      t = term_j_13;
      return(t);
    }
    t = separate_by_1_0(n_2, t);
  }
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm p_35 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        if(!(match_cons(t, sym_HS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(o_2, t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      t = term_m_13;
    }
  p_35 = t;
  t = SSL_int_to_string(p_35);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_35;
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm p_2 (ATerm t)
          {
            ATerm p_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = p_13;
                {
                  ATerm s_35 = NULL;
                  t = Cons_2_0(_id, p_2, t);
                  s_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_35), q_35);
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
ATerm separate_by_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  {
    ATerm q_2 (ATerm t)
    {
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
      t = term_r_13;
      return(t);
    }
    t = if_verbose2_1_0(q_2, t);
    t = term_a_8;
    t = l_80(t);
    v_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_35, u_35);
    t = separate_by_0_0(t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              t = filter_1_0(u_87, t);
              return(t);
            }
            t = Cons_2_0(u_87, r_2, t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm z_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_13 = ATgetFirst((ATermList) t);
                  z_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_35;
              t = filter_1_0(u_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm b_36 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        if(!(match_cons(t, sym_IS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(s_2, t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = term_z_13;
    }
  b_36 = t;
  t = SSL_int_to_string(b_36);
  return(t);
}
ATerm SOpt_2_0 (ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  h_36 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      d_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  c_36 = t;
  t = d_36;
  t = t_65(t);
  f_36 = t;
  t = e_36;
  t = u_65(t);
  g_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, f_36, g_36), c_36);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm k_36 = NULL;
  ATerm t_2 (ATerm t)
  {
    ATerm u_2 (ATerm t)
    {
      if(((k_36 != NULL) && (k_36 != t)))
        _fail(t);
      else
        k_36 = t;
      return(t);
    }
    t = SOpt_2_0(w_72, u_2, t);
    return(t);
  }
  t = fetch_1_0(t_2, t);
  t = SSL_string_to_int(not_null(k_36));
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        if(!(match_cons(t, sym_VS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(v_2, t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      t = term_z_13;
    }
  l_36 = t;
  t = SSL_int_to_string(l_36);
  return(t);
}
ATerm C_2_0 (ATerm p_64 (ATerm), ATerm q_64 (ATerm), ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,r_36 = NULL,s_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym_C_2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_36);
  m_36 = t;
  t = n_36;
  t = p_64(t);
  p_36 = t;
  t = o_36;
  t = q_64(t);
  r_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, p_36, r_36), m_36);
  return(t);
}
ATerm table_row_0_0 (ATerm t)
{
  ATerm x_36 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_36;
  {
    ATerm h_37 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_2 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(_id, w_2, t);
                ;
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                {
                  ATerm i_14 = t;
                  int j_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = C_2_0(_id, _id, t);
                        return(t);
                      }
                      ATerm y_2 (ATerm t)
                      {
                        t = Cons_2_0(_id, h_37, t);
                        return(t);
                      }
                      t = Cons_2_0(x_2, y_2, t);
                      ;
                      LocalPopChoice(j_14);
                    }
                  else
                    {
                      t = i_14;
                      {
                        ATerm k_14 = t;
                        int l_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm a_3 (ATerm t)
                              {
                                t = C_2_0(_id, _id, t);
                                return(t);
                              }
                              t = Cons_2_0(a_3, h_37, t);
                              return(t);
                            }
                            t = Cons_2_0(_id, z_2, t);
                            ;
                            LocalPopChoice(l_14);
                          }
                        else
                          {
                            t = k_14;
                            {
                              ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  c_37 = ATgetFirst((ATermList) t);
                                  d_37 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = d_37;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  e_37 = ATgetFirst((ATermList) t);
                                  f_37 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = h_37(t);
                              g_37 = t;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_37), term_n_14), c_37);
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
    t = h_37(t);
  }
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
      if(match_cons(t, sym_LBL_2))
        {
          m_37 = ATgetArgument(t, 0);
          n_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_37;
      t = table_row_0_0(t);
      t = n_37;
      t = table_row_0_0(t);
      o_37 = t;
      t = (ATerm) ATmakeAppl(sym_LBLBOX_2, m_37, o_37);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = table_row_0_0(t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm p_37 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, b_3, t);
        t = r_81(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = Cons_2_0(_id, p_37, t);
      }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm table_def_0_0 (ATerm t)
{
  ATerm u_37 = NULL;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_37;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm l_38 = NULL;
      if(match_cons(t, sym_AL_1))
        {
          l_38 = ATgetArgument(t, 0);
          {
            ATerm t_4 = NULL,u_4 = NULL,x_4 = NULL;
            t = l_38;
            t = Hspace_0_0(t);
            u_4 = t;
            t = SSL_string_to_int(u_4);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_4, term_j_13);
            t = copy_0_0(t);
            x_4 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_s_14);
          }
        }
      else
        {
          if(match_cons(t, sym_AC_1))
            {
              l_38 = ATgetArgument(t, 0);
              {
                ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
                t = l_38;
                t = Hspace_0_0(t);
                b_5 = t;
                t = SSL_string_to_int(b_5);
                a_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_5, term_j_13);
                t = copy_0_0(t);
                c_5 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_t_14);
              }
            }
          else
            {
              ATerm g_5 = NULL,k_5 = NULL,l_5 = NULL;
              if(match_cons(t, sym_AR_1))
                {
                  l_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_38;
              t = Hspace_0_0(t);
              k_5 = t;
              t = SSL_string_to_int(k_5);
              g_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_5, term_j_13);
              t = copy_0_0(t);
              l_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_5), term_u_14);
            }
        }
      return(t);
    }
    t = map_1_0(c_3, t);
    {
      ATerm d_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_n_14);
        return(t);
      }
      t = separate_by_1_0(d_3, t);
      t = concat_0_0(t);
      {
        ATerm e_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATempty, term_v_14);
          return(t);
        }
        t = at_last_1_0(e_3, t);
      }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_38 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_74(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = q_74(t);
        t = p_38(t);
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm for_3_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  t = s_74(t);
  t = while_not_2_0(t_74, u_74, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm q_38 = NULL,r_38 = NULL;
        if(match_cons(t, sym__2))
          {
            q_38 = ATgetArgument(t, 0);
            r_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, q_38, r_38, (ATerm) ATempty);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm s_38 = NULL;
        if(match_cons(t, sym__3))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            if(((ATgetType(a_15) != AT_INT) || (ATgetInt((ATermInt) a_15) != 0)))
              _fail(t);
            {
              ATerm b_15 = ATgetArgument(t, 1);
            }
            s_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_38;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
        if(match_cons(t, sym__3))
          {
            t_38 = ATgetArgument(t, 0);
            u_38 = ATgetArgument(t, 1);
            v_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_38, term_m_13);
        t = geq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, t_38, term_m_13);
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(t_38, (ATerm) ATmakeInt(1));
              ;
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = SSL_subtr(t_38, (ATerm) ATmakeInt(1));
            }
          w_38 = t;
          t = (ATerm) ATmakeAppl(sym__3, w_38, u_38, (ATerm) ATinsert(CheckATermList(v_38), u_38));
        }
        return(t);
      }
      t = for_3_0(f_3, g_3, j_3, t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm n_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
            _fail(t);
          return(t);
        }
        t = _2_0(n_3, _id, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm R_2_0 (ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  c_39 = t;
  if(match_cons(t, sym_R_2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  x_38 = t;
  t = y_38;
  t = f_65(t);
  a_39 = t;
  t = z_38;
  t = g_65(t);
  b_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, a_39, b_39), x_38);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATempty);
  {
    ATerm i_40 (ATerm t)
    {
      ATerm i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
      if(match_cons(t, sym__2))
        {
          l_39 = ATgetArgument(t, 0);
          o_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_39 = NULL;
          t = o_39;
          {
            ATerm s_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, s_3, t);
            t_39 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_39));
          }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_39 = ATgetFirst((ATermList) t);
              n_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_39;
          if(match_cons(t, sym_R_2))
            {
              i_39 = ATgetArgument(t, 0);
              j_39 = ATgetArgument(t, 1);
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_39 = NULL,z_39 = NULL;
                    t = o_39;
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = reverse_acc_2_0(_id, t_3, t);
                      y_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_39, (ATerm) ATempty);
                      t = i_40(t);
                      z_39 = t;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_39), (ATerm) ATmakeAppl(sym_R_2, i_39, j_39)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_39));
                    }
                    ;
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    t = (ATerm) ATmakeAppl(sym__2, n_39, (ATerm) ATinsert(CheckATermList(o_39), m_39));
                    t = i_40(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_39, (ATerm) ATinsert(CheckATermList(o_39), m_39));
              t = i_40(t);
            }
        }
      return(t);
    }
    t = i_40(t);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm g_15 = t;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, v_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_15;
          }
        return(t);
      }
      t = filter_1_0(u_3, t);
    }
  }
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm p_43 (ATerm a_42, ATerm b_42, ATerm c_42, ATerm t)
  {
    t = a_42;
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(!(match_cons(t, sym_KW_0)))
            _fail(t);
          ;
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          {
            ATerm j_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(!(match_cons(t, sym_VAR_0)))
                  _fail(t);
                ;
                LocalPopChoice(k_15);
              }
            else
              {
                t = j_15;
                {
                  ATerm l_15 = t;
                  int m_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_NUM_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(m_15);
                    }
                  else
                    {
                      t = l_15;
                      if(!(match_cons(t, sym_MATH_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, a_42, b_42);
    }
    return(t);
  }
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  k_42 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, l_42, j_42);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          l_42 = ATgetArgument(t, 0);
          j_42 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, l_42, j_42);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              l_42 = ATgetArgument(t, 0);
              j_42 = ATgetArgument(t, 1);
              {
                ATerm r_6 = NULL;
                t = k_42;
                {
                  ATerm n_15 = t;
                  int o_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(l_42);
                      r_6 = t;
                      ;
                      LocalPopChoice(o_15);
                    }
                  else
                    {
                      t = n_15;
                      {
                        ATerm p_15 = t;
                        int q_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_explode_string(l_42);
                            {
                              ATerm w_3 (ATerm t)
                              {
                                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                                  _fail(t);
                                return(t);
                              }
                              t = Cons_2_0(w_3, _id, t);
                              t = SSL_implode_string((ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(61)));
                              r_6 = t;
                            }
                            ;
                            LocalPopChoice(q_15);
                          }
                        else
                          {
                            t = p_15;
                            t = l_42;
                            r_6 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, r_6, j_42);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  l_42 = ATgetArgument(t, 0);
                  j_42 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, l_42, j_42);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      l_42 = ATgetArgument(t, 0);
                      j_42 = ATgetArgument(t, 1);
                      f_42 = ATgetArgument(t, 2);
                      {
                        ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,l_7 = NULL;
                        t = f_42;
                        t = construct_rows_0_0(t);
                        c_7 = t;
                        t = j_42;
                        t = Vspace_0_0(t);
                        e_7 = t;
                        t = SSL_string_to_int(e_7);
                        d_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_7, term_v_14);
                        t = copy_0_0(t);
                        g_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, g_7, (ATerm) ATinsert(ATinsert(ATempty, term_h_13), term_v_14));
                        {
                          ATerm r_15 = t;
                          int s_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm t_15 = ATgetArgument(t, 0);
                                  ATerm u_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = g_7;
                              {
                                ATerm x_3 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_13), term_v_14);
                                  return(t);
                                }
                                t = at_end_1_0(x_3, t);
                              }
                              ;
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              {
                                ATerm v_7 = NULL;
                                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_7, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(sym_EOR_0))));
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm v_15 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
                                      _fail(t);
                                    v_7 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = v_7;
                                t = concat_0_0(t);
                              }
                            }
                          h_7 = t;
                          t = l_42;
                          t = table_def_0_0(t);
                          i_7 = t;
                          t = c_7;
                          t = map_1_0(MkRows_0_0, t);
                          {
                            ATerm y_3 (ATerm t)
                            {
                              t = h_7;
                              return(t);
                            }
                            t = separate_by_1_0(y_3, t);
                            l_7 = t;
                            t = (ATerm) ATmakeAppl(sym_ABOX_2, i_7, l_7);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          l_42 = ATgetArgument(t, 0);
                          j_42 = ATgetArgument(t, 1);
                          {
                            ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
                            t = l_42;
                            t = Hspace_0_0(t);
                            u_42 = t;
                            t = l_42;
                            t = Vspace_0_0(t);
                            v_42 = t;
                            t = l_42;
                            t = Ispace_0_0(t);
                            w_42 = t;
                            t = j_42;
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm w_15 = t;
                                if((PushChoice() == 0))
                                  {
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = w_15;
                                  }
                                return(t);
                              }
                              t = filter_1_0(z_3, t);
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = term_x_15;
                                  return(t);
                                }
                                t = separate_by_1_0(a_4, t);
                                x_42 = t;
                                t = (ATerm) ATmakeAppl(sym_HVBOX_4, u_42, v_42, w_42, x_42);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              l_42 = ATgetArgument(t, 0);
                              j_42 = ATgetArgument(t, 1);
                              {
                                ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
                                t = l_42;
                                t = Vspace_0_0(t);
                                a_43 = t;
                                t = l_42;
                                t = Ispace_0_0(t);
                                b_43 = t;
                                t = j_42;
                                {
                                  ATerm b_4 (ATerm t)
                                  {
                                    ATerm y_15 = t;
                                    if((PushChoice() == 0))
                                      {
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = y_15;
                                      }
                                    return(t);
                                  }
                                  t = filter_1_0(b_4, t);
                                  {
                                    ATerm c_4 (ATerm t)
                                    {
                                      t = term_z_15;
                                      return(t);
                                    }
                                    t = separate_by_1_0(c_4, t);
                                    c_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_VBOX_3, a_43, b_43, c_43);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  l_42 = ATgetArgument(t, 0);
                                  j_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_43 = NULL,g_43 = NULL;
                                    t = l_42;
                                    t = Hspace_0_0(t);
                                    f_43 = t;
                                    t = j_42;
                                    t = toh_0_0(t);
                                    g_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, f_43, g_43);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      l_42 = ATgetArgument(t, 0);
                                      j_42 = ATgetArgument(t, 1);
                                      t = l_42;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          i_42 = ATgetArgument(t, 0);
                                          t = i_42;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              g_42 = ATgetFirst((ATermList) t);
                                              h_42 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm a_16 = t;
                                                int b_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_9 = NULL,f_9 = NULL;
                                                    t = g_42;
                                                    {
                                                      ATerm c_16 = t;
                                                      int d_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_4 (ATerm t)
                                                          {
                                                            if(!(match_cons(t, sym_FM_0)))
                                                              _fail(t);
                                                            return(t);
                                                          }
                                                          ATerm e_4 (ATerm t)
                                                          {
                                                            if(((f_9 != NULL) && (f_9 != t)))
                                                              _fail(t);
                                                            else
                                                              f_9 = t;
                                                            return(t);
                                                          }
                                                          t = FFID_2_0(d_4, e_4, t);
                                                          ;
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
                                                                ATerm f_4 (ATerm t)
                                                                {
                                                                  if(!(match_cons(t, sym_SE_0)))
                                                                    _fail(t);
                                                                  return(t);
                                                                }
                                                                ATerm g_4 (ATerm t)
                                                                {
                                                                  if(((f_9 != NULL) && (f_9 != t)))
                                                                    _fail(t);
                                                                  else
                                                                    f_9 = t;
                                                                  return(t);
                                                                }
                                                                t = FFID_2_0(f_4, g_4, t);
                                                                ;
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
                                                                      ATerm h_4 (ATerm t)
                                                                      {
                                                                        if(!(match_cons(t, sym_SH_0)))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      ATerm i_4 (ATerm t)
                                                                      {
                                                                        if(((f_9 != NULL) && (f_9 != t)))
                                                                          _fail(t);
                                                                        else
                                                                          f_9 = t;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2_0(h_4, i_4, t);
                                                                      ;
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
                                                                            ATerm j_4 (ATerm t)
                                                                            {
                                                                              if(!(match_cons(t, sym_SZ_0)))
                                                                                _fail(t);
                                                                              return(t);
                                                                            }
                                                                            ATerm k_4 (ATerm t)
                                                                            {
                                                                              if(((f_9 != NULL) && (f_9 != t)))
                                                                                _fail(t);
                                                                              else
                                                                                f_9 = t;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2_0(j_4, k_4, t);
                                                                            ;
                                                                            LocalPopChoice(j_16);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_16;
                                                                            {
                                                                              ATerm l_4 (ATerm t)
                                                                              {
                                                                                if(!(match_cons(t, sym_CL_0)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm m_4 (ATerm t)
                                                                              {
                                                                                if(((d_9 != NULL) && (d_9 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  d_9 = t;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2_0(l_4, m_4, t);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(d_9));
                                                                              f_9 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(f_9), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, h_42), j_42));
                                                    }
                                                    ;
                                                    LocalPopChoice(b_16);
                                                  }
                                                else
                                                  {
                                                    t = a_16;
                                                    t = p_43(l_42, j_42, k_42, t);
                                                  }
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
                                                      t = j_42;
                                                      ;
                                                      LocalPopChoice(l_16);
                                                    }
                                                  else
                                                    {
                                                      t = k_16;
                                                      t = p_43(l_42, j_42, k_42, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = p_43(l_42, j_42, k_42, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = p_43(l_42, j_42, k_42, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          l_42 = ATgetArgument(t, 0);
                                          j_42 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_43 = NULL;
                                            t = l_42;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = j_42;
                                            {
                                              ATerm n_4 (ATerm t)
                                              {
                                                ATerm k_43 = NULL;
                                                if(match_cons(t, sym_S_1))
                                                  {
                                                    k_43 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = k_43;
                                                t = make_latex_comment_0_0(t);
                                                return(t);
                                              }
                                              t = map_1_0(n_4, t);
                                              j_43 = t;
                                              t = (ATerm) ATmakeAppl(sym_CBOX_1, j_43);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              l_42 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = l_42;
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
ATerm topdown_1_0 (ATerm y_74 (ATerm), ATerm t)
{
  t = y_74(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = topdown_1_0(y_74, t);
      return(t);
    }
    t = SRTS_all(o_4, t);
  }
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)));
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)));
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_9 = NULL;
              t = eval_config_0_0(t);
              p_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue)), p_9);
              t = p_9;
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
            }
          t = ReadFromFile_0_0(t);
          {
            ATerm p_4 (ATerm t)
            {
              ATerm r_43 = NULL,s_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_43 = ATgetFirst((ATermList) t);
                  {
                    ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
                      {
                        s_43 = ATgetFirst((ATermList) q_16);
                        {
                          ATerm r_16 = (ATerm) ATgetNext((ATermList) q_16);
                          if(((ATgetType(r_16) != AT_LIST) || !(ATisEmpty(r_16))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), r_43, s_43);
              t = (ATerm) ATmakeAppl(sym__3, term_s_16, r_43, s_43);
              return(t);
            }
            t = map_1_0(p_4, t);
          }
        }
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
      }
    t = q_43;
  }
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm t_43 = NULL,u_43 = NULL;
    t = load_latex_table_0_0(t);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Abox2latex_0_0(t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
          }
        return(t);
      }
      t = topdown_1_0(r_4, t);
      t_43 = t;
      t = BOXENV_args_0_0(t);
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, u_43, t_43);
      {
        ATerm s_4 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Latex2text_0_0(t);
              ;
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
            }
          return(t);
        }
        t = bottomup_1_0(s_4, t);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm v_43 = NULL;
            v_43 = t;
            t = SSL_is_string(v_43);
            return(t);
          }
          t = collect_set_1_0(v_4, t);
          t = concat_strings_0_0(t);
        }
      }
    }
    return(t);
  }
  t = _2_0(_id, q_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_43, term_x_16);
  t = open_stream_0_0(t);
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, x_43);
  t = f_93(t);
  t = fclose_0_0(t);
  t = x_43;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  z_43 = t;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_44 != NULL) && (a_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_4, t);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          t = term_a_17;
          if(((a_44 != NULL) && (a_44 != t)))
            _fail(t);
          else
            a_44 = t;
        }
      return(t);
    }
    t = _2_0(w_4, _id, t);
    t = z_43;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm r_9 = NULL;
        r_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), r_9);
        return(t);
      }
      t = _2_0(_id, z_4, t);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              ATerm f_5 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(f_5, t);
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm h_5 (ATerm t)
              {
                ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm d_17 = ATgetArgument(t, 0);
                    if(match_cons(d_17, sym_Stream_1))
                      {
                        b_44 = ATgetArgument(d_17, 0);
                      }
                    else
                      _fail(t);
                    c_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(b_44, c_44);
                d_44 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_44);
                return(t);
              }
              t = WriteToFile_1_0(h_5, t);
              return(t);
            }
            t = _2_0(d_5, e_5, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm e_17 = ATgetArgument(t, 0);
                      if(match_cons(e_17, sym_Stream_1))
                        {
                          e_44 = ATgetArgument(e_17, 0);
                        }
                      else
                        _fail(t);
                      f_44 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(e_44, f_44);
                  g_44 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), g_44);
                  h_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, h_44);
                  return(t);
                }
                t = WriteToFile_1_0(j_5, t);
                return(t);
              }
              t = _2_0(_id, i_5, t);
            }
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
ATerm apply_strategy_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  i_44 = t;
  t = dtime_0_0(t);
  t = i_44;
  t = h_96(t);
  j_44 = t;
  t = dtime_0_0(t);
  k_44 = t;
  t = j_44;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_44), (ATerm) ATmakeAppl(sym_Runtime_1, k_44)), m_44);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_45 (ATerm u_44, ATerm t)
  {
    t = SSL_fclose(u_44);
    return(t);
  }
  ATerm x_44 = NULL,y_44 = NULL;
  y_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_44 = ATgetArgument(t, 0);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_44);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = a_45(y_44, t);
          }
      }
    }
  else
    {
      t = a_45(y_44, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_stdin_stream();
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_stdout_stream();
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_45 = NULL;
  t = SSL_stderr_stream();
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_45);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      ATerm i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_11 = NULL,a_12 = NULL;
        y_11 = t;
        t = SSL_explode_term(y_11);
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_17 = ATgetArgument(t, 1);
              if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
                {
                  a_12 = ATgetFirst((ATermList) m_17);
                  {
                    ATerm n_17 = (ATerm) ATgetNext((ATermList) m_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
              ATerm n_5 (ATerm t)
              {
                ATerm m_45 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    m_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_45;
                return(t);
              }
              t = _2_0(n_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_45 = ATgetArgument(t, 0);
                  k_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_45, k_45);
              l_45 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_45);
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
                ATerm o_5 (ATerm t)
                {
                  ATerm q_45 = NULL;
                  q_45 = t;
                  t = SSL_is_string(q_45);
                  return(t);
                }
                t = _2_0(o_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_45 = ATgetArgument(t, 0);
                    o_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_45, o_45);
                p_45 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_45);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_45 = NULL;
      u_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_45, term_s_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm h_12 = NULL;
        h_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_12;
        _fail(t);
      }
    }
  r_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_45);
  s_45 = t;
  t = r_45;
  t = fclose_0_0(t);
  t = s_45;
  return(t);
}
ATerm fetch_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm z_45 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_81, _id, t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = Cons_2_0(_id, z_45, t);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm c_46 = NULL,d_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_46 = ATgetFirst((ATermList) t);
            d_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_46;
        {
          ATerm p_5 (ATerm t)
          {
            t = d_46;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm j_46 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_46, t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_81(t);
      }
    return(t);
  }
  t = j_46(t);
  return(t);
}
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym__2))
    {
      l_46 = ATgetArgument(t, 0);
      m_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_46);
  k_46 = t;
  t = l_46;
  t = w_62(t);
  n_46 = t;
  t = m_46;
  t = x_62(t);
  o_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_46, o_46), k_46);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_46 = NULL;
  ATerm q_5 (ATerm t)
  {
    ATerm u_46 = NULL;
    u_46 = t;
    t = SSL_explode_string(u_46);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm v_46 = NULL;
    v_46 = t;
    t = SSL_explode_string(v_46);
    return(t);
  }
  t = _2_0(q_5, r_5, t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_46 = NULL,y_46 = NULL;
        if(match_cons(t, sym__2))
          {
            x_46 = ATgetArgument(t, 0);
            y_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_46;
        {
          ATerm s_5 (ATerm t)
          {
            t = y_46;
            return(t);
          }
          t = at_end_1_0(s_5, t);
        }
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm c_14 = NULL,m_14 = NULL;
          c_14 = t;
          t = SSL_explode_term(c_14);
          if(match_cons(t, sym__2))
            {
              ATerm b_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_14;
          t = concat_0_0(t);
        }
      }
    t_46 = t;
    t = SSL_implode_string(t_46);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_47 = NULL;
      k_47 = t;
      t = SSL_is_string(k_47);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              ATerm g_18 = t;
              int h_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(h_18);
                }
              else
                {
                  t = g_18;
                }
              return(t);
            }
            t = map_1_0(t_5, t);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
              o_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_47 = ATgetArgument(t, 0);
                  t = p_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_47 = ATgetArgument(t, 0);
                      t = p_47;
                      {
                        ATerm i_18 = t;
                        int j_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_47);
                            {
                              ATerm k_18 = t;
                              int l_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_20 = NULL;
                                  t = eval_config_0_0(t);
                                  r_20 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_47, r_20);
                                  t = r_20;
                                  ;
                                  LocalPopChoice(l_18);
                                }
                              else
                                {
                                  t = k_18;
                                }
                            }
                            ;
                            LocalPopChoice(j_18);
                          }
                        else
                          {
                            t = i_18;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_47), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_47;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_47 = NULL,v_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_47 = ATgetArgument(t, 0);
                          q_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_47;
                      t = eval_config_0_0(t);
                      u_47 = t;
                      t = q_47;
                      t = eval_config_0_0(t);
                      v_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_47, v_47);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_48 = NULL,c_48 = NULL;
      a_48 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = NULL;
            t = eval_config_0_0(t);
            b_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_24);
            t = b_24;
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
          }
        c_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_48, term_q_18);
        t = geq_0_0(t);
        t = a_48;
        t = j_94(t);
      }
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm e_48 = NULL;
    e_48 = t;
    if(match_string(t, "-k"))
      {
        t = e_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_48;
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm f_48 = NULL,g_48 = NULL;
    f_48 = t;
    t = SSL_string_to_int(f_48);
    g_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_48);
    t = f_48;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 (ATerm t)
      {
        ATerm i_48 = NULL;
        i_48 = t;
        if(match_string(t, "-S"))
          {
            t = i_48;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_48;
          }
        return(t);
      }
      ATerm y_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_18;
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_v_18;
        return(t);
      }
      t = Option_3_0(x_5, y_5, z_5, t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_6 (ATerm t)
            {
              ATerm j_48 = NULL,k_48 = NULL;
              j_48 = t;
              t = SSL_string_to_int(j_48);
              k_48 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_48);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_48);
              return(t);
            }
            ATerm c_6 (ATerm t)
            {
              t = term_y_18;
              return(t);
            }
            t = ArgOption_3_0(a_6, b_6, c_6, t);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm d_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_z_18;
                return(t);
              }
              ATerm f_6 (ATerm t)
              {
                t = term_a_19;
                return(t);
              }
              t = Option_3_0(d_6, e_6, f_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_48 = NULL;
      t = term_a_8;
      t = d_0(t);
      p_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_c_19, p_48);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_48 = ATgetFirst((ATermList) t);
          o_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_48;
      t = a_0(t);
      t = term_a_8;
      t = c_0(t);
      s_48 = t;
      t = (ATerm) ATinsert(CheckATermList(o_48), s_48);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm u_48 = NULL;
    u_48 = t;
    if(match_string(t, "-o"))
      {
        t = u_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_48;
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm v_48 = NULL;
    v_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_48);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_48);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_d_19;
    return(t);
  }
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym__3))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
      a_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_48, z_48);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATempty;
      }
    b_49 = t;
    t = SSL_table_put(y_48, z_48, (ATerm) ATinsert(CheckATermList(b_49), a_49));
    t = (ATerm) ATmakeAppl(sym__3, y_48, z_48, a_49);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_49 = NULL;
      t = term_a_8;
      t = j_0(t);
      n_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_c_19, n_49);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_49 = ATgetFirst((ATermList) t);
          k_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          m_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_49;
      t = h_0(t);
      t = l_49;
      t = i_0(t);
      r_49 = t;
      t = (ATerm) ATinsert(CheckATermList(m_49), r_49);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm t_49 = NULL;
    t_49 = t;
    if(match_string(t, "-i"))
      {
        t = t_49;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_49;
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_49);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_49);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_i_19;
    return(t);
  }
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_8;
  t = whoami_0_0(t);
  v_49 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_49));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = eval_config_0_0(t);
        f_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_24);
        t = f_24;
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_86(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm y_49 = NULL,z_49 = NULL,c_50 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_49 = ATgetFirst((ATermList) t);
            z_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_49;
        t = foldr_2_0(r_86, s_86, t);
        c_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_49, c_50);
        t = s_86(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_24 = NULL,h_24 = NULL;
  t = times_0_0(t);
  g_24 = t;
  t = SSL_explode_term(g_24);
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_24;
  {
    ATerm m_6 (ATerm t)
    {
      t = term_z_13;
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm k_24 = NULL,l_24 = NULL;
      if(match_cons(t, sym__2))
        {
          k_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_24, l_24);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = SSL_addr(k_24, l_24);
          }
      }
      return(t);
    }
    t = foldr_2_0(m_6, n_6, t);
    f_50 = t;
    t = SSL_TicksToSeconds(f_50);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_50 = NULL,t_50 = NULL,u_50 = NULL;
  q_50 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_50;
        if((t_50 != t))
          {
            _fail(t);
          }
        t = q_50;
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = q_50;
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_50, u_50);
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = SSL_gtr(t_50, u_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_50 = NULL,z_50 = NULL;
      x_50 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_24 = NULL;
            t = eval_config_0_0(t);
            v_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_24);
            t = v_24;
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
          }
        z_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_50, term_m_13);
        t = geq_0_0(t);
        t = x_50;
        t = i_94(t);
      }
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL;
    t = run_time_0_0(t);
    b_51 = t;
    t = term_a_8;
    t = whoami_0_0(t);
    c_51 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_51), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_51));
    t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_20), b_51), term_z_19), c_51));
    return(t);
  }
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24 = NULL;
            t = eval_config_0_0(t);
            z_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), z_24);
            t = z_24;
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
          }
      }
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm p_6 (ATerm t)
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm h_20 = t;
                int i_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_20);
                  }
                else
                  {
                    t = h_20;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(p_6, t);
      }
    }
  t = f_97(t);
  return(t);
}
ATerm map_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm d_51 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = Cons_2_0(p_80, d_51, t);
      }
    return(t);
  }
  t = d_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_51 = ATgetFirst((ATermList) t);
      g_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_51 = NULL,l_51 = NULL;
        t = g_51;
        t = g_0(t);
        k_51 = t;
        t = f_51;
        t = e_0(t);
        l_51 = t;
        t = g_51;
        {
          ATerm q_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_51), l_51);
            return(t);
          }
          t = reverse_acc_2_0(e_0, q_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  m_51 = t;
  t = n_51;
  t = k_72(t);
  o_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, o_51), m_51);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_25 = NULL;
            t = eval_config_0_0(t);
            d_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_25);
            t = d_25;
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
          }
      }
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm s_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(s_6, t);
      }
    }
  t = term_p_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm t_6 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, t_6, t);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm s_51 = NULL;
        s_51 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_51), term_q_20);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(u_6, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  w_51 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  t_51 = t;
  t = u_51;
  t = l_72(t);
  v_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_51), t_51);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  f_52 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_20 = ATgetFirst((ATermList) t);
                ATerm v_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_52;
          }
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = (ATerm) ATinsert(ATempty, f_52);
      }
    g_52 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), g_52);
    t = f_52;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL;
        t = eval_config_0_0(t);
        h_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_25);
        t = h_25;
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_21;
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        t = term_c_21;
        return(t);
      }
      t = Option_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm y_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_21;
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_e_21;
          return(t);
        }
        t = Option_3_0(y_6, z_6, a_7, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  p_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_52 = ATgetFirst((ATermList) t);
      m_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_52);
  k_52 = t;
  t = l_52;
  t = f_64(t);
  n_52 = t;
  t = m_52;
  t = g_64(t);
  o_52 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(o_52), n_52), k_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_21;
        t = i_99(t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
      }
    t = t_52;
    {
      ATerm b_7 (ATerm t)
      {
        ATerm u_52 = NULL;
        u_52 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_52);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_52);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_21 = t;
            int l_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_21);
              }
            else
              {
                t = k_21;
                t = i_99(t);
                t = Cons_2_0(_id, f_7, t);
              }
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm w_52 = NULL,x_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_52 = ATgetFirst((ATermList) t);
                  x_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_52), (ATerm) ATmakeAppl(sym_Undefined_1, w_52));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_7, f_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_53;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm m_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_99(t);
          ;
          LocalPopChoice(n_21);
        }
      else
        {
          t = m_21;
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm h_53 = NULL;
                  h_53 = t;
                  if(match_string(t, "--help"))
                    {
                      t = h_53;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = h_53;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = h_53;
                        }
                    }
                  return(t);
                }
                ATerm m_7 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_q_21;
                  return(t);
                }
                ATerm n_7 (ATerm t)
                {
                  t = term_r_21;
                  return(t);
                }
                t = Option_3_0(k_7, m_7, n_7, t);
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_53 = NULL;
          q_53 = t;
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_53;
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_21 = t;
                        int z_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_25 = NULL;
                            t = eval_config_0_0(t);
                            v_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_25);
                            t = v_25;
                            ;
                            LocalPopChoice(z_21);
                          }
                        else
                          {
                            t = y_21;
                          }
                      }
                      ;
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                      {
                        ATerm o_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(o_7, t);
                      }
                    }
                  t = q_53;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_22 = t;
                  int b_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_26 = NULL;
                      t = eval_config_0_0(t);
                      b_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_26);
                      t = b_26;
                      ;
                      LocalPopChoice(b_22);
                    }
                  else
                    {
                      t = a_22;
                    }
                  t = q_53;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_7 (ATerm t)
                {
                  ATerm q_7 (ATerm t)
                  {
                    if(((f_53 != NULL) && (f_53 != t)))
                      _fail(t);
                    else
                      f_53 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_7, t);
                  return(t);
                }
                t = fetch_1_0(p_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_53)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_53)), term_e_22));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
              }
          }
        }
      g_53 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_53;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm t_53 = NULL;
  t = parse_options_1_0(h_97, t);
  t_53 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), t_53);
  t = t_53;
  t = j_97(t);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_97, t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_96(t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              {
                ATerm n_22 = t;
                int o_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_22);
                  }
                else
                  {
                    t = n_22;
                    {
                      ATerm p_22 = t;
                      int q_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm w_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_h_8;
                            return(t);
                          }
                          ATerm x_7 (ATerm t)
                          {
                            t = term_i_8;
                            return(t);
                          }
                          t = Option_3_0(u_7, w_7, x_7, t);
                          ;
                          LocalPopChoice(q_22);
                        }
                      else
                        {
                          t = p_22;
                          {
                            ATerm r_22 = t;
                            int s_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_22);
                              }
                            else
                              {
                                t = r_22;
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
  ATerm s_7 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      ATerm u_53 = NULL,v_53 = NULL;
      u_53 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26 = NULL;
            t = eval_config_0_0(t);
            h_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_26);
            t = h_26;
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
          }
        v_53 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, v_53));
        t = u_53;
      }
      return(t);
    }
    t = if_verbose2_1_0(y_7, t);
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm w_53 = NULL,x_53 = NULL,n_26 = NULL;
    w_53 = t;
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_7, t);
          ;
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          t = term_x_22;
          x_53 = t;
        }
      t = not_null(x_53);
      t = ReadFromFile_0_0(t);
      n_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_53, n_26);
      t = apply_strategy_1_0(q_96, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_7, s_96, s_7, t_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

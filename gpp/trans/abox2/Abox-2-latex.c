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
ATerm term_b_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_a_17;
ATerm term_p_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
void init_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_q_9);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_p_16);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_q_9);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_n_21);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_q_9);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_q_9);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_q_9);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm Abox2latex_options_0_0 (ATerm);
ATerm y_1 (ATerm o_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm collect_om_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm w_35 (ATerm q_2, ATerm r_2, ATerm s_2, ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm j_6 (ATerm k_30, ATerm);
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm LatexComment_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm make_latex_comment_0_0 (ATerm);
ATerm FFID_2_0 (ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm toh_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm k_6 (ATerm v_31, ATerm w_31, ATerm);
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm C_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm s_4 (ATerm);
ATerm l_6 (ATerm i_27, ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm m_6 (ATerm e_27, ATerm);
ATerm n_6 (ATerm l_47, ATerm m_47, ATerm);
ATerm while_not_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm R_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm j_49 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm q_6 (ATerm f_50, ATerm g_50, ATerm);
ATerm r_6 (ATerm t_53, ATerm u_53, ATerm);
ATerm t_6 (ATerm s_99 (ATerm), ATerm t_491, ATerm x_53, ATerm);
ATerm s_6 (ATerm p_53, ATerm q_53, ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm j_51 (ATerm d_51, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm v_53, ATerm);
ATerm v_6 (ATerm h_50, ATerm i_50, ATerm);
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm p_6 (ATerm v_44, ATerm w_44, ATerm);
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_7 (ATerm w_54, ATerm x_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_6 (ATerm u_59, ATerm v_59, ATerm t_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_6 (ATerm f_47, ATerm g_47, ATerm);
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm need_help_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_6 (ATerm l_61, ATerm m_61, ATerm);
ATerm Program_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_105 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm parse_options_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm iowrap_3_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  k_0 = t;
  t = term_q_9;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_r_9;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), l_0), term_s_9);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_y_9;
  o_0 = t;
  t = SSL_exit(o_0);
  t = k_0;
  return(t);
}
ATerm r_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  t = term_c_10;
  p_0 = t;
  t = term_q_9;
  q_0 = t;
  t = term_d_10;
  t = b_7(p_0, q_0, t);
  t = term_e_10;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  t_0 = t;
  t = term_h_10;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, t_0);
  t = b_7(u_0, t_0, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm e_1 = NULL,l_1 = NULL;
  e_1 = t;
  t = term_j_10;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, e_1);
  t = b_7(l_1, e_1, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm s_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_1, w_1, x_1, t);
                  ;
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = s_10;
                  {
                    ATerm w_10 = t;
                    int x_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(x_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm y_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              ;
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = y_10;
                              {
                                ATerm a_11 = t;
                                int b_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(z_1, a_2, d_2, t);
                                    ;
                                    LocalPopChoice(b_11);
                                  }
                                else
                                  {
                                    t = a_11;
                                    t = ArgOption_3_0(e_2, h_2, i_2, t);
                                  }
                              }
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
ATerm y_1 (ATerm o_1, ATerm t)
{
  ATerm s_1 = NULL;
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = u_1;
              return(t);
            }
            t = t_1;
            t = at_end_1_0(k_2, t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = y_1(v_1, t);
          }
      }
    }
  else
    {
      t = y_1(v_1, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_93(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm b_2 = NULL,c_2 = NULL,f_2 = NULL,g_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_2 = ATgetFirst((ATermList) t);
            c_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_2;
        t = i_93(t);
        f_2 = t;
        t = c_2;
        t = foldr_3_0(g_93, h_93, i_93, t);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_2, g_2);
        t = h_93(t);
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL;
      t = k_92(t);
      j_2 = t;
      t = (ATerm) ATinsert(ATempty, j_2);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm b_0 = NULL,f_0 = NULL;
        b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            f_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_0;
        {
          ATerm m_2 (ATerm t)
          {
            t = collect_om_2_0(k_92, l_92, t);
            return(t);
          }
          t = foldr_3_0(l_2, l_92, m_2, t);
        }
      }
    }
  return(t);
}
ATerm w_35 (ATerm q_2, ATerm r_2, ATerm s_2, ATerm t)
{
  ATerm h_4 = NULL;
  t = SSL_is_int(q_2);
  t = SSL_int_to_string(q_2);
  h_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), r_2), term_m_11), h_4), term_l_11);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      n_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
      t = n_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_11), p_4), term_p_11);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_4 = ATgetFirst((ATermList) t);
              j_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), p_4), term_s_11), o_4), term_r_11);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          n_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_11), p_4), term_s_11), n_4), term_t_11);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              n_4 = ATgetArgument(t, 0);
              p_4 = ATgetArgument(t, 1);
              k_4 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_11), k_4), term_s_11), p_4), term_m_11), n_4), term_v_11);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  n_4 = ATgetArgument(t, 0);
                  p_4 = ATgetArgument(t, 1);
                  k_4 = ATgetArgument(t, 2);
                  l_4 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_11), l_4), term_s_11), k_4), term_m_11), p_4), term_m_11), n_4), term_x_11);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      n_4 = ATgetArgument(t, 0);
                      p_4 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), p_4), term_s_11), n_4), term_z_11);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          n_4 = ATgetArgument(t, 0);
                          p_4 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), p_4), term_c_12), n_4), term_b_12);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              n_4 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), n_4), term_e_12);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  n_4 = ATgetArgument(t, 0);
                                  p_4 = ATgetArgument(t, 1);
                                  t = n_4;
                                  if(match_string(t, "="))
                                    {
                                      ATerm g_12 = t;
                                      int h_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_35(n_4, p_4, q_4, t);
                                          ;
                                          LocalPopChoice(h_12);
                                        }
                                      else
                                        {
                                          t = g_12;
                                          {
                                            ATerm j_12 = t;
                                            int k_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_12), p_4), term_l_12);
                                                ;
                                                LocalPopChoice(k_12);
                                              }
                                            else
                                              {
                                                t = j_12;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), p_4), term_s_11), n_4), term_n_12);
                                              }
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm o_12 = t;
                                      int p_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_35(n_4, p_4, q_4, t);
                                          ;
                                          LocalPopChoice(p_12);
                                        }
                                      else
                                        {
                                          t = o_12;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), p_4), term_s_11), n_4), term_n_12);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      n_4 = ATgetArgument(t, 0);
                                      p_4 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_4), term_r_12), n_4), term_q_12);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          n_4 = ATgetArgument(t, 0);
                                          p_4 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_m_11), n_4), term_s_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              n_4 = ATgetArgument(t, 0);
                                              p_4 = ATgetArgument(t, 1);
                                              t = n_4;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_t_12);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_u_12);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_v_12);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_w_12);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_x_12);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_y_12);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_z_12);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_a_13);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_b_13);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_c_13);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_d_13);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_e_13);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_f_13);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_g_13);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_h_13);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_i_13);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_j_13);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_k_13);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_l_13);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_m_13);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_n_13);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_o_13);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_p_13);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_q_13);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  o_4 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), p_4), term_m_11), o_4), term_r_13);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_s_13;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_t_13;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_u_13;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_v_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_CSEP_0)))
                                                                _fail(t);
                                                              t = term_w_13;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = bottomup_1_0(l_81, t);
    return(t);
  }
  t = SRTS_all(n_2, t);
  t = l_81(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_35 = NULL;
      t = term_j_10;
      t = get_config_0_0(t);
      x_35 = t;
      t = (ATerm) ATinsert(ATempty, x_35);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_36;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm z_13 = ATgetFirst((ATermList) t);
          ATerm a_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(o_2, flat_list_0_0, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm h_14 = t;
              int j_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
                  t = Cons_2_0(p_2, _id, t);
                  z_35 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_36 = ATgetFirst((ATermList) t);
                      {
                        ATerm l_14 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = z_35;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_14 = ATgetFirst((ATermList) t);
                      b_36 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, a_36, b_36);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(j_14);
                }
              else
                {
                  t = h_14;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm h_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_14 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_14) != AT_INT) || (ATgetInt((ATermInt) n_14) != 34)))
        _fail(t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(h_36), term_o_14), term_o_14);
  return(t);
}
ATerm j_6 (ATerm k_30, ATerm t)
{
  ATerm g_36 = NULL;
  t = k_30;
  t = at_suffix_1_0(t_2, t);
  g_36 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_36), term_p_14), term_p_14);
  return(t);
}
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm i_36 (ATerm t)
  {
    t = k_88(t);
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = Cons_2_0(_id, i_36, t);
        }
    }
    return(t);
  }
  t = i_36(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
      z_0 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_1 = ATgetFirst((ATermList) t);
          b_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_1;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
        _fail(t);
      t = z_0;
      t = j_6(b_1, t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_int(t, 32))
        {
          ATerm p_3 = NULL;
          t = term_w_14;
          p_3 = t;
          t = SSL_explode_string(p_3);
        }
      else
        {
          if(match_int(t, 35))
            {
              ATerm q_3 = NULL;
              t = term_x_14;
              q_3 = t;
              t = SSL_explode_string(q_3);
            }
          else
            {
              if(match_int(t, 36))
                {
                  ATerm r_3 = NULL;
                  t = term_y_14;
                  r_3 = t;
                  t = SSL_explode_string(r_3);
                }
              else
                {
                  if(match_int(t, 37))
                    {
                      ATerm s_3 = NULL;
                      t = term_z_14;
                      s_3 = t;
                      t = SSL_explode_string(s_3);
                    }
                  else
                    {
                      if(match_int(t, 38))
                        {
                          ATerm v_3 = NULL;
                          t = term_a_15;
                          v_3 = t;
                          t = SSL_explode_string(v_3);
                        }
                      else
                        {
                          if(match_int(t, 45))
                            {
                              ATerm w_3 = NULL;
                              t = term_b_15;
                              w_3 = t;
                              t = SSL_explode_string(w_3);
                            }
                          else
                            {
                              if(match_int(t, 60))
                                {
                                  ATerm x_3 = NULL;
                                  t = term_c_15;
                                  x_3 = t;
                                  t = SSL_explode_string(x_3);
                                }
                              else
                                {
                                  if(match_int(t, 62))
                                    {
                                      ATerm y_3 = NULL;
                                      t = term_d_15;
                                      y_3 = t;
                                      t = SSL_explode_string(y_3);
                                    }
                                  else
                                    {
                                      if(match_int(t, 92))
                                        {
                                          ATerm z_3 = NULL;
                                          t = term_f_15;
                                          z_3 = t;
                                          t = SSL_explode_string(z_3);
                                        }
                                      else
                                        {
                                          if(match_int(t, 94))
                                            {
                                              ATerm a_4 = NULL;
                                              t = term_g_15;
                                              a_4 = t;
                                              t = SSL_explode_string(a_4);
                                            }
                                          else
                                            {
                                              if(match_int(t, 95))
                                                {
                                                  ATerm b_4 = NULL;
                                                  t = term_h_15;
                                                  b_4 = t;
                                                  t = SSL_explode_string(b_4);
                                                }
                                              else
                                                {
                                                  if(match_int(t, 123))
                                                    {
                                                      ATerm c_4 = NULL;
                                                      t = term_i_15;
                                                      c_4 = t;
                                                      t = SSL_explode_string(c_4);
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 124))
                                                        {
                                                          ATerm d_4 = NULL;
                                                          t = term_j_15;
                                                          d_4 = t;
                                                          t = SSL_explode_string(d_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 125))
                                                            {
                                                              ATerm e_4 = NULL;
                                                              t = term_k_15;
                                                              e_4 = t;
                                                              t = SSL_explode_string(e_4);
                                                            }
                                                          else
                                                            {
                                                              ATerm f_4 = NULL;
                                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 126)))
                                                                _fail(t);
                                                              t = term_l_15;
                                                              f_4 = t;
                                                              t = SSL_explode_string(f_4);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
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
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
    }
  return(t);
}
ATerm latex_string_0_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_37 = NULL,f_37 = NULL;
      d_37 = t;
      t = term_o_15;
      f_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_15, d_37);
      t = y_6(f_37, d_37, t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm w_0 = NULL,x_0 = NULL;
        w_0 = t;
        t = SSL_explode_string(w_0);
        t = listtd_1_0(u_2, t);
        t = map_1_0(v_2, t);
        t = flat_list_0_0(t);
        x_0 = t;
        t = SSL_implode_string(x_0);
      }
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm a_39 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL;
        t = Cons_2_0(n_79, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_15 = ATgetFirst((ATermList) t);
            z_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_38;
        t = a_39(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
      }
    return(t);
  }
  t = a_39(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm b_39 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_87(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = Cons_2_0(_id, b_39, t);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_int(t, 9))
    {
      t = f_39;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = f_39;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  t = remove_trailing_1_0(w_2, t);
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              if(((d_39 != NULL) && (d_39 != t)))
                _fail(t);
              else
                d_39 = t;
              return(t);
            }
            t = Cons_2_0(a_3, b_3, t);
            return(t);
          }
          t = Cons_2_0(y_2, z_2, t);
          t = not_null(d_39);
          return(t);
        }
        t = at_suffix_1_0(x_2, t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
      }
    e_39 = t;
    t = SSL_implode_string(e_39);
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_15), f_40);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  j_39 = t;
  t = SSL_explode_string(j_39);
  t = reverse_acc_2_0(_id, c_3, t);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, (ATerm) ATempty);
  {
    ATerm g_40 (ATerm t)
    {
      ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
      if(match_cons(t, sym__2))
        {
          m_39 = ATgetArgument(t, 0);
          p_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_39 = NULL;
          t = p_39;
          t = LatexComment_0_0(t);
          t_39 = t;
          t = (ATerm) ATinsert(ATempty, t_39);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_39 = ATgetFirst((ATermList) t);
              o_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_39;
          if(match_int(t, 10))
            {
              ATerm y_15 = t;
              int z_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_39 = NULL,y_39 = NULL;
                  t = p_39;
                  t = LatexComment_0_0(t);
                  x_39 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_39, (ATerm) ATempty);
                  t = g_40(t);
                  y_39 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_39), x_39);
                  ;
                  LocalPopChoice(z_15);
                }
              else
                {
                  t = y_15;
                  t = (ATerm) ATmakeAppl(sym__2, o_39, (ATerm) ATinsert(CheckATermList(p_39), n_39));
                  t = g_40(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, o_39, (ATerm) ATinsert(CheckATermList(p_39), n_39));
              t = g_40(t);
            }
        }
      return(t);
    }
    t = g_40(t);
    t = remove_trailing_1_0(d_3, t);
    t = reverse_acc_2_0(_id, e_3, t);
    t = remove_trailing_1_0(f_3, t);
    t = map_1_0(g_3, t);
  }
  return(t);
}
ATerm FFID_2_0 (ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,r_0 = NULL,s_0 = NULL;
  m_40 = t;
  if(match_cons(t, sym_FFID_2))
    {
      i_40 = ATgetArgument(t, 0);
      j_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  h_40 = t;
  t = i_40;
  t = j_71(t);
  k_40 = t;
  t = j_40;
  t = k_71(t);
  l_40 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_FFID_2, k_40, l_40);
  r_0 = t;
  t = SSLsetAnnotations(r_0, h_40);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm a_16 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_16;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm i_4 = NULL,m_4 = NULL;
  t = filter_1_0(h_3, t);
  i_4 = t;
  t = term_b_16;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, i_4);
  t = k_6(m_4, i_4, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm p_40 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(i_3, t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = term_y_9;
    }
  p_40 = t;
  t = SSL_int_to_string(p_40);
  return(t);
}
ATerm k_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = w_31;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          ATerm j_3 (ATerm t)
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_16);
              }
            else
              {
                t = g_16;
                {
                  ATerm q_40 = NULL;
                  t = Cons_2_0(_id, j_3, t);
                  q_40 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_40), v_31);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, j_3, t);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
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
            ATerm k_3 (ATerm t)
            {
              t = filter_1_0(h_94, t);
              return(t);
            }
            t = Cons_2_0(h_94, k_3, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm x_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_16 = ATgetFirst((ATermList) t);
                  x_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_40;
              t = filter_1_0(h_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(l_3, t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      t = term_p_16;
    }
  z_40 = t;
  t = SSL_int_to_string(z_40);
  return(t);
}
ATerm SOpt_2_0 (ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,v_0 = NULL,y_0 = NULL;
  f_41 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  a_41 = t;
  t = b_41;
  t = f_72(t);
  d_41 = t;
  t = c_41;
  t = g_72(t);
  e_41 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, d_41, e_41);
  v_0 = t;
  t = SSLsetAnnotations(v_0, a_41);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm i_41 = NULL;
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      if(((i_41 != NULL) && (i_41 != t)))
        _fail(t);
      else
        i_41 = t;
      return(t);
    }
    t = SOpt_2_0(i_79, n_3, t);
    return(t);
  }
  t = fetch_1_0(m_3, t);
  t = SSL_string_to_int(not_null(i_41));
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_3, t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      t = term_p_16;
    }
  j_41 = t;
  t = SSL_int_to_string(j_41);
  return(t);
}
ATerm C_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,c_1 = NULL,d_1 = NULL;
  p_41 = t;
  if(match_cons(t, sym_C_2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  k_41 = t;
  t = l_41;
  t = b_71(t);
  n_41 = t;
  t = m_41;
  t = c_71(t);
  o_41 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, n_41, o_41);
  c_1 = t;
  t = SSLsetAnnotations(c_1, k_41);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = C_2_0(_id, _id, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = C_2_0(_id, _id, t);
  return(t);
}
ATerm l_6 (ATerm i_27, ATerm t)
{
  t = i_27;
  {
    ATerm d_42 (ATerm t)
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, t_3, t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                {
                  ATerm w_16 = t;
                  int x_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_4 (ATerm t)
                      {
                        t = Cons_2_0(_id, d_42, t);
                        return(t);
                      }
                      t = Cons_2_0(u_3, g_4, t);
                      ;
                      LocalPopChoice(x_16);
                    }
                  else
                    {
                      t = w_16;
                      {
                        ATerm y_16 = t;
                        int z_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_4 (ATerm t)
                            {
                              t = Cons_2_0(s_4, d_42, t);
                              return(t);
                            }
                            t = Cons_2_0(_id, r_4, t);
                            ;
                            LocalPopChoice(z_16);
                          }
                        else
                          {
                            t = y_16;
                            {
                              ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  y_41 = ATgetFirst((ATermList) t);
                                  z_41 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = z_41;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  a_42 = ATgetFirst((ATermList) t);
                                  b_42 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
                              t = d_42(t);
                              c_42 = t;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(c_42), term_a_17), y_41);
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
    t = d_42(t);
  }
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  if(match_cons(t, sym_LBL_2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
      {
        ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
        t = q_42;
        if(match_cons(t, sym_R_2))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            m_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(m_5, t);
        t = q_42;
        if(match_cons(t, sym_R_2))
          {
            ATerm c_17 = ATgetArgument(t, 0);
            n_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(n_5, t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, p_42, l_5);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm d_17 = ATgetArgument(t, 0);
          q_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_42;
      t = l_6(q_42, t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm v_42 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_4, t);
        t = c_88(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = Cons_2_0(_id, v_42, t);
      }
    return(t);
  }
  t = v_42(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm w_42 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_42, t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_87(t);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm z_42 = NULL,a_43 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_42 = ATgetFirst((ATermList) t);
            a_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_42;
        {
          ATerm u_4 (ATerm t)
          {
            t = a_43;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_4, t);
        }
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm y_43 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
        t = y_43;
        t = Hspace_0_0(t);
        e_6 = t;
        t = SSL_string_to_int(e_6);
        b_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_6, term_b_16);
        t = copy_0_0(t);
        c_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_6), term_k_17);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          y_43 = ATgetArgument(t, 0);
          {
            ATerm i_6 = NULL,o_6 = NULL,x_6 = NULL;
            t = y_43;
            t = Hspace_0_0(t);
            x_6 = t;
            t = SSL_string_to_int(x_6);
            i_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_6, term_b_16);
            t = copy_0_0(t);
            o_6 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_6), term_l_17);
          }
        }
      else
        {
          ATerm f_7 = NULL,h_7 = NULL,l_7 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              y_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_43;
          t = Hspace_0_0(t);
          l_7 = t;
          t = SSL_string_to_int(l_7);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_7, term_b_16);
          t = copy_0_0(t);
          h_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, h_7), term_m_17);
        }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_17);
  return(t);
}
ATerm m_6 (ATerm e_27, ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  t = e_27;
  t = map_1_0(v_4, t);
  o_7 = t;
  t = (ATerm) ATinsert(ATempty, term_a_17);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_a_17), o_7);
  t = k_6(p_7, o_7, t);
  t = concat_0_0(t);
  t = at_last_1_0(w_4, t);
  return(t);
}
ATerm n_6 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_47, m_47);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = SSL_subtr(l_47, m_47);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t)
{
  ATerm c_44 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_81(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = c_81(t);
        t = c_44(t);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
ATerm for_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t)
{
  t = e_81(t);
  t = while_not_2_0(f_81, g_81, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_44, e_44, (ATerm) ATempty);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm f_44 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) != AT_INT) || (ATgetInt((ATermInt) s_17) != 0)))
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
      }
      f_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_44;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  if(match_cons(t, sym__3))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
      i_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_44, term_y_9);
  t = geq_0_0(t);
  t = term_y_9;
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_44, term_y_9);
  t = n_6(g_44, k_44, t);
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_44, h_44, (ATerm) ATinsert(CheckATermList(i_44), h_44));
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = _2_0(a_5, _id, t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm R_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,f_1 = NULL,g_1 = NULL;
  q_44 = t;
  if(match_cons(t, sym_R_2))
    {
      m_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_44);
  l_44 = t;
  t = m_44;
  t = r_71(t);
  o_44 = t;
  t = n_44;
  t = s_71(t);
  p_44 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_R_2, o_44, p_44);
  f_1 = t;
  t = SSLsetAnnotations(f_1, l_44);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm w_17 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, e_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_44, (ATerm) ATempty);
  {
    ATerm b_46 (ATerm t)
    {
      ATerm z_44 = NULL,a_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
      if(match_cons(t, sym__2))
        {
          e_45 = ATgetArgument(t, 0);
          h_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_45;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm m_45 = NULL;
          t = h_45;
          t = reverse_acc_2_0(_id, b_5, t);
          m_45 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, m_45));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_45 = ATgetFirst((ATermList) t);
              g_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_45;
          if(match_cons(t, sym_R_2))
            {
              z_44 = ATgetArgument(t, 0);
              a_45 = ATgetArgument(t, 1);
              {
                ATerm x_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_45 = NULL,s_45 = NULL;
                    t = h_45;
                    t = reverse_acc_2_0(_id, c_5, t);
                    r_45 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_45, (ATerm) ATempty);
                    t = b_46(t);
                    s_45 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(s_45), (ATerm) ATmakeAppl(sym_R_2, z_44, a_45)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, r_45));
                    ;
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = x_17;
                    t = (ATerm) ATmakeAppl(sym__2, g_45, (ATerm) ATinsert(CheckATermList(h_45), f_45));
                    t = b_46(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, g_45, (ATerm) ATinsert(CheckATermList(h_45), f_45));
              t = b_46(t);
            }
        }
      return(t);
    }
    t = b_46(t);
    t = filter_1_0(d_5, t);
  }
  return(t);
}
ATerm j_49 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm t)
{
  t = t_47;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_KW_0)))
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
              if(!(match_cons(t, sym_VAR_0)))
                _fail(t);
              ;
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
                    if(!(match_cons(t, sym_NUM_0)))
                      _fail(t);
                    ;
                    LocalPopChoice(e_18);
                  }
                else
                  {
                    t = d_18;
                    if(!(match_cons(t, sym_MATH_0)))
                      _fail(t);
                  }
              }
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, t_47, u_47);
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_18 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_49 = NULL;
  if(match_cons(t, sym_S_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_49;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
  d_48 = t;
  if(match_cons(t, sym_REF_2))
    {
      e_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, e_48, c_48);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          e_48 = ATgetArgument(t, 0);
          c_48 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, e_48, c_48);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              e_48 = ATgetArgument(t, 0);
              c_48 = ATgetArgument(t, 1);
              {
                ATerm i_9 = NULL;
                t = d_48;
                {
                  ATerm h_18 = t;
                  int i_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(e_48);
                      i_9 = t;
                      ;
                      LocalPopChoice(i_18);
                    }
                  else
                    {
                      t = h_18;
                      {
                        ATerm j_18 = t;
                        int k_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_9 = NULL;
                            t = SSL_explode_string(e_48);
                            t = Cons_2_0(f_5, _id, t);
                            t = (ATerm) ATinsert(ATempty, term_l_18);
                            j_9 = t;
                            t = SSL_implode_string(j_9);
                            i_9 = t;
                            ;
                            LocalPopChoice(k_18);
                          }
                        else
                          {
                            t = j_18;
                            t = e_48;
                            i_9 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, i_9, c_48);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  e_48 = ATgetArgument(t, 0);
                  c_48 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, e_48, c_48);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      e_48 = ATgetArgument(t, 0);
                      c_48 = ATgetArgument(t, 1);
                      y_47 = ATgetArgument(t, 2);
                      {
                        ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,f_10 = NULL,n_10 = NULL;
                        t = y_47;
                        t = construct_rows_0_0(t);
                        u_9 = t;
                        t = c_48;
                        t = Vspace_0_0(t);
                        b_10 = t;
                        t = SSL_string_to_int(b_10);
                        v_9 = t;
                        t = (ATerm) ATmakeAppl(sym__2, v_9, term_n_17);
                        t = copy_0_0(t);
                        w_9 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_9, (ATerm) ATinsert(ATinsert(ATempty, term_x_15), term_n_17));
                        t = conc_0_0(t);
                        x_9 = t;
                        t = e_48;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            f_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_6(f_10, t);
                        z_9 = t;
                        t = u_9;
                        t = map_1_0(MkRows_0_0, t);
                        n_10 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_9, n_10);
                        t = k_6(x_9, n_10, t);
                        a_10 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, z_9, a_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          e_48 = ATgetArgument(t, 0);
                          c_48 = ATgetArgument(t, 1);
                          {
                            ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,q_10 = NULL,r_10 = NULL;
                            t = e_48;
                            t = Hspace_0_0(t);
                            o_48 = t;
                            t = e_48;
                            t = Vspace_0_0(t);
                            p_48 = t;
                            t = e_48;
                            t = Ispace_0_0(t);
                            q_48 = t;
                            t = c_48;
                            t = filter_1_0(g_5, t);
                            q_10 = t;
                            t = term_m_18;
                            r_10 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_m_18, q_10);
                            t = k_6(r_10, q_10, t);
                            r_48 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, o_48, p_48, q_48, r_48);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              e_48 = ATgetArgument(t, 0);
                              c_48 = ATgetArgument(t, 1);
                              {
                                ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,u_10 = NULL,v_10 = NULL;
                                t = e_48;
                                t = Vspace_0_0(t);
                                u_48 = t;
                                t = e_48;
                                t = Ispace_0_0(t);
                                v_48 = t;
                                t = c_48;
                                t = filter_1_0(h_5, t);
                                u_10 = t;
                                t = term_n_18;
                                v_10 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_n_18, u_10);
                                t = k_6(v_10, u_10, t);
                                w_48 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, u_48, v_48, w_48);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  e_48 = ATgetArgument(t, 0);
                                  c_48 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_48 = NULL,a_49 = NULL;
                                    t = e_48;
                                    t = Hspace_0_0(t);
                                    z_48 = t;
                                    t = c_48;
                                    t = toh_0_0(t);
                                    a_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, z_48, a_49);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      e_48 = ATgetArgument(t, 0);
                                      c_48 = ATgetArgument(t, 1);
                                      t = e_48;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          b_48 = ATgetArgument(t, 0);
                                          t = b_48;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              z_47 = ATgetFirst((ATermList) t);
                                              a_48 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm o_18 = t;
                                                int p_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm j_11 = NULL,n_11 = NULL;
                                                    t = z_47;
                                                    {
                                                      ATerm q_18 = t;
                                                      int r_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_5 (ATerm t)
                                                          {
                                                            if(((n_11 != NULL) && (n_11 != t)))
                                                              _fail(t);
                                                            else
                                                              n_11 = t;
                                                            return(t);
                                                          }
                                                          t = FFID_2_0(i_5, j_5, t);
                                                          ;
                                                          LocalPopChoice(r_18);
                                                        }
                                                      else
                                                        {
                                                          t = q_18;
                                                          {
                                                            ATerm s_18 = t;
                                                            int t_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_5 (ATerm t)
                                                                {
                                                                  if(((n_11 != NULL) && (n_11 != t)))
                                                                    _fail(t);
                                                                  else
                                                                    n_11 = t;
                                                                  return(t);
                                                                }
                                                                t = FFID_2_0(k_5, o_5, t);
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
                                                                      ATerm q_5 (ATerm t)
                                                                      {
                                                                        if(((n_11 != NULL) && (n_11 != t)))
                                                                          _fail(t);
                                                                        else
                                                                          n_11 = t;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2_0(p_5, q_5, t);
                                                                      ;
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
                                                                            ATerm s_5 (ATerm t)
                                                                            {
                                                                              if(((n_11 != NULL) && (n_11 != t)))
                                                                                _fail(t);
                                                                              else
                                                                                n_11 = t;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2_0(r_5, s_5, t);
                                                                            ;
                                                                            LocalPopChoice(x_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = w_18;
                                                                            {
                                                                              ATerm u_5 (ATerm t)
                                                                              {
                                                                                if(((j_11 != NULL) && (j_11 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  j_11 = t;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2_0(t_5, u_5, t);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(j_11));
                                                                              n_11 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(n_11), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, a_48), c_48));
                                                    }
                                                    ;
                                                    LocalPopChoice(p_18);
                                                  }
                                                else
                                                  {
                                                    t = o_18;
                                                    t = j_49(e_48, c_48, d_48, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  ATerm y_18 = t;
                                                  int z_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = c_48;
                                                      ;
                                                      LocalPopChoice(z_18);
                                                    }
                                                  else
                                                    {
                                                      t = y_18;
                                                      t = j_49(e_48, c_48, d_48, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = j_49(e_48, c_48, d_48, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = j_49(e_48, c_48, d_48, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          e_48 = ATgetArgument(t, 0);
                                          c_48 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_49 = NULL;
                                            t = e_48;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = c_48;
                                            t = map_1_0(v_5, t);
                                            d_49 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, d_49);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              e_48 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_48;
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
ATerm topdown_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  t = k_81(t);
  {
    ATerm w_5 (ATerm t)
    {
      t = topdown_1_0(k_81, t);
      return(t);
    }
    t = SRTS_all(w_5, t);
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_49 = ATgetFirst((ATermList) t);
      {
        ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
          {
            n_49 = ATgetFirst((ATermList) a_19);
            {
              ATerm b_19 = (ATerm) ATgetNext((ATermList) a_19);
              if(((ATgetType(b_19) != AT_LIST) || !(ATisEmpty(b_19))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_o_15;
  o_49 = t;
  t = SSL_table_put(o_49, m_49, n_49);
  t = (ATerm) ATmakeAppl(sym__3, term_o_15, m_49, n_49);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL;
  k_49 = t;
  t = term_o_15;
  l_49 = t;
  t = SSL_table_create(l_49);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_10;
        t = get_config_0_0(t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(x_5, t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
      }
    t = k_49;
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(z_5, t);
  p_49 = t;
  t = BOXENV_args_0_0(t);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, q_49, p_49);
  t = bottomup_1_0(a_6, t);
  t = collect_om_2_0(d_6, conc_0_0, t);
  r_49 = t;
  t = SSL_concat_strings(r_49);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  t = SSL_is_string(s_49);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  t = _2_0(_id, y_5, t);
  return(t);
}
ATerm q_6 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm t_49 = NULL;
  t = SSL_fputc(f_50, g_50);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_49);
  return(t);
}
ATerm r_6 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_write_term_to_stream_text(t_53, u_53);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_49);
  return(t);
}
ATerm t_6 (ATerm s_99 (ATerm), ATerm t_491, ATerm x_53, ATerm t)
{
  ATerm v_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_491, term_i_19);
  t = open_stream_0_0(t);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_49, x_53);
  t = s_99(t);
  t = fclose_0_0(t);
  t = x_53;
  return(t);
}
ATerm s_6 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm w_49 = NULL;
  t = SSL_write_term_to_stream_baf(p_53, q_53);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_49);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = fetch_1_0(d_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(e_7, a_50, b_50, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(match_cons(j_19, sym_Stream_1))
        {
          c_50 = ATgetArgument(j_19, 0);
        }
      else
        _fail(t);
      d_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(c_50, d_50, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm e_50 = NULL,l_50 = NULL;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(i_7, e_50, l_50, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(match_cons(k_19, sym_Stream_1))
        {
          n_50 = ATgetArgument(k_19, 0);
        }
      else
        _fail(t);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(n_50, o_50, t);
  m_50 = t;
  t = term_l_19;
  p_50 = t;
  t = m_50;
  if(match_cons(t, sym_Stream_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, m_50);
  t = q_6(p_50, q_50, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_49 != NULL) && (y_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_6, t);
          ;
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          t = term_o_19;
          if(((y_49 != NULL) && (y_49 != t)))
            _fail(t);
          else
            y_49 = t;
        }
      return(t);
    }
    t = _2_0(f_6, _id, t);
    t = x_49;
    {
      ATerm h_6 (ATerm t)
      {
        ATerm z_49 = NULL;
        z_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), z_49);
        return(t);
      }
      t = _2_0(_id, h_6, t);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_7, c_7, t);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            t = _2_0(_id, g_7, t);
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
ATerm apply_strategy_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  r_50 = t;
  t = dtime_0_0(t);
  t = r_50;
  t = u_102(t);
  s_50 = t;
  t = dtime_0_0(t);
  t_50 = t;
  t = s_50;
  if(match_cons(t, sym__2))
    {
      u_50 = ATgetArgument(t, 0);
      v_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_50), (ATerm) ATmakeAppl(sym_Runtime_1, t_50)), v_50);
  return(t);
}
ATerm j_51 (ATerm d_51, ATerm t)
{
  t = SSL_fclose(d_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_51 = ATgetArgument(t, 0);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_51);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = j_51(h_51, t);
          }
      }
    }
  else
    {
      t = j_51(h_51, t);
    }
  return(t);
}
ATerm u_6 (ATerm v_53, ATerm t)
{
  t = SSL_read_term_from_stream(v_53);
  return(t);
}
ATerm v_6 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm k_51 = NULL;
  t = SSL_fopen(h_50, i_50);
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_51);
  return(t);
}
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,h_1 = NULL,i_1 = NULL;
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  l_51 = t;
  t = m_51;
  t = c_66(t);
  o_51 = t;
  t = n_51;
  t = d_66(t);
  p_51 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
  h_1 = t;
  t = SSLsetAnnotations(h_1, l_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_stdin_stream();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_stdout_stream();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_stderr_stream();
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_51);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm f_52 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_52;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  t = SSL_is_string(i_52);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      ATerm u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_52 = NULL,i_12 = NULL;
        c_52 = t;
        t = SSL_explode_term(c_52);
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
              if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
                {
                  i_12 = ATgetFirst((ATermList) y_19);
                  {
                    ATerm z_19 = (ATerm) ATgetNext((ATermList) y_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_52 = NULL,e_52 = NULL;
              t = _2_0(j_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_52 = ATgetArgument(t, 0);
                  e_52 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_6(d_52, e_52, t);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm g_52 = NULL,h_52 = NULL;
                t = _2_0(k_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_52 = ATgetArgument(t, 0);
                    h_52 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_6(g_52, h_52, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_52 = NULL;
      n_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_52, term_f_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = debug_1_0(m_7, t);
      _fail(t);
    }
  k_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(m_52, t);
  l_52 = t;
  t = k_52;
  t = fclose_0_0(t);
  t = l_52;
  return(t);
}
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm p_52 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_87, _id, t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2_0(_id, p_52, t);
      }
    return(t);
  }
  t = p_52(t);
  return(t);
}
ATerm p_6 (ATerm v_44, ATerm w_44, ATerm t)
{
  t = SSL_strcat(v_44, w_44);
  return(t);
}
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
  q_52 = t;
  t = q_99(t);
  r_52 = t;
  t = term_r_9;
  s_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_52), r_52);
  t_52 = t;
  t = SSL_printnl(s_52, t_52);
  t = q_52;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_52 = NULL;
      z_52 = t;
      t = SSL_is_string(z_52);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_7, t);
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
              d_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_53 = ATgetArgument(t, 0);
                  t = e_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_53 = ATgetArgument(t, 0);
                      t = e_53;
                      {
                        ATerm p_20 = t;
                        int q_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_20);
                          }
                        else
                          {
                            t = p_20;
                            t = debug_1_0(q_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_53 = NULL,k_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_53 = ATgetArgument(t, 0);
                          f_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_53;
                      t = eval_config_0_0(t);
                      j_53 = t;
                      t = f_53;
                      t = eval_config_0_0(t);
                      k_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
                      t = p_6(j_53, k_53, t);
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
  ATerm n_53 = NULL,o_53 = NULL;
  n_53 = t;
  t = term_r_20;
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, n_53);
  t = y_6(o_53, n_53, t);
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL,s_53 = NULL;
        t = eval_config_0_0(t);
        r_53 = t;
        t = term_r_20;
        s_53 = t;
        t = SSL_table_put(s_53, n_53, r_53);
        t = r_53;
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_53 = NULL,a_54 = NULL;
      y_53 = t;
      t = term_w_20;
      t = get_config_0_0(t);
      a_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_54, term_x_20);
      t = geq_0_0(t);
      t = y_53;
      t = d_101(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  if(match_string(t, "-k"))
    {
      t = c_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_54;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  t = SSL_string_to_int(d_54);
  e_54 = t;
  t = term_y_20;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, e_54);
  t = b_7(f_54, e_54, t);
  t = d_54;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_7, s_7, t_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm h_54 = NULL;
  h_54 = t;
  if(match_string(t, "-S"))
    {
      t = h_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_54;
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  t = term_w_20;
  i_54 = t;
  t = term_p_16;
  j_54 = t;
  t = term_a_21;
  t = b_7(i_54, j_54, t);
  t = term_b_21;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  t = SSL_string_to_int(k_54);
  l_54 = t;
  t = term_w_20;
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, l_54);
  t = b_7(m_54, l_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_54);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  t = term_e_21;
  n_54 = t;
  t = term_q_9;
  o_54 = t;
  t = term_f_21;
  t = b_7(n_54, o_54, t);
  t = term_g_21;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_7, v_7, w_7, t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_7, y_7, z_7, t);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = Option_3_0(a_8, b_8, c_8, t);
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm p_54 = NULL;
  t = term_r_20;
  p_54 = t;
  t = SSL_table_put(p_54, w_54, x_54);
  t = (ATerm) ATmakeAppl(sym__3, term_r_20, w_54, x_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_54 = NULL,v_54 = NULL,y_54 = NULL;
      t = term_q_9;
      t = d_0(t);
      u_54 = t;
      t = term_m_21;
      v_54 = t;
      t = term_n_21;
      y_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_21, term_n_21, u_54);
      t = z_6(v_54, y_54, u_54, t);
      _fail(t);
    }
  else
    {
      ATerm b_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_54 = ATgetFirst((ATermList) t);
          t_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_54;
      t = a_0(t);
      t = term_q_9;
      t = c_0(t);
      b_55 = t;
      t = (ATerm) ATinsert(CheckATermList(t_54), b_55);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm d_55 = NULL;
  d_55 = t;
  if(match_string(t, "-o"))
    {
      t = d_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_55;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm e_55 = NULL,k_55 = NULL;
  e_55 = t;
  t = term_o_21;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, e_55);
  t = b_7(k_55, e_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_55);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_8, e_8, f_8, t);
  return(t);
}
ATerm z_6 (ATerm u_59, ATerm v_59, ATerm t_59, ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_21 = ATgetArgument(t, 0);
            ATerm t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
        t = y_6(u_59, v_59, t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATempty;
      }
    n_55 = t;
    t = (ATerm) ATinsert(CheckATermList(n_55), t_59);
    o_55 = t;
    t = SSL_table_put(u_59, v_59, o_55);
    t = m_55;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
      t = term_q_9;
      t = j_0(t);
      z_55 = t;
      t = term_m_21;
      a_56 = t;
      t = term_n_21;
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_21, term_n_21, z_55);
      t = z_6(a_56, b_56, z_55, t);
      _fail(t);
    }
  else
    {
      ATerm f_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_55 = ATgetFirst((ATermList) t);
          w_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_55 = ATgetFirst((ATermList) t);
          y_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_55;
      t = h_0(t);
      t = x_55;
      t = i_0(t);
      f_56 = t;
      t = (ATerm) ATinsert(CheckATermList(y_55), f_56);
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm h_56 = NULL;
  h_56 = t;
  if(match_string(t, "-i"))
    {
      t = h_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_56;
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  i_56 = t;
  t = term_u_21;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, i_56);
  t = b_7(j_56, i_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_56);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_8, h_8, i_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,r_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_9;
  t = whoami_0_0(t);
  k_56 = t;
  t = term_r_9;
  l_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_21), k_56);
  m_56 = t;
  t = SSL_printnl(l_56, m_56);
  t = term_y_9;
  r_56 = t;
  t = SSL_exit(r_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_47, g_47);
      ;
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = SSL_addr(f_47, g_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_93(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm u_56 = NULL,v_56 = NULL,y_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_56 = ATgetFirst((ATermList) t);
            v_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_56;
        t = foldr_2_0(e_93, f_93, t);
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_56, y_56);
        t = f_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(i_14, k_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_57 = NULL,b_14 = NULL,c_14 = NULL;
  t = times_0_0(t);
  b_14 = t;
  t = SSL_explode_term(b_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14;
  t = foldr_2_0(j_8, k_8, t);
  b_57 = t;
  t = SSL_TicksToSeconds(b_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  if(match_cons(t, sym__2))
    {
      n_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_57;
        if((n_57 != t))
          {
            _fail(t);
          }
        t = m_57;
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATmakeAppl(sym__2, n_57, o_57);
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_57, o_57);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(n_57, o_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_57, o_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_57 = NULL,t_57 = NULL;
      r_57 = t;
      t = term_w_20;
      t = get_config_0_0(t);
      t_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_57, term_y_9);
      t = geq_0_0(t);
      t = r_57;
      t = c_101(t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  t = run_time_0_0(t);
  v_57 = t;
  t = term_q_9;
  t = whoami_0_0(t);
  w_57 = t;
  t = term_r_9;
  x_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), v_57), term_j_22), w_57);
  y_57 = t;
  t = SSL_printnl(x_57, y_57);
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), v_57), term_j_22), w_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  z_57 = t;
  t = SSL_exit(z_57);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = fetch_1_0(m_8, t);
    }
  t = s_103(t);
  return(t);
}
ATerm map_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm a_58 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = Cons_2_0(b_87, a_58, t);
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_58 = ATgetFirst((ATermList) t);
      d_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_58 = NULL,i_58 = NULL;
        t = d_58;
        t = g_0(t);
        h_58 = t;
        t = c_58;
        t = e_0(t);
        i_58 = t;
        t = d_58;
        {
          ATerm n_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_58), i_58);
            return(t);
          }
          t = reverse_acc_2_0(e_0, n_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_9;
      t = g_0(t);
    }
  return(t);
}
ATerm y_6 (ATerm l_61, ATerm m_61, ATerm t)
{
  t = SSL_table_get(l_61, m_61);
  return(t);
}
ATerm Program_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,j_1 = NULL,k_1 = NULL;
  m_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_58);
  j_58 = t;
  t = k_58;
  t = w_78(t);
  l_58 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_58);
  j_1 = t;
  t = SSLsetAnnotations(j_1, j_58);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_58), term_u_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = fetch_1_0(o_8, t);
    }
  t = term_x_22;
  t = echo_0_0(t);
  t = term_m_21;
  p_58 = t;
  t = term_n_21;
  q_58 = t;
  t = term_y_22;
  t = y_6(p_58, q_58, t);
  t = reverse_acc_2_0(_id, p_8, t);
  t = map_1_0(q_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,m_1 = NULL,n_1 = NULL;
  v_58 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  s_58 = t;
  t = t_58;
  t = x_78(t);
  u_58 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_58);
  m_1 = t;
  t = SSLsetAnnotations(m_1, s_58);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_23 = ATgetFirst((ATermList) t);
                ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_58;
          }
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, z_58);
      }
    a_59 = t;
    t = term_o_19;
    b_59 = t;
    t = SSL_printnl(b_59, a_59);
    t = z_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  t = term_d_23;
  k_59 = t;
  t = term_q_9;
  l_59 = t;
  t = term_e_23;
  t = b_7(k_59, l_59, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  t = term_d_23;
  m_59 = t;
  t = term_q_9;
  n_59 = t;
  t = term_e_23;
  t = b_7(m_59, n_59, t);
  t = term_g_23;
  o_59 = t;
  t = term_q_9;
  p_59 = t;
  t = term_h_23;
  t = b_7(o_59, p_59, t);
  t = term_i_23;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_8, s_8, t_8, t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = Option_3_0(u_8, v_8, w_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,s_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,p_1 = NULL,q_1 = NULL;
  z_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_59 = ATgetFirst((ATermList) t);
      w_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_59);
  q_59 = t;
  t = s_59;
  t = r_70(t);
  x_59 = t;
  t = w_59;
  t = s_70(t);
  y_59 = t;
  q_1 = t;
  t = (ATerm) ATinsert(CheckATermList(y_59), x_59);
  p_1 = t;
  t = SSLsetAnnotations(p_1, q_59);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  e_60 = t;
  t = term_x_21;
  f_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, e_60);
  t = b_7(f_60, e_60, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_23;
        t = v_105(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
      }
    t = d_60;
    {
      ATerm y_8 (ATerm t)
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_23);
              }
            else
              {
                t = r_23;
                t = v_105(t);
                t = Cons_2_0(_id, y_8, t);
              }
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm h_60 = NULL,i_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_60 = ATgetFirst((ATermList) t);
                  i_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_60), (ATerm) ATmakeAppl(sym_Undefined_1, h_60));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_8, y_8, t);
    }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  if(match_string(t, "--help"))
    {
      t = w_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_60;
        }
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  t = term_r_22;
  x_60 = t;
  t = term_q_9;
  y_60 = t;
  t = term_t_23;
  t = b_7(x_60, y_60, t);
  t = term_u_23;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm d_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  p_60 = t;
  t = term_m_21;
  s_60 = t;
  t = term_n_21;
  t_60 = t;
  t = (ATerm) ATempty;
  u_60 = t;
  t = SSL_table_put(s_60, t_60, u_60);
  t = p_60;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_105(t);
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_9, b_9, c_9, t);
                ;
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_8, t);
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_61 = NULL;
          f_61 = t;
          {
            ATerm c_24 = t;
            int d_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_15 = NULL;
                t = f_61;
                {
                  ATerm e_24 = t;
                  int f_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_24);
                    }
                  else
                    {
                      t = e_24;
                      t = fetch_1_0(d_9, t);
                    }
                  t = f_61;
                  t = default_system_usage_0_0(t);
                  t = term_p_16;
                  e_15 = t;
                  t = SSL_exit(e_15);
                }
                ;
                LocalPopChoice(d_24);
              }
            else
              {
                t = c_24;
                {
                  ATerm r_15 = NULL;
                  t = term_d_23;
                  t = get_config_0_0(t);
                  t = f_61;
                  t = default_system_about_0_0(t);
                  t = term_p_16;
                  r_15 = t;
                  t = SSL_exit(r_15);
                }
              }
          }
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
                ATerm e_9 (ATerm t)
                {
                  ATerm f_9 (ATerm t)
                  {
                    if(((q_60 != NULL) && (q_60 != t)))
                      _fail(t);
                    else
                      q_60 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_9, t);
                  return(t);
                }
                t = fetch_1_0(e_9, t);
                t = term_r_9;
                g_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_60)), term_i_24);
                h_61 = t;
                t = SSL_printnl(g_61, h_61);
                t = (ATerm) ATmakeAppl(sym__2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_60)), term_i_24));
                t = default_system_usage_0_0(t);
                t = term_y_9;
                i_61 = t;
                t = SSL_exit(i_61);
                ;
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
              }
          }
        }
      r_60 = t;
      t = term_m_21;
      v_60 = t;
      t = SSL_table_destroy(v_60);
      t = r_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  t = parse_options_1_0(u_103, t);
  n_61 = t;
  t = term_j_24;
  o_61 = t;
  t = SSL_table_create(o_61);
  t = term_j_24;
  p_61 = t;
  t = term_k_24;
  q_61 = t;
  t = SSL_table_put(p_61, q_61, n_61);
  t = n_61;
  t = w_103(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_103, t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = if_verbose2_1_0(o_9, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  t = term_c_10;
  r_61 = t;
  t = term_q_9;
  s_61 = t;
  t = term_d_10;
  t = b_7(r_61, s_61, t);
  t = term_e_10;
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  t_61 = t;
  t = term_x_21;
  t = get_config_0_0(t);
  u_61 = t;
  t = term_r_9;
  v_61 = t;
  t = (ATerm) ATinsert(ATempty, u_61);
  w_61 = t;
  t = SSL_printnl(v_61, w_61);
  t = t_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_103(t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              {
                ATerm t_24 = t;
                int u_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_24);
                  }
                else
                  {
                    t = t_24;
                    {
                      ATerm v_24 = t;
                      int w_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_9, m_9, n_9, t);
                          ;
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_24);
                              }
                            else
                              {
                                t = x_24;
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
  ATerm k_9 (ATerm t)
  {
    ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
    x_61 = t;
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_9, t);
          ;
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          t = term_b_25;
          y_61 = t;
        }
      t = not_null(y_61);
      t = ReadFromFile_0_0(t);
      z_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_61, z_61);
      t = apply_strategy_1_0(d_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_9, f_103, h_9, k_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

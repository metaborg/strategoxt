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
ATerm term_p_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
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
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_o_6);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width w        Use page width w", 0, ATtrue));
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
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
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
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_l_15);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_15);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_o_6);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_r_20);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_o_6);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_o_6);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_o_6);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm Abox2latex_options_0_0 (ATerm);
ATerm u_1 (ATerm h_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm collect_om_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm w_40 (ATerm m_2, ATerm n_2, ATerm o_2, ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm j_6 (ATerm k_30, ATerm);
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm e_2 (ATerm);
ATerm LatexComment_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm make_latex_comment_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm toh_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm k_6 (ATerm v_31, ATerm w_31, ATerm);
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_value_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm c_54 (ATerm t_51, ATerm u_51, ATerm v_51, ATerm);
ATerm x_2 (ATerm);
ATerm l_6 (ATerm i_27, ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm m_6 (ATerm e_27, ATerm);
ATerm n_6 (ATerm l_47, ATerm m_47, ATerm);
ATerm while_not_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm i_65 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm q_6 (ATerm f_50, ATerm g_50, ATerm);
ATerm r_6 (ATerm t_53, ATerm u_53, ATerm);
ATerm t_6 (ATerm s_99 (ATerm), ATerm t_491, ATerm x_53, ATerm);
ATerm s_6 (ATerm p_53, ATerm q_53, ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm y_68 (ATerm s_68, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm v_53, ATerm);
ATerm v_6 (ATerm h_50, ATerm i_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_70 (ATerm i_69, ATerm);
ATerm k_70 (ATerm m_69, ATerm n_69, ATerm o_69, ATerm);
ATerm l_70 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm p_6 (ATerm v_44, ATerm w_44, ATerm);
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_7 (ATerm w_54, ATerm x_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_6 (ATerm u_59, ATerm v_59, ATerm t_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_6 (ATerm f_47, ATerm g_47, ATerm);
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm need_help_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_6 (ATerm l_61, ATerm m_61, ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_105 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm parse_options_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
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
  t = term_o_6;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_a_7;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), l_0), term_c_7);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_f_7;
  m_0 = t;
  t = SSL_exit(m_0);
  t = k_0;
  return(t);
}
ATerm x_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  t = term_g_7;
  p_0 = t;
  t = term_o_6;
  q_0 = t;
  t = term_i_7;
  t = b_7(p_0, q_0, t);
  t = term_j_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL;
  s_0 = t;
  t = term_l_7;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, s_0);
  t = b_7(t_0, s_0, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm g_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-w", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm u_0 = NULL,z_0 = NULL;
  u_0 = t;
  t = term_o_7;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, u_0);
  t = b_7(z_0, u_0, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_p_7;
  return(t);
}
ATerm Abox2latex_options_0_0 (ATerm t)
{
  ATerm q_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = q_7;
      {
        ATerm t_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = t_7;
            {
              ATerm w_7 = t;
              int y_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_0, y_0, a_1, t);
                  ;
                  LocalPopChoice(y_7);
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
                        ;
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
                              t = keep_option_0_0(t);
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
                                    t = ArgOption_3_0(c_1, d_1, f_1, t);
                                    ;
                                    LocalPopChoice(e_8);
                                  }
                                else
                                  {
                                    t = d_8;
                                    t = ArgOption_3_0(g_1, i_1, j_1, t);
                                  }
                              }
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
ATerm u_1 (ATerm h_1, ATerm t)
{
  ATerm l_1 = NULL;
  t = SSL_explode_term(h_1);
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,r_1 = NULL;
  if(((r_1 != NULL) && (r_1 != t)))
    _fail(t);
  else
    r_1 = t;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(p_1);
              return(t);
            }
            t = not_null(n_1);
            t = at_end_1_0(k_1, t);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = u_1(not_null(r_1), t);
          }
      }
    }
  else
    {
      t = u_1(not_null(r_1), t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_1;
      t = g_93(t);
    }
  else
    {
      ATerm b_2 = NULL,c_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_1 = ATgetFirst((ATermList) t);
          y_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_1;
      t = i_93(t);
      b_2 = t;
      t = y_1;
      t = foldr_3_0(g_93, h_93, i_93, t);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, c_2);
      t = h_93(t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL;
      t = k_92(t);
      f_2 = t;
      t = (ATerm) ATinsert(ATempty, f_2);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm b_0 = NULL,f_0 = NULL;
        ATerm o_1 (ATerm t)
        {
          t = collect_om_2_0(k_92, l_92, t);
          return(t);
        }
        if(((f_0 != NULL) && (f_0 != t)))
          _fail(t);
        else
          f_0 = t;
        t = SSL_explode_term(not_null(f_0));
        if(match_cons(t, sym__2))
          {
            ATerm k_8 = ATgetArgument(t, 0);
            if(((b_0 != NULL) && (b_0 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              b_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(b_0);
        t = foldr_3_0(m_1, l_92, o_1, t);
      }
    }
  return(t);
}
ATerm w_40 (ATerm m_2, ATerm n_2, ATerm o_2, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_is_int(m_2);
  t = SSL_int_to_string(m_2);
  g_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), n_2), term_m_8), g_3), term_l_8);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,l_3 = NULL,n_3 = NULL,s_3 = NULL,t_3 = NULL,z_3 = NULL;
  z_3 = t;
  if(match_cons(t, sym_BOXENV_2))
    {
      n_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      t = n_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), t_3), term_o_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_3 = ATgetFirst((ATermList) t);
              h_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_8), t_3), term_r_8), s_3), term_q_8);
        }
    }
  else
    {
      if(match_cons(t, sym_HBOX_2))
        {
          n_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_8), t_3), term_r_8), n_3), term_s_8);
        }
      else
        {
          if(match_cons(t, sym_VBOX_3))
            {
              n_3 = ATgetArgument(t, 0);
              t_3 = ATgetArgument(t, 1);
              i_3 = ATgetArgument(t, 2);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_8), i_3), term_r_8), t_3), term_m_8), n_3), term_u_8);
            }
          else
            {
              if(match_cons(t, sym_HVBOX_4))
                {
                  n_3 = ATgetArgument(t, 0);
                  t_3 = ATgetArgument(t, 1);
                  i_3 = ATgetArgument(t, 2);
                  l_3 = ATgetArgument(t, 3);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_8), l_3), term_r_8), i_3), term_m_8), t_3), term_m_8), n_3), term_w_8);
                }
              else
                {
                  if(match_cons(t, sym_ABOX_2))
                    {
                      n_3 = ATgetArgument(t, 0);
                      t_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_8), t_3), term_r_8), n_3), term_y_8);
                    }
                  else
                    {
                      if(match_cons(t, sym_ALTBOX_2))
                        {
                          n_3 = ATgetArgument(t, 0);
                          t_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), t_3), term_b_9), n_3), term_a_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_CBOX_1))
                            {
                              n_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), n_3), term_d_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_LBOX_2))
                                {
                                  n_3 = ATgetArgument(t, 0);
                                  t_3 = ATgetArgument(t, 1);
                                  t = n_3;
                                  if(match_string(t, "="))
                                    {
                                      ATerm f_9 = t;
                                      int g_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_40(n_3, t_3, z_3, t);
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
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), t_3), term_j_9);
                                                ;
                                                LocalPopChoice(i_9);
                                              }
                                            else
                                              {
                                                t = h_9;
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), t_3), term_r_8), n_3), term_l_9);
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
                                          t = w_40(n_3, t_3, z_3, t);
                                          ;
                                          LocalPopChoice(n_9);
                                        }
                                      else
                                        {
                                          t = m_9;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), t_3), term_r_8), n_3), term_l_9);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBLBOX_2))
                                    {
                                      n_3 = ATgetArgument(t, 0);
                                      t_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_3), term_p_9), n_3), term_o_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REFBOX_2))
                                        {
                                          n_3 = ATgetArgument(t, 0);
                                          t_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_m_8), n_3), term_q_9);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BOXFONT_2))
                                            {
                                              n_3 = ATgetArgument(t, 0);
                                              t_3 = ATgetArgument(t, 1);
                                              t = n_3;
                                              if(match_cons(t, sym_KW_0))
                                                {
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_r_9);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_VAR_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_s_9);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_NUM_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_t_9);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_MATH_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_u_9);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "sf"))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_v_9);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "rm"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_w_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "tt"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_x_9);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "md"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_c_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "bf"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_d_10);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "up"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_e_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "it"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_f_10);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "sc"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_g_10);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sl"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_h_10);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "em"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_j_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "tiny"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_k_10);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "scriptsize"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_l_10);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "footnotesize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_m_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "small"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_o_10);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "normalsize"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_p_10);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "large"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_q_10);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "Large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_r_10);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "LARGE"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_s_10);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "huge"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_u_10);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "Huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_y_10);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                {
                                                                                                                                                  s_3 = ATgetArgument(t, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), t_3), term_m_8), s_3), term_b_11);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
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
                                                  t = term_c_11;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_R_0))
                                                    {
                                                      t = term_g_11;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_L_0))
                                                        {
                                                          t = term_h_11;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_EOR_0))
                                                            {
                                                              t = term_i_11;
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
ATerm bottomup_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(l_81, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = l_81(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_40 = NULL;
      t = term_o_7;
      t = get_config_0_0(t);
      x_40 = t;
      t = (ATerm) ATinsert(ATempty, x_40);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = p_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_42;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_42 = ATgetFirst((ATermList) t);
          i_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 = NULL,e_1 = NULL,r_0 = NULL;
            t = SSLgetAnnotations(g_42);
            b_1 = t;
            t = h_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_42;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), h_42);
            r_0 = t;
            t = SSLsetAnnotations(r_0, b_1);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_1 = NULL,g_2 = NULL,h_2 = NULL,k_2 = NULL,v_0 = NULL;
                  t = SSLgetAnnotations(g_42);
                  h_2 = t;
                  t = h_42;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = h_42;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm x_11 = ATgetFirst((ATermList) t);
                          ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = h_42;
                    }
                  t = (ATerm) ATinsert(CheckATermList(i_42), h_42);
                  v_0 = t;
                  t = SSLsetAnnotations(v_0, h_2);
                  k_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = k_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm a_12 = ATgetFirst((ATermList) t);
                      v_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, g_2, v_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm p_3 = NULL,u_3 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(g_42);
                    p_3 = t;
                    t = i_42;
                    t = flat_list_0_0(t);
                    u_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_3), h_42);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, p_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm o_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_12) != AT_INT) || (ATgetInt((ATermInt) d_12) != 34)))
        _fail(t);
      o_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_42), term_e_12), term_e_12);
  return(t);
}
ATerm j_6 (ATerm k_30, ATerm t)
{
  ATerm n_42 = NULL;
  t = k_30;
  t = at_suffix_1_0(s_1, t);
  n_42 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_42), term_g_12), term_g_12);
  return(t);
}
ATerm listtd_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm c_43 (ATerm t)
  {
    ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
    t = k_88(t);
    z_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_42;
      }
    else
      {
        ATerm e_4 = NULL,n_4 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_43 = ATgetFirst((ATermList) t);
            b_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_42);
        e_4 = t;
        t = b_43;
        t = c_43(t);
        n_4 = t;
        t = (ATerm) ATinsert(CheckATermList(n_4), a_43);
        d_6 = t;
        t = SSLsetAnnotations(d_6, e_4);
      }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm s_5 = NULL,w_5 = NULL,x_5 = NULL;
  x_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_5 = ATgetFirst((ATermList) t);
      w_5 = (ATerm) ATgetNext((ATermList) t);
      t = s_5;
      if(match_int(t, 34))
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_5;
              t = j_6(w_5, t);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              t = x_5;
            }
        }
      else
        {
          t = x_5;
        }
    }
  else
    {
      t = x_5;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  if(match_int(t, 32))
    {
      ATerm j_12 = t;
      int k_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_10 = NULL;
          t = term_l_12;
          v_10 = t;
          t = SSL_explode_string(v_10);
          ;
          LocalPopChoice(k_12);
        }
      else
        {
          t = j_12;
          t = x_7;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL;
              t = term_o_12;
              w_10 = t;
              t = SSL_explode_string(w_10);
              ;
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              t = x_7;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm p_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_10 = NULL;
                  t = term_r_12;
                  x_10 = t;
                  t = SSL_explode_string(x_10);
                  ;
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = p_12;
                  t = x_7;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm s_12 = t;
                  int t_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_10 = NULL;
                      t = term_u_12;
                      z_10 = t;
                      t = SSL_explode_string(z_10);
                      ;
                      LocalPopChoice(t_12);
                    }
                  else
                    {
                      t = s_12;
                      t = x_7;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm v_12 = t;
                      int w_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_11 = NULL;
                          t = term_x_12;
                          a_11 = t;
                          t = SSL_explode_string(a_11);
                          ;
                          LocalPopChoice(w_12);
                        }
                      else
                        {
                          t = v_12;
                          t = x_7;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm y_12 = t;
                          int a_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_11 = NULL;
                              t = term_b_13;
                              d_11 = t;
                              t = SSL_explode_string(d_11);
                              ;
                              LocalPopChoice(a_13);
                            }
                          else
                            {
                              t = y_12;
                              t = x_7;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm c_13 = t;
                              int d_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_11 = NULL;
                                  t = term_e_13;
                                  e_11 = t;
                                  t = SSL_explode_string(e_11);
                                  ;
                                  LocalPopChoice(d_13);
                                }
                              else
                                {
                                  t = c_13;
                                  t = x_7;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm g_13 = t;
                                  int h_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_11 = NULL;
                                      t = term_i_13;
                                      f_11 = t;
                                      t = SSL_explode_string(f_11);
                                      ;
                                      LocalPopChoice(h_13);
                                    }
                                  else
                                    {
                                      t = g_13;
                                      t = x_7;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm j_13 = t;
                                      int k_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_11 = NULL;
                                          t = term_n_13;
                                          j_11 = t;
                                          t = SSL_explode_string(j_11);
                                          ;
                                          LocalPopChoice(k_13);
                                        }
                                      else
                                        {
                                          t = j_13;
                                          t = x_7;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm o_13 = t;
                                          int q_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm l_11 = NULL;
                                              t = term_r_13;
                                              l_11 = t;
                                              t = SSL_explode_string(l_11);
                                              ;
                                              LocalPopChoice(q_13);
                                            }
                                          else
                                            {
                                              t = o_13;
                                              t = x_7;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm s_13 = t;
                                              int t_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_11 = NULL;
                                                  t = term_u_13;
                                                  m_11 = t;
                                                  t = SSL_explode_string(m_11);
                                                  ;
                                                  LocalPopChoice(t_13);
                                                }
                                              else
                                                {
                                                  t = s_13;
                                                  t = x_7;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm v_13 = t;
                                                  int w_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_11 = NULL;
                                                      t = term_x_13;
                                                      n_11 = t;
                                                      t = SSL_explode_string(n_11);
                                                      ;
                                                      LocalPopChoice(w_13);
                                                    }
                                                  else
                                                    {
                                                      t = v_13;
                                                      t = x_7;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm y_13 = t;
                                                      int z_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_11 = NULL;
                                                          t = term_a_14;
                                                          o_11 = t;
                                                          t = SSL_explode_string(o_11);
                                                          ;
                                                          LocalPopChoice(z_13);
                                                        }
                                                      else
                                                        {
                                                          t = y_13;
                                                          t = x_7;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm b_14 = t;
                                                          int d_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_11 = NULL;
                                                              t = term_e_14;
                                                              q_11 = t;
                                                              t = SSL_explode_string(q_11);
                                                              ;
                                                              LocalPopChoice(d_14);
                                                            }
                                                          else
                                                            {
                                                              t = b_14;
                                                              t = x_7;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm f_14 = t;
                                                              int g_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_11 = NULL;
                                                                  t = term_i_14;
                                                                  u_11 = t;
                                                                  t = SSL_explode_string(u_11);
                                                                  ;
                                                                  LocalPopChoice(g_14);
                                                                }
                                                              else
                                                                {
                                                                  t = f_14;
                                                                  t = x_7;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = x_7;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_44 = NULL,c_44 = NULL;
      a_44 = t;
      t = term_n_14;
      c_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_14, a_44);
      t = y_6(c_44, a_44, t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm d_5 = NULL,l_5 = NULL;
        l_5 = t;
        t = SSL_explode_string(l_5);
        t = listtd_1_0(t_1, t);
        t = map_1_0(z_1, t);
        t = flat_list_0_0(t);
        d_5 = t;
        t = SSL_implode_string(d_5);
      }
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm a_47 (ATerm t)
  {
    ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
    x_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_46 = ATgetFirst((ATermList) t);
        w_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_12 = NULL,c_12 = NULL,f_12 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(x_46);
              c_12 = t;
              t = v_46;
              t = n_79(t);
              f_12 = t;
              t = (ATerm) ATinsert(CheckATermList(w_46), f_12);
              i_6 = t;
              t = SSLsetAnnotations(i_6, c_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_14 = ATgetFirst((ATermList) t);
                  b_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_12;
              t = a_47(t);
              ;
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = x_46;
            }
        }
      }
    else
      {
        t = x_46;
      }
    return(t);
  }
  t = a_47(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm t_47 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_87(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        {
          ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,z_12 = NULL,f_13 = NULL,x_6 = NULL;
          q_47 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_47 = ATgetFirst((ATermList) t);
              s_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_47);
          z_12 = t;
          t = s_47;
          t = t_47(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(f_13), r_47);
          x_6 = t;
          t = SSLsetAnnotations(x_6, z_12);
        }
      }
    return(t);
  }
  t = t_47(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_int(t, 9))
    {
      t = z_47;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  t = remove_trailing_1_0(a_2, t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,e_7 = NULL;
          if(((e_48 != NULL) && (e_48 != t)))
            _fail(t);
          else
            e_48 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((b_48 != NULL) && (b_48 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                b_48 = ATgetFirst((ATermList) t);
              if(((c_48 != NULL) && (c_48 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                c_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(not_null(e_48));
          if(((a_48 != NULL) && (a_48 != t)))
            _fail(t);
          else
            a_48 = t;
          t = not_null(b_48);
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = not_null(c_48);
          {
            ATerm i_2 (ATerm t)
            {
              if(((x_47 != NULL) && (x_47 != t)))
                _fail(t);
              else
                x_47 = t;
              return(t);
            }
            t = Cons_2_0(e_2, i_2, t);
            if(((d_48 != NULL) && (d_48 != t)))
              _fail(t);
            else
              d_48 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(d_48)), not_null(b_48));
            if(((e_7 != NULL) && (e_7 != t)))
              _fail(t);
            else
              e_7 = t;
            t = SSLsetAnnotations(not_null(e_7), not_null(a_48));
            t = not_null(x_47);
          }
          return(t);
        }
        t = at_suffix_1_0(d_2, t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
      }
    if(((y_47 != NULL) && (y_47 != t)))
      _fail(t);
    else
      y_47 = t;
    t = SSL_implode_string(not_null(y_47));
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm l_49 = NULL;
  l_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_14), l_49);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(((o_48 != NULL) && (o_48 != t)))
    _fail(t);
  else
    o_48 = t;
  t = SSL_explode_string(not_null(o_48));
  t = reverse_acc_2_0(_id, j_2, t);
  if(((n_48 != NULL) && (n_48 != t)))
    _fail(t);
  else
    n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), (ATerm) ATempty);
  {
    ATerm m_49 (ATerm t)
    {
      ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
      if(match_cons(t, sym__2))
        {
          r_48 = ATgetArgument(t, 0);
          u_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_48;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm y_48 = NULL;
          t = u_48;
          t = LatexComment_0_0(t);
          y_48 = t;
          t = (ATerm) ATinsert(ATempty, y_48);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_48 = ATgetFirst((ATermList) t);
              t_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_48;
          if(match_int(t, 10))
            {
              ATerm x_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_49 = NULL,d_49 = NULL;
                  t = u_48;
                  t = LatexComment_0_0(t);
                  c_49 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_48, (ATerm) ATempty);
                  t = m_49(t);
                  d_49 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_49), c_49);
                  ;
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  t = (ATerm) ATmakeAppl(sym__2, t_48, (ATerm) ATinsert(CheckATermList(u_48), s_48));
                  t = m_49(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, t_48, (ATerm) ATinsert(CheckATermList(u_48), s_48));
              t = m_49(t);
            }
        }
      return(t);
    }
    t = m_49(t);
    t = remove_trailing_1_0(l_2, t);
    t = reverse_acc_2_0(_id, p_2, t);
    t = remove_trailing_1_0(q_2, t);
    t = map_1_0(r_2, t);
  }
  return(t);
}
ATerm s_2 (ATerm t)
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
  ATerm l_13 = NULL,m_13 = NULL;
  t = filter_1_0(s_2, t);
  m_13 = t;
  t = term_a_15;
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, m_13);
  t = k_6(l_13, m_13, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = term_f_7;
    }
  n_49 = t;
  t = SSL_int_to_string(n_49);
  return(t);
}
ATerm k_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  t = w_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_31;
    }
  else
    {
      ATerm c_14 = NULL,h_14 = NULL,h_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_50 != NULL) && (d_50 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_50 = ATgetFirst((ATermList) t);
          if(((e_50 != NULL) && (e_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(w_31));
      if(((c_14 != NULL) && (c_14 != t)))
        _fail(t);
      else
        c_14 = t;
      t = not_null(e_50);
      {
        ATerm o_14 (ATerm t)
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_14 = NULL;
              l_14 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_14;
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm m_14 = NULL;
                t = Cons_2_0(_id, o_14, t);
                m_14 = t;
                t = (ATerm) ATinsert(CheckATermList(m_14), not_null(v_31));
              }
            }
          return(t);
        }
        t = o_14(t);
        if(((h_14 != NULL) && (h_14 != t)))
          _fail(t);
        else
          h_14 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(h_14)), not_null(d_50));
        if(((h_7 != NULL) && (h_7 != t)))
          _fail(t);
        else
          h_7 = t;
        t = SSLsetAnnotations(not_null(h_7), not_null(c_14));
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_51 = ATgetFirst((ATermList) t);
          c_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_15 = NULL,j_15 = NULL,m_15 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(a_51);
            d_15 = t;
            t = b_51;
            t = h_94(t);
            j_15 = t;
            t = c_51;
            t = filter_1_0(h_94, t);
            m_15 = t;
            t = (ATerm) ATinsert(CheckATermList(m_15), j_15);
            m_7 = t;
            t = SSLsetAnnotations(m_7, d_15);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = c_51;
            t = filter_1_0(h_94, t);
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm f_51 = NULL;
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      t = term_l_15;
    }
  f_51 = t;
  t = SSL_int_to_string(f_51);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm g_51 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,r_7 = NULL;
    l_51 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        i_51 = ATgetArgument(t, 0);
        j_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_51);
    h_51 = t;
    t = i_51;
    t = i_79(t);
    k_51 = t;
    t = j_51;
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, k_51, j_51);
    r_7 = t;
    t = SSLsetAnnotations(r_7, h_51);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(g_51));
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm m_51 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = term_l_15;
    }
  m_51 = t;
  t = SSL_int_to_string(m_51);
  return(t);
}
ATerm c_54 (ATerm t_51, ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm z_51 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(v_51);
  z_51 = t;
  t = u_51;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_51), t_51);
  u_7 = t;
  t = SSLsetAnnotations(u_7, z_51);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,a_10 = NULL;
  h_53 = t;
  if(match_cons(t, sym_C_2))
    {
      f_53 = ATgetArgument(t, 0);
      g_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_53);
  e_53 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, f_53, g_53);
  a_10 = t;
  t = SSLsetAnnotations(a_10, e_53);
  return(t);
}
ATerm l_6 (ATerm i_27, ATerm t)
{
  ATerm b_54 (ATerm t)
  {
    ATerm d_54 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm t)
    {
      ATerm j_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,z_9 = NULL,y_9 = NULL;
      t = SSLgetAnnotations(f_52);
      j_52 = t;
      t = d_52;
      if(match_cons(t, sym_C_2))
        {
          o_52 = ATgetArgument(t, 0);
          p_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_52);
      n_52 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, o_52, p_52);
      y_9 = t;
      t = SSLsetAnnotations(y_9, n_52);
      q_52 = t;
      t = e_52;
      t = Cons_2_0(_id, b_54, t);
      m_52 = t;
      t = (ATerm) ATinsert(CheckATermList(m_52), q_52);
      z_9 = t;
      t = SSLsetAnnotations(z_9, j_52);
      return(t);
    }
    ATerm e_54 (ATerm t_52, ATerm u_52, ATerm v_52, ATerm t)
    {
      ATerm z_52 = NULL,c_53 = NULL,b_10 = NULL;
      t = SSLgetAnnotations(v_52);
      z_52 = t;
      t = u_52;
      t = Cons_2_0(x_2, b_54, t);
      c_53 = t;
      t = (ATerm) ATinsert(CheckATermList(c_53), t_52);
      b_10 = t;
      t = SSLsetAnnotations(b_10, z_52);
      return(t);
    }
    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
    i_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_53 = ATgetFirst((ATermList) t);
            k_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_53 = ATgetFirst((ATermList) t);
            m_53 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm p_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_54(j_53, k_53, i_53, t);
                  ;
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = p_15;
                  {
                    ATerm r_15 = t;
                    int s_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_54(j_53, k_53, i_53, t);
                        ;
                        LocalPopChoice(s_15);
                      }
                    else
                      {
                        t = r_15;
                        {
                          ATerm t_15 = t;
                          int u_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_54(j_53, k_53, i_53, t);
                              ;
                              LocalPopChoice(u_15);
                            }
                          else
                            {
                              t = t_15;
                              {
                                ATerm a_54 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(m_53), l_53);
                                t = b_54(t);
                                a_54 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(a_54), term_v_15), j_53);
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
            ATerm w_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_54(j_53, k_53, i_53, t);
                ;
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
                      t = d_54(j_53, k_53, i_53, t);
                      ;
                      LocalPopChoice(z_15);
                    }
                  else
                    {
                      t = y_15;
                      t = e_54(j_53, k_53, i_53, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = not_null(i_27);
  t = b_54(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  if(match_cons(t, sym_LBL_2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
        t = r_54;
        if(match_cons(t, sym_R_2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(t_16, t);
        t = r_54;
        if(match_cons(t, sym_R_2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            s_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(s_16, t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, q_54, r_16);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm c_16 = ATgetArgument(t, 0);
          r_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_54;
      t = l_6(r_54, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm y_55 (ATerm t)
  {
    ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
    v_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_55 = ATgetFirst((ATermList) t);
        x_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_17 = NULL,i_10 = NULL;
          t = SSLgetAnnotations(v_55);
          c_17 = t;
          t = x_55;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_55), w_55);
          i_10 = t;
          t = SSLsetAnnotations(i_10, c_17);
          t = c_88(t);
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          {
            ATerm z_17 = NULL,d_18 = NULL,n_10 = NULL;
            t = SSLgetAnnotations(v_55);
            z_17 = t;
            t = x_55;
            t = y_55(t);
            d_18 = t;
            t = (ATerm) ATinsert(CheckATermList(d_18), w_55);
            n_10 = t;
            t = SSLsetAnnotations(n_10, z_17);
          }
        }
    }
    return(t);
  }
  t = y_55(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm s_56 (ATerm t)
  {
    ATerm l_56 = NULL,m_56 = NULL,r_56 = NULL;
    r_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_56 = ATgetFirst((ATermList) t);
        m_56 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_18 = NULL,t_18 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(r_56);
          p_18 = t;
          t = m_56;
          t = s_56(t);
          t_18 = t;
          t = (ATerm) ATinsert(CheckATermList(t_18), l_56);
          t_10 = t;
          t = SSLsetAnnotations(t_10, p_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_56;
        t = r_87(t);
      }
    return(t);
  }
  t = s_56(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  v_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_56;
    }
  else
    {
      ATerm y_2 (ATerm t)
      {
        t = not_null(x_56);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_56 != NULL) && (w_56 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_56 = ATgetFirst((ATermList) t);
          if(((x_56 != NULL) && (x_56 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_56);
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_57 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      v_57 = ATgetArgument(t, 0);
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = v_57;
        t = Hspace_0_0(t);
        r_19 = t;
        t = SSL_string_to_int(r_19);
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_19, term_a_15);
        t = copy_0_0(t);
        p_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_19), term_f_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          v_57 = ATgetArgument(t, 0);
          {
            ATerm v_19 = NULL,y_19 = NULL,z_19 = NULL;
            t = v_57;
            t = Hspace_0_0(t);
            z_19 = t;
            t = SSL_string_to_int(z_19);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_19, term_a_15);
            t = copy_0_0(t);
            v_19 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, v_19), term_g_16);
          }
        }
      else
        {
          ATerm l_20 = NULL,m_20 = NULL,q_20 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              v_57 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_57;
          t = Hspace_0_0(t);
          q_20 = t;
          t = SSL_string_to_int(q_20);
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_20, term_a_15);
          t = copy_0_0(t);
          l_20 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, l_20), term_h_16);
        }
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_16);
  return(t);
}
ATerm m_6 (ATerm e_27, ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  t = e_27;
  t = map_1_0(z_2, t);
  z_20 = t;
  t = (ATerm) ATinsert(ATempty, term_v_15);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_v_15), z_20);
  t = k_6(y_20, z_20, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
ATerm n_6 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_47, m_47);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = SSL_subtr(l_47, m_47);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t)
{
  ATerm z_57 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_81(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = c_81(t);
        t = z_57(t);
      }
    return(t);
  }
  t = z_57(t);
  return(t);
}
ATerm for_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t)
{
  t = e_81(t);
  t = while_not_2_0(f_81, g_81, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_58, d_58, (ATerm) ATempty);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm e_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(((ATgetType(n_16) != AT_INT) || (ATgetInt((ATermInt) n_16) != 0)))
        _fail(t);
      {
        ATerm o_16 = ATgetArgument(t, 1);
      }
      e_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_58;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  if(match_cons(t, sym__3))
    {
      f_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
      h_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_58, term_f_7);
  t = geq_0_0(t);
  t = term_f_7;
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_58, term_f_7);
  t = n_6(f_58, j_58, t);
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_58, g_58, (ATerm) ATinsert(CheckATermList(h_58), g_58));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_3, c_3, d_3, t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,q_21 = NULL,p_13 = NULL;
        r_58 = t;
        if(match_cons(t, sym__2))
          {
            s_58 = ATgetArgument(t, 0);
            t_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_58);
        q_21 = t;
        t = s_58;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_58, t_58);
        p_13 = t;
        t = SSLsetAnnotations(p_13, q_21);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm u_16 = t;
  if((PushChoice() == 0))
    {
      ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,f_22 = NULL;
      p_60 = t;
      if(match_cons(t, sym_R_2))
        {
          n_60 = ATgetArgument(t, 0);
          o_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_60);
      m_60 = t;
      t = o_60;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, n_60, o_60);
      f_22 = t;
      t = SSLsetAnnotations(f_22, m_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_16;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm a_59 = NULL;
  if(((a_59 != NULL) && (a_59 != t)))
    _fail(t);
  else
    a_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_59), (ATerm) ATempty);
  {
    ATerm q_60 (ATerm t)
    {
      ATerm b_59 = NULL,h_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
      if(match_cons(t, sym__2))
        {
          j_59 = ATgetArgument(t, 0);
          m_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_59;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm s_59 = NULL;
          t = m_59;
          t = reverse_acc_2_0(_id, e_3, t);
          s_59 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, s_59));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_59 = ATgetFirst((ATermList) t);
              l_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_59;
          if(match_cons(t, sym_R_2))
            {
              b_59 = ATgetArgument(t, 0);
              h_59 = ATgetArgument(t, 1);
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_60 = NULL,c_60 = NULL;
                    t = m_59;
                    t = reverse_acc_2_0(_id, f_3, t);
                    b_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_59, (ATerm) ATempty);
                    t = q_60(t);
                    c_60 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(c_60), (ATerm) ATmakeAppl(sym_R_2, b_59, h_59)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, b_60));
                    ;
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    t = (ATerm) ATmakeAppl(sym__2, l_59, (ATerm) ATinsert(CheckATermList(m_59), k_59));
                    t = q_60(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_59, (ATerm) ATinsert(CheckATermList(m_59), k_59));
              t = q_60(t);
            }
        }
      return(t);
    }
    t = q_60(t);
    t = filter_1_0(j_3, t);
  }
  return(t);
}
ATerm i_65 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm t)
{
  t = s_63;
  if(match_cons(t, sym_KW_0))
    {
      t = s_63;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = s_63;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = s_63;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = s_63;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, s_63, t_63);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm x_16 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_16;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm y_16 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_16;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm d_65 = NULL;
  if(match_cons(t, sym_S_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_65;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
  d_64 = t;
  if(match_cons(t, sym_REF_2))
    {
      e_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, e_64, c_64);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          e_64 = ATgetArgument(t, 0);
          c_64 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, e_64, c_64);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              e_64 = ATgetArgument(t, 0);
              c_64 = ATgetArgument(t, 1);
              {
                ATerm u_25 = NULL;
                t = d_64;
                {
                  ATerm z_16 = t;
                  int a_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(e_64);
                      u_25 = t;
                      ;
                      LocalPopChoice(a_17);
                    }
                  else
                    {
                      t = z_16;
                      {
                        ATerm b_17 = t;
                        int d_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_25 = NULL,z_25 = NULL,c_26 = NULL,k_26 = NULL,l_26 = NULL,i_22 = NULL;
                            t = SSL_explode_string(e_64);
                            l_26 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                c_26 = ATgetFirst((ATermList) t);
                                k_26 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(l_26);
                            z_25 = t;
                            t = c_26;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(k_26), c_26);
                            i_22 = t;
                            t = SSLsetAnnotations(i_22, z_25);
                            t = (ATerm) ATinsert(ATempty, term_e_17);
                            y_25 = t;
                            t = SSL_implode_string(y_25);
                            u_25 = t;
                            ;
                            LocalPopChoice(d_17);
                          }
                        else
                          {
                            t = b_17;
                            t = e_64;
                            u_25 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, u_25, c_64);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  e_64 = ATgetArgument(t, 0);
                  c_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, e_64, c_64);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      e_64 = ATgetArgument(t, 0);
                      c_64 = ATgetArgument(t, 1);
                      y_63 = ATgetArgument(t, 2);
                      {
                        ATerm l_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,z_27 = NULL;
                        t = y_63;
                        t = construct_rows_0_0(t);
                        o_27 = t;
                        t = c_64;
                        t = Vspace_0_0(t);
                        t_27 = t;
                        t = SSL_string_to_int(t_27);
                        l_27 = t;
                        t = (ATerm) ATmakeAppl(sym__2, l_27, term_i_16);
                        t = copy_0_0(t);
                        r_27 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_27, (ATerm) ATinsert(ATinsert(ATempty, term_w_14), term_i_16));
                        t = conc_0_0(t);
                        p_27 = t;
                        t = e_64;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            s_27 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_6(s_27, t);
                        n_27 = t;
                        t = o_27;
                        t = map_1_0(MkRows_0_0, t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_27, z_27);
                        t = k_6(p_27, z_27, t);
                        q_27 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, n_27, q_27);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          e_64 = ATgetArgument(t, 0);
                          c_64 = ATgetArgument(t, 1);
                          {
                            ATerm l_64 = NULL,m_64 = NULL,o_64 = NULL,q_64 = NULL,b_28 = NULL,c_28 = NULL;
                            t = e_64;
                            t = Hspace_0_0(t);
                            l_64 = t;
                            t = e_64;
                            t = Vspace_0_0(t);
                            m_64 = t;
                            t = e_64;
                            t = Ispace_0_0(t);
                            o_64 = t;
                            t = c_64;
                            t = filter_1_0(k_3, t);
                            c_28 = t;
                            t = term_f_17;
                            b_28 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_f_17, c_28);
                            t = k_6(b_28, c_28, t);
                            q_64 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, l_64, m_64, o_64, q_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              e_64 = ATgetArgument(t, 0);
                              c_64 = ATgetArgument(t, 1);
                              {
                                ATerm r_64 = NULL,t_64 = NULL,v_64 = NULL,f_28 = NULL,g_28 = NULL;
                                t = e_64;
                                t = Vspace_0_0(t);
                                r_64 = t;
                                t = e_64;
                                t = Ispace_0_0(t);
                                t_64 = t;
                                t = c_64;
                                t = filter_1_0(m_3, t);
                                g_28 = t;
                                t = term_g_17;
                                f_28 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_g_17, g_28);
                                t = k_6(f_28, g_28, t);
                                v_64 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, r_64, t_64, v_64);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  e_64 = ATgetArgument(t, 0);
                                  c_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_64 = NULL,z_64 = NULL;
                                    t = e_64;
                                    t = Hspace_0_0(t);
                                    x_64 = t;
                                    t = c_64;
                                    t = toh_0_0(t);
                                    z_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, x_64, z_64);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      e_64 = ATgetArgument(t, 0);
                                      c_64 = ATgetArgument(t, 1);
                                      t = e_64;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          b_64 = ATgetArgument(t, 0);
                                          t = b_64;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              z_63 = ATgetFirst((ATermList) t);
                                              a_64 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm h_17 = t;
                                                int i_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm p_28 = NULL,y_29 = NULL,z_29 = NULL;
                                                    t = z_63;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        y_29 = ATgetArgument(t, 0);
                                                        z_29 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm j_17 = t;
                                                      int k_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_30 = NULL,k_22 = NULL;
                                                          t = SSLgetAnnotations(z_63);
                                                          p_30 = t;
                                                          t = y_29;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = z_29;
                                                          p_28 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, y_29, z_29);
                                                          k_22 = t;
                                                          t = SSLsetAnnotations(k_22, p_30);
                                                          ;
                                                          LocalPopChoice(k_17);
                                                        }
                                                      else
                                                        {
                                                          t = j_17;
                                                          {
                                                            ATerm l_17 = t;
                                                            int m_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_31 = NULL,n_22 = NULL;
                                                                t = SSLgetAnnotations(z_63);
                                                                a_31 = t;
                                                                t = y_29;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = z_29;
                                                                p_28 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, y_29, z_29);
                                                                n_22 = t;
                                                                t = SSLsetAnnotations(n_22, a_31);
                                                                ;
                                                                LocalPopChoice(m_17);
                                                              }
                                                            else
                                                              {
                                                                t = l_17;
                                                                {
                                                                  ATerm n_17 = t;
                                                                  int o_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm m_31 = NULL,o_22 = NULL;
                                                                      t = SSLgetAnnotations(z_63);
                                                                      m_31 = t;
                                                                      t = y_29;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = z_29;
                                                                      p_28 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, y_29, z_29);
                                                                      o_22 = t;
                                                                      t = SSLsetAnnotations(o_22, m_31);
                                                                      ;
                                                                      LocalPopChoice(o_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_17;
                                                                      {
                                                                        ATerm p_17 = t;
                                                                        int q_17 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm x_31 = NULL,q_22 = NULL;
                                                                            t = SSLgetAnnotations(z_63);
                                                                            x_31 = t;
                                                                            t = y_29;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = z_29;
                                                                            p_28 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, y_29, z_29);
                                                                            q_22 = t;
                                                                            t = SSLsetAnnotations(q_22, x_31);
                                                                            ;
                                                                            LocalPopChoice(q_17);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = p_17;
                                                                            {
                                                                              ATerm p_32 = NULL,v_22 = NULL;
                                                                              t = SSLgetAnnotations(z_63);
                                                                              p_32 = t;
                                                                              t = y_29;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, y_29, z_29);
                                                                              v_22 = t;
                                                                              t = SSLsetAnnotations(v_22, p_32);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, z_29);
                                                                              p_28 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, p_28, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, a_64), c_64));
                                                    }
                                                    ;
                                                    LocalPopChoice(i_17);
                                                  }
                                                else
                                                  {
                                                    t = h_17;
                                                    t = i_65(e_64, c_64, d_64, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = c_64;
                                                }
                                              else
                                                {
                                                  t = i_65(e_64, c_64, d_64, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = i_65(e_64, c_64, d_64, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          e_64 = ATgetArgument(t, 0);
                                          c_64 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_65 = NULL;
                                            t = e_64;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = c_64;
                                            t = map_1_0(o_3, t);
                                            c_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, c_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              e_64 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_64;
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
  ATerm q_3 (ATerm t)
  {
    t = topdown_1_0(k_81, t);
    return(t);
  }
  t = k_81(t);
  t = SRTS_all(q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_65 = ATgetFirst((ATermList) t);
      {
        ATerm r_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            s_65 = ATgetFirst((ATermList) r_17);
            {
              ATerm s_17 = (ATerm) ATgetNext((ATermList) r_17);
              if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
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
  t_65 = t;
  t = SSL_table_put(t_65, r_65, s_65);
  t = (ATerm) ATmakeAppl(sym__3, term_n_14, r_65, s_65);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL;
  p_65 = t;
  t = term_n_14;
  q_65 = t;
  t = SSL_table_create(q_65);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_7;
        t = get_config_0_0(t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(r_3, t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
      }
    t = p_65;
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm k_66 = NULL;
  k_66 = t;
  t = SSL_is_string(k_66);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,m_23 = NULL;
  f_66 = t;
  if(match_cons(t, sym__2))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_66);
  y_65 = t;
  t = a_66;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(v_3, t);
  d_66 = t;
  t = BOXENV_args_0_0(t);
  c_66 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, c_66, d_66);
  t = bottomup_1_0(w_3, t);
  t = collect_om_2_0(x_3, conc_0_0, t);
  e_66 = t;
  t = SSL_concat_strings(e_66);
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_65, b_66);
  m_23 = t;
  t = SSLsetAnnotations(m_23, y_65);
  return(t);
}
ATerm q_6 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm l_66 = NULL;
  t = SSL_fputc(f_50, g_50);
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_66);
  return(t);
}
ATerm r_6 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm m_66 = NULL;
  t = SSL_write_term_to_stream_text(t_53, u_53);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_66);
  return(t);
}
ATerm t_6 (ATerm s_99 (ATerm), ATerm t_491, ATerm x_53, ATerm t)
{
  ATerm n_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_491, term_a_18);
  t = open_stream_0_0(t);
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_66, x_53);
  t = s_99(t);
  t = fclose_0_0(t);
  t = x_53;
  return(t);
}
ATerm s_6 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm o_66 = NULL;
  t = SSL_write_term_to_stream_baf(p_53, q_53);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_66);
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm n_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if(match_cons(b_18, sym_Stream_1))
        {
          n_33 = ATgetArgument(b_18, 0);
        }
      else
        _fail(t);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(n_33, p_33, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,y_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if(match_cons(c_18, sym_Stream_1))
        {
          r_34 = ATgetArgument(c_18, 0);
        }
      else
        _fail(t);
      y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(r_34, y_34, t);
  o_34 = t;
  t = term_e_18;
  p_34 = t;
  t = o_34;
  if(match_cons(t, sym_Stream_1))
    {
      q_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, o_34);
  t = q_6(p_34, q_34, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,c_68 = NULL,d_68 = NULL,t_23 = NULL,s_23 = NULL;
  if(((t_66 != NULL) && (t_66 != t)))
    _fail(t);
  else
    t_66 = t;
  if(match_cons(t, sym__2))
    {
      if(((a_67 != NULL) && (a_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_67 = ATgetArgument(t, 0);
      if(((b_67 != NULL) && (b_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(t_66));
  if(((z_66 != NULL) && (z_66 != t)))
    _fail(t);
  else
    z_66 = t;
  t = not_null(a_67);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_66 != NULL) && (s_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = term_h_18;
        if(((s_66 != NULL) && (s_66 != t)))
          _fail(t);
        else
          s_66 = t;
      }
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_67), not_null(b_67));
    if(((s_23 != NULL) && (s_23 != t)))
      _fail(t);
    else
      s_23 = t;
    t = SSLsetAnnotations(not_null(s_23), not_null(z_66));
    t = not_null(t_66);
    if(match_cons(t, sym__2))
      {
        if(((v_66 != NULL) && (v_66 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_66 = ATgetArgument(t, 0);
        if(((w_66 != NULL) && (w_66 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_66 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_66));
    if(((u_66 != NULL) && (u_66 != t)))
      _fail(t);
    else
      u_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_66), (ATerm) ATmakeAppl(sym__2, not_null(s_66), not_null(w_66)));
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = SSLsetAnnotations(not_null(t_23), not_null(u_66));
    if(((y_66 != NULL) && (y_66 != t)))
      _fail(t);
    else
      y_66 = t;
    if(match_cons(t, sym__2))
      {
        if(((c_68 != NULL) && (c_68 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_68 = ATgetArgument(t, 0);
        if(((d_68 != NULL) && (d_68 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33 = NULL,e_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,v_23 = NULL;
          t = SSLgetAnnotations(not_null(y_66));
          a_33 = t;
          t = not_null(c_68);
          t = fetch_1_0(a_4, t);
          e_33 = t;
          t = not_null(d_68);
          if(match_cons(t, sym__2))
            {
              l_33 = ATgetArgument(t, 0);
              m_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_6(b_4, l_33, m_33, t);
          k_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_33, k_33);
          v_23 = t;
          t = SSLsetAnnotations(v_23, a_33);
          ;
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          {
            ATerm w_33 = NULL,i_34 = NULL,m_34 = NULL,n_34 = NULL,w_23 = NULL;
            t = SSLgetAnnotations(not_null(y_66));
            w_33 = t;
            t = not_null(d_68);
            if(match_cons(t, sym__2))
              {
                m_34 = ATgetArgument(t, 0);
                n_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_6(c_4, m_34, n_34, t);
            i_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_68), i_34);
            w_23 = t;
            t = SSLsetAnnotations(w_23, w_33);
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
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  k_68 = t;
  t = dtime_0_0(t);
  t = k_68;
  t = u_102(t);
  j_68 = t;
  t = dtime_0_0(t);
  g_68 = t;
  t = j_68;
  if(match_cons(t, sym__2))
    {
      h_68 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_68), (ATerm) ATmakeAppl(sym_Runtime_1, g_68)), i_68);
  return(t);
}
ATerm y_68 (ATerm s_68, ATerm t)
{
  t = SSL_fclose(s_68);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  w_68 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_68 = ATgetArgument(t, 0);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_68);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = y_68(w_68, t);
          }
      }
    }
  else
    {
      t = y_68(w_68, t);
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
  ATerm z_68 = NULL;
  t = SSL_fopen(h_50, i_50);
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_68);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_69 = NULL;
  t = SSL_stdin_stream();
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_69 = NULL;
  t = SSL_stdout_stream();
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_69 = NULL;
  t = SSL_stderr_stream();
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_69);
  return(t);
}
ATerm j_70 (ATerm i_69, ATerm t)
{
  ATerm j_69 = NULL;
  t = SSL_explode_term(i_69);
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
          {
            j_69 = ATgetFirst((ATermList) n_18);
            {
              ATerm o_18 = (ATerm) ATgetNext((ATermList) n_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_69;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_70 (ATerm m_69, ATerm n_69, ATerm o_69, ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,u_69 = NULL,h_24 = NULL;
  t = SSLgetAnnotations(o_69);
  r_69 = t;
  t = m_69;
  if(match_cons(t, sym_Path_1))
    {
      u_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_69, n_69);
  h_24 = t;
  t = SSLsetAnnotations(h_24, r_69);
  if(match_cons(t, sym__2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(p_69, q_69, t);
  return(t);
}
ATerm l_70 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,e_70 = NULL,i_24 = NULL;
  t = SSLgetAnnotations(y_69);
  b_70 = t;
  t = SSL_is_string(w_69);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_70, x_69);
  i_24 = t;
  t = SSLsetAnnotations(i_24, b_70);
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(z_69, a_70, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      ATerm r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  g_70 = t;
  if(match_cons(t, sym__2))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
      {
        ATerm s_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_70(g_70, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = s_18;
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_70(h_70, i_70, g_70, t);
                  ;
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = v_18;
                  t = l_70(h_70, i_70, g_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_70(g_70, t);
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_70 = NULL;
      p_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_70, term_a_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = debug_1_0(d_4, t);
      _fail(t);
    }
  n_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(o_70, t);
  m_70 = t;
  t = n_70;
  t = fclose_0_0(t);
  t = m_70;
  return(t);
}
ATerm fetch_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm p_71 (ATerm t)
  {
    ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
    m_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_71 = ATgetFirst((ATermList) t);
        o_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_35 = NULL,b_36 = NULL,o_24 = NULL;
          t = SSLgetAnnotations(m_71);
          r_35 = t;
          t = n_71;
          t = l_87(t);
          b_36 = t;
          t = (ATerm) ATinsert(CheckATermList(o_71), b_36);
          o_24 = t;
          t = SSLsetAnnotations(o_24, r_35);
          ;
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm q_38 = NULL,t_38 = NULL,q_24 = NULL;
            t = SSLgetAnnotations(m_71);
            q_38 = t;
            t = o_71;
            t = p_71(t);
            t_38 = t;
            t = (ATerm) ATinsert(CheckATermList(t_38), n_71);
            q_24 = t;
            t = SSLsetAnnotations(q_24, q_38);
          }
        }
    }
    return(t);
  }
  t = p_71(t);
  return(t);
}
ATerm p_6 (ATerm v_44, ATerm w_44, ATerm t)
{
  t = SSL_strcat(v_44, w_44);
  return(t);
}
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  s_71 = t;
  t = q_99(t);
  t_71 = t;
  t = term_a_7;
  u_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_71), t_71);
  v_71 = t;
  t = SSL_printnl(u_71, v_71);
  t = s_71;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_72 = NULL;
      c_72 = t;
      t = SSL_is_string(c_72);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
              ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
              i_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_72 = ATgetArgument(t, 0);
                  t = j_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_72 = ATgetArgument(t, 0);
                      t = j_72;
                      {
                        ATerm k_19 = t;
                        int l_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_19);
                          }
                        else
                          {
                            t = k_19;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_72 = NULL,p_72 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_72 = ATgetArgument(t, 0);
                          k_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_72;
                      t = eval_config_0_0(t);
                      o_72 = t;
                      t = k_72;
                      t = eval_config_0_0(t);
                      p_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
                      t = p_6(o_72, p_72, t);
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
  ATerm t_72 = NULL,u_72 = NULL;
  t_72 = t;
  t = term_m_19;
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, t_72);
  t = y_6(u_72, t_72, t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_72 = NULL,w_72 = NULL;
        t = eval_config_0_0(t);
        v_72 = t;
        t = term_m_19;
        w_72 = t;
        t = SSL_table_put(w_72, t_72, v_72);
        t = v_72;
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_73 = NULL;
        t = term_u_19;
        t = get_config_0_0(t);
        c_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_73, term_w_19);
        t = geq_0_0(t);
        t = a_73;
        t = d_101(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = a_73;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  if(match_string(t, "-k"))
    {
      t = f_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_73;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
  g_73 = t;
  t = SSL_string_to_int(g_73);
  h_73 = t;
  t = term_x_19;
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, h_73);
  t = b_7(i_73, h_73, t);
  t = g_73;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  if(match_string(t, "-S"))
    {
      t = k_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_73;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = term_u_19;
  l_73 = t;
  t = term_l_15;
  m_73 = t;
  t = term_b_20;
  t = b_7(l_73, m_73, t);
  t = term_c_20;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
  n_73 = t;
  t = SSL_string_to_int(n_73);
  o_73 = t;
  t = term_u_19;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, o_73);
  t = b_7(p_73, o_73, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_73);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  t = term_f_20;
  q_73 = t;
  t = term_o_6;
  r_73 = t;
  t = term_g_20;
  t = b_7(q_73, r_73, t);
  t = term_h_20;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = Option_3_0(r_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm s_73 = NULL;
  t = term_m_19;
  s_73 = t;
  t = SSL_table_put(s_73, w_54, x_54);
  t = (ATerm) ATmakeAppl(sym__3, term_m_19, w_54, x_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
      t = term_o_6;
      t = d_0(t);
      x_73 = t;
      t = term_p_20;
      y_73 = t;
      t = term_r_20;
      z_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_20, term_r_20, x_73);
      t = z_6(y_73, z_73, x_73, t);
      _fail(t);
    }
  else
    {
      ATerm c_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_73 = ATgetFirst((ATermList) t);
          w_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_73;
      t = a_0(t);
      t = term_o_6;
      t = c_0(t);
      c_74 = t;
      t = (ATerm) ATinsert(CheckATermList(w_73), c_74);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm e_74 = NULL;
  e_74 = t;
  if(match_string(t, "-o"))
    {
      t = e_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_74;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  f_74 = t;
  t = term_s_20;
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, f_74);
  t = b_7(g_74, f_74, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_74);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm z_6 (ATerm u_59, ATerm v_59, ATerm t_59, ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
        t = y_6(u_59, v_59, t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
    j_74 = t;
    t = (ATerm) ATinsert(CheckATermList(j_74), t_59);
    k_74 = t;
    t = SSL_table_put(u_59, v_59, k_74);
    t = i_74;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
      t = term_o_6;
      t = j_0(t);
      v_74 = t;
      t = term_p_20;
      w_74 = t;
      t = term_r_20;
      x_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_20, term_r_20, v_74);
      t = z_6(w_74, x_74, v_74, t);
      _fail(t);
    }
  else
    {
      ATerm b_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_74 = ATgetFirst((ATermList) t);
          s_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_74 = ATgetFirst((ATermList) t);
          u_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_74;
      t = h_0(t);
      t = t_74;
      t = i_0(t);
      b_75 = t;
      t = (ATerm) ATinsert(CheckATermList(u_74), b_75);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm d_75 = NULL;
  d_75 = t;
  if(match_string(t, "-i"))
    {
      t = d_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_75;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  e_75 = t;
  t = term_a_21;
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, e_75);
  t = b_7(f_75, e_75, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_75);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_6;
  t = whoami_0_0(t);
  g_75 = t;
  t = term_a_7;
  i_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_21), g_75);
  j_75 = t;
  t = SSL_printnl(i_75, j_75);
  t = term_f_7;
  h_75 = t;
  t = SSL_exit(h_75);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_47, g_47);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      t = SSL_addr(f_47, g_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_75;
      t = e_93(t);
    }
  else
    {
      ATerm q_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_75 = ATgetFirst((ATermList) t);
          n_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_75;
      t = foldr_2_0(e_93, f_93, t);
      q_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_75, q_75);
      t = f_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(p_43, q_43, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_75 = NULL,l_43 = NULL,m_43 = NULL;
  t = times_0_0(t);
  m_43 = t;
  t = SSL_explode_term(m_43);
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_43;
  t = foldr_2_0(a_5, b_5, t);
  t_75 = t;
  t = SSL_TicksToSeconds(t_75);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  e_76 = t;
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      g_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_76;
        if((f_76 != t))
          {
            _fail(t);
          }
        t = e_76;
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATmakeAppl(sym__2, f_76, g_76);
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_76, g_76);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = SSL_gtr(f_76, g_76);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_76, g_76);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm k_76 = NULL;
  k_76 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_76 = NULL;
        t = term_u_19;
        t = get_config_0_0(t);
        m_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_76, term_f_7);
        t = geq_0_0(t);
        t = k_76;
        t = c_101(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = k_76;
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,r_76 = NULL,s_76 = NULL;
  t = run_time_0_0(t);
  o_76 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  p_76 = t;
  t = term_a_7;
  r_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), o_76), term_n_21), p_76);
  s_76 = t;
  t = SSL_printnl(r_76, s_76);
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), o_76), term_n_21), p_76));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  t_76 = t;
  t = SSL_exit(t_76);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL;
  c_77 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_77;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_77 = ATgetArgument(t, 0);
          {
            ATerm j_46 = NULL,x_24 = NULL;
            t = SSLgetAnnotations(c_77);
            j_46 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_77);
            x_24 = t;
            t = SSLsetAnnotations(x_24, j_46);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_77;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = p_21;
      t = fetch_1_0(e_5, t);
    }
  t = s_103(t);
  return(t);
}
ATerm map_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm s_77 (ATerm t)
  {
    ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
    p_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_77;
      }
    else
      {
        ATerm i_48 = NULL,l_48 = NULL,m_48 = NULL,z_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_77 = ATgetFirst((ATermList) t);
            r_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_77);
        i_48 = t;
        t = q_77;
        t = b_87(t);
        l_48 = t;
        t = r_77;
        t = s_77(t);
        m_48 = t;
        t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
        z_24 = t;
        t = SSLsetAnnotations(z_24, i_48);
      }
    return(t);
  }
  t = s_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_77 = ATgetFirst((ATermList) t);
      w_77 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_78 = NULL,b_78 = NULL;
        ATerm f_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_78)), not_null(b_78));
          return(t);
        }
        t = not_null(w_77);
        t = g_0(t);
        if(((a_78 != NULL) && (a_78 != t)))
          _fail(t);
        else
          a_78 = t;
        t = not_null(v_77);
        t = e_0(t);
        if(((b_78 != NULL) && (b_78 != t)))
          _fail(t);
        else
          b_78 = t;
        t = not_null(w_77);
        t = reverse_acc_2_0(e_0, f_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_6;
      t = g_0(t);
    }
  return(t);
}
ATerm y_6 (ATerm l_61, ATerm m_61, ATerm t)
{
  t = SSL_table_get(l_61, m_61);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,i_25 = NULL;
  h_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_78);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_78);
  i_25 = t;
  t = SSLsetAnnotations(i_25, f_78);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_78 = NULL;
  j_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_78), term_t_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = fetch_1_0(g_5, t);
    }
  t = term_w_21;
  t = echo_0_0(t);
  t = term_p_20;
  d_78 = t;
  t = term_r_20;
  e_78 = t;
  t = term_x_21;
  t = y_6(d_78, e_78, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(i_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_22 = ATgetFirst((ATermList) t);
                ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_78;
          }
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATinsert(ATempty, l_78);
      }
    m_78 = t;
    t = term_h_18;
    n_78 = t;
    t = SSL_printnl(n_78, m_78);
    t = l_78;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  t = term_c_22;
  r_78 = t;
  t = term_o_6;
  s_78 = t;
  t = term_d_22;
  t = b_7(r_78, s_78, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  t = term_c_22;
  v_78 = t;
  t = term_o_6;
  w_78 = t;
  t = term_d_22;
  t = b_7(v_78, w_78, t);
  t = term_g_22;
  t_78 = t;
  t = term_o_6;
  u_78 = t;
  t = term_h_22;
  t = b_7(t_78, u_78, t);
  t = term_j_22;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, m_5, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = m_22;
      t = Option_3_0(n_5, o_5, p_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,a_28 = NULL;
  c_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_78 = ATgetFirst((ATermList) t);
      z_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_79);
  x_78 = t;
  t = y_78;
  t = r_70(t);
  a_79 = t;
  t = z_78;
  t = s_70(t);
  b_79 = t;
  t = (ATerm) ATinsert(CheckATermList(b_79), a_79);
  a_28 = t;
  t = SSLsetAnnotations(a_28, x_78);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,t_79 = NULL,u_79 = NULL,h_28 = NULL;
  if(((l_79 != NULL) && (l_79 != t)))
    _fail(t);
  else
    l_79 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_22;
        t = v_105(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
      }
    t = not_null(l_79);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_79 != NULL) && (q_79 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_79 = ATgetFirst((ATermList) t);
        if(((r_79 != NULL) && (r_79 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(l_79));
    if(((p_79 != NULL) && (p_79 != t)))
      _fail(t);
    else
      p_79 = t;
    t = term_d_21;
    if(((u_79 != NULL) && (u_79 != t)))
      _fail(t);
    else
      u_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(q_79));
    t = b_7(not_null(u_79), not_null(q_79), t);
    t = not_null(r_79);
    {
      ATerm e_80 (ATerm t)
      {
        ATerm u_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_79 = NULL;
                x_79 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_79;
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                t = v_105(t);
                t = Cons_2_0(_id, e_80, t);
              }
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = u_22;
            {
              ATerm a_80 = NULL,b_80 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_80 = ATgetFirst((ATermList) t);
                  b_80 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_80), (ATerm) ATmakeAppl(sym_Undefined_1, a_80));
            }
          }
        return(t);
      }
      t = e_80(t);
      if(((t_79 != NULL) && (t_79 != t)))
        _fail(t);
      else
        t_79 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(t_79)), (ATerm) ATmakeAppl(sym_Program_1, not_null(q_79)));
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = SSLsetAnnotations(not_null(h_28), not_null(p_79));
    }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm q_80 = NULL;
  q_80 = t;
  if(match_string(t, "--help"))
    {
      t = q_80;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_80;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_80;
        }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL;
  t = term_s_21;
  r_80 = t;
  t = term_o_6;
  s_80 = t;
  t = term_z_22;
  t = b_7(r_80, s_80, t);
  t = term_a_23;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
  if(((l_80 != NULL) && (l_80 != t)))
    _fail(t);
  else
    l_80 = t;
  t = term_p_20;
  if(((n_80 != NULL) && (n_80 != t)))
    _fail(t);
  else
    n_80 = t;
  t = term_r_20;
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  t = (ATerm) ATempty;
  if(((p_80 != NULL) && (p_80 != t)))
    _fail(t);
  else
    p_80 = t;
  t = SSL_table_put(not_null(n_80), not_null(o_80), not_null(p_80));
  t = not_null(l_80);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_105(t);
          ;
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_5, t_5, u_5, t);
                ;
                LocalPopChoice(f_23);
              }
            else
              {
                t = e_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
    {
      ATerm g_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_80 = NULL;
          z_80 = t;
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_50 = NULL;
                t = z_80;
                {
                  ATerm k_23 = t;
                  int l_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_23);
                    }
                  else
                    {
                      t = k_23;
                      t = fetch_1_0(v_5, t);
                    }
                  t = z_80;
                  t = default_system_usage_0_0(t);
                  t = term_l_15;
                  p_50 = t;
                  t = SSL_exit(p_50);
                }
                ;
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                {
                  ATerm p_51 = NULL;
                  t = term_c_22;
                  t = get_config_0_0(t);
                  t = z_80;
                  t = default_system_about_0_0(t);
                  t = term_l_15;
                  p_51 = t;
                  t = SSL_exit(p_51);
                }
              }
          }
          ;
          LocalPopChoice(h_23);
        }
      else
        {
          t = g_23;
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_81 = NULL,h_81 = NULL,i_81 = NULL;
                ATerm y_5 (ATerm t)
                {
                  ATerm j_81 = NULL,m_81 = NULL,n_81 = NULL,r_28 = NULL;
                  n_81 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_81 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_81);
                  j_81 = t;
                  t = m_81;
                  if(((j_80 != NULL) && (j_80 != t)))
                    _fail(t);
                  else
                    j_80 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_81);
                  r_28 = t;
                  t = SSLsetAnnotations(r_28, j_81);
                  return(t);
                }
                t = fetch_1_0(y_5, t);
                t = term_a_7;
                if(((h_81 != NULL) && (h_81 != t)))
                  _fail(t);
                else
                  h_81 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_80)), term_p_23);
                if(((i_81 != NULL) && (i_81 != t)))
                  _fail(t);
                else
                  i_81 = t;
                t = SSL_printnl(not_null(h_81), not_null(i_81));
                t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_80)), term_p_23));
                t = default_system_usage_0_0(t);
                t = term_f_7;
                if(((a_81 != NULL) && (a_81 != t)))
                  _fail(t);
                else
                  a_81 = t;
                t = SSL_exit(not_null(a_81));
                ;
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
              }
          }
        }
      if(((k_80 != NULL) && (k_80 != t)))
        _fail(t);
      else
        k_80 = t;
      t = term_p_20;
      if(((m_80 != NULL) && (m_80 != t)))
        _fail(t);
      else
        m_80 = t;
      t = SSL_table_destroy(not_null(m_80));
      t = not_null(k_80);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  t = parse_options_1_0(u_103, t);
  s_81 = t;
  t = term_q_23;
  v_81 = t;
  t = SSL_table_create(v_81);
  t = term_q_23;
  t_81 = t;
  t = term_r_23;
  u_81 = t;
  t = SSL_table_put(t_81, u_81, s_81);
  t = s_81;
  t = w_103(t);
  {
    ATerm u_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_103, t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = u_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = if_verbose2_1_0(g_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  t = term_g_7;
  w_81 = t;
  t = term_o_6;
  x_81 = t;
  t = term_i_7;
  t = b_7(w_81, x_81, t);
  t = term_j_7;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  y_81 = t;
  t = term_d_21;
  t = get_config_0_0(t);
  z_81 = t;
  t = term_a_7;
  a_82 = t;
  t = (ATerm) ATinsert(ATempty, z_81);
  b_82 = t;
  t = SSL_printnl(a_82, b_82);
  t = y_81;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_103(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm e_24 = t;
                int f_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_24);
                  }
                else
                  {
                    t = e_24;
                    {
                      ATerm g_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_6, e_6, f_6, t);
                          ;
                          LocalPopChoice(j_24);
                        }
                      else
                        {
                          t = g_24;
                          {
                            ATerm k_24 = t;
                            int l_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_24);
                              }
                            else
                              {
                                t = k_24;
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
  ATerm b_6 (ATerm t)
  {
    ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
    if(((d_82 != NULL) && (d_82 != t)))
      _fail(t);
    else
      d_82 = t;
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_82 != NULL) && (c_82 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_6, t);
          ;
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          t = term_p_24;
          if(((c_82 != NULL) && (c_82 != t)))
            _fail(t);
          else
            c_82 = t;
        }
      t = not_null(c_82);
      t = ReadFromFile_0_0(t);
      if(((e_82 != NULL) && (e_82 != t)))
        _fail(t);
      else
        e_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_82), not_null(e_82));
      t = apply_strategy_1_0(d_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_5, f_103, a_6, b_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

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
ATerm term_t_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_u_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_e_16;
ATerm term_u_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_q_13;
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
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_u_15);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_15);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_o_6);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_s_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_o_6);
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
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_o_6);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm foldr_3_0 (ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm collect_om_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm);
ATerm z_41 (ATerm m_2, ATerm n_2, ATerm o_2, ATerm);
ATerm Latex2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_67 (ATerm), ATerm);
ATerm BOXENV_args_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm j_6 (ATerm p_16, ATerm);
ATerm listtd_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm latex_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm u_65 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm c_74 (ATerm), ATerm);
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
ATerm k_6 (ATerm a_18, ATerm b_18, ATerm);
ATerm filter_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm SOpt_value_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm y_54 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm);
ATerm x_2 (ATerm);
ATerm l_6 (ATerm n_13, ATerm);
ATerm MkRows_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_74 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm m_6 (ATerm j_13, ATerm);
ATerm n_6 (ATerm s_33, ATerm t_33, ATerm);
ATerm while_not_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm k_65 (ATerm u_63, ATerm v_63, ATerm w_63, ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm Abox2latex_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_67 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm load_latex_table_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm abox2latex_0_0 (ATerm);
ATerm q_6 (ATerm m_36, ATerm n_36, ATerm);
ATerm r_6 (ATerm a_40, ATerm b_40, ATerm);
ATerm t_6 (ATerm f_86 (ATerm), ATerm m_465, ATerm e_40, ATerm);
ATerm s_6 (ATerm w_39, ATerm x_39, ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_89 (ATerm), ATerm);
ATerm p_69 (ATerm j_69, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_6 (ATerm c_40, ATerm);
ATerm v_6 (ATerm o_36, ATerm p_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_71 (ATerm z_69, ATerm);
ATerm b_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm);
ATerm c_71 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm p_6 (ATerm c_31, ATerm d_31, ATerm);
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_87 (ATerm), ATerm);
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
ATerm b_7 (ATerm d_41, ATerm e_41, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_6 (ATerm b_46, ATerm c_46, ATerm a_46, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_6 (ATerm m_33, ATerm n_33, ATerm);
ATerm foldr_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm need_help_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_6 (ATerm s_47, ATerm t_47, ATerm);
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
ATerm Cons_2_0 (ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_92 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm parse_options_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm iowrap_3_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_a_7;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), e_0), term_c_7);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_f_7;
  f_0 = t;
  t = SSL_exit(f_0);
  t = c_0;
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
              t = p_1;
              return(t);
            }
            t = n_1;
            t = at_end_1_0(k_1, t);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = u_1(r_1, t);
          }
      }
    }
  else
    {
      t = u_1(r_1, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_1;
      t = n_79(t);
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
      t = p_79(t);
      b_2 = t;
      t = y_1;
      t = foldr_3_0(n_79, o_79, p_79, t);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, c_2);
      t = o_79(t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL;
      t = r_78(t);
      f_2 = t;
      t = (ATerm) ATinsert(ATempty, f_2);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        ATerm o_1 (ATerm t)
        {
          t = collect_om_2_0(r_78, s_78, t);
          return(t);
        }
        if(((b_0 != NULL) && (b_0 != t)))
          _fail(t);
        else
          b_0 = t;
        t = SSL_explode_term(b_0);
        if(match_cons(t, sym__2))
          {
            ATerm k_8 = ATgetArgument(t, 0);
            if(((a_0 != NULL) && (a_0 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_0;
        t = foldr_3_0(m_1, s_78, o_1, t);
      }
    }
  return(t);
}
ATerm z_41 (ATerm m_2, ATerm n_2, ATerm o_2, ATerm t)
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
                                          t = z_41(n_3, t_3, z_3, t);
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
                                          t = z_41(n_3, t_3, z_3, t);
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
ATerm bottomup_1_0 (ATerm s_67 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(s_67, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = s_67(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_42 = NULL;
      t = term_o_7;
      t = get_config_0_0(t);
      a_42 = t;
      t = (ATerm) ATinsert(ATempty, a_42);
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
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_43;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_43 = ATgetFirst((ATermList) t);
          p_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 = NULL,e_1 = NULL,r_0 = NULL;
            t = SSLgetAnnotations(n_43);
            b_1 = t;
            t = o_43;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_43;
            t = flat_list_0_0(t);
            e_1 = t;
            t = (ATerm) ATinsert(CheckATermList(e_1), o_43);
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
                  t = SSLgetAnnotations(n_43);
                  h_2 = t;
                  t = o_43;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_43;
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
                      t = o_43;
                    }
                  t = (ATerm) ATinsert(CheckATermList(p_43), o_43);
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
                    t = SSLgetAnnotations(n_43);
                    p_3 = t;
                    t = p_43;
                    t = flat_list_0_0(t);
                    u_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_3), o_43);
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
  ATerm v_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_12 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_12) != AT_INT) || (ATgetInt((ATermInt) d_12) != 34)))
        _fail(t);
      v_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_43), term_e_12), term_e_12);
  return(t);
}
ATerm j_6 (ATerm p_16, ATerm t)
{
  ATerm u_43 = NULL;
  t = p_16;
  t = at_suffix_1_0(s_1, t);
  u_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(u_43), term_g_12), term_g_12);
  return(t);
}
ATerm listtd_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm j_44 (ATerm t)
  {
    ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
    t = r_74(t);
    g_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_44;
      }
    else
      {
        ATerm e_4 = NULL,n_4 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_44 = ATgetFirst((ATermList) t);
            i_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_44);
        e_4 = t;
        t = i_44;
        t = j_44(t);
        n_4 = t;
        t = (ATerm) ATinsert(CheckATermList(n_4), h_44);
        d_6 = t;
        t = SSLsetAnnotations(d_6, e_4);
      }
    return(t);
  }
  t = j_44(t);
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
                                      ATerm k_13 = t;
                                      int l_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_11 = NULL;
                                          t = term_q_13;
                                          j_11 = t;
                                          t = SSL_explode_string(j_11);
                                          ;
                                          LocalPopChoice(l_13);
                                        }
                                      else
                                        {
                                          t = k_13;
                                          t = x_7;
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
                                              ATerm l_11 = NULL;
                                              t = term_u_13;
                                              l_11 = t;
                                              t = SSL_explode_string(l_11);
                                              ;
                                              LocalPopChoice(s_13);
                                            }
                                          else
                                            {
                                              t = r_13;
                                              t = x_7;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm v_13 = t;
                                              int z_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_11 = NULL;
                                                  t = term_b_14;
                                                  m_11 = t;
                                                  t = SSL_explode_string(m_11);
                                                  ;
                                                  LocalPopChoice(z_13);
                                                }
                                              else
                                                {
                                                  t = v_13;
                                                  t = x_7;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm c_14 = t;
                                                  int d_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_11 = NULL;
                                                      t = term_e_14;
                                                      n_11 = t;
                                                      t = SSL_explode_string(n_11);
                                                      ;
                                                      LocalPopChoice(d_14);
                                                    }
                                                  else
                                                    {
                                                      t = c_14;
                                                      t = x_7;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm f_14 = t;
                                                      int g_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_11 = NULL;
                                                          t = term_i_14;
                                                          o_11 = t;
                                                          t = SSL_explode_string(o_11);
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
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm j_14 = t;
                                                          int k_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_11 = NULL;
                                                              t = term_n_14;
                                                              q_11 = t;
                                                              t = SSL_explode_string(q_11);
                                                              ;
                                                              LocalPopChoice(k_14);
                                                            }
                                                          else
                                                            {
                                                              t = j_14;
                                                              t = x_7;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm o_14 = t;
                                                              int p_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_11 = NULL;
                                                                  t = term_q_14;
                                                                  u_11 = t;
                                                                  t = SSL_explode_string(u_11);
                                                                  ;
                                                                  LocalPopChoice(p_14);
                                                                }
                                                              else
                                                                {
                                                                  t = o_14;
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
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_45 = NULL,o_45 = NULL;
      h_45 = t;
      t = term_t_14;
      o_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_14, h_45);
      t = y_6(o_45, h_45, t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
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
ATerm remove_trailing_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm o_48 (ATerm t)
  {
    ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
    l_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_48 = ATgetFirst((ATermList) t);
        k_48 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_12 = NULL,c_12 = NULL,f_12 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(l_48);
              c_12 = t;
              t = j_48;
              t = u_65(t);
              f_12 = t;
              t = (ATerm) ATinsert(CheckATermList(k_48), f_12);
              i_6 = t;
              t = SSLsetAnnotations(i_6, c_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_14 = ATgetFirst((ATermList) t);
                  b_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_12;
              t = o_48(t);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = l_48;
            }
        }
      }
    else
      {
        t = l_48;
      }
    return(t);
  }
  t = o_48(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm d_49 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_74(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,z_12 = NULL,f_13 = NULL,x_6 = NULL;
          a_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_49 = ATgetFirst((ATermList) t);
              c_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_49);
          z_12 = t;
          t = c_49;
          t = d_49(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(f_13), b_49);
          x_6 = t;
          t = SSLsetAnnotations(x_6, z_12);
        }
      }
    return(t);
  }
  t = d_49(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  if(match_int(t, 9))
    {
      t = j_49;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = j_49;
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
  ATerm h_49 = NULL,i_49 = NULL;
  t = remove_trailing_1_0(a_2, t);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,e_7 = NULL;
          o_49 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_49 = ATgetFirst((ATermList) t);
              m_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_49);
          k_49 = t;
          t = l_49;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = m_49;
          {
            ATerm i_2 (ATerm t)
            {
              if(((h_49 != NULL) && (h_49 != t)))
                _fail(t);
              else
                h_49 = t;
              return(t);
            }
            t = Cons_2_0(e_2, i_2, t);
            if(((n_49 != NULL) && (n_49 != t)))
              _fail(t);
            else
              n_49 = t;
            t = (ATerm) ATinsert(CheckATermList(n_49), l_49);
            if(((e_7 != NULL) && (e_7 != t)))
              _fail(t);
            else
              e_7 = t;
            t = SSLsetAnnotations(e_7, k_49);
            t = not_null(h_49);
          }
          return(t);
        }
        t = at_suffix_1_0(d_2, t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = SSL_implode_string(i_49);
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
  ATerm u_50 = NULL;
  u_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_15), u_50);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  x_49 = t;
  t = SSL_explode_string(x_49);
  t = reverse_acc_2_0(_id, j_2, t);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_49, (ATerm) ATempty);
  {
    ATerm v_50 (ATerm t)
    {
      ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
      if(match_cons(t, sym__2))
        {
          a_50 = ATgetArgument(t, 0);
          d_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_50;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm h_50 = NULL;
          t = d_50;
          t = LatexComment_0_0(t);
          h_50 = t;
          t = (ATerm) ATinsert(ATempty, h_50);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_50 = ATgetFirst((ATermList) t);
              c_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_50;
          if(match_int(t, 10))
            {
              ATerm g_15 = t;
              int h_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_50 = NULL,m_50 = NULL;
                  t = d_50;
                  t = LatexComment_0_0(t);
                  l_50 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_50, (ATerm) ATempty);
                  t = v_50(t);
                  m_50 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_50), l_50);
                  ;
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                  t = (ATerm) ATmakeAppl(sym__2, c_50, (ATerm) ATinsert(CheckATermList(d_50), b_50));
                  t = v_50(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, c_50, (ATerm) ATinsert(CheckATermList(d_50), b_50));
              t = v_50(t);
            }
        }
      return(t);
    }
    t = v_50(t);
    t = remove_trailing_1_0(l_2, t);
    t = reverse_acc_2_0(_id, p_2, t);
    t = remove_trailing_1_0(q_2, t);
    t = map_1_0(r_2, t);
  }
  return(t);
}
ATerm s_2 (ATerm t)
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
ATerm toh_0_0 (ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL;
  t = filter_1_0(s_2, t);
  o_13 = t;
  t = term_j_15;
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, o_13);
  t = k_6(m_13, o_13, t);
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
  ATerm w_50 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_2, t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = term_f_7;
    }
  w_50 = t;
  t = SSL_int_to_string(w_50);
  return(t);
}
ATerm k_6 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = b_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_18;
    }
  else
    {
      ATerm t_13 = NULL,w_13 = NULL,h_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_51 = ATgetFirst((ATermList) t);
          n_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_18);
      t_13 = t;
      t = n_51;
      {
        ATerm a_14 (ATerm t)
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_13 = NULL;
              x_13 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_13;
              ;
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              {
                ATerm y_13 = NULL;
                t = Cons_2_0(_id, a_14, t);
                y_13 = t;
                t = (ATerm) ATinsert(CheckATermList(y_13), a_18);
              }
            }
          return(t);
        }
        t = a_14(t);
        if(((w_13 != NULL) && (w_13 != t)))
          _fail(t);
        else
          w_13 = t;
        t = (ATerm) ATinsert(CheckATermList(w_13), m_51);
        if(((h_7 != NULL) && (h_7 != t)))
          _fail(t);
        else
          h_7 = t;
        t = SSLsetAnnotations(h_7, t_13);
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_52;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_52 = ATgetFirst((ATermList) t);
          f_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_14 = NULL,l_14 = NULL,m_14 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(d_52);
            h_14 = t;
            t = e_52;
            t = p_80(t);
            l_14 = t;
            t = f_52;
            t = filter_1_0(p_80, t);
            m_14 = t;
            t = (ATerm) ATinsert(CheckATermList(m_14), l_14);
            m_7 = t;
            t = SSLsetAnnotations(m_7, h_14);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = o_15;
            t = f_52;
            t = filter_1_0(p_80, t);
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
  ATerm i_52 = NULL;
  ATerm r_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_2, t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = r_15;
      t = term_u_15;
    }
  i_52 = t;
  t = SSL_int_to_string(i_52);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm j_52 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,r_7 = NULL;
    o_52 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        l_52 = ATgetArgument(t, 0);
        m_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_52);
    k_52 = t;
    t = l_52;
    t = p_65(t);
    n_52 = t;
    t = m_52;
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, n_52, m_52);
    r_7 = t;
    t = SSLsetAnnotations(r_7, k_52);
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = SSL_string_to_int(not_null(j_52));
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
  ATerm p_52 = NULL;
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_2, t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      t = term_u_15;
    }
  p_52 = t;
  t = SSL_int_to_string(p_52);
  return(t);
}
ATerm y_54 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm c_53 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(y_52);
  c_53 = t;
  t = x_52;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_52), w_52);
  u_7 = t;
  t = SSLsetAnnotations(u_7, c_53);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,a_10 = NULL;
  k_54 = t;
  if(match_cons(t, sym_C_2))
    {
      i_54 = ATgetArgument(t, 0);
      j_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_54);
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, i_54, j_54);
  a_10 = t;
  t = SSLsetAnnotations(a_10, h_54);
  return(t);
}
ATerm l_6 (ATerm n_13, ATerm t)
{
  ATerm x_54 (ATerm t)
  {
    ATerm z_54 (ATerm g_53, ATerm h_53, ATerm i_53, ATerm t)
    {
      ATerm m_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,z_9 = NULL,y_9 = NULL;
      t = SSLgetAnnotations(i_53);
      m_53 = t;
      t = g_53;
      if(match_cons(t, sym_C_2))
        {
          r_53 = ATgetArgument(t, 0);
          s_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_53);
      q_53 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, r_53, s_53);
      y_9 = t;
      t = SSLsetAnnotations(y_9, q_53);
      t_53 = t;
      t = h_53;
      t = Cons_2_0(_id, x_54, t);
      p_53 = t;
      t = (ATerm) ATinsert(CheckATermList(p_53), t_53);
      z_9 = t;
      t = SSLsetAnnotations(z_9, m_53);
      return(t);
    }
    ATerm a_55 (ATerm w_53, ATerm x_53, ATerm y_53, ATerm t)
    {
      ATerm c_54 = NULL,f_54 = NULL,b_10 = NULL;
      t = SSLgetAnnotations(y_53);
      c_54 = t;
      t = x_53;
      t = Cons_2_0(x_2, x_54, t);
      f_54 = t;
      t = (ATerm) ATinsert(CheckATermList(f_54), w_53);
      b_10 = t;
      t = SSLsetAnnotations(b_10, c_54);
      return(t);
    }
    ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
    l_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_54 = ATgetFirst((ATermList) t);
            n_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_54 = ATgetFirst((ATermList) t);
            p_54 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_54(m_54, n_54, l_54, t);
                  ;
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
                        t = z_54(m_54, n_54, l_54, t);
                        ;
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm b_16 = t;
                          int c_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_55(m_54, n_54, l_54, t);
                              ;
                              LocalPopChoice(c_16);
                            }
                          else
                            {
                              t = b_16;
                              {
                                ATerm w_54 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
                                t = x_54(t);
                                w_54 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(w_54), term_e_16), m_54);
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
            ATerm f_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_54(m_54, n_54, l_54, t);
                ;
                LocalPopChoice(h_16);
              }
            else
              {
                t = f_16;
                {
                  ATerm i_16 = t;
                  int j_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_54(m_54, n_54, l_54, t);
                      ;
                      LocalPopChoice(j_16);
                    }
                  else
                    {
                      t = i_16;
                      t = a_55(m_54, n_54, l_54, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = n_13;
  t = x_54(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  if(match_cons(t, sym_LBL_2))
    {
      m_55 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
      {
        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
        t = n_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(y_14, t);
        t = n_55;
        if(match_cons(t, sym_R_2))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            x_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_6(x_14, t);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, m_55, w_14);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm m_16 = ATgetArgument(t, 0);
          n_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_55;
      t = l_6(n_55, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  ATerm n_56 (ATerm t)
  {
    ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
    k_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_56 = ATgetFirst((ATermList) t);
        m_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_15 = NULL,i_10 = NULL;
          t = SSLgetAnnotations(k_56);
          f_15 = t;
          t = m_56;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(m_56), l_56);
          i_10 = t;
          t = SSLsetAnnotations(i_10, f_15);
          t = j_74(t);
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          {
            ATerm p_15 = NULL,s_15 = NULL,n_10 = NULL;
            t = SSLgetAnnotations(k_56);
            p_15 = t;
            t = m_56;
            t = n_56(t);
            s_15 = t;
            t = (ATerm) ATinsert(CheckATermList(s_15), l_56);
            n_10 = t;
            t = SSLsetAnnotations(n_10, p_15);
          }
        }
    }
    return(t);
  }
  t = n_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm f_57 (ATerm t)
  {
    ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
    e_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_57 = ATgetFirst((ATermList) t);
        d_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_16 = NULL,g_16 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(e_57);
          d_16 = t;
          t = d_57;
          t = f_57(t);
          g_16 = t;
          t = (ATerm) ATinsert(CheckATermList(g_16), c_57);
          t_10 = t;
          t = SSLsetAnnotations(t_10, d_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_57;
        t = y_73(t);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  i_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_57;
    }
  else
    {
      ATerm y_2 (ATerm t)
      {
        t = not_null(k_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_57 != NULL) && (j_57 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_57 = ATgetFirst((ATermList) t);
          if(((k_57 != NULL) && (k_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_57;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm i_58 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      i_58 = ATgetArgument(t, 0);
      {
        ATerm n_16 = NULL,o_16 = NULL,q_16 = NULL;
        t = i_58;
        t = Hspace_0_0(t);
        q_16 = t;
        t = SSL_string_to_int(q_16);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_j_15);
        t = copy_0_0(t);
        n_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_16), term_t_16);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          i_58 = ATgetArgument(t, 0);
          {
            ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
            t = i_58;
            t = Hspace_0_0(t);
            g_17 = t;
            t = SSL_string_to_int(g_17);
            f_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_17, term_j_15);
            t = copy_0_0(t);
            e_17 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, e_17), term_u_16);
          }
        }
      else
        {
          ATerm p_17 = NULL,q_17 = NULL,t_17 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              i_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_58;
          t = Hspace_0_0(t);
          t_17 = t;
          t = SSL_string_to_int(t_17);
          q_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_17, term_j_15);
          t = copy_0_0(t);
          p_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, p_17), term_v_16);
        }
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_16);
  return(t);
}
ATerm m_6 (ATerm j_13, ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  t = j_13;
  t = map_1_0(z_2, t);
  x_17 = t;
  t = (ATerm) ATinsert(ATempty, term_e_16);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_e_16), x_17);
  t = k_6(w_17, x_17, t);
  t = concat_0_0(t);
  t = at_last_1_0(a_3, t);
  return(t);
}
ATerm n_6 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(s_33, t_33);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = SSL_subtr(s_33, t_33);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm m_58 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_67(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = j_67(t);
        t = m_58(t);
      }
    return(t);
  }
  t = m_58(t);
  return(t);
}
ATerm for_3_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  t = l_67(t);
  t = while_not_2_0(m_67, n_67, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_58, q_58, (ATerm) ATempty);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm r_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if(((ATgetType(b_17) != AT_INT) || (ATgetInt((ATermInt) b_17) != 0)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
      }
      r_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_58;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  if(match_cons(t, sym__3))
    {
      s_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
      u_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_58, term_f_7);
  t = geq_0_0(t);
  t = term_f_7;
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_58, term_f_7);
  t = n_6(s_58, w_58, t);
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_58, t_58, (ATerm) ATinsert(CheckATermList(u_58), t_58));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm d_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_3, c_3, d_3, t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = d_17;
      {
        ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,g_18 = NULL,p_13 = NULL;
        e_59 = t;
        if(match_cons(t, sym__2))
          {
            f_59 = ATgetArgument(t, 0);
            g_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_59);
        g_18 = t;
        t = f_59;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_59, g_59);
        p_13 = t;
        t = SSLsetAnnotations(p_13, g_18);
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
  ATerm i_17 = t;
  if((PushChoice() == 0))
    {
      ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_18 = NULL;
      t_60 = t;
      if(match_cons(t, sym_R_2))
        {
          r_60 = ATgetArgument(t, 0);
          s_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_60);
      q_60 = t;
      t = s_60;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, r_60, s_60);
      u_18 = t;
      t = SSLsetAnnotations(u_18, q_60);
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
  ATerm n_59 = NULL;
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_59, (ATerm) ATempty);
  {
    ATerm u_60 (ATerm t)
    {
      ATerm o_59 = NULL,p_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
      if(match_cons(t, sym__2))
        {
          r_59 = ATgetArgument(t, 0);
          u_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_59;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm z_59 = NULL;
          t = u_59;
          t = reverse_acc_2_0(_id, e_3, t);
          z_59 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, z_59));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_59 = ATgetFirst((ATermList) t);
              t_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_59;
          if(match_cons(t, sym_R_2))
            {
              o_59 = ATgetArgument(t, 0);
              p_59 = ATgetArgument(t, 1);
              {
                ATerm j_17 = t;
                int k_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_60 = NULL,g_60 = NULL;
                    t = u_59;
                    t = reverse_acc_2_0(_id, f_3, t);
                    f_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_59, (ATerm) ATempty);
                    t = u_60(t);
                    g_60 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(g_60), (ATerm) ATmakeAppl(sym_R_2, o_59, p_59)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_60));
                    ;
                    LocalPopChoice(k_17);
                  }
                else
                  {
                    t = j_17;
                    t = (ATerm) ATmakeAppl(sym__2, t_59, (ATerm) ATinsert(CheckATermList(u_59), s_59));
                    t = u_60(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, t_59, (ATerm) ATinsert(CheckATermList(u_59), s_59));
              t = u_60(t);
            }
        }
      return(t);
    }
    t = u_60(t);
    t = filter_1_0(j_3, t);
  }
  return(t);
}
ATerm k_65 (ATerm u_63, ATerm v_63, ATerm w_63, ATerm t)
{
  t = u_63;
  if(match_cons(t, sym_KW_0))
    {
      t = u_63;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = u_63;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = u_63;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = u_63;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, u_63, v_63);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm l_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_17;
    }
  return(t);
}
ATerm m_3 (ATerm t)
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
ATerm o_3 (ATerm t)
{
  ATerm f_65 = NULL;
  if(match_cons(t, sym_S_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_65;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  f_64 = t;
  if(match_cons(t, sym_REF_2))
    {
      g_64 = ATgetArgument(t, 0);
      e_64 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, g_64, e_64);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          g_64 = ATgetArgument(t, 0);
          e_64 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, g_64, e_64);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              g_64 = ATgetArgument(t, 0);
              e_64 = ATgetArgument(t, 1);
              {
                ATerm h_22 = NULL;
                t = f_64;
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(g_64);
                      h_22 = t;
                      ;
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      {
                        ATerm r_17 = t;
                        int s_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_22 = NULL,j_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,x_18 = NULL;
                            t = SSL_explode_string(g_64);
                            q_22 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                n_22 = ATgetFirst((ATermList) t);
                                p_22 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(q_22);
                            j_22 = t;
                            t = n_22;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(p_22), n_22);
                            x_18 = t;
                            t = SSLsetAnnotations(x_18, j_22);
                            t = (ATerm) ATinsert(ATempty, term_u_17);
                            i_22 = t;
                            t = SSL_implode_string(i_22);
                            h_22 = t;
                            ;
                            LocalPopChoice(s_17);
                          }
                        else
                          {
                            t = r_17;
                            t = g_64;
                            h_22 = t;
                          }
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_LBOX_2, h_22, e_64);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  g_64 = ATgetArgument(t, 0);
                  e_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, g_64, e_64);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      g_64 = ATgetArgument(t, 0);
                      e_64 = ATgetArgument(t, 1);
                      a_64 = ATgetArgument(t, 2);
                      {
                        ATerm i_23 = NULL,o_23 = NULL,p_23 = NULL,w_23 = NULL,x_23 = NULL,b_24 = NULL,c_24 = NULL,g_24 = NULL,o_24 = NULL;
                        t = a_64;
                        t = construct_rows_0_0(t);
                        p_23 = t;
                        t = e_64;
                        t = Vspace_0_0(t);
                        g_24 = t;
                        t = SSL_string_to_int(g_24);
                        i_23 = t;
                        t = (ATerm) ATmakeAppl(sym__2, i_23, term_w_16);
                        t = copy_0_0(t);
                        b_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATinsert(ATinsert(ATempty, term_e_15), term_w_16));
                        t = conc_0_0(t);
                        w_23 = t;
                        t = g_64;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            c_24 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_6(c_24, t);
                        o_23 = t;
                        t = p_23;
                        t = map_1_0(MkRows_0_0, t);
                        o_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_23, o_24);
                        t = k_6(w_23, o_24, t);
                        x_23 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, o_23, x_23);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          g_64 = ATgetArgument(t, 0);
                          e_64 = ATgetArgument(t, 1);
                          {
                            ATerm n_64 = NULL,o_64 = NULL,q_64 = NULL,s_64 = NULL,s_24 = NULL,t_24 = NULL;
                            t = g_64;
                            t = Hspace_0_0(t);
                            n_64 = t;
                            t = g_64;
                            t = Vspace_0_0(t);
                            o_64 = t;
                            t = g_64;
                            t = Ispace_0_0(t);
                            q_64 = t;
                            t = e_64;
                            t = filter_1_0(k_3, t);
                            t_24 = t;
                            t = term_v_17;
                            s_24 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_v_17, t_24);
                            t = k_6(s_24, t_24, t);
                            s_64 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, n_64, o_64, q_64, s_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              g_64 = ATgetArgument(t, 0);
                              e_64 = ATgetArgument(t, 1);
                              {
                                ATerm t_64 = NULL,v_64 = NULL,x_64 = NULL,w_24 = NULL,x_24 = NULL;
                                t = g_64;
                                t = Vspace_0_0(t);
                                t_64 = t;
                                t = g_64;
                                t = Ispace_0_0(t);
                                v_64 = t;
                                t = e_64;
                                t = filter_1_0(m_3, t);
                                x_24 = t;
                                t = term_y_17;
                                w_24 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_y_17, x_24);
                                t = k_6(w_24, x_24, t);
                                x_64 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, t_64, v_64, x_64);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  g_64 = ATgetArgument(t, 0);
                                  e_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_64 = NULL,b_65 = NULL;
                                    t = g_64;
                                    t = Hspace_0_0(t);
                                    z_64 = t;
                                    t = e_64;
                                    t = toh_0_0(t);
                                    b_65 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, z_64, b_65);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      g_64 = ATgetArgument(t, 0);
                                      e_64 = ATgetArgument(t, 1);
                                      t = g_64;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          d_64 = ATgetArgument(t, 0);
                                          t = d_64;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              b_64 = ATgetFirst((ATermList) t);
                                              c_64 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm z_17 = t;
                                                int c_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm w_25 = NULL,d_28 = NULL,e_28 = NULL;
                                                    t = b_64;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        d_28 = ATgetArgument(t, 0);
                                                        e_28 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm d_18 = t;
                                                      int e_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_29 = NULL,y_18 = NULL;
                                                          t = SSLgetAnnotations(b_64);
                                                          f_29 = t;
                                                          t = d_28;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = e_28;
                                                          w_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, d_28, e_28);
                                                          y_18 = t;
                                                          t = SSLsetAnnotations(y_18, f_29);
                                                          ;
                                                          LocalPopChoice(e_18);
                                                        }
                                                      else
                                                        {
                                                          t = d_18;
                                                          {
                                                            ATerm f_18 = t;
                                                            int h_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_29 = NULL,o_19 = NULL;
                                                                t = SSLgetAnnotations(b_64);
                                                                x_29 = t;
                                                                t = d_28;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = e_28;
                                                                w_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, d_28, e_28);
                                                                o_19 = t;
                                                                t = SSLsetAnnotations(o_19, x_29);
                                                                ;
                                                                LocalPopChoice(h_18);
                                                              }
                                                            else
                                                              {
                                                                t = f_18;
                                                                {
                                                                  ATerm i_18 = t;
                                                                  int j_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm r_30 = NULL,p_19 = NULL;
                                                                      t = SSLgetAnnotations(b_64);
                                                                      r_30 = t;
                                                                      t = d_28;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = e_28;
                                                                      w_25 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, d_28, e_28);
                                                                      p_19 = t;
                                                                      t = SSLsetAnnotations(p_19, r_30);
                                                                      ;
                                                                      LocalPopChoice(j_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_18;
                                                                      {
                                                                        ATerm k_18 = t;
                                                                        int l_18 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm q_31 = NULL,q_19 = NULL;
                                                                            t = SSLgetAnnotations(b_64);
                                                                            q_31 = t;
                                                                            t = d_28;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = e_28;
                                                                            w_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, d_28, e_28);
                                                                            q_19 = t;
                                                                            t = SSLsetAnnotations(q_19, q_31);
                                                                            ;
                                                                            LocalPopChoice(l_18);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_18;
                                                                            {
                                                                              ATerm e_32 = NULL,t_19 = NULL;
                                                                              t = SSLgetAnnotations(b_64);
                                                                              e_32 = t;
                                                                              t = d_28;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, d_28, e_28);
                                                                              t_19 = t;
                                                                              t = SSLsetAnnotations(t_19, e_32);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, e_28);
                                                                              w_25 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_BOXFONT_2, w_25, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, c_64), e_64));
                                                    }
                                                    ;
                                                    LocalPopChoice(c_18);
                                                  }
                                                else
                                                  {
                                                    t = z_17;
                                                    t = k_65(g_64, e_64, f_64, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = e_64;
                                                }
                                              else
                                                {
                                                  t = k_65(g_64, e_64, f_64, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = k_65(g_64, e_64, f_64, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          g_64 = ATgetArgument(t, 0);
                                          e_64 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_65 = NULL;
                                            t = g_64;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = e_64;
                                            t = map_1_0(o_3, t);
                                            e_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, e_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              g_64 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = g_64;
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
ATerm topdown_1_0 (ATerm r_67 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = topdown_1_0(r_67, t);
    return(t);
  }
  t = r_67(t);
  t = SRTS_all(q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_66 = ATgetFirst((ATermList) t);
      {
        ATerm m_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
          {
            b_66 = ATgetFirst((ATermList) m_18);
            {
              ATerm n_18 = (ATerm) ATgetNext((ATermList) m_18);
              if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
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
  c_66 = t;
  t = SSL_table_put(c_66, a_66, b_66);
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, a_66, b_66);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL;
  y_65 = t;
  t = term_t_14;
  z_65 = t;
  t = SSL_table_create(z_65);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_7;
        t = get_config_0_0(t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(r_3, t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
      }
    t = y_65;
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  t = SSL_is_string(t_66);
  return(t);
}
ATerm abox2latex_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,g_20 = NULL;
  o_66 = t;
  if(match_cons(t, sym__2))
    {
      i_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_66);
  h_66 = t;
  t = j_66;
  t = load_latex_table_0_0(t);
  t = topdown_1_0(v_3, t);
  m_66 = t;
  t = BOXENV_args_0_0(t);
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym_BOXENV_2, l_66, m_66);
  t = bottomup_1_0(w_3, t);
  t = collect_om_2_0(x_3, conc_0_0, t);
  n_66 = t;
  t = SSL_concat_strings(n_66);
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_66, k_66);
  g_20 = t;
  t = SSLsetAnnotations(g_20, h_66);
  return(t);
}
ATerm q_6 (ATerm m_36, ATerm n_36, ATerm t)
{
  ATerm u_66 = NULL;
  t = SSL_fputc(m_36, n_36);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_66);
  return(t);
}
ATerm r_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm v_66 = NULL;
  t = SSL_write_term_to_stream_text(a_40, b_40);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_66);
  return(t);
}
ATerm t_6 (ATerm f_86 (ATerm), ATerm m_465, ATerm e_40, ATerm t)
{
  ATerm w_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_465, term_v_18);
  t = open_stream_0_0(t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_66, e_40);
  t = f_86(t);
  t = fclose_0_0(t);
  t = e_40;
  return(t);
}
ATerm s_6 (ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm x_66 = NULL;
  t = SSL_write_term_to_stream_baf(w_39, x_39);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_66);
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
  ATerm h_33 = NULL,i_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if(match_cons(w_18, sym_Stream_1))
        {
          h_33 = ATgetArgument(w_18, 0);
        }
      else
        _fail(t);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(h_33, i_33, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm g_34 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(match_cons(z_18, sym_Stream_1))
        {
          l_34 = ATgetArgument(z_18, 0);
        }
      else
        _fail(t);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(l_34, m_34, t);
  g_34 = t;
  t = term_a_19;
  i_34 = t;
  t = g_34;
  if(match_cons(t, sym_Stream_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, g_34);
  t = q_6(i_34, k_34, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,h_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,t_67 = NULL,t_68 = NULL,u_68 = NULL,m_20 = NULL,i_20 = NULL;
  c_67 = t;
  if(match_cons(t, sym__2))
    {
      p_67 = ATgetArgument(t, 0);
      q_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_67);
  o_67 = t;
  t = p_67;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_67 != NULL) && (b_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = term_d_19;
        b_67 = t;
      }
    if(((t_67 != NULL) && (t_67 != t)))
      _fail(t);
    else
      t_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_67, q_67);
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    t = SSLsetAnnotations(i_20, o_67);
    t = c_67;
    if(match_cons(t, sym__2))
      {
        if(((e_67 != NULL) && (e_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_67 = ATgetArgument(t, 0);
        if(((f_67 != NULL) && (f_67 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          f_67 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_67);
    if(((d_67 != NULL) && (d_67 != t)))
      _fail(t);
    else
      d_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_67, (ATerm) ATmakeAppl(sym__2, not_null(b_67), f_67));
    if(((m_20 != NULL) && (m_20 != t)))
      _fail(t);
    else
      m_20 = t;
    t = SSLsetAnnotations(m_20, d_67);
    if(((h_67 != NULL) && (h_67 != t)))
      _fail(t);
    else
      h_67 = t;
    if(match_cons(t, sym__2))
      {
        if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_68 = ATgetArgument(t, 0);
        if(((u_68 != NULL) && (u_68 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          u_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,w_32 = NULL,n_20 = NULL;
          t = SSLgetAnnotations(h_67);
          n_32 = t;
          t = t_68;
          t = fetch_1_0(a_4, t);
          s_32 = t;
          t = u_68;
          if(match_cons(t, sym__2))
            {
              u_32 = ATgetArgument(t, 0);
              w_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_6(b_4, u_32, w_32, t);
          t_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_32, t_32);
          n_20 = t;
          t = SSLsetAnnotations(n_20, n_32);
          ;
          LocalPopChoice(f_19);
        }
      else
        {
          t = e_19;
          {
            ATerm u_33 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,q_20 = NULL;
            t = SSLgetAnnotations(h_67);
            u_33 = t;
            t = u_68;
            if(match_cons(t, sym__2))
              {
                e_34 = ATgetArgument(t, 0);
                f_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_6(c_4, e_34, f_34, t);
            d_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_68, d_34);
            q_20 = t;
            t = SSLsetAnnotations(q_20, u_33);
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
ATerm apply_strategy_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  b_69 = t;
  t = dtime_0_0(t);
  t = b_69;
  t = h_89(t);
  a_69 = t;
  t = dtime_0_0(t);
  x_68 = t;
  t = a_69;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_68), (ATerm) ATmakeAppl(sym_Runtime_1, x_68)), z_68);
  return(t);
}
ATerm p_69 (ATerm j_69, ATerm t)
{
  t = SSL_fclose(j_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  n_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_69 = ATgetArgument(t, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_69);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = p_69(n_69, t);
          }
      }
    }
  else
    {
      t = p_69(n_69, t);
    }
  return(t);
}
ATerm u_6 (ATerm c_40, ATerm t)
{
  t = SSL_read_term_from_stream(c_40);
  return(t);
}
ATerm v_6 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm q_69 = NULL;
  t = SSL_fopen(o_36, p_36);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_69 = NULL;
  t = SSL_stdin_stream();
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_69 = NULL;
  t = SSL_stdout_stream();
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_69 = NULL;
  t = SSL_stderr_stream();
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_69);
  return(t);
}
ATerm a_71 (ATerm z_69, ATerm t)
{
  ATerm a_70 = NULL;
  t = SSL_explode_term(z_69);
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            a_70 = ATgetFirst((ATermList) j_19);
            {
              ATerm k_19 = (ATerm) ATgetNext((ATermList) j_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,l_70 = NULL,x_20 = NULL;
  t = SSLgetAnnotations(f_70);
  i_70 = t;
  t = d_70;
  if(match_cons(t, sym_Path_1))
    {
      l_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_70, e_70);
  x_20 = t;
  t = SSLsetAnnotations(x_20, i_70);
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
ATerm c_71 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,v_70 = NULL,y_20 = NULL;
  t = SSLgetAnnotations(p_70);
  s_70 = t;
  t = SSL_is_string(n_70);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_70, o_70);
  y_20 = t;
  t = SSLsetAnnotations(y_20, s_70);
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(q_70, r_70, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      ATerm m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_70 = t;
  if(match_cons(t, sym__2))
    {
      y_70 = ATgetArgument(t, 0);
      z_70 = ATgetArgument(t, 1);
      {
        ATerm n_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_71(x_70, t);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = n_19;
            {
              ATerm s_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_71(y_70, z_70, x_70, t);
                  ;
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = s_19;
                  t = c_71(y_70, z_70, x_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_71(x_70, t);
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_71 = NULL;
      g_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_71, term_y_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      t = debug_1_0(d_4, t);
      _fail(t);
    }
  e_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(f_71, t);
  d_71 = t;
  t = e_71;
  t = fclose_0_0(t);
  t = d_71;
  return(t);
}
ATerm fetch_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm e_72 (ATerm t)
  {
    ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
    b_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_72 = ATgetFirst((ATermList) t);
        d_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_35 = NULL,v_35 = NULL,i_21 = NULL;
          t = SSLgetAnnotations(b_72);
          l_35 = t;
          t = c_72;
          t = s_73(t);
          v_35 = t;
          t = (ATerm) ATinsert(CheckATermList(d_72), v_35);
          i_21 = t;
          t = SSLsetAnnotations(i_21, l_35);
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm j_36 = NULL,q_36 = NULL,j_21 = NULL;
            t = SSLgetAnnotations(b_72);
            j_36 = t;
            t = d_72;
            t = e_72(t);
            q_36 = t;
            t = (ATerm) ATinsert(CheckATermList(q_36), c_72);
            j_21 = t;
            t = SSLsetAnnotations(j_21, j_36);
          }
        }
    }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm p_6 (ATerm c_31, ATerm d_31, ATerm t)
{
  t = SSL_strcat(c_31, d_31);
  return(t);
}
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  h_72 = t;
  t = d_86(t);
  i_72 = t;
  t = term_a_7;
  j_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_72), i_72);
  k_72 = t;
  t = SSL_printnl(j_72, k_72);
  t = h_72;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_72 = NULL;
      r_72 = t;
      t = SSL_is_string(r_72);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm h_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = h_20;
            {
              ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
              x_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_72 = ATgetArgument(t, 0);
                  t = y_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_72 = ATgetArgument(t, 0);
                      t = y_72;
                      {
                        ATerm k_20 = t;
                        int l_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_20);
                          }
                        else
                          {
                            t = k_20;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_73 = NULL,f_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_72 = ATgetArgument(t, 0);
                          z_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_72;
                      t = eval_config_0_0(t);
                      d_73 = t;
                      t = z_72;
                      t = eval_config_0_0(t);
                      f_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_73, f_73);
                      t = p_6(d_73, f_73, t);
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
  ATerm m_73 = NULL,n_73 = NULL;
  m_73 = t;
  t = term_o_20;
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, m_73);
  t = y_6(n_73, m_73, t);
  {
    ATerm p_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_73 = NULL,p_73 = NULL;
        t = eval_config_0_0(t);
        o_73 = t;
        t = term_o_20;
        p_73 = t;
        t = SSL_table_put(p_73, m_73, o_73);
        t = o_73;
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = p_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_73 = NULL;
        t = term_u_20;
        t = get_config_0_0(t);
        x_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_73, term_v_20);
        t = geq_0_0(t);
        t = v_73;
        t = q_87(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = v_73;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm e_74 = NULL;
  e_74 = t;
  if(match_string(t, "-k"))
    {
      t = e_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_74;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  t = SSL_string_to_int(f_74);
  g_74 = t;
  t = term_w_20;
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, g_74);
  t = b_7(h_74, g_74, t);
  t = f_74;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm l_74 = NULL;
  l_74 = t;
  if(match_string(t, "-S"))
    {
      t = l_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_74;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL;
  t = term_u_20;
  m_74 = t;
  t = term_u_15;
  n_74 = t;
  t = term_a_21;
  t = b_7(m_74, n_74, t);
  t = term_b_21;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_c_21;
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
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  t = SSL_string_to_int(o_74);
  p_74 = t;
  t = term_u_20;
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, p_74);
  t = b_7(q_74, p_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_74);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_d_21;
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
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_e_21;
  t_74 = t;
  t = term_o_6;
  u_74 = t;
  t = term_f_21;
  t = b_7(t_74, u_74, t);
  t = term_g_21;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = Option_3_0(r_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm v_74 = NULL;
  t = term_o_20;
  v_74 = t;
  t = SSL_table_put(v_74, d_41, e_41);
  t = (ATerm) ATmakeAppl(sym__3, term_o_20, d_41, e_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
      t = term_o_6;
      t = h_0(t);
      a_75 = t;
      t = term_q_21;
      b_75 = t;
      t = term_s_21;
      c_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_21, term_s_21, a_75);
      t = z_6(b_75, c_75, a_75, t);
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
      t = d_0(t);
      t = term_o_6;
      t = g_0(t);
      f_75 = t;
      t = (ATerm) ATinsert(CheckATermList(z_74), f_75);
    }
  return(t);
}
ATerm u_4 (ATerm t)
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
ATerm v_4 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  i_75 = t;
  t = term_t_21;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, i_75);
  t = b_7(j_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_75);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm z_6 (ATerm b_46, ATerm c_46, ATerm a_46, ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            ATerm y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
        t = y_6(b_46, c_46, t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = (ATerm) ATempty;
      }
    m_75 = t;
    t = (ATerm) ATinsert(CheckATermList(m_75), a_46);
    n_75 = t;
    t = SSL_table_put(b_46, c_46, n_75);
    t = l_75;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
      t = term_o_6;
      t = m_0(t);
      y_75 = t;
      t = term_q_21;
      z_75 = t;
      t = term_s_21;
      a_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_21, term_s_21, y_75);
      t = z_6(z_75, a_76, y_75, t);
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
ATerm x_4 (ATerm t)
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
ATerm y_4 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  h_76 = t;
  t = term_z_21;
  i_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, h_76);
  t = b_7(i_76, h_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_76);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_6;
  t = whoami_0_0(t);
  j_76 = t;
  t = term_a_7;
  l_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_22), j_76);
  m_76 = t;
  t = SSL_printnl(l_76, m_76);
  t = term_f_7;
  k_76 = t;
  t = SSL_exit(k_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_33, n_33);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      t = SSL_addr(m_33, n_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_76;
      t = l_79(t);
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
      t = foldr_2_0(l_79, m_79, t);
      t_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_76, t_76);
      t = m_79(t);
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
  t = term_u_15;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL;
  if(match_cons(t, sym__2))
    {
      u_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(u_42, v_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_76 = NULL,c_42 = NULL,d_42 = NULL;
  t = times_0_0(t);
  d_42 = t;
  t = SSL_explode_term(d_42);
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_42;
  t = foldr_2_0(a_5, b_5, t);
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
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_77;
        if((i_77 != t))
          {
            _fail(t);
          }
        t = h_77;
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATmakeAppl(sym__2, i_77, j_77);
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_77, j_77);
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = SSL_gtr(i_77, j_77);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_77, j_77);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm n_77 = NULL;
  n_77 = t;
  {
    ATerm o_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_77 = NULL;
        t = term_u_20;
        t = get_config_0_0(t);
        p_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_77, term_f_7);
        t = geq_0_0(t);
        t = n_77;
        t = p_87(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = o_22;
        t = n_77;
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,u_77 = NULL,v_77 = NULL;
  t = run_time_0_0(t);
  r_77 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  s_77 = t;
  t = term_a_7;
  u_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), r_77), term_s_22), s_77);
  v_77 = t;
  t = SSL_printnl(u_77, v_77);
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), r_77), term_s_22), s_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_15;
  w_77 = t;
  t = SSL_exit(w_77);
  return(t);
}
ATerm e_5 (ATerm t)
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
            ATerm u_44 = NULL,m_21 = NULL;
            t = SSLgetAnnotations(f_78);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_78);
            m_21 = t;
            t = SSLsetAnnotations(m_21, u_44);
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
ATerm need_help_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = fetch_1_0(e_5, t);
    }
  t = f_90(t);
  return(t);
}
ATerm map_1_0 (ATerm i_73 (ATerm), ATerm t)
{
  ATerm x_78 (ATerm t)
  {
    ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
    u_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_78;
      }
    else
      {
        ATerm c_45 = NULL,f_45 = NULL,g_45 = NULL,p_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_78 = ATgetFirst((ATermList) t);
            w_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_78);
        c_45 = t;
        t = v_78;
        t = i_73(t);
        f_45 = t;
        t = w_78;
        t = x_78(t);
        g_45 = t;
        t = (ATerm) ATinsert(CheckATermList(g_45), f_45);
        p_21 = t;
        t = SSLsetAnnotations(p_21, c_45);
      }
    return(t);
  }
  t = x_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_79 = ATgetFirst((ATermList) t);
      b_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_79 = NULL,g_79 = NULL;
        ATerm f_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(g_79));
          return(t);
        }
        t = b_79;
        t = j_0(t);
        if(((f_79 != NULL) && (f_79 != t)))
          _fail(t);
        else
          f_79 = t;
        t = a_79;
        t = i_0(t);
        if(((g_79 != NULL) && (g_79 != t)))
          _fail(t);
        else
          g_79 = t;
        t = b_79;
        t = reverse_acc_2_0(i_0, f_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_6;
      t = j_0(t);
    }
  return(t);
}
ATerm y_6 (ATerm s_47, ATerm t_47, ATerm t)
{
  t = SSL_table_get(s_47, t_47);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_79 = NULL,q_79 = NULL,r_79 = NULL,r_21 = NULL;
  r_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_79);
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_79);
  r_21 = t;
  t = SSLsetAnnotations(r_21, k_79);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm t_79 = NULL;
  t_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_79), term_x_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = fetch_1_0(g_5, t);
    }
  t = term_a_23;
  t = echo_0_0(t);
  t = term_q_21;
  i_79 = t;
  t = term_s_21;
  j_79 = t;
  t = term_b_23;
  t = y_6(i_79, j_79, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(i_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_79;
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
            t = v_79;
          }
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, v_79);
      }
    w_79 = t;
    t = term_d_19;
    x_79 = t;
    t = SSL_printnl(x_79, w_79);
    t = v_79;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_22;
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
  ATerm b_80 = NULL,c_80 = NULL;
  t = term_g_23;
  b_80 = t;
  t = term_o_6;
  c_80 = t;
  t = term_h_23;
  t = b_7(b_80, c_80, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_j_23;
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
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = term_g_23;
  f_80 = t;
  t = term_o_6;
  g_80 = t;
  t = term_h_23;
  t = b_7(f_80, g_80, t);
  t = term_k_23;
  d_80 = t;
  t = term_o_6;
  e_80 = t;
  t = term_l_23;
  t = b_7(d_80, e_80, t);
  t = term_m_23;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, m_5, t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = Option_3_0(n_5, o_5, p_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,p_24 = NULL;
  m_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_80 = ATgetFirst((ATermList) t);
      j_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_80);
  h_80 = t;
  t = i_80;
  t = y_56(t);
  k_80 = t;
  t = j_80;
  t = z_56(t);
  l_80 = t;
  t = (ATerm) ATinsert(CheckATermList(l_80), k_80);
  p_24 = t;
  t = SSLsetAnnotations(p_24, h_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,x_80 = NULL,y_80 = NULL,y_24 = NULL;
  s_80 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_23;
        t = i_92(t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
      }
    t = s_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_80 = ATgetFirst((ATermList) t);
        v_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_80);
    t_80 = t;
    t = term_c_22;
    y_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, u_80);
    t = b_7(y_80, u_80, t);
    t = v_80;
    {
      ATerm i_81 (ATerm t)
      {
        ATerm v_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_81 = NULL;
                b_81 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_81;
                ;
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                t = i_92(t);
                t = Cons_2_0(_id, i_81, t);
              }
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = v_23;
            {
              ATerm e_81 = NULL,f_81 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_81 = ATgetFirst((ATermList) t);
                  f_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_81), (ATerm) ATmakeAppl(sym_Undefined_1, e_81));
            }
          }
        return(t);
      }
      t = i_81(t);
      if(((x_80 != NULL) && (x_80 != t)))
        _fail(t);
      else
        x_80 = t;
      t = (ATerm) ATinsert(CheckATermList(x_80), (ATerm) ATmakeAppl(sym_Program_1, u_80));
      if(((y_24 != NULL) && (y_24 != t)))
        _fail(t);
      else
        y_24 = t;
      t = SSLsetAnnotations(y_24, t_80);
    }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm u_81 = NULL;
  u_81 = t;
  if(match_string(t, "--help"))
    {
      t = u_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_81;
        }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL;
  t = term_w_22;
  v_81 = t;
  t = term_o_6;
  w_81 = t;
  t = term_d_24;
  t = b_7(v_81, w_81, t);
  t = term_e_24;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL;
  p_81 = t;
  t = term_q_21;
  r_81 = t;
  t = term_s_21;
  s_81 = t;
  t = (ATerm) ATempty;
  t_81 = t;
  t = SSL_table_put(r_81, s_81, t_81);
  t = p_81;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm h_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_92(t);
          ;
          LocalPopChoice(i_24);
        }
      else
        {
          t = h_24;
          {
            ATerm j_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_5, t_5, u_5, t);
                ;
                LocalPopChoice(k_24);
              }
            else
              {
                t = j_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_82 = NULL;
          d_82 = t;
          {
            ATerm n_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_47 = NULL;
                t = d_82;
                {
                  ATerm r_24 = t;
                  int u_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_24);
                    }
                  else
                    {
                      t = r_24;
                      t = fetch_1_0(v_5, t);
                    }
                  t = d_82;
                  t = default_system_usage_0_0(t);
                  t = term_u_15;
                  x_47 = t;
                  t = SSL_exit(x_47);
                }
                ;
                LocalPopChoice(q_24);
              }
            else
              {
                t = n_24;
                {
                  ATerm r_48 = NULL;
                  t = term_g_23;
                  t = get_config_0_0(t);
                  t = d_82;
                  t = default_system_about_0_0(t);
                  t = term_u_15;
                  r_48 = t;
                  t = SSL_exit(r_48);
                }
              }
          }
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm v_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL;
                ATerm y_5 (ATerm t)
                {
                  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,y_25 = NULL;
                  j_82 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_82);
                  h_82 = t;
                  t = i_82;
                  if(((n_81 != NULL) && (n_81 != t)))
                    _fail(t);
                  else
                    n_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_82);
                  y_25 = t;
                  t = SSLsetAnnotations(y_25, h_82);
                  return(t);
                }
                t = fetch_1_0(y_5, t);
                t = term_a_7;
                if(((f_82 != NULL) && (f_82 != t)))
                  _fail(t);
                else
                  f_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_81)), term_a_25);
                if(((g_82 != NULL) && (g_82 != t)))
                  _fail(t);
                else
                  g_82 = t;
                t = SSL_printnl(f_82, g_82);
                t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_81)), term_a_25));
                t = default_system_usage_0_0(t);
                t = term_f_7;
                if(((e_82 != NULL) && (e_82 != t)))
                  _fail(t);
                else
                  e_82 = t;
                t = SSL_exit(e_82);
                ;
                LocalPopChoice(z_24);
              }
            else
              {
                t = v_24;
              }
          }
        }
      if(((o_81 != NULL) && (o_81 != t)))
        _fail(t);
      else
        o_81 = t;
      t = term_q_21;
      if(((q_81 != NULL) && (q_81 != t)))
        _fail(t);
      else
        q_81 = t;
      t = SSL_table_destroy(q_81);
      t = o_81;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  t = parse_options_1_0(h_90, t);
  o_82 = t;
  t = term_b_25;
  r_82 = t;
  t = SSL_table_create(r_82);
  t = term_b_25;
  p_82 = t;
  t = term_c_25;
  q_82 = t;
  t = SSL_table_put(p_82, q_82, o_82);
  t = o_82;
  t = j_90(t);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_90, t);
        ;
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
              t = k_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
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
  ATerm s_82 = NULL,t_82 = NULL;
  t = term_g_7;
  s_82 = t;
  t = term_o_6;
  t_82 = t;
  t = term_i_7;
  t = b_7(s_82, t_82, t);
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
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL;
  u_82 = t;
  t = term_c_22;
  t = get_config_0_0(t);
  v_82 = t;
  t = term_a_7;
  w_82 = t;
  t = (ATerm) ATinsert(ATempty, v_82);
  x_82 = t;
  t = SSL_printnl(w_82, x_82);
  t = u_82;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_89(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                ATerm l_25 = t;
                int m_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_25);
                  }
                else
                  {
                    t = l_25;
                    {
                      ATerm n_25 = t;
                      int o_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_6, e_6, f_6, t);
                          ;
                          LocalPopChoice(o_25);
                        }
                      else
                        {
                          t = n_25;
                          {
                            ATerm p_25 = t;
                            int q_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_25);
                              }
                            else
                              {
                                t = p_25;
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
    ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
    z_82 = t;
    {
      ATerm r_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_82 != NULL) && (y_82 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_6, t);
          ;
          LocalPopChoice(s_25);
        }
      else
        {
          t = r_25;
          t = term_t_25;
          y_82 = t;
        }
      t = not_null(y_82);
      t = ReadFromFile_0_0(t);
      if(((a_83 != NULL) && (a_83 != t)))
        _fail(t);
      else
        a_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_82, a_83);
      t = apply_strategy_1_0(q_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_5, s_89, a_6, b_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(abox2latex_0_0, Abox2latex_options_0_0, default_usage_0_0, t);
  return(t);
}

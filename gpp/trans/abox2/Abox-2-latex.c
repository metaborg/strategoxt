#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
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
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_m_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_a_40;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_b_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_z_26;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_r_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_t_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_s_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_c_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_r_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically by \n", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001-2004 Merijn de Jonge (mdejonge@cs.uu.nl) \n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{alltt}\n", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\\end{alltt}\n", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_r_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_s_33);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_x_13);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_i_20);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_20);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_g_14);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("alltt", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_v_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_g_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_d_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_u_34);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_y_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_j_35, term_k_35);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_g_14);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_g_14);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_g_14);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, (ATerm) ATempty);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_q_38);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym__2, term_d_41, term_g_14);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_n_35);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_u_35);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm g_13 (ATerm y_50, ATerm z_50, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_97 (ATerm), ATerm t);
static ATerm k_3 (ATerm x_2, ATerm t);
static ATerm l_3 (ATerm a_3, ATerm b_3, ATerm d_3, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm t_11 (ATerm m_111 (ATerm), ATerm t_40, ATerm r_40, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm f_49 (ATerm z_5, ATerm a_6, ATerm b_6, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm q_91 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm p_89 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm x_57 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm v_11 (ATerm o_17, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm d_99 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm w_11 (ATerm k_17, ATerm t);
static ATerm c_2 (ATerm t);
static ATerm u_11 (ATerm n_19, ATerm t);
ATerm listtd_1_0 (ATerm l_99 (ATerm), ATerm t);
static ATerm q_76 (ATerm i_71, ATerm m_71, ATerm n_71, ATerm t);
static ATerm r_76 (ATerm v_72, ATerm m_73, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_91 (ATerm), ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_11 (ATerm c_70, ATerm a_70, ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_11 (ATerm u_69, ATerm y_69, ATerm v_69, ATerm t);
static ATerm z_11 (ATerm o_21, ATerm p_21, ATerm t);
static ATerm a_12 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t_70, ATerm s_70, ATerm t);
static ATerm b_12 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm o_70, ATerm m_70, ATerm p_70, ATerm n_70, ATerm t);
ATerm foldl_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm e_12 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_106 (ATerm), ATerm t);
static ATerm f_12 (ATerm m_125 (ATerm), ATerm j_71, ATerm k_71, ATerm l_71, ATerm t);
static ATerm n_82 (ATerm c_82, ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm h_12 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm i_12 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm j_12 (ATerm d_40, ATerm e_40, ATerm t);
static ATerm k_12 (ATerm f_33, ATerm g_33, ATerm b_33, ATerm t);
static ATerm l_12 (ATerm m_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm m_12 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t);
static ATerm x_85 (ATerm s_84, ATerm t_84, ATerm u_84, ATerm t);
static ATerm y_85 (ATerm c_85, ATerm d_85, ATerm t);
static ATerm z_85 (ATerm i_85, ATerm j_85, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm r_12 (ATerm q_125 (ATerm), ATerm i_72, ATerm h_72, ATerm d_72, ATerm f_72, ATerm c_72, ATerm t);
ATerm do_A_column_1_0 (ATerm q_125 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm z_99 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm FitToMax_1_0 (ATerm s_125 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm abox2text_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm v_12 (ATerm l_39, ATerm m_39, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm x_12 (ATerm k_98 (ATerm), ATerm c_22, ATerm j_253, ATerm t);
ATerm at_suffix_1_0 (ATerm w_98 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm x_107 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm y_12 (ATerm y_18, ATerm z_18, ATerm t);
ATerm at_end_1_0 (ATerm s_98 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_106 (ATerm c_106, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm escape_special_characters_0_0 (ATerm t);
ATerm abox2alltt_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm try_abox2alltt_0_0 (ATerm t);
static ATerm n_13 (ATerm f_61, ATerm g_61, ATerm t);
static ATerm b_13 (ATerm c_36, ATerm d_36, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_115 (ATerm g_115, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_13 (ATerm g_21, ATerm t);
static ATerm d_13 (ATerm c_35, ATerm d_35, ATerm t);
static ATerm e_13 (ATerm l_36, ATerm m_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_116 (ATerm w_115, ATerm t);
static ATerm y_116 (ATerm a_116, ATerm b_116, ATerm c_116, ATerm t);
static ATerm z_116 (ATerm k_116, ATerm l_116, ATerm m_116, ATerm t);
static ATerm f_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm h_13 (ATerm r_59, ATerm s_59, ATerm t);
ATerm end_scope_1_0 (ATerm j_111 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_124 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_13 (ATerm r_54, ATerm s_54, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_13 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm Abox_2_latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_13 (ATerm f_39, ATerm g_39, ATerm t);
ATerm foldr_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_114 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm need_help_1_0 (ATerm n_117 (ATerm), ATerm t);
static ATerm r_13 (ATerm e_64, ATerm f_64, ATerm g_64, ATerm t);
static ATerm s_13 (ATerm h_64, ATerm i_64, ATerm t);
ATerm lookup_table_0_1 (ATerm y_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_64, ATerm n_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_13 (ATerm j_64, ATerm k_64, ATerm t);
static ATerm l_13 (ATerm o_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_98 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm parse_options_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm io_Abox_2_latex_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = u_1;
        t = q_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_1, e_0);
        t = g_13(v_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        {
          ATerm j_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = u_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm n_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((v_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, v_0);
              t = g_13(v_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(l_11);
            }
          else
            {
              t = j_11;
              t = u_1;
              t = q_0(t);
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            }
        }
      }
  }
  return(t);
}
static ATerm g_13 (ATerm y_50, ATerm z_50, ATerm t)
{
  t = SSL_copy(y_50, z_50);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL,j_2 = NULL;
      t = term_q_11;
      i_2 = t;
      t = term_r_11;
      j_2 = t;
      t = term_s_11;
      t = n_13(i_2, j_2, t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = term_c_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_1 = NULL,g_1 = NULL;
      t = term_r_11;
      {
        ATerm d_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL,k_1 = NULL;
            t = term_q_11;
            h_1 = t;
            t = term_r_11;
            k_1 = t;
            t = term_s_11;
            t = n_13(h_1, k_1, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = d_12;
            t = term_c_12;
          }
      }
      e_1 = t;
      t = term_n_12;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_12, e_1);
      t = g_13(g_1, e_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm o_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,r_2 = NULL,s_2 = NULL;
  l_2 = t;
  t = q_97(t);
  m_2 = t;
  t = term_p_12;
  r_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_2), m_2);
  s_2 = t;
  t = SSL_printnl(r_2, s_2);
  t = l_2;
  return(t);
}
static ATerm k_3 (ATerm x_2, ATerm t)
{
  t = x_2;
  {
    ATerm q_12 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_12 = ATgetArgument(t, 0);
            ATerm t_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_12;
      }
  }
  t = term_w_12;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, term_z_12);
  t = open_file_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm a_3, ATerm b_3, ATerm d_3, ATerm t)
{
  t = SSL_open_file(a_3, b_3);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      {
        ATerm m_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_3(h_3, t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = m_13;
            t = l_3(i_3, j_3, h_3, t);
          }
      }
    }
  else
    {
      t = k_3(h_3, t);
    }
  return(t);
}
static ATerm t_11 (ATerm m_111 (ATerm), ATerm t_40, ATerm r_40, ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,p_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,c_4 = NULL;
  t_3 = t;
  t = m_111(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_3, t_40, r_40);
  t = o_13(m_3, t_40, r_40, t);
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 = NULL;
        t = term_x_13;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_3, term_x_13);
        t = n_13(m_3, e_4, t);
        {
          ATerm y_13 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_13;
            }
        }
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_3 = ATgetFirst((ATermList) t);
      p_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_3, term_x_13, (ATerm) ATinsert(CheckATermList(p_3), (ATerm) ATinsert(CheckATermList(n_3), t_40)));
  t = lookup_table_0_1(m_3, t);
  c_4 = t;
  t = term_x_13;
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(p_3), (ATerm) ATinsert(CheckATermList(n_3), t_40));
  v_3 = t;
  t = c_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(u_3, v_3, x_3, t);
  t = t_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_4 = NULL;
  ATerm z_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 = NULL,n_2 = NULL;
      q_4 = t;
      t = term_c_14;
      n_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_4, term_c_14);
      t = d_13(q_4, n_2, t);
      h_4 = t;
      t = SSL_mkstemp(h_4);
      LocalPopChoice(b_14);
    }
  else
    {
      t = z_13;
      {
        ATerm r_4 = NULL;
        t = term_d_14;
        r_4 = t;
        t = SSL_perror(r_4);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  t = P__tmpdir_0_0(t);
  x_4 = t;
  t = term_f_14;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, term_f_14);
  t = d_13(x_4, y_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_14;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, term_g_14);
  t = t_11(c_0, v_4, w_4, t);
  t = SSL_close(u_4);
  t = v_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  b_5 = t;
  t = xtc_new_file_0_0(t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_5, term_z_12);
  t = open_file_0_0(t);
  t = b_5;
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm h_5 = NULL;
      h_5 = t;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,t_2 = NULL;
            t = SSL_is_string(h_5);
            q_2 = t;
            t = (ATerm) ATinsert(ATempty, q_2);
            t_2 = t;
            t = SSL_print(c_5, t_2);
            t = q_2;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = h_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(f_0, t);
  }
  t = SSL_close_file(c_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_5);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  n_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_14), n_5), term_j_14);
  o_5 = t;
  t = SSL_concat_strings(o_5);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,m_5 = NULL;
      t = term_q_11;
      l_5 = t;
      t = term_o_14;
      m_5 = t;
      t = term_p_14;
      t = n_13(l_5, m_5, t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = (ATerm) ATempty;
    }
  t = map_1_0(i_0, t);
  k_5 = t;
  t = SSL_concat_strings(k_5);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  t = term_g_14;
  t = tables2text_0_0(t);
  p_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_14), term_h_15), term_g_15), term_q_14), term_f_15), term_e_15), term_c_15), term_b_15), term_z_14), term_q_14), p_5), term_y_14), term_v_14), term_q_14), term_u_14), term_q_14), term_s_14), term_q_14);
  q_5 = t;
  t = SSL_concat_strings(q_5);
  return(t);
}
static ATerm f_49 (ATerm z_5, ATerm a_6, ATerm b_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_is_int(z_5);
  t = SSL_int_to_string(z_5);
  u_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_15), a_6), term_j_15), u_6), term_i_15);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_ALLTT_1))
    {
      a_7 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_15), a_7), term_l_15);
    }
  else
    {
      if(match_cons(t, sym_BOXENV_2))
        {
          a_7 = ATgetArgument(t, 0);
          d_7 = ATgetArgument(t, 1);
          t = a_7;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_15), d_7), term_n_15);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_7 = ATgetFirst((ATermList) t);
                  v_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_6;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_15), d_7), term_q_15), b_7), term_p_15);
            }
        }
      else
        {
          if(match_cons(t, sym_HBOX_2))
            {
              a_7 = ATgetArgument(t, 0);
              d_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_15), d_7), term_q_15), a_7), term_r_15);
            }
          else
            {
              if(match_cons(t, sym_VBOX_3))
                {
                  a_7 = ATgetArgument(t, 0);
                  d_7 = ATgetArgument(t, 1);
                  w_6 = ATgetArgument(t, 2);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), w_6), term_q_15), d_7), term_j_15), a_7), term_u_15);
                }
              else
                {
                  if(match_cons(t, sym_HVBOX_4))
                    {
                      a_7 = ATgetArgument(t, 0);
                      d_7 = ATgetArgument(t, 1);
                      w_6 = ATgetArgument(t, 2);
                      x_6 = ATgetArgument(t, 3);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), x_6), term_q_15), w_6), term_j_15), d_7), term_j_15), a_7), term_z_15);
                    }
                  else
                    {
                      if(match_cons(t, sym_ABOX_2))
                        {
                          a_7 = ATgetArgument(t, 0);
                          d_7 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_16), d_7), term_q_15), a_7), term_b_16);
                        }
                      else
                        {
                          if(match_cons(t, sym_ALTBOX_2))
                            {
                              a_7 = ATgetArgument(t, 0);
                              d_7 = ATgetArgument(t, 1);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_16), d_7), term_e_16), a_7), term_d_16);
                            }
                          else
                            {
                              if(match_cons(t, sym_CBOX_1))
                                {
                                  a_7 = ATgetArgument(t, 0);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_16), a_7), term_g_16);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBOX_2))
                                    {
                                      a_7 = ATgetArgument(t, 0);
                                      d_7 = ATgetArgument(t, 1);
                                      t = a_7;
                                      if(match_string(t, "="))
                                        {
                                          ATerm o_16 = t;
                                          int p_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = f_49(a_7, d_7, e_7, t);
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
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_16), d_7), term_s_16);
                                                    LocalPopChoice(r_16);
                                                  }
                                                else
                                                  {
                                                    t = q_16;
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), d_7), term_q_15), a_7), term_u_16);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm v_16 = t;
                                          int w_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = f_49(a_7, d_7, e_7, t);
                                              LocalPopChoice(w_16);
                                            }
                                          else
                                            {
                                              t = v_16;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), d_7), term_q_15), a_7), term_u_16);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBLBOX_2))
                                        {
                                          a_7 = ATgetArgument(t, 0);
                                          d_7 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_7), term_g_17), a_7), term_y_16);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REFBOX_2))
                                            {
                                              a_7 = ATgetArgument(t, 0);
                                              d_7 = ATgetArgument(t, 1);
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_j_15), a_7), term_h_17);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_BOXFONT_2))
                                                {
                                                  a_7 = ATgetArgument(t, 0);
                                                  d_7 = ATgetArgument(t, 1);
                                                  t = a_7;
                                                  if(match_cons(t, sym_KW_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_i_17);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_VAR_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_j_17);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_NUM_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_l_17);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_MATH_0))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_r_17);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "sf"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_v_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "rm"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_w_17);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "tt"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_x_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "md"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_y_17);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "bf"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_z_17);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "up"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_a_18);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "it"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_b_18);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sc"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_e_18);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "sl"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_f_18);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "em"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_h_18);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "tiny"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_i_18);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "scriptsize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_k_18);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_o_18);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "small"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_p_18);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "normalsize"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_q_18);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_r_18);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "Large"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_s_18);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_a_19);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_b_19);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_c_19);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      b_7 = ATgetArgument(t, 0);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), d_7), term_j_15), b_7), term_d_19);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
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
                                                      t = term_e_19;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_R_0))
                                                        {
                                                          t = term_f_19;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_L_0))
                                                            {
                                                              t = term_i_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_EOR_0))
                                                                {
                                                                  t = term_l_19;
                                                                }
                                                              else
                                                                {
                                                                  if(!(match_cons(t, sym_CSEP_0)))
                                                                    _fail(t);
                                                                  t = term_m_19;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  static ATerm k_0 (ATerm t)
  {
    t = bottomup_1_0(q_91, t);
    return(t);
  }
  t = SRTS_all(k_0, t);
  t = q_91(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
      t = term_q_11;
      h_49 = t;
      t = term_r_19;
      i_49 = t;
      t = term_s_19;
      t = n_13(h_49, i_49, t);
      g_49 = t;
      t = (ATerm) ATinsert(ATempty, g_49);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  static ATerm l_51 (ATerm t)
  {
    ATerm e_51 = NULL,g_51 = NULL,h_51 = NULL;
    h_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_51 = ATgetFirst((ATermList) t);
        g_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_4 = NULL,g_4 = NULL,n_4 = NULL,i_1 = NULL;
              t = SSLgetAnnotations(h_51);
              g_4 = t;
              t = e_51;
              t = p_89(t);
              n_4 = t;
              t = (ATerm) ATinsert(CheckATermList(g_51), n_4);
              i_1 = t;
              t = SSLsetAnnotations(i_1, g_4);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_19 = ATgetFirst((ATermList) t);
                  f_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_4;
              t = l_51(t);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              t = h_51;
            }
        }
      }
    else
      {
        t = h_51;
      }
    return(t);
  }
  t = l_51(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  if(match_int(t, 9))
    {
      t = r_51;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = r_51;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
    _fail(t);
  return(t);
}
ATerm LatexComment_0_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  t = remove_trailing_1_0(n_0, t);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,l_1 = NULL;
          w_51 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_51 = ATgetFirst((ATermList) t);
              u_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_51);
          s_51 = t;
          t = t_51;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = u_51;
          {
            static ATerm y_0 (ATerm t)
            {
              if(((p_51 != NULL) && (p_51 != t)))
                _fail(t);
              else
                p_51 = t;
              return(t);
            }
            t = Cons_2_0(u_0, y_0, t);
          }
          v_51 = t;
          t = (ATerm) ATinsert(CheckATermList(v_51), t_51);
          l_1 = t;
          t = SSLsetAnnotations(l_1, s_51);
          t = not_null(p_51);
          return(t);
        }
        t = at_suffix_1_0(s_0, t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
      }
  }
  q_51 = t;
  t = SSL_implode_string(q_51);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_14), x_53);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  f_52 = t;
  t = SSL_explode_string(f_52);
  t = reverse_acc_2_0(_id, b_1, t);
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATempty);
  {
    static ATerm z_53 (ATerm t)
    {
      ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
      if(match_cons(t, sym__2))
        {
          i_52 = ATgetArgument(t, 0);
          l_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_52;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm p_52 = NULL;
          t = l_52;
          t = LatexComment_0_0(t);
          p_52 = t;
          t = (ATerm) ATinsert(ATempty, p_52);
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
          t = j_52;
          if(match_int(t, 10))
            {
              ATerm z_19 = t;
              int a_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_53 = NULL,l_53 = NULL;
                  t = l_52;
                  t = LatexComment_0_0(t);
                  k_53 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_52, (ATerm) ATempty);
                  t = z_53(t);
                  l_53 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_53), k_53);
                  LocalPopChoice(a_20);
                }
              else
                {
                  t = z_19;
                  t = (ATerm) ATmakeAppl(sym__2, k_52, (ATerm) ATinsert(CheckATermList(l_52), j_52));
                  t = z_53(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, k_52, (ATerm) ATinsert(CheckATermList(l_52), j_52));
              t = z_53(t);
            }
        }
      return(t);
    }
    t = z_53(t);
  }
  t = remove_trailing_1_0(c_1, t);
  t = reverse_acc_2_0(_id, j_1, t);
  t = remove_trailing_1_0(m_1, t);
  t = map_1_0(p_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_20 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm a_5 = NULL,r_5 = NULL;
  t = filter_1_0(t_1, t);
  r_5 = t;
  t = term_c_20;
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, r_5);
  t = z_11(a_5, r_5, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm a_54 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_1, t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = term_f_20;
    }
  a_54 = t;
  t = SSL_int_to_string(a_54);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm d_54 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(x_1, t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = term_i_20;
    }
  d_54 = t;
  t = SSL_int_to_string(d_54);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm e_54 = NULL;
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(y_1, t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = term_i_20;
    }
  e_54 = t;
  t = SSL_int_to_string(e_54);
  return(t);
}
static ATerm x_57 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm y_54 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(q_54);
  y_54 = t;
  t = p_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  n_1 = t;
  t = SSLsetAnnotations(n_1, y_54);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,r_1 = NULL;
  c_57 = t;
  if(match_cons(t, sym_C_2))
    {
      a_57 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, a_57, b_57);
  r_1 = t;
  t = SSLsetAnnotations(r_1, z_56);
  return(t);
}
static ATerm v_11 (ATerm o_17, ATerm t)
{
  static ATerm w_57 (ATerm t)
  {
    static ATerm y_57 (ATerm d_55, ATerm e_55, ATerm f_55, ATerm t)
    {
      ATerm k_55 = NULL,n_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,q_1 = NULL,o_1 = NULL;
      t = SSLgetAnnotations(f_55);
      k_55 = t;
      t = d_55;
      if(match_cons(t, sym_C_2))
        {
          r_55 = ATgetArgument(t, 0);
          s_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_55);
      q_55 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, r_55, s_55);
      o_1 = t;
      t = SSLsetAnnotations(o_1, q_55);
      t_55 = t;
      t = e_55;
      t = Cons_2_0(_id, w_57, t);
      n_55 = t;
      t = (ATerm) ATinsert(CheckATermList(n_55), t_55);
      q_1 = t;
      t = SSLsetAnnotations(q_1, k_55);
      return(t);
    }
    static ATerm b_58 (ATerm j_56, ATerm k_56, ATerm l_56, ATerm t)
    {
      ATerm s_56 = NULL,v_56 = NULL,s_1 = NULL;
      t = SSLgetAnnotations(l_56);
      s_56 = t;
      t = k_56;
      t = Cons_2_0(z_1, w_57, t);
      v_56 = t;
      t = (ATerm) ATinsert(CheckATermList(v_56), j_56);
      s_1 = t;
      t = SSLsetAnnotations(s_1, s_56);
      return(t);
    }
    ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,j_57 = NULL,k_57 = NULL;
    d_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_57;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_57 = ATgetFirst((ATermList) t);
            f_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_57 = ATgetFirst((ATermList) t);
            k_57 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm m_20 = t;
              int n_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_57(e_57, f_57, d_57, t);
                  LocalPopChoice(n_20);
                }
              else
                {
                  t = m_20;
                  {
                    ATerm o_20 = t;
                    int p_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_57(e_57, f_57, d_57, t);
                        LocalPopChoice(p_20);
                      }
                    else
                      {
                        t = o_20;
                        {
                          ATerm q_20 = t;
                          int r_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_58(e_57, f_57, d_57, t);
                              LocalPopChoice(r_20);
                            }
                          else
                            {
                              t = q_20;
                              {
                                ATerm v_57 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(k_57), j_57);
                                t = w_57(t);
                                v_57 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(v_57), term_s_20), e_57);
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
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_57(e_57, f_57, d_57, t);
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                {
                  ATerm v_20 = t;
                  int w_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_57(e_57, f_57, d_57, t);
                      LocalPopChoice(w_20);
                    }
                  else
                    {
                      t = v_20;
                      t = b_58(e_57, f_57, d_57, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = o_17;
  t = w_57(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,z_58 = NULL;
  s_58 = t;
  if(match_cons(t, sym_LBL_2))
    {
      t_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
      {
        ATerm y_5 = NULL,g_6 = NULL,h_6 = NULL;
        t = z_58;
        if(match_cons(t, sym_R_2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            h_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_11(h_6, t);
        t = z_58;
        if(match_cons(t, sym_R_2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_11(g_6, t);
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, t_58, y_5);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm z_20 = ATgetArgument(t, 0);
          z_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_58;
      t = v_11(z_58, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  static ATerm m_61 (ATerm t)
  {
    ATerm c_61 = NULL,h_61 = NULL,j_61 = NULL;
    c_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_61 = ATgetFirst((ATermList) t);
        j_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 = NULL,d_2 = NULL;
          t = SSLgetAnnotations(c_61);
          c_7 = t;
          t = j_61;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(j_61), h_61);
          d_2 = t;
          t = SSLsetAnnotations(d_2, c_7);
          t = d_99(t);
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          {
            ATerm b_8 = NULL,e_8 = NULL,e_2 = NULL;
            t = SSLgetAnnotations(c_61);
            b_8 = t;
            t = j_61;
            t = m_61(t);
            e_8 = t;
            t = (ATerm) ATinsert(CheckATermList(e_8), h_61);
            e_2 = t;
            t = SSLsetAnnotations(e_2, b_8);
          }
        }
    }
    return(t);
  }
  t = m_61(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_63 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      i_63 = ATgetArgument(t, 0);
      {
        ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL;
        t = i_63;
        t = Hspace_0_0(t);
        v_8 = t;
        t = SSL_string_to_int(v_8);
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_8, term_c_20);
        t = copy_0_0(t);
        s_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_8), term_c_21);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          i_63 = ATgetArgument(t, 0);
          {
            ATerm g_9 = NULL,k_9 = NULL,l_9 = NULL;
            t = i_63;
            t = Hspace_0_0(t);
            l_9 = t;
            t = SSL_string_to_int(l_9);
            k_9 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_9, term_c_20);
            t = copy_0_0(t);
            g_9 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_9), term_e_21);
          }
        }
      else
        {
          ATerm a_10 = NULL,b_10 = NULL,i_10 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              i_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_63;
          t = Hspace_0_0(t);
          i_10 = t;
          t = SSL_string_to_int(i_10);
          b_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_10, term_c_20);
          t = copy_0_0(t);
          a_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_10), term_f_21);
        }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_21);
  return(t);
}
static ATerm w_11 (ATerm k_17, ATerm t)
{
  ATerm k_10 = NULL,n_10 = NULL;
  t = k_17;
  t = map_1_0(a_2, t);
  n_10 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_20), n_10);
  t = z_11(k_10, n_10, t);
  t = concat_0_0(t);
  t = at_last_1_0(b_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_21 = ATgetFirst((ATermList) t);
      if(((ATgetType(i_21) != AT_INT) || (ATgetInt((ATermInt) i_21) != 34)))
        _fail(t);
      k_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_49), term_j_21), term_j_21);
  return(t);
}
static ATerm u_11 (ATerm n_19, ATerm t)
{
  ATerm j_49 = NULL;
  t = n_19;
  t = at_suffix_1_0(c_2, t);
  j_49 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_49), term_k_21), term_k_21);
  return(t);
}
ATerm listtd_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  static ATerm d_50 (ATerm t)
  {
    ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
    t = l_99(t);
    a_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_50;
      }
    else
      {
        ATerm g_3 = NULL,r_3 = NULL,i_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_50 = ATgetFirst((ATermList) t);
            c_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_50);
        g_3 = t;
        t = c_50;
        t = d_50(t);
        r_3 = t;
        t = (ATerm) ATinsert(CheckATermList(r_3), b_50);
        i_4 = t;
        t = SSLsetAnnotations(i_4, g_3);
      }
    return(t);
  }
  t = d_50(t);
  return(t);
}
static ATerm q_76 (ATerm i_71, ATerm m_71, ATerm n_71, ATerm t)
{
  t = i_71;
  if(match_cons(t, sym_KW_0))
    {
      t = i_71;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = i_71;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = i_71;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = i_71;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, i_71, m_71);
  return(t);
}
static ATerm r_76 (ATerm v_72, ATerm m_73, ATerm t)
{
  t = v_72;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_73 = NULL;
        t = term_n_21;
        y_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_21, v_72);
        t = n_13(y_73, v_72, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm s_15 = NULL;
          t = SSL_explode_string(v_72);
          t = escape_special_characters_0_0(t);
          t = listtd_1_0(f_2, t);
          s_15 = t;
          t = SSL_implode_string(s_15);
        }
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  x_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_15 = ATgetFirst((ATermList) t);
      w_15 = (ATerm) ATgetNext((ATermList) t);
      t = v_15;
      if(match_int(t, 34))
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_15;
              t = u_11(w_15, t);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = x_15;
            }
        }
      else
        {
          t = x_15;
        }
    }
  else
    {
      t = x_15;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm t_21 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_21;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm u_21 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_21;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm m_76 = NULL;
  if(match_cons(t, sym_S_1))
    {
      m_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_76;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm m_74 = NULL,p_74 = NULL,q_74 = NULL,s_74 = NULL,x_74 = NULL,y_74 = NULL,b_75 = NULL;
  y_74 = t;
  if(match_cons(t, sym_REF_2))
    {
      b_75 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, b_75, x_74);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          b_75 = ATgetArgument(t, 0);
          x_74 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, b_75, x_74);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              b_75 = ATgetArgument(t, 0);
              x_74 = ATgetArgument(t, 1);
              {
                ATerm i_16 = NULL;
                t = y_74;
                {
                  ATerm v_21 = t;
                  int w_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(b_75);
                      i_16 = t;
                      LocalPopChoice(w_21);
                    }
                  else
                    {
                      t = v_21;
                      {
                        ATerm x_21 = t;
                        int y_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,l_4 = NULL;
                            t = SSL_explode_string(b_75);
                            n_16 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                l_16 = ATgetFirst((ATermList) t);
                                m_16 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(n_16);
                            k_16 = t;
                            t = l_16;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(m_16), l_16);
                            l_4 = t;
                            t = SSLsetAnnotations(l_4, k_16);
                            t = (ATerm) ATinsert(ATempty, term_z_21);
                            j_16 = t;
                            t = SSL_implode_string(j_16);
                            i_16 = t;
                            LocalPopChoice(y_21);
                          }
                        else
                          {
                            t = x_21;
                            t = b_75;
                            i_16 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, i_16, x_74);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  b_75 = ATgetArgument(t, 0);
                  x_74 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, b_75, x_74);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      b_75 = ATgetArgument(t, 0);
                      x_74 = ATgetArgument(t, 1);
                      m_74 = ATgetArgument(t, 2);
                      {
                        ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,m_17 = NULL;
                        t = m_74;
                        t = construct_rows_0_0(t);
                        a_17 = t;
                        t = x_74;
                        t = Vspace_0_0(t);
                        f_17 = t;
                        t = SSL_string_to_int(f_17);
                        x_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_16, term_h_21);
                        t = copy_0_0(t);
                        d_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_17, (ATerm) ATinsert(ATinsert(ATempty, term_k_14), term_h_21));
                        t = conc_0_0(t);
                        b_17 = t;
                        t = b_75;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            e_17 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_11(e_17, t);
                        z_16 = t;
                        t = a_17;
                        t = map_1_0(MkRows_0_0, t);
                        m_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, b_17, m_17);
                        t = z_11(b_17, m_17, t);
                        c_17 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, z_16, c_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          b_75 = ATgetArgument(t, 0);
                          x_74 = ATgetArgument(t, 1);
                          {
                            ATerm o_75 = NULL,r_75 = NULL,u_75 = NULL,x_75 = NULL,p_17 = NULL,q_17 = NULL;
                            t = b_75;
                            t = Hspace_0_0(t);
                            o_75 = t;
                            t = b_75;
                            t = Vspace_0_0(t);
                            r_75 = t;
                            t = b_75;
                            t = Ispace_0_0(t);
                            u_75 = t;
                            t = x_74;
                            t = filter_1_0(h_2, t);
                            q_17 = t;
                            t = term_a_22;
                            p_17 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_a_22, q_17);
                            t = z_11(p_17, q_17, t);
                            x_75 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, o_75, r_75, u_75, x_75);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              b_75 = ATgetArgument(t, 0);
                              x_74 = ATgetArgument(t, 1);
                              {
                                ATerm a_76 = NULL,c_76 = NULL,e_76 = NULL,s_17 = NULL,t_17 = NULL;
                                t = b_75;
                                t = Vspace_0_0(t);
                                a_76 = t;
                                t = b_75;
                                t = Ispace_0_0(t);
                                c_76 = t;
                                t = x_74;
                                t = filter_1_0(k_2, t);
                                t_17 = t;
                                t = term_b_22;
                                s_17 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_b_22, t_17);
                                t = z_11(s_17, t_17, t);
                                e_76 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, a_76, c_76, e_76);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  b_75 = ATgetArgument(t, 0);
                                  x_74 = ATgetArgument(t, 1);
                                  {
                                    ATerm g_76 = NULL,i_76 = NULL;
                                    t = b_75;
                                    t = Hspace_0_0(t);
                                    g_76 = t;
                                    t = x_74;
                                    t = toh_0_0(t);
                                    i_76 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, g_76, i_76);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      b_75 = ATgetArgument(t, 0);
                                      x_74 = ATgetArgument(t, 1);
                                      t = b_75;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          s_74 = ATgetArgument(t, 0);
                                          t = s_74;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              p_74 = ATgetFirst((ATermList) t);
                                              q_74 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm d_22 = t;
                                                int f_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm c_18 = NULL,j_19 = NULL,k_19 = NULL;
                                                    t = p_74;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        j_19 = ATgetArgument(t, 0);
                                                        k_19 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm g_22 = t;
                                                      int h_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_20 = NULL,s_4 = NULL;
                                                          t = SSLgetAnnotations(p_74);
                                                          j_20 = t;
                                                          t = j_19;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = k_19;
                                                          c_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, j_19, k_19);
                                                          s_4 = t;
                                                          t = SSLsetAnnotations(s_4, j_20);
                                                          LocalPopChoice(h_22);
                                                        }
                                                      else
                                                        {
                                                          t = g_22;
                                                          {
                                                            ATerm i_22 = t;
                                                            int j_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_21 = NULL,d_5 = NULL;
                                                                t = SSLgetAnnotations(p_74);
                                                                d_21 = t;
                                                                t = j_19;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = k_19;
                                                                c_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, j_19, k_19);
                                                                d_5 = t;
                                                                t = SSLsetAnnotations(d_5, d_21);
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
                                                                      ATerm s_21 = NULL,e_5 = NULL;
                                                                      t = SSLgetAnnotations(p_74);
                                                                      s_21 = t;
                                                                      t = j_19;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = k_19;
                                                                      c_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, j_19, k_19);
                                                                      e_5 = t;
                                                                      t = SSLsetAnnotations(e_5, s_21);
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
                                                                            ATerm e_22 = NULL,f_5 = NULL;
                                                                            t = SSLgetAnnotations(p_74);
                                                                            e_22 = t;
                                                                            t = j_19;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = k_19;
                                                                            c_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, j_19, k_19);
                                                                            f_5 = t;
                                                                            t = SSLsetAnnotations(f_5, e_22);
                                                                            LocalPopChoice(n_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = m_22;
                                                                            {
                                                                              ATerm w_22 = NULL,g_5 = NULL;
                                                                              t = SSLgetAnnotations(p_74);
                                                                              w_22 = t;
                                                                              t = j_19;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, j_19, k_19);
                                                                              g_5 = t;
                                                                              t = SSLsetAnnotations(g_5, w_22);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, k_19);
                                                                              c_18 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, c_18, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, q_74), x_74));
                                                    LocalPopChoice(f_22);
                                                  }
                                                else
                                                  {
                                                    t = d_22;
                                                    t = q_76(b_75, x_74, y_74, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = x_74;
                                                }
                                              else
                                                {
                                                  t = q_76(b_75, x_74, y_74, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = q_76(b_75, x_74, y_74, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          b_75 = ATgetArgument(t, 0);
                                          x_74 = ATgetArgument(t, 1);
                                          {
                                            ATerm l_76 = NULL;
                                            t = b_75;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = x_74;
                                            t = map_1_0(o_2, t);
                                            l_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, l_76);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              b_75 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = r_76(b_75, y_74, t);
                                        }
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
ATerm topdown_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t)
  {
    t = topdown_1_0(p_91, t);
    return(t);
  }
  t = p_91(t);
  t = SRTS_all(p_2, t);
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm o_22 = t;
  if((PushChoice() == 0))
    {
      ATerm h_93 = NULL,i_93 = NULL;
      if(match_cons(t, sym__2))
        {
          h_93 = ATgetArgument(t, 0);
          i_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_93, i_93);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_93, i_93);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = SSL_gtr(h_93, i_93);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, h_93, i_93);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_22;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_93 = NULL,k_93 = NULL;
      t = term_q_11;
      j_93 = t;
      t = term_r_19;
      k_93 = t;
      t = term_s_19;
      t = n_13(j_93, k_93, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      t = term_t_22;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm x_11 (ATerm c_70, ATerm a_70, ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,j_77 = NULL,l_77 = NULL,m_77 = NULL,p_77 = NULL,q_77 = NULL;
  t = c_70;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(u_2, t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = term_i_20;
      }
  }
  p_77 = t;
  t = term_f_20;
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, term_f_20);
  t = i_13(p_77, q_77, t);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, term_x_22);
  t = copy_char_0_0(t);
  d_77 = t;
  t = c_70;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(v_2, t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = term_i_20;
      }
  }
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_77, term_a_23);
  t = copy_char_0_0(t);
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_70, term_a_23);
  t = copy_char_0_0(t);
  f_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_77), e_77), d_77);
  j_77 = t;
  t = SSL_concat_strings(j_77);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  a_78 = t;
  t = SSL_explode_term(a_78);
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            z_77 = ATgetFirst((ATermList) c_23);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_77;
  return(t);
}
static ATerm y_11 (ATerm u_69, ATerm y_69, ATerm v_69, ATerm t)
{
  ATerm t_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_69, v_69);
  t = x_11(u_69, v_69, t);
  w_77 = t;
  t = y_69;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_69;
  t = map_1_0(w_2, t);
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_77, y_77);
  t = z_11(w_77, y_77, t);
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_77, t_77);
  return(t);
}
static ATerm z_11 (ATerm o_21, ATerm p_21, ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  t = p_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_21;
    }
  else
    {
      ATerm i_23 = NULL,n_23 = NULL,y_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_78 = ATgetFirst((ATermList) t);
          r_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_21);
      i_23 = t;
      t = r_78;
      {
        static ATerm u_23 (ATerm t)
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_23 = NULL;
              o_23 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_23;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm p_23 = NULL;
                t = Cons_2_0(_id, u_23, t);
                p_23 = t;
                t = (ATerm) ATinsert(CheckATermList(p_23), o_21);
              }
            }
          return(t);
        }
        t = u_23(t);
      }
      n_23 = t;
      t = (ATerm) ATinsert(CheckATermList(n_23), q_78);
      y_10 = t;
      t = SSLsetAnnotations(y_10, i_23);
    }
  return(t);
}
static ATerm a_12 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t_70, ATerm s_70, ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,z_78 = NULL;
  t = term_g_14;
  t = j_125(t);
  z_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_70, z_78);
  t = h_125(t);
  if(match_cons(t, sym__2))
    {
      u_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_14;
  t = i_125(t);
  x_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_78, x_78);
  t = i_13(v_78, x_78, t);
  w_78 = t;
  t = (ATerm) ATinsert(CheckATermList(s_70), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_78), w_78));
  return(t);
}
static ATerm b_12 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm o_70, ATerm m_70, ATerm p_70, ATerm n_70, ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,f_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_70, p_70);
  t = f_125(t);
  if(match_cons(t, sym__2))
    {
      a_79 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_14;
  t = get_width_0_0(t);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_79, f_79);
  t = leq_0_0(t);
  t = term_g_14;
  t = g_125(t);
  d_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_79, d_79);
  t = i_13(b_79, d_79, t);
  c_79 = t;
  t = (ATerm) ATinsert(CheckATermList(n_70), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_70), a_79), c_79));
  return(t);
}
ATerm foldl_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  static ATerm s_79 (ATerm t)
  {
    ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL;
    if(match_cons(t, sym__2))
      {
        j_79 = ATgetArgument(t, 0);
        m_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_79;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_79;
      }
    else
      {
        ATerm r_79 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_79 = ATgetFirst((ATermList) t);
            l_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_79, m_79);
        t = f_105(t);
        r_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_79, r_79);
        t = s_79(t);
      }
    return(t);
  }
  t = s_79(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm t_79 = NULL;
  static ATerm y_2 (ATerm t)
  {
    ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,b_11 = NULL;
    y_79 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        v_79 = ATgetArgument(t, 0);
        w_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_79);
    u_79 = t;
    t = v_79;
    t = k_89(t);
    x_79 = t;
    t = w_79;
    if(((t_79 != NULL) && (t_79 != t)))
      _fail(t);
    else
      t_79 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, x_79, w_79);
    b_11 = t;
    t = SSLsetAnnotations(b_11, u_79);
    return(t);
  }
  t = fetch_1_0(y_2, t);
  t = SSL_string_to_int(not_null(t_79));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm z_79 = NULL;
  t = copy_0_0(t);
  z_79 = t;
  t = SSL_implode_string(z_79);
  return(t);
}
static ATerm e_12 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      c_80 = ATgetArgument(t, 0);
      a_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_1, a_80);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      d_80 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_80), c_80), b_80);
  return(t);
}
ATerm thread_map_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm p_80 (ATerm t)
  {
    ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
    i_80 = t;
    if(match_cons(t, sym__2))
      {
        j_80 = ATgetArgument(t, 0);
        k_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_80 = ATgetFirst((ATermList) t);
        h_80 = (ATerm) ATgetNext((ATermList) t);
        t = i_80;
        t = e_12(r_105, p_80, g_80, h_80, k_80, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_80);
      }
    return(t);
  }
  t = p_80(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
      z_80 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_80;
        }
      else
        {
          ATerm v_24 = NULL,f_11 = NULL;
          if(match_cons(t, sym_H_2))
            {
              a_81 = ATgetArgument(t, 0);
              b_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_80);
          v_24 = t;
          t = a_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, a_81, b_81);
          f_11 = t;
          t = SSLsetAnnotations(f_11, v_24);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  o_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_81;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_81 = ATgetFirst((ATermList) t);
          q_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL,e_26 = NULL,f_26 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(o_81);
            r_25 = t;
            t = p_81;
            t = e_106(t);
            e_26 = t;
            t = q_81;
            t = filter_1_0(e_106, t);
            f_26 = t;
            t = (ATerm) ATinsert(CheckATermList(f_26), e_26);
            h_11 = t;
            t = SSLsetAnnotations(h_11, r_25);
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = q_81;
            t = filter_1_0(e_106, t);
          }
      }
    }
  return(t);
}
static ATerm f_12 (ATerm m_125 (ATerm), ATerm j_71, ATerm k_71, ATerm l_71, ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,k_11 = NULL;
  t = l_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_81 = ATgetFirst((ATermList) t);
      v_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_71);
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_81, j_71);
  t = m_125(t);
  w_81 = t;
  t = v_81;
  {
    static ATerm z_2 (ATerm t)
    {
      ATerm y_81 = NULL;
      y_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_81, k_71);
      t = m_125(t);
      return(t);
    }
    t = map_1_0(z_2, t);
  }
  x_81 = t;
  t = (ATerm) ATinsert(CheckATermList(x_81), w_81);
  k_11 = t;
  t = SSLsetAnnotations(k_11, t_81);
  return(t);
}
static ATerm n_82 (ATerm c_82, ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,m_11 = NULL;
  t = SSL_explode_term(c_82);
  if(match_cons(t, sym__2))
    {
      d_82 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_82 = ATgetFirst((ATermList) t);
      i_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_82);
  g_82 = t;
  t = i_82;
  t = Cons_2_0(c_3, e_3, t);
  j_82 = t;
  t = (ATerm) ATinsert(CheckATermList(j_82), h_82);
  m_11 = t;
  t = SSLsetAnnotations(m_11, g_82);
  k_82 = t;
  t = SSL_mkterm(d_82, k_82);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_82 = NULL;
      l_82 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_82;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = Cons_2_0(f_3, o_3, t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm q_23 = t;
  if((PushChoice() == 0))
    {
      ATerm m_82 = NULL;
      m_82 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_82;
        }
      else
        {
          t = n_82(m_82, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_23;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_82 = ATgetFirst((ATermList) t);
      y_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_82, y_82);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_23;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_82 = ATgetFirst((ATermList) t);
      a_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_82, a_83);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(match_cons(s_23, sym__2))
        {
          b_83 = ATgetArgument(s_23, 0);
          c_83 = ATgetArgument(s_23, 1);
        }
      else
        _fail(t);
      {
        ATerm t_23 = ATgetArgument(t, 1);
        if(match_cons(t_23, sym__2))
          {
            d_83 = ATgetArgument(t_23, 0);
            e_83 = ATgetArgument(t_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_83), b_83), (ATerm) ATinsert(CheckATermList(e_83), c_83));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(q_3, t);
      t = (ATerm) ATempty;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,w_82 = NULL,u_12 = NULL;
        t = map_1_0(s_3, t);
        t = genzip_4_0(w_3, y_3, z_3, _id, t);
        w_82 = t;
        if(match_cons(t, sym__2))
          {
            s_82 = ATgetArgument(t, 0);
            t_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_82);
        r_82 = t;
        t = t_82;
        t = matrix_transpose_0_0(t);
        u_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_82, u_82);
        u_12 = t;
        t = SSLsetAnnotations(u_12, r_82);
        if(match_cons(t, sym__2))
          {
            p_82 = ATgetArgument(t, 0);
            q_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_82), p_82);
      }
    }
  return(t);
}
static ATerm h_12 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm g_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, v_32);
  t = l_12(t_32, u_32, v_32, t);
  g_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_83, u_32);
  t = d_13(g_83, u_32, t);
  return(t);
}
static ATerm i_12 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(x_39, y_39);
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      t = SSL_divr(x_39, y_39);
    }
  return(t);
}
static ATerm j_12 (ATerm d_40, ATerm e_40, ATerm t)
{
  t = SSL_mod(d_40, e_40);
  return(t);
}
static ATerm k_12 (ATerm f_33, ATerm g_33, ATerm b_33, ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  t = SSL_strlen(g_33);
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, l_83);
  t = v_12(b_33, l_83, t);
  i_83 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_83 = NULL;
        t = term_b_24;
        s_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_83, term_b_24);
        t = j_12(i_83, s_83, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_83;
        LocalPopChoice(a_24);
        {
          ATerm t_83 = NULL,u_83 = NULL;
          t = term_b_24;
          u_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_83, term_b_24);
          t = i_12(i_83, u_83, t);
          t_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_83, t_83);
        }
      }
    else
      {
        t = z_23;
        {
          ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,j_13 = NULL;
          t = term_f_20;
          y_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_83, term_f_20);
          t = v_12(i_83, y_83, t);
          w_83 = t;
          t = term_b_24;
          x_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_83, term_b_24);
          t = i_12(w_83, x_83, t);
          v_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_83, v_83);
          c_84 = t;
          if(match_cons(t, sym__2))
            {
              ATerm c_24 = ATgetArgument(t, 0);
              ATerm d_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_84);
          z_83 = t;
          t = term_f_20;
          b_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_83, term_f_20);
          t = i_13(v_83, b_84, t);
          a_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_84, v_83);
          j_13 = t;
          t = SSLsetAnnotations(j_13, z_83);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      m_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_83, j_83);
  t = i_13(l_83, j_83, t);
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_33, g_33, q_83);
  t = l_12(f_33, g_33, q_83, t);
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_83, m_83);
  t = i_13(l_83, m_83, t);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_33, g_33, p_83);
  t = l_12(f_33, g_33, p_83, t);
  n_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_83), g_33), k_83);
  r_83 = t;
  t = SSL_concat_strings(r_83);
  return(t);
}
static ATerm l_12 (ATerm m_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm d_84 = NULL;
  t = SSL_strlen(k_33);
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_33, d_84);
  t = v_12(l_33, d_84, t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_84 = NULL;
        e_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_84, term_i_20);
        t = geq_0_0(t);
        t = e_84;
        LocalPopChoice(f_24);
        {
          ATerm f_84 = NULL;
          f_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_84, m_33);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = e_24;
        t = term_g_24;
      }
  }
  return(t);
}
static ATerm m_12 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm g_84 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, x_32, y_32, z_32);
  t = l_12(x_32, y_32, z_32, t);
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, g_84);
  t = d_13(y_32, g_84, t);
  return(t);
}
static ATerm x_85 (ATerm s_84, ATerm t_84, ATerm u_84, ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
  t = term_f_20;
  b_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_84, term_f_20);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(s_84, b_85);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = SSL_gtr(s_84, b_85);
      }
  }
  t = t_84;
  if(match_cons(t, sym__3))
    {
      y_84 = ATgetArgument(t, 0);
      z_84 = ATgetArgument(t, 1);
      a_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_12(y_84, z_84, a_85, t);
  return(t);
}
static ATerm y_85 (ATerm c_85, ATerm d_85, ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  t = c_85;
  if(match_cons(t, sym__3))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
      h_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_12(f_85, g_85, h_85, t);
  return(t);
}
static ATerm z_85 (ATerm i_85, ATerm j_85, ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
  t = i_85;
  if(match_cons(t, sym__3))
    {
      l_85 = ATgetArgument(t, 0);
      m_85 = ATgetArgument(t, 1);
      n_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_12(l_85, m_85, n_85, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm p_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,v_85 = NULL;
  r_85 = t;
  if(match_cons(t, sym__3))
    {
      s_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
      v_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_85;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm l_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_24);
        t = v_85;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm o_24 = ATgetArgument(t, 0);
                  p_85 = ATgetArgument(t, 1);
                  {
                    ATerm p_24 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_24);
              t = s_85;
              if(match_int(t, 1))
                {
                  ATerm q_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_85(s_85, v_85, r_85, t);
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = q_24;
                      t = p_85;
                    }
                }
              else
                {
                  t = x_85(s_85, v_85, r_85, t);
                }
            }
          else
            {
              t = m_24;
              t = s_85;
              t = x_85(s_85, v_85, r_85, t);
            }
        }
      }
    else
      {
        t = j_24;
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm u_24 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_24);
              t = s_85;
              t = y_85(v_85, r_85, t);
            }
          else
            {
              t = s_24;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm w_24 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_85;
              t = z_85(v_85, r_85, t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,t_13 = NULL;
      l_86 = t;
      if(match_cons(t, sym__2))
        {
          j_86 = ATgetArgument(t, 0);
          k_86 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_86);
      i_86 = t;
      t = j_86;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_86;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_24 = ATgetFirst((ATermList) t);
              ATerm a_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_86;
        }
      t = (ATerm) ATmakeAppl(sym__2, j_86, k_86);
      t_13 = t;
      t = SSLsetAnnotations(t_13, i_86);
      LocalPopChoice(y_24);
      t = conc_0_0(t);
    }
  else
    {
      t = x_24;
      {
        ATerm p_86 = NULL,q_86 = NULL;
        if(match_cons(t, sym__2))
          {
            p_86 = ATgetArgument(t, 0);
            q_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_86), p_86);
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_86 = NULL;
      r_86 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_86;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_25 = ATgetFirst((ATermList) t);
              ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_86;
        }
      LocalPopChoice(c_25);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = b_25;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(a_4, b_4, d_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_23;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_87 = ATgetFirst((ATermList) t);
      o_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_87, o_87);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(match_cons(f_25, sym__2))
        {
          p_87 = ATgetArgument(f_25, 0);
          q_87 = ATgetArgument(f_25, 1);
        }
      else
        _fail(t);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(match_cons(g_25, sym__2))
          {
            r_87 = ATgetArgument(g_25, 0);
            s_87 = ATgetArgument(g_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_87), p_87), (ATerm) ATinsert(CheckATermList(s_87), q_87));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_87 = NULL;
      t = flatten_list_0_0(t);
      u_87 = t;
      t = SSL_concat_strings(u_87);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL,g_27 = NULL;
      if(match_cons(t, sym__2))
        {
          c_27 = ATgetArgument(t, 0);
          g_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_27, g_27);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_27, g_27);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = SSL_gtr(c_27, g_27);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_27, g_27);
      LocalPopChoice(k_25);
      {
        ATerm h_27 = NULL,i_27 = NULL;
        i_27 = t;
        t = SSL_explode_term(i_27);
        if(match_cons(t, sym__2))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_25 = ATgetArgument(t, 1);
              if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
                {
                  h_27 = ATgetFirst((ATermList) o_25);
                  {
                    ATerm p_25 = (ATerm) ATgetNext((ATermList) o_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_27;
      }
    }
  else
    {
      t = j_25;
      {
        ATerm j_27 = NULL,k_27 = NULL;
        k_27 = t;
        t = SSL_explode_term(k_27);
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_25 = ATgetArgument(t, 1);
              if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
                {
                  ATerm t_25 = ATgetFirst((ATermList) s_25);
                  ATerm u_25 = (ATerm) ATgetNext((ATermList) s_25);
                  if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
                    {
                      j_27 = ATgetFirst((ATermList) u_25);
                      {
                        ATerm v_25 = (ATerm) ATgetNext((ATermList) u_25);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_27;
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm q_125 (ATerm), ATerm i_72, ATerm h_72, ATerm d_72, ATerm f_72, ATerm c_72, ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,w_13 = NULL,u_26 = NULL,v_26 = NULL;
  t = d_72;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm m_87 = NULL;
      m_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_87, f_72);
      t = q_125(t);
      return(t);
    }
    t = map_1_0(j_4, t);
  }
  t = genzip_4_0(k_4, m_4, o_4, _id, t);
  l_87 = t;
  if(match_cons(t, sym__2))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_87);
  g_87 = t;
  t = h_87;
  t = map_1_0(p_4, t);
  j_87 = t;
  t = i_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_25 = ATgetFirst((ATermList) t);
      v_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_26 = ATgetFirst((ATermList) t);
      {
        ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_26, u_26);
  t = foldl_1_0(t_4, t);
  k_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_87, k_87);
  w_13 = t;
  t = SSLsetAnnotations(w_13, g_87);
  if(match_cons(t, sym__2))
    {
      z_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_86, f_72);
  t = v_12(y_86, f_72, t);
  a_87 = t;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_88 = NULL;
        t = term_f_20;
        b_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_72, term_f_20);
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_72, b_88);
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
              t = SSL_gtr(h_72, b_88);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_72, term_f_20);
        LocalPopChoice(z_25);
        {
          ATerm c_88 = NULL,e_88 = NULL;
          t = i_72;
          if(match_cons(t, sym_AC_1))
            {
              e_88 = ATgetArgument(t, 0);
              t = e_88;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  e_88 = ATgetArgument(t, 0);
                  t = e_88;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      e_88 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_88;
                }
            }
          {
            ATerm c_26 = t;
            int d_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(z_4, t);
                LocalPopChoice(d_26);
              }
            else
              {
                t = c_26;
                t = term_f_20;
              }
          }
          c_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_88, term_a_23);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = y_25;
        t = term_g_24;
      }
  }
  b_87 = t;
  t = z_86;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm i_88 = NULL,j_88 = NULL;
      j_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_72, i_72, (ATerm) ATmakeAppl(sym__3, term_a_23, j_88, a_87));
      t = align_column_0_0(t);
      i_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_88, b_87);
      t = d_13(i_88, b_87, t);
      return(t);
    }
    t = map_1_0(i_5, t);
  }
  c_87 = t;
  t = SSL_strlen(b_87);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_87, y_86);
  t = i_13(e_87, y_86, t);
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, (ATerm) ATinsert(CheckATermList(c_72), c_87));
  return(t);
}
ATerm do_A_column_1_0 (ATerm q_125 (ATerm), ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym__2))
        {
          k_88 = ATgetArgument(g_26, 0);
          {
            ATerm i_26 = ATgetArgument(g_26, 1);
            if(match_cons(i_26, sym__2))
              {
                l_88 = ATgetArgument(i_26, 0);
                m_88 = ATgetArgument(i_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(match_cons(h_26, sym__2))
          {
            n_88 = ATgetArgument(h_26, 0);
            o_88 = ATgetArgument(h_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_12(q_125, k_88, l_88, m_88, n_88, o_88, t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  static ATerm v_88 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_100(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        {
          ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,a_14 = NULL;
          t = g_100(t);
          u_88 = t;
          if(match_cons(t, sym__2))
            {
              q_88 = ATgetArgument(t, 0);
              r_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_88);
          p_88 = t;
          t = q_88;
          t = i_100(t);
          s_88 = t;
          t = r_88;
          t = v_88(t);
          t_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_88, t_88);
          a_14 = t;
          t = SSLsetAnnotations(a_14, p_88);
          t = h_100(t);
        }
      }
    return(t);
  }
  t = v_88(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm y_88 = NULL;
  static ATerm s_89 (ATerm t)
  {
    ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,f_89 = NULL;
    if(match_cons(t, sym__2))
      {
        a_89 = ATgetArgument(t, 0);
        b_89 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_89;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm j_89 = NULL,m_89 = NULL,n_89 = NULL,r_89 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_89 = ATgetFirst((ATermList) t);
            f_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_89, c_89);
        t = z_99(t);
        j_89 = t;
        t = term_f_20;
        r_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_89, term_f_20);
        t = i_13(a_89, r_89, t);
        n_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_89, f_89);
        t = s_89(t);
        m_89 = t;
        t = (ATerm) ATinsert(CheckATermList(m_89), j_89);
      }
    return(t);
  }
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, y_88);
  t = s_89(t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_89;
      t = c_105(t);
    }
  else
    {
      ATerm z_89 = NULL,a_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_89 = ATgetFirst((ATermList) t);
          w_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_89;
      t = e_105(t);
      z_89 = t;
      t = w_89;
      t = foldr_3_0(c_105, d_105, e_105, t);
      a_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_89, a_90);
      t = d_105(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  static ATerm b_90 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_91(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = h_91(t);
        t = b_90(t);
      }
    return(t);
  }
  t = b_90(t);
  return(t);
}
ATerm for_3_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  t = j_91(t);
  t = while_not_2_0(k_91, l_91, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  if(match_cons(t, sym__2))
    {
      e_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_90, f_90, (ATerm) ATempty);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_90 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if(((ATgetType(n_26) != AT_INT) || (ATgetInt((ATermInt) n_26) != 0)))
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
      }
      g_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_90;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,n_90 = NULL;
  if(match_cons(t, sym__3))
    {
      h_90 = ATgetArgument(t, 0);
      i_90 = ATgetArgument(t, 1);
      j_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_90, term_f_20);
  t = geq_0_0(t);
  t = term_f_20;
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_90, term_f_20);
  t = v_12(h_90, n_90, t);
  k_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_90, i_90, (ATerm) ATinsert(CheckATermList(j_90), i_90));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_5, s_5, t_5, t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL,s_27 = NULL,l_14 = NULL;
        v_90 = t;
        if(match_cons(t, sym__2))
          {
            w_90 = ATgetArgument(t, 0);
            x_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_90);
        s_27 = t;
        t = w_90;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_90, x_90);
        l_14 = t;
        t = SSLsetAnnotations(l_14, s_27);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm f_91 = NULL,m_91 = NULL;
  if(match_cons(t, sym__2))
    {
      f_91 = ATgetArgument(t, 0);
      m_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13(f_91, m_91, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm FitToMax_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  d_91 = t;
  t = foldr_3_0(u_5, v_5, w_5, t);
  a_91 = t;
  t = term_g_14;
  t = s_125(t);
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_91, a_91);
  t = v_12(e_91, a_91, t);
  b_91 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_91 = NULL;
        t = term_i_20;
        n_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_91, term_i_20);
        {
          ATerm t_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_91, n_91);
              LocalPopChoice(w_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(b_91, n_91);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_91, (ATerm) ATempty);
        t = copy_0_0(t);
        c_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_91, c_91);
        t = conc_0_0(t);
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = d_91;
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              {
                ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
                t = term_p_12;
                s_91 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, d_91), term_z_26);
                t_91 = t;
                t = SSL_printnl(s_91, t_91);
                t = term_f_20;
                r_91 = t;
                t = SSL_exit(r_91);
                t = (ATerm) ATinsert(ATinsert(ATempty, d_91), term_z_26);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_27 = t;
  if((PushChoice() == 0))
    {
      ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,r_14 = NULL;
      f_93 = t;
      if(match_cons(t, sym_R_2))
        {
          d_93 = ATgetArgument(t, 0);
          e_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_93);
      c_93 = t;
      t = e_93;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, d_93, e_93);
      r_14 = t;
      t = SSLsetAnnotations(r_14, c_93);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm z_91 = NULL;
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_91, (ATerm) ATempty);
  {
    static ATerm g_93 (ATerm t)
    {
      ATerm a_92 = NULL,b_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL;
      if(match_cons(t, sym__2))
        {
          d_92 = ATgetArgument(t, 0);
          g_92 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_92;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm l_92 = NULL;
          t = g_92;
          t = reverse_acc_2_0(_id, x_5, t);
          l_92 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, l_92));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_92 = ATgetFirst((ATermList) t);
              f_92 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_92;
          if(match_cons(t, sym_R_2))
            {
              a_92 = ATgetArgument(t, 0);
              b_92 = ATgetArgument(t, 1);
              {
                ATerm b_27 = t;
                int d_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_92 = NULL,s_92 = NULL;
                    t = g_92;
                    t = reverse_acc_2_0(_id, c_6, t);
                    r_92 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_92, (ATerm) ATempty);
                    t = g_93(t);
                    s_92 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(s_92), (ATerm) ATmakeAppl(sym_R_2, a_92, b_92)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, r_92));
                    LocalPopChoice(d_27);
                  }
                else
                  {
                    t = b_27;
                    t = (ATerm) ATmakeAppl(sym__2, f_92, (ATerm) ATinsert(CheckATermList(g_92), e_92));
                    t = g_93(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, f_92, (ATerm) ATinsert(CheckATermList(g_92), e_92));
              t = g_93(t);
            }
        }
      return(t);
    }
    t = g_93(t);
  }
  t = filter_1_0(d_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_95 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_95;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  if(match_cons(t, sym__2))
    {
      o_95 = ATgetArgument(t, 0);
      p_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13(o_95, p_95, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(((ATgetType(l_27) != AT_LIST) || !(ATisEmpty(l_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
        {
          t_95 = ATgetFirst((ATermList) m_27);
          u_95 = (ATerm) ATgetNext((ATermList) m_27);
        }
      else
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
          {
            v_95 = ATgetFirst((ATermList) n_27);
            w_95 = (ATerm) ATgetNext((ATermList) n_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_95, v_95), (ATerm) ATmakeAppl(sym__2, u_95, w_95));
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL;
  if(match_cons(t, sym__2))
    {
      x_95 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_95), x_95);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,a_15 = NULL;
  y_99 = t;
  if(match_cons(t, sym__2))
    {
      v_99 = ATgetArgument(t, 0);
      w_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_99);
  u_99 = t;
  t = v_99;
  t = reverse_acc_2_0(_id, t_7, t);
  x_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_99, w_99);
  a_15 = t;
  t = SSLsetAnnotations(a_15, u_99);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  static ATerm s_101 (ATerm y_94, ATerm z_94, ATerm a_95, ATerm b_95, ATerm c_95, ATerm t)
  {
    ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,j_95 = NULL,m_95 = NULL;
    t = a_95;
    t = construct_rows_0_0(t);
    t = map_1_0(e_6, t);
    {
      static ATerm f_6 (ATerm t)
      {
        static ATerm i_6 (ATerm t)
        {
          t = y_94;
          t = foldr_3_0(j_6, k_6, l_6, t);
          return(t);
        }
        t = FitToMax_1_0(i_6, t);
        return(t);
      }
      t = map_1_0(f_6, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, m_6, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, n_6, t);
    f_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_94, f_95);
    t = genzip_4_0(o_6, p_6, q_6, _id, t);
    g_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, b_95, (ATerm) ATempty));
    {
      static ATerm r_6 (ATerm t)
      {
        t = do_A_column_1_0(t_0, t);
        return(t);
      }
      t = foldl_1_0(r_6, t);
    }
    if(match_cons(t, sym__2))
      {
        j_95 = ATgetArgument(t, 0);
        h_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_95;
    t = reverse_acc_2_0(_id, s_6, t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm t_6 (ATerm t)
      {
        ATerm b_96 = NULL;
        b_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_96, j_95);
        return(t);
      }
      t = map_1_0(t_6, t);
    }
    m_95 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_94, m_95, b_95);
    t = y_11(z_94, m_95, b_95, t);
    return(t);
  }
  static ATerm t_101 (ATerm c_96, ATerm d_96, ATerm e_96, ATerm f_96, ATerm t)
  {
    ATerm h_96 = NULL,i_96 = NULL,l_96 = NULL;
    t = c_96;
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(y_6, t);
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          t = term_i_20;
        }
    }
    l_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_96, l_96);
    t = i_13(e_96, l_96, t);
    i_96 = t;
    t = d_96;
    t = filter_1_0(is_real_vbox_0_0, t);
    h_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_96);
      }
    else
      {
        ATerm m_96 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, e_96, i_96, h_96);
        t = f_12(t_0, e_96, i_96, h_96, t);
        m_96 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_96, m_96, e_96);
        t = y_11(c_96, m_96, e_96, t);
      }
    return(t);
  }
  static ATerm u_101 (ATerm n_96, ATerm o_96, ATerm p_96, ATerm q_96, ATerm t)
  {
    ATerm t_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,r_97 = NULL,s_97 = NULL,w_14 = NULL;
    t = n_96;
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(z_6, t);
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          t = term_f_20;
        }
    }
    x_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_96, term_a_23);
    t = copy_char_0_0(t);
    v_96 = t;
    t = SSL_strlen(v_96);
    w_96 = t;
    t = o_96;
    t = filter_1_0(is_real_hbox_0_0, t);
    t_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_96, p_96);
    {
      static ATerm f_7 (ATerm t)
      {
        ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,t_14 = NULL;
        t = t_0(t);
        i_97 = t;
        if(match_cons(t, sym__2))
          {
            f_97 = ATgetArgument(t, 0);
            g_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_97);
        e_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_96, g_97);
        t = i_13(w_96, g_97, t);
        h_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_97, h_97);
        t_14 = t;
        t = SSLsetAnnotations(t_14, e_97);
        return(t);
      }
      t = thread_map_1_0(f_7, t);
    }
    d_97 = t;
    if(match_cons(t, sym__2))
      {
        z_96 = ATgetArgument(t, 0);
        a_97 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_97);
    y_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_96, z_96);
    t = z_11(v_96, z_96, t);
    b_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_97, a_97);
    w_14 = t;
    t = SSLsetAnnotations(w_14, y_96);
    c_97 = t;
    if(match_cons(t, sym__2))
      {
        r_97 = ATgetArgument(t, 0);
        s_97 = ATgetArgument(t, 1);
        {
          ATerm t_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_28 = NULL,n_28 = NULL,o_28 = NULL,x_14 = NULL;
              t = SSLgetAnnotations(c_97);
              k_28 = t;
              t = r_97;
              {
                ATerm v_27 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_27;
                  }
              }
              n_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_97, w_96);
              t = v_12(s_97, w_96, t);
              o_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
              x_14 = t;
              t = SSLsetAnnotations(x_14, k_28);
              LocalPopChoice(u_27);
            }
          else
            {
              t = t_27;
              t = c_97;
            }
        }
      }
    else
      {
        t = c_97;
      }
    return(t);
  }
  static ATerm v_101 (ATerm w_97, ATerm y_97, ATerm a_98, ATerm d_98, ATerm t)
  {
    ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL,n_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,u_98 = NULL,v_98 = NULL;
    t = w_97;
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(g_7, t);
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          t = term_f_20;
        }
    }
    v_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_98, term_a_23);
    t = copy_char_0_0(t);
    h_98 = t;
    t = w_97;
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(h_7, t);
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          t = term_i_20;
        }
    }
    r_98 = t;
    t = term_f_20;
    u_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_98, term_f_20);
    t = i_13(r_98, u_98, t);
    q_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_98, term_x_22);
    t = copy_char_0_0(t);
    t = SSL_strlen(h_98);
    f_98 = t;
    t = w_97;
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(i_7, t);
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          t = term_i_20;
        }
    }
    p_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_98, p_98);
    t = i_13(a_98, p_98, t);
    g_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_97, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_98)));
    {
      static ATerm j_7 (ATerm t)
      {
        ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,f_99 = NULL,g_99 = NULL;
        c_99 = t;
        if(match_cons(t, sym__2))
          {
            f_99 = ATgetArgument(t, 0);
            g_99 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_99;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_98 = ATgetFirst((ATermList) t);
            b_99 = (ATerm) ATgetNext((ATermList) t);
            t = y_98;
            if(match_cons(t, sym__2))
              {
                z_98 = ATgetArgument(t, 0);
                a_99 = ATgetArgument(t, 1);
                {
                  ATerm c_28 = t;
                  int d_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm k_7 (ATerm t)
                      {
                        t = f_98;
                        return(t);
                      }
                      t = c_99;
                      t = b_12(t_0, k_7, f_99, z_98, a_99, b_99, t);
                      LocalPopChoice(d_28);
                    }
                  else
                    {
                      t = c_28;
                      {
                        static ATerm l_7 (ATerm t)
                        {
                          t = f_98;
                          return(t);
                        }
                        static ATerm m_7 (ATerm t)
                        {
                          t = g_98;
                          return(t);
                        }
                        t = c_99;
                        t = a_12(t_0, l_7, m_7, f_99, g_99, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm n_7 (ATerm t)
                {
                  t = f_98;
                  return(t);
                }
                static ATerm o_7 (ATerm t)
                {
                  t = g_98;
                  return(t);
                }
                t = c_99;
                t = a_12(t_0, n_7, o_7, f_99, g_99, t);
              }
          }
        else
          {
            static ATerm p_7 (ATerm t)
            {
              t = f_98;
              return(t);
            }
            static ATerm q_7 (ATerm t)
            {
              t = g_98;
              return(t);
            }
            t = c_99;
            t = a_12(t_0, p_7, q_7, f_99, g_99, t);
          }
        return(t);
      }
      t = foldl_1_0(j_7, t);
    }
    t = reverse_acc_2_0(_id, r_7, t);
    t = map_1_0(s_7, t);
    {
      static ATerm u_7 (ATerm t)
      {
        ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,k_100 = NULL,l_100 = NULL,d_15 = NULL;
        l_100 = t;
        if(match_cons(t, sym__2))
          {
            d_100 = ATgetArgument(t, 0);
            e_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_100);
        c_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_98, d_100);
        t = z_11(h_98, d_100, t);
        k_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_100, e_100);
        d_15 = t;
        t = SSLsetAnnotations(d_15, c_100);
        return(t);
      }
      t = map_1_0(u_7, t);
    }
    n_98 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_97, n_98, a_98);
    t = y_11(w_97, n_98, a_98, t);
    return(t);
  }
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL;
  t_100 = t;
  if(match_cons(t, sym__2))
    {
      u_100 = ATgetArgument(t, 0);
      x_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_100;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_24, x_100);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_100 = ATgetFirst((ATermList) t);
          w_100 = (ATerm) ATgetNext((ATermList) t);
          t = w_100;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_100, x_100);
          t = t_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              v_100 = ATgetArgument(t, 0);
              w_100 = ATgetArgument(t, 1);
              {
                ATerm a_29 = NULL,g_29 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, v_100, x_100);
                t = t_0(t);
                a_29 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm e_28 = ATgetArgument(t, 0);
                    g_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, v_100, w_100), x_100);
                {
                  ATerm f_28 = t;
                  int g_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_29 = NULL;
                      t = get_width_0_0(t);
                      h_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
                      t = leq_0_0(t);
                      LocalPopChoice(g_28);
                      t = a_29;
                    }
                  else
                    {
                      t = f_28;
                      t = (ATerm) ATmakeAppl(sym__2, w_100, x_100);
                      t = t_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  v_100 = ATgetArgument(t, 0);
                  w_100 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, v_100, w_100), x_100);
                  t = t_0(t);
                }
              else
                {
                  ATerm h_28 = t;
                  int i_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm j_28 = ATgetArgument(t, 0);
                          w_100 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_28);
                      t = (ATerm) ATmakeAppl(sym__2, w_100, x_100);
                      t = t_0(t);
                    }
                  else
                    {
                      t = h_28;
                      {
                        ATerm l_28 = t;
                        int m_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm p_28 = ATgetArgument(t, 0);
                                w_100 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_28);
                            t = w_100;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                m_100 = ATgetFirst((ATermList) t);
                                o_100 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = m_100;
                            if(match_cons(t, sym_S_1))
                              {
                                n_100 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_100;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, n_100, x_100);
                          }
                        else
                          {
                            t = l_28;
                            if(match_cons(t, sym_S_1))
                              {
                                v_100 = ATgetArgument(t, 0);
                                {
                                  ATerm n_101 = NULL,o_101 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, v_100, x_100);
                                  t = y_12(v_100, x_100, t);
                                  o_101 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, x_100, o_101);
                                  t = i_13(x_100, o_101, t);
                                  n_101 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, v_100, n_101);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    v_100 = ATgetArgument(t, 0);
                                    w_100 = ATgetArgument(t, 1);
                                    s_100 = ATgetArgument(t, 2);
                                    t = v_100;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        r_100 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_100;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        p_100 = ATgetFirst((ATermList) t);
                                        q_100 = (ATerm) ATgetNext((ATermList) t);
                                        t = q_100;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = p_100;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm q_28 = t;
                                                int r_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_101(r_100, w_100, s_100, x_100, t_100, t);
                                                    LocalPopChoice(r_28);
                                                  }
                                                else
                                                  {
                                                    t = q_28;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_100);
                                                  }
                                              }
                                            else
                                              {
                                                t = s_101(r_100, w_100, s_100, x_100, t_100, t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_100;
                                            t = s_101(r_100, w_100, s_100, x_100, t_100, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm s_28 = t;
                                            int t_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_101(r_100, w_100, s_100, x_100, t_100, t);
                                                LocalPopChoice(t_28);
                                              }
                                            else
                                              {
                                                t = s_28;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_100);
                                              }
                                          }
                                        else
                                          {
                                            t = s_101(r_100, w_100, s_100, x_100, t_100, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        v_100 = ATgetArgument(t, 0);
                                        w_100 = ATgetArgument(t, 1);
                                        t = t_101(v_100, w_100, x_100, t_100, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            v_100 = ATgetArgument(t, 0);
                                            w_100 = ATgetArgument(t, 1);
                                            t = u_101(v_100, w_100, x_100, t_100, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                v_100 = ATgetArgument(t, 0);
                                                w_100 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = v_101(v_100, w_100, x_100, t_100, t);
                                          }
                                      }
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
static ATerm v_12 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_39, m_39);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = SSL_subtr(l_39, m_39);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_102 = ATgetFirst((ATermList) t);
      b_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_102;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_102;
    }
  else
    {
      t = b_102;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm x_12 (ATerm k_98 (ATerm), ATerm c_22, ATerm j_253, ATerm t)
{
  static ATerm v_7 (ATerm t)
  {
    ATerm g_102 = NULL;
    g_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_22, g_102);
    t = k_98(t);
    t = g_102;
    return(t);
  }
  t = j_253;
  t = SRTS_one(v_7, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  static ATerm u_102 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_98(t);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,d_30 = NULL,j_30 = NULL,n_17 = NULL;
          r_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_102 = ATgetFirst((ATermList) t);
              t_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_102);
          d_30 = t;
          t = t_102;
          t = u_102(t);
          j_30 = t;
          t = (ATerm) ATinsert(CheckATermList(j_30), s_102);
          n_17 = t;
          t = SSLsetAnnotations(n_17, d_30);
        }
      }
    return(t);
  }
  t = u_102(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm w_102 = NULL,x_102 = NULL;
  static ATerm w_7 (ATerm t)
  {
    ATerm y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,d_18 = NULL,u_17 = NULL;
    g_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_103 = ATgetFirst((ATermList) t);
        d_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_103);
    b_103 = t;
    t = c_103;
    t = o_98(t);
    e_103 = t;
    t = (ATerm) ATinsert(CheckATermList(d_103), e_103);
    u_17 = t;
    t = SSLsetAnnotations(u_17, b_103);
    f_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_102 = ATgetFirst((ATermList) t);
        a_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_103);
    y_102 = t;
    t = a_103;
    if(((w_102 != NULL) && (w_102 != t)))
      _fail(t);
    else
      w_102 = t;
    t = (ATerm) ATinsert(CheckATermList(a_103), z_102);
    d_18 = t;
    t = SSLsetAnnotations(d_18, y_102);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(w_7, t);
  x_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_102, not_null(w_102));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm o_103 = NULL,r_103 = NULL;
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(x_107, t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm l_103 = NULL;
        l_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_103, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      o_103 = ATgetArgument(t, 0);
      r_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_103;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_103;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_29 = ATgetFirst((ATermList) t);
              ATerm c_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_103;
          t = list_tokenize_1_0(x_107, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_29 = ATgetFirst((ATermList) t);
          ATerm e_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_103;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, o_103);
        }
      else
        {
          ATerm y_103 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_29 = ATgetFirst((ATermList) t);
              ATerm i_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_103;
          t = list_tokenize_1_0(x_107, t);
          y_103 = t;
          t = (ATerm) ATinsert(CheckATermList(y_103), o_103);
        }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm h_104 = NULL;
  if(match_cons(t, sym__2))
    {
      h_104 = ATgetArgument(t, 0);
      if((h_104 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm i_104 = NULL;
  i_104 = t;
  t = SSL_implode_string(i_104);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_18 = NULL;
  f_104 = t;
  if(match_cons(t, sym__2))
    {
      c_104 = ATgetArgument(t, 0);
      d_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_104);
  b_104 = t;
  t = SSL_explode_string(d_104);
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_104, e_104);
  g_18 = t;
  t = SSLsetAnnotations(g_18, b_104);
  if(match_cons(t, sym__2))
    {
      z_103 = ATgetArgument(t, 0);
      a_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_104;
  {
    static ATerm x_7 (ATerm t)
    {
      ATerm g_104 = NULL;
      g_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_104, z_103);
      t = x_12(y_7, g_104, z_103, t);
      return(t);
    }
    t = list_tokenize_1_0(x_7, t);
  }
  t = map_1_0(z_7, t);
  return(t);
}
static ATerm y_12 (ATerm y_18, ATerm z_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_x_22), y_18);
  t = string_tokenize_0_0(t);
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL,q_104 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_i_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_104 = ATgetFirst((ATermList) t);
                q_104 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_104;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(p_104);
          }
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm r_104 = NULL,s_104 = NULL;
          t = last_0_0(t);
          s_104 = t;
          t = SSL_strlen(s_104);
          r_104 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_104, z_18);
          t = v_12(r_104, z_18, t);
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  static ATerm y_105 (ATerm t)
  {
    ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
    x_105 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_105 = ATgetFirst((ATermList) t);
        w_105 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_31 = NULL,m_32 = NULL,j_18 = NULL;
          t = SSLgetAnnotations(x_105);
          w_31 = t;
          t = w_105;
          t = y_105(t);
          m_32 = t;
          t = (ATerm) ATinsert(CheckATermList(m_32), v_105);
          j_18 = t;
          t = SSLsetAnnotations(j_18, w_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_105;
        t = s_98(t);
      }
    return(t);
  }
  t = y_105(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_104;
    }
  else
    {
      static ATerm a_8 (ATerm t)
      {
        t = not_null(x_104);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_104 = ATgetFirst((ATermList) t);
          if(((x_104 != NULL) && (x_104 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_104;
      t = at_end_1_0(a_8, t);
    }
  return(t);
}
static ATerm l_106 (ATerm c_106, ATerm t)
{
  ATerm d_106 = NULL;
  t = SSL_explode_term(c_106);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_106;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  i_106 = t;
  if(match_cons(t, sym__2))
    {
      g_106 = ATgetArgument(t, 0);
      h_106 = ATgetArgument(t, 1);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_8 (ATerm t)
            {
              t = h_106;
              return(t);
            }
            t = g_106;
            t = at_end_1_0(c_8, t);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = l_106(i_106, t);
          }
      }
    }
  else
    {
      t = l_106(i_106, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL;
  u_107 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_107;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_107 = ATgetFirst((ATermList) t);
          w_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = NULL,o_33 = NULL,l_18 = NULL;
            t = SSLgetAnnotations(u_107);
            h_33 = t;
            t = v_107;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_107;
            t = flat_list_0_0(t);
            o_33 = t;
            t = (ATerm) ATinsert(CheckATermList(o_33), v_107);
            l_18 = t;
            t = SSLsetAnnotations(l_18, h_33);
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,n_34 = NULL,m_18 = NULL;
                  t = SSLgetAnnotations(u_107);
                  k_34 = t;
                  t = v_107;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_107;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm s_29 = ATgetFirst((ATermList) t);
                          ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = v_107;
                    }
                  t = (ATerm) ATinsert(CheckATermList(w_107), v_107);
                  m_18 = t;
                  t = SSLsetAnnotations(m_18, k_34);
                  n_34 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_34 = ATgetFirst((ATermList) t);
                      {
                        ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_34;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_29 = ATgetFirst((ATermList) t);
                      i_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, j_34, i_34);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(r_29);
                }
              else
                {
                  t = q_29;
                  {
                    ATerm l_35 = NULL,q_35 = NULL,n_18 = NULL;
                    t = SSLgetAnnotations(u_107);
                    l_35 = t;
                    t = w_107;
                    t = flat_list_0_0(t);
                    q_35 = t;
                    t = (ATerm) ATinsert(CheckATermList(q_35), v_107);
                    n_18 = t;
                    t = SSLsetAnnotations(n_18, l_35);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_109 = NULL;
  j_109 = t;
  if(match_int(t, 32))
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_35 = NULL;
          t = term_y_29;
          y_35 = t;
          t = SSL_explode_string(y_35);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = j_109;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_35 = NULL;
              t = term_b_30;
              z_35 = t;
              t = SSL_explode_string(z_35);
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = j_109;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm c_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_36 = NULL;
                  t = term_f_30;
                  a_36 = t;
                  t = SSL_explode_string(a_36);
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = c_30;
                  t = j_109;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm g_30 = t;
                  int h_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_36 = NULL;
                      t = term_i_30;
                      b_36 = t;
                      t = SSL_explode_string(b_36);
                      LocalPopChoice(h_30);
                    }
                  else
                    {
                      t = g_30;
                      t = j_109;
                    }
                }
              else
                {
                  if(match_int(t, 38))
                    {
                      ATerm k_30 = t;
                      int l_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_36 = NULL;
                          t = term_m_30;
                          e_36 = t;
                          t = SSL_explode_string(e_36);
                          LocalPopChoice(l_30);
                        }
                      else
                        {
                          t = k_30;
                          t = j_109;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm n_30 = t;
                          int o_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_36 = NULL;
                              t = term_p_30;
                              f_36 = t;
                              t = SSL_explode_string(f_36);
                              LocalPopChoice(o_30);
                            }
                          else
                            {
                              t = n_30;
                              t = j_109;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm q_30 = t;
                              int r_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_36 = NULL;
                                  t = term_s_30;
                                  n_36 = t;
                                  t = SSL_explode_string(n_36);
                                  LocalPopChoice(r_30);
                                }
                              else
                                {
                                  t = q_30;
                                  t = j_109;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm t_30 = t;
                                  int u_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm o_36 = NULL;
                                      t = term_v_30;
                                      o_36 = t;
                                      t = SSL_explode_string(o_36);
                                      LocalPopChoice(u_30);
                                    }
                                  else
                                    {
                                      t = t_30;
                                      t = j_109;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm w_30 = t;
                                      int x_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_36 = NULL;
                                          t = term_y_30;
                                          q_36 = t;
                                          t = SSL_explode_string(q_36);
                                          LocalPopChoice(x_30);
                                        }
                                      else
                                        {
                                          t = w_30;
                                          t = j_109;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm z_30 = t;
                                          int a_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm r_36 = NULL;
                                              t = term_b_31;
                                              r_36 = t;
                                              t = SSL_explode_string(r_36);
                                              LocalPopChoice(a_31);
                                            }
                                          else
                                            {
                                              t = z_30;
                                              t = j_109;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm c_31 = t;
                                              int d_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_36 = NULL;
                                                  t = term_e_31;
                                                  s_36 = t;
                                                  t = SSL_explode_string(s_36);
                                                  LocalPopChoice(d_31);
                                                }
                                              else
                                                {
                                                  t = c_31;
                                                  t = j_109;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm f_31 = t;
                                                  int g_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_36 = NULL;
                                                      t = term_h_31;
                                                      t_36 = t;
                                                      t = SSL_explode_string(t_36);
                                                      LocalPopChoice(g_31);
                                                    }
                                                  else
                                                    {
                                                      t = f_31;
                                                      t = j_109;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm i_31 = t;
                                                      int j_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_36 = NULL;
                                                          t = term_k_31;
                                                          u_36 = t;
                                                          t = SSL_explode_string(u_36);
                                                          LocalPopChoice(j_31);
                                                        }
                                                      else
                                                        {
                                                          t = i_31;
                                                          t = j_109;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm l_31 = t;
                                                          int m_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_36 = NULL;
                                                              t = term_n_31;
                                                              z_36 = t;
                                                              t = SSL_explode_string(z_36);
                                                              LocalPopChoice(m_31);
                                                            }
                                                          else
                                                            {
                                                              t = l_31;
                                                              t = j_109;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm o_31 = t;
                                                              int p_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_37 = NULL;
                                                                  t = term_q_31;
                                                                  c_37 = t;
                                                                  t = SSL_explode_string(c_37);
                                                                  LocalPopChoice(p_31);
                                                                }
                                                              else
                                                                {
                                                                  t = o_31;
                                                                  t = j_109;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = j_109;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  t = map_1_0(d_8, t);
  t = flat_list_0_0(t);
  return(t);
}
ATerm abox2alltt_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm d_114 (ATerm h_113, ATerm i_113, ATerm j_113, ATerm k_113, ATerm t)
  {
    ATerm o_113 = NULL,p_113 = NULL;
    t = h_113;
    if(match_cons(t, sym_KW_0))
      {
        t = h_113;
      }
    else
      {
        if(match_cons(t, sym_VAR_0))
          {
            t = h_113;
          }
        else
          {
            if(match_cons(t, sym_NUM_0))
              {
                t = h_113;
              }
            else
              {
                if(!(match_cons(t, sym_MATH_0)))
                  _fail(t);
                t = h_113;
              }
          }
      }
    t = (ATerm) ATmakeAppl(sym__2, i_113, j_113);
    t = r_0(t);
    if(match_cons(t, sym__2))
      {
        o_113 = ATgetArgument(t, 0);
        p_113 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, h_113, o_113), p_113);
    return(t);
  }
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
  u_113 = t;
  if(match_cons(t, sym__2))
    {
      v_113 = ATgetArgument(t, 0);
      y_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_113;
  if(match_cons(t, sym_S_1))
    {
      w_113 = ATgetArgument(t, 0);
      {
        ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
        t = w_113;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_40 = NULL;
              t = term_n_21;
              p_40 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_n_21, w_113);
              t = n_13(p_40, w_113, t);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              {
                ATerm q_40 = NULL;
                t = SSL_explode_string(w_113);
                t = escape_special_characters_0_0(t);
                q_40 = t;
                t = SSL_implode_string(q_40);
              }
            }
        }
        m_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_113, y_113);
        t = y_12(w_113, y_113, t);
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_113, o_40);
        t = i_13(y_113, o_40, t);
        n_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_40, n_40);
      }
    }
  else
    {
      if(match_cons(t, sym_FBOX_2))
        {
          w_113 = ATgetArgument(t, 0);
          x_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_113;
      if(match_cons(t, sym_F_1))
        {
          t_113 = ATgetArgument(t, 0);
          t = t_113;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_113 = ATgetFirst((ATermList) t);
              s_113 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm t_31 = t;
                int u_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_41 = NULL,g_42 = NULL,h_42 = NULL,o_44 = NULL,y_44 = NULL;
                    t = r_113;
                    if(match_cons(t, sym_FFID_2))
                      {
                        o_44 = ATgetArgument(t, 0);
                        y_44 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm v_31 = t;
                      int x_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_46 = NULL,t_18 = NULL;
                          t = SSLgetAnnotations(r_113);
                          e_46 = t;
                          t = o_44;
                          if(!(match_cons(t, sym_FM_0)))
                            _fail(t);
                          t = y_44;
                          p_41 = t;
                          t = (ATerm) ATmakeAppl(sym_FFID_2, o_44, y_44);
                          t_18 = t;
                          t = SSLsetAnnotations(t_18, e_46);
                          LocalPopChoice(x_31);
                        }
                      else
                        {
                          t = v_31;
                          {
                            ATerm y_31 = t;
                            int z_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_47 = NULL,u_18 = NULL;
                                t = SSLgetAnnotations(r_113);
                                f_47 = t;
                                t = o_44;
                                if(!(match_cons(t, sym_SE_0)))
                                  _fail(t);
                                t = y_44;
                                p_41 = t;
                                t = (ATerm) ATmakeAppl(sym_FFID_2, o_44, y_44);
                                u_18 = t;
                                t = SSLsetAnnotations(u_18, f_47);
                                LocalPopChoice(z_31);
                              }
                            else
                              {
                                t = y_31;
                                {
                                  ATerm a_32 = t;
                                  int b_32 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_48 = NULL,v_18 = NULL;
                                      t = SSLgetAnnotations(r_113);
                                      c_48 = t;
                                      t = o_44;
                                      if(!(match_cons(t, sym_SH_0)))
                                        _fail(t);
                                      t = y_44;
                                      p_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_FFID_2, o_44, y_44);
                                      v_18 = t;
                                      t = SSLsetAnnotations(v_18, c_48);
                                      LocalPopChoice(b_32);
                                    }
                                  else
                                    {
                                      t = a_32;
                                      {
                                        ATerm c_32 = t;
                                        int d_32 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_48 = NULL,w_18 = NULL;
                                            t = SSLgetAnnotations(r_113);
                                            u_48 = t;
                                            t = o_44;
                                            if(!(match_cons(t, sym_SZ_0)))
                                              _fail(t);
                                            t = y_44;
                                            p_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_FFID_2, o_44, y_44);
                                            w_18 = t;
                                            t = SSLsetAnnotations(w_18, u_48);
                                            LocalPopChoice(d_32);
                                          }
                                        else
                                          {
                                            t = c_32;
                                            {
                                              ATerm q_49 = NULL,x_18 = NULL;
                                              t = SSLgetAnnotations(r_113);
                                              q_49 = t;
                                              t = o_44;
                                              if(!(match_cons(t, sym_CL_0)))
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_FFID_2, o_44, y_44);
                                              x_18 = t;
                                              t = SSLsetAnnotations(x_18, q_49);
                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, y_44);
                                              p_41 = t;
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, s_113), x_113), y_113);
                    t = r_0(t);
                    if(match_cons(t, sym__2))
                      {
                        g_42 = ATgetArgument(t, 0);
                        h_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, p_41, g_42), h_42);
                    LocalPopChoice(u_31);
                  }
                else
                  {
                    t = t_31;
                    t = d_114(w_113, x_113, y_113, u_113, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm e_32 = t;
                  int f_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, x_113, y_113);
                      t = r_0(t);
                      LocalPopChoice(f_32);
                    }
                  else
                    {
                      t = e_32;
                      t = d_114(w_113, x_113, y_113, u_113, t);
                    }
                }
              else
                {
                  t = d_114(w_113, x_113, y_113, u_113, t);
                }
            }
        }
      else
        {
          t = d_114(w_113, x_113, y_113, u_113, t);
        }
    }
  return(t);
}
ATerm try_abox2alltt_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2alltt_1_0(try_abox2alltt_0_0, t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_1_0(try_abox2alltt_0_0, t);
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm p_114 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL;
              p_114 = t;
              t = term_p_12;
              k_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, p_114), term_k_32);
              l_50 = t;
              t = SSL_printnl(k_50, l_50);
              t = term_f_20;
              i_50 = t;
              t = SSL_exit(i_50);
              t = (ATerm) ATinsert(ATinsert(ATempty, p_114), term_k_32);
            }
          }
      }
    }
  return(t);
}
static ATerm n_13 (ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm r_114 = NULL;
  t = lookup_table_0_1(f_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_13(g_61, r_114, t);
  return(t);
}
static ATerm b_13 (ATerm c_36, ATerm d_36, ATerm t)
{
  t = SSL_access(c_36, d_36);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_114 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_n_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_114 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_32);
      y_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_114, (ATerm) ATinsert(ATempty, term_l_32));
      t = b_13(v_114, y_114, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_115 (ATerm g_115, ATerm t)
{
  t = SSL_fclose(g_115);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL;
  k_115 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_115 = ATgetArgument(t, 0);
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_115);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            t = m_115(k_115, t);
          }
      }
    }
  else
    {
      t = m_115(k_115, t);
    }
  return(t);
}
static ATerm c_13 (ATerm g_21, ATerm t)
{
  t = SSL_read_term_from_stream(g_21);
  return(t);
}
static ATerm d_13 (ATerm c_35, ATerm d_35, ATerm t)
{
  t = SSL_strcat(c_35, d_35);
  return(t);
}
static ATerm e_13 (ATerm l_36, ATerm m_36, ATerm t)
{
  ATerm n_115 = NULL;
  t = SSL_fopen(l_36, m_36);
  n_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_115);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_115 = NULL;
  t = SSL_stdin_stream();
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_115);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_115 = NULL;
  t = SSL_stdout_stream();
  p_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_115);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_115 = NULL;
  t = SSL_stderr_stream();
  q_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_115);
  return(t);
}
static ATerm x_116 (ATerm w_115, ATerm t)
{
  ATerm x_115 = NULL;
  t = SSL_explode_term(w_115);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            x_115 = ATgetFirst((ATermList) q_32);
            {
              ATerm r_32 = (ATerm) ATgetNext((ATermList) q_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_115;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_115;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_115;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_115;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_116 (ATerm a_116, ATerm b_116, ATerm c_116, ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL,i_116 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(c_116);
  f_116 = t;
  t = a_116;
  if(match_cons(t, sym_Path_1))
    {
      i_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_116, b_116);
  g_19 = t;
  t = SSLsetAnnotations(g_19, f_116);
  if(match_cons(t, sym__2))
    {
      d_116 = ATgetArgument(t, 0);
      e_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13(d_116, e_116, t);
  return(t);
}
static ATerm z_116 (ATerm k_116, ATerm l_116, ATerm m_116, ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,s_116 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(m_116);
  p_116 = t;
  t = SSL_is_string(k_116);
  s_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_116, l_116);
  h_19 = t;
  t = SSLsetAnnotations(h_19, p_116);
  if(match_cons(t, sym__2))
    {
      n_116 = ATgetArgument(t, 0);
      o_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13(n_116, o_116, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL;
  u_116 = t;
  if(match_cons(t, sym__2))
    {
      v_116 = ATgetArgument(t, 0);
      w_116 = ATgetArgument(t, 1);
      {
        ATerm s_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_116(u_116, t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = s_32;
            {
              ATerm a_33 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_116(v_116, w_116, u_116, t);
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = a_33;
                  t = z_116(v_116, w_116, u_116, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_116(u_116, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL,i_117 = NULL;
  i_117 = t;
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_117, term_i_33);
        t = f_13(t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm n_51 = NULL,o_51 = NULL;
          t = term_j_33;
          o_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_33, i_117);
          t = d_13(o_51, i_117, t);
          n_51 = t;
          t = SSL_perror(n_51);
          _fail(t);
        }
      }
  }
  c_117 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(d_117, t);
  b_117 = t;
  t = c_117;
  t = fclose_0_0(t);
  t = b_117;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_117 = ATgetFirst((ATermList) t);
      {
        ATerm n_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
          {
            v_117 = ATgetFirst((ATermList) n_33);
            {
              ATerm p_33 = (ATerm) ATgetNext((ATermList) n_33);
              if(((ATgetType(p_33) != AT_LIST) || !(ATisEmpty(p_33))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_n_21;
  w_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_21, u_117, v_117);
  t = lookup_table_0_1(w_117, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(u_117, v_117, x_117, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_21, u_117, v_117);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm m_117 = NULL;
  m_117 = t;
  t = term_n_21;
  t = table_create_0_0(t);
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_117 = NULL,t_117 = NULL;
        t = term_q_11;
        o_117 = t;
        t = term_s_33;
        t_117 = t;
        t = term_t_33;
        t = n_13(o_117, t_117, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(f_8, t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
      }
  }
  t = m_117;
  return(t);
}
static ATerm h_13 (ATerm r_59, ATerm s_59, ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL;
  c_118 = t;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_59, s_59);
        t = n_13(r_59, s_59, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_33 = ATgetFirst((ATermList) t);
            b_118 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_33);
        {
          ATerm d_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_59, s_59, b_118);
          t = lookup_table_0_1(r_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_13(s_59, b_118, d_118, t);
          t = (ATerm) ATmakeAppl(sym__3, r_59, s_59, b_118);
        }
      }
    else
      {
        t = u_33;
        {
          ATerm f_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_59, s_59);
          t = lookup_table_0_1(r_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_13(s_59, f_118, t);
          t = (ATerm) ATmakeAppl(sym__2, r_59, s_59);
        }
      }
  }
  t = c_118;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_111 (ATerm), ATerm t)
{
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL;
  k_118 = t;
  t = j_111(t);
  j_118 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_118 = NULL;
        t = term_x_13;
        o_118 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_118, term_x_13);
        t = n_13(j_118, o_118, t);
        {
          ATerm z_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_33;
            }
        }
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_118 = ATgetFirst((ATermList) t);
      h_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_118, term_x_13, h_118);
  t = lookup_table_0_1(j_118, t);
  n_118 = t;
  t = term_x_13;
  l_118 = t;
  t = n_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(l_118, h_118, m_118, t);
  t = i_118;
  {
    static ATerm g_8 (ATerm t)
    {
      ATerm p_118 = NULL;
      p_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_118, p_118);
      t = h_13(j_118, p_118, t);
      return(t);
    }
    t = map_1_0(g_8, t);
  }
  t = k_118;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_90(t);
      t = m_90(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = m_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL;
  s_118 = t;
  t = i_111(t);
  r_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_118, term_x_13);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_119 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_34 = ATgetArgument(t, 0);
            ATerm f_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_13;
        b_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_118, term_x_13);
        t = n_13(r_118, b_119, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATempty;
      }
  }
  t_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_118, term_x_13, (ATerm) ATinsert(CheckATermList(t_118), (ATerm) ATempty));
  t = lookup_table_0_1(r_118, t);
  x_118 = t;
  t = term_x_13;
  u_118 = t;
  t = (ATerm) ATinsert(CheckATermList(t_118), (ATerm) ATempty);
  v_118 = t;
  t = x_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(u_118, v_118, w_118, t);
  t = s_118;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_119 = NULL;
  k_119 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_119);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = k_119;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_124 (ATerm), ATerm t)
{
  ATerm e_119 = NULL;
  static ATerm i_8 (ATerm t)
  {
    ATerm f_119 = NULL;
    f_119 = t;
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_119 = NULL,h_119 = NULL;
          t = term_e_14;
          g_119 = t;
          t = term_x_13;
          h_119 = t;
          t = term_o_34;
          t = n_13(g_119, h_119, t);
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_119 != NULL) && (e_119 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_119 = ATgetFirst((ATermList) t);
        {
          ATerm p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_119;
    t = map_1_0(j_8, t);
    t = f_119;
    t = end_scope_1_0(k_8, t);
    return(t);
  }
  t = begin_scope_1_0(h_8, t);
  t = restore_always_2_0(m_124, i_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL;
  n_119 = t;
  t = term_g_14;
  t = whoami_0_0(t);
  o_119 = t;
  t = term_p_12;
  s_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_34), o_119), term_q_34);
  t_119 = t;
  t = SSL_printnl(s_119, t_119);
  t = term_f_20;
  r_119 = t;
  t = SSL_exit(r_119);
  t = n_119;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_119 = NULL;
  v_119 = t;
  if(match_string(t, "-k"))
    {
      t = v_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_119;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL,y_119 = NULL;
  w_119 = t;
  t = SSL_string_to_int(w_119);
  x_119 = t;
  t = term_s_34;
  y_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, x_119);
  t = q_13(y_119, x_119, t);
  t = w_119;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm a_120 = NULL;
  a_120 = t;
  if(match_string(t, "-S"))
    {
      t = a_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_120;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm b_120 = NULL,c_120 = NULL;
  t = term_u_34;
  b_120 = t;
  t = term_i_20;
  c_120 = t;
  t = term_v_34;
  t = q_13(b_120, c_120, t);
  t = term_w_34;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
  d_120 = t;
  t = SSL_string_to_int(d_120);
  e_120 = t;
  t = term_u_34;
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, e_120);
  t = q_13(f_120, e_120, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_120);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_y_34;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL;
  t = term_z_34;
  g_120 = t;
  t = term_g_14;
  h_120 = t;
  t = term_a_35;
  t = q_13(g_120, h_120, t);
  t = term_b_35;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, p_8, q_8, t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_8, u_8, w_8, t);
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = Option_3_0(x_8, y_8, z_8, t);
          }
      }
    }
  return(t);
}
static ATerm q_13 (ATerm r_54, ATerm s_54, ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL;
  t = term_q_11;
  i_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_11, r_54, s_54);
  t = lookup_table_0_1(i_120, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(r_54, s_54, j_120, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_11, r_54, s_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_120 = NULL,o_120 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
      t = term_g_14;
      t = h_0(t);
      p_120 = t;
      t = term_j_35;
      q_120 = t;
      t = term_k_35;
      r_120 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, p_120);
      t = o_13(q_120, r_120, p_120, t);
      _fail(t);
    }
  else
    {
      ATerm u_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_120 = ATgetFirst((ATermList) t);
          o_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_120;
      t = d_0(t);
      t = term_g_14;
      t = g_0(t);
      u_120 = t;
      t = (ATerm) ATinsert(CheckATermList(o_120), u_120);
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm w_120 = NULL;
  w_120 = t;
  if(match_string(t, "-o"))
    {
      t = w_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_120;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL;
  x_120 = t;
  t = term_r_11;
  y_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, x_120);
  t = q_13(y_120, x_120, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_120);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_9, b_9, c_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm a_121 = NULL;
  a_121 = t;
  if(match_string(t, "-i"))
    {
      t = a_121;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_121;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL;
  b_121 = t;
  t = term_n_35;
  c_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_35, b_121);
  t = q_13(c_121, b_121, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_121);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_9, e_9, f_9, t);
  return(t);
}
static ATerm o_13 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm t)
{
  ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL;
  e_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
  {
    ATerm p_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            ATerm t_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
        t = n_13(m_59, n_59, t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATempty;
      }
  }
  f_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_59, n_59, (ATerm) ATinsert(CheckATermList(f_121), l_59));
  t = lookup_table_0_1(m_59, t);
  i_121 = t;
  t = (ATerm) ATinsert(CheckATermList(f_121), l_59);
  g_121 = t;
  t = i_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(n_59, g_121, h_121, t);
  t = e_121;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL;
      t = term_g_14;
      t = p_0(t);
      t_121 = t;
      t = term_j_35;
      u_121 = t;
      t = term_k_35;
      v_121 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, t_121);
      t = o_13(u_121, v_121, t_121, t);
      _fail(t);
    }
  else
    {
      ATerm z_121 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_121 = ATgetFirst((ATermList) t);
          q_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_121;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_121 = ATgetFirst((ATermList) t);
          s_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_121;
      t = m_0(t);
      t = r_121;
      t = o_0(t);
      z_121 = t;
      t = (ATerm) ATinsert(CheckATermList(s_121), z_121);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL;
  t = term_u_35;
  c_122 = t;
  t = term_v_35;
  d_122 = t;
  t = term_w_35;
  t = q_13(c_122, d_122, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL;
  t = term_u_35;
  e_122 = t;
  t = term_g_36;
  f_122 = t;
  t = term_h_36;
  t = q_13(e_122, f_122, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm g_122 = NULL;
  g_122 = t;
  if(match_string(t, "-t"))
    {
      t = g_122;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = g_122;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL;
  h_122 = t;
  t = term_s_33;
  i_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_33, h_122);
  t = q_13(i_122, h_122, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm j_122 = NULL;
  j_122 = t;
  if(match_string(t, "-w"))
    {
      t = j_122;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = j_122;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL;
  k_122 = t;
  t = term_r_19;
  l_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, k_122);
  t = q_13(l_122, k_122, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm Abox_2_latex_options_0_0 (ATerm t)
{
  ATerm p_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, j_9, t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = p_36;
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(m_9, n_9, o_9, t);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm y_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(p_9, q_9, r_9, t);
                  LocalPopChoice(a_37);
                }
              else
                {
                  t = y_36;
                  t = ArgOption_3_0(s_9, t_9, u_9, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_14;
  t = whoami_0_0(t);
  m_122 = t;
  t = term_p_12;
  o_122 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_37), m_122);
  p_122 = t;
  t = SSL_printnl(o_122, p_122);
  t = term_f_20;
  n_122 = t;
  t = SSL_exit(n_122);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL;
  t = term_q_11;
  q_122 = t;
  t = term_d_37;
  r_122 = t;
  t = term_e_37;
  t = n_13(q_122, r_122, t);
  return(t);
}
static ATerm i_13 (ATerm f_39, ATerm g_39, ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_39, g_39);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      t = SSL_addr(f_39, g_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL;
  t_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_122;
      t = a_105(t);
    }
  else
    {
      ATerm y_122 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_122 = ATgetFirst((ATermList) t);
          v_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_122;
      t = foldr_2_0(a_105, b_105, t);
      y_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_122, y_122);
      t = b_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13(w_52, x_52, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_123 = NULL,d_52 = NULL,t_52 = NULL;
  t = times_0_0(t);
  t_52 = t;
  t = SSL_explode_term(t_52);
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_52;
  t = foldr_2_0(v_9, w_9, t);
  b_123 = t;
  t = SSL_TicksToSeconds(b_123);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL;
  m_123 = t;
  if(match_cons(t, sym__2))
    {
      n_123 = ATgetArgument(t, 0);
      o_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_123;
        if((n_123 != t))
          {
            _fail(t);
          }
        t = m_123;
        LocalPopChoice(k_37);
      }
    else
      {
        t = i_37;
        t = (ATerm) ATmakeAppl(sym__2, n_123, o_123);
        {
          ATerm m_37 = t;
          int n_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_123, o_123);
              LocalPopChoice(n_37);
            }
          else
            {
              t = m_37;
              t = SSL_gtr(n_123, o_123);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_123, o_123);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm s_123 = NULL;
  s_123 = t;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_123 = NULL,v_123 = NULL,w_123 = NULL;
        t = term_q_11;
        v_123 = t;
        t = term_u_34;
        w_123 = t;
        t = term_r_37;
        t = n_13(v_123, w_123, t);
        u_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_123, term_f_20);
        t = geq_0_0(t);
        t = s_123;
        t = x_114(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = s_123;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm y_123 = NULL,z_123 = NULL,b_124 = NULL,c_124 = NULL;
  t = run_time_0_0(t);
  y_123 = t;
  t = term_g_14;
  t = whoami_0_0(t);
  z_123 = t;
  t = term_p_12;
  b_124 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_37), y_123), term_s_37), z_123);
  c_124 = t;
  t = SSL_printnl(b_124, c_124);
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_37), y_123), term_s_37), z_123));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_124 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_20;
  d_124 = t;
  t = SSL_exit(d_124);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL;
  p_124 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_124;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_124 = ATgetArgument(t, 0);
          {
            ATerm j_53 = NULL,o_19 = NULL;
            t = SSLgetAnnotations(p_124);
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_124);
            o_19 = t;
            t = SSLsetAnnotations(o_19, j_53);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_124;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_124 = NULL,h_124 = NULL;
      t = term_q_11;
      g_124 = t;
      t = term_y_37;
      h_124 = t;
      t = term_z_37;
      t = n_13(g_124, h_124, t);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      t = fetch_1_0(y_9, t);
    }
  t = n_117(t);
  return(t);
}
static ATerm r_13 (ATerm e_64, ATerm f_64, ATerm g_64, ATerm t)
{
  ATerm r_124 = NULL;
  t = SSL_hashtable_put(g_64, e_64, f_64);
  r_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_124);
  return(t);
}
static ATerm s_13 (ATerm h_64, ATerm i_64, ATerm t)
{
  t = SSL_hashtable_get(i_64, h_64);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_60, ATerm t)
{
  ATerm a_125 = NULL;
  t = table_hashtable_0_0(t);
  a_125 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_54 = NULL;
        t = a_125;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_13(y_60, f_54, t);
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm k_54 = NULL;
          t = y_60;
          t = table_create_0_0(t);
          t = a_125;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_13(y_60, k_54, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_64, ATerm n_64, ATerm t)
{
  ATerm d_125 = NULL;
  t = SSL_hashtable_create(m_64, n_64);
  d_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_125);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_125 = NULL,k_125 = NULL,l_125 = NULL,o_125 = NULL,p_125 = NULL;
  e_125 = t;
  t = term_d_38;
  o_125 = t;
  t = term_e_38;
  p_125 = t;
  t = e_125;
  t = new_hashtable_0_2(o_125, p_125, t);
  k_125 = t;
  t = e_125;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(e_125, k_125, l_125, t);
  t = e_125;
  return(t);
}
static ATerm k_13 (ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm r_125 = NULL;
  t = SSL_hashtable_remove(k_64, j_64);
  r_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_125);
  return(t);
}
static ATerm l_13 (ATerm o_64, ATerm t)
{
  ATerm t_125 = NULL;
  t = SSL_hashtable_destroy(o_64);
  t_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_125);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_125 = NULL;
  t = SSL_table_hashtable();
  u_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_125);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL;
  v_125 = t;
  t = table_hashtable_0_0(t);
  w_125 = t;
  t = lookup_table_0_1(v_125, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_13(y_125, t);
  t = w_125;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_13(v_125, x_125, t);
  t = v_125;
  return(t);
}
ATerm map_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  static ATerm n_126 (ATerm t)
  {
    ATerm k_126 = NULL,l_126 = NULL,m_126 = NULL;
    k_126 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_126;
      }
    else
      {
        ATerm x_54 = NULL,o_55 = NULL,p_55 = NULL,y_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_126 = ATgetFirst((ATermList) t);
            m_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_126);
        x_54 = t;
        t = l_126;
        t = b_98(t);
        o_55 = t;
        t = m_126;
        t = n_126(t);
        p_55 = t;
        t = (ATerm) ATinsert(CheckATermList(p_55), o_55);
        y_19 = t;
        t = SSLsetAnnotations(y_19, x_54);
      }
    return(t);
  }
  t = n_126(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_126 = ATgetFirst((ATermList) t);
      r_126 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_126 = NULL,w_126 = NULL;
        static ATerm z_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_126)), not_null(w_126));
          return(t);
        }
        t = r_126;
        t = l_0(t);
        if(((v_126 != NULL) && (v_126 != t)))
          _fail(t);
        else
          v_126 = t;
        t = q_126;
        t = j_0(t);
        if(((w_126 != NULL) && (w_126 != t)))
          _fail(t);
        else
          w_126 = t;
        t = r_126;
        t = reverse_acc_2_0(j_0, z_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_14;
      t = l_0(t);
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,j_37 = NULL;
  e_127 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_127);
  c_127 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_127);
  j_37 = t;
  t = SSLsetAnnotations(j_37, c_127);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm g_127 = NULL;
  g_127 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_127), term_f_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_127 = NULL,b_127 = NULL;
      t = term_q_11;
      a_127 = t;
      t = term_d_37;
      b_127 = t;
      t = term_e_37;
      t = n_13(a_127, b_127, t);
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      t = fetch_1_0(c_10, t);
    }
  t = term_i_38;
  t = echo_0_0(t);
  t = term_j_35;
  y_126 = t;
  t = term_k_35;
  z_126 = t;
  t = term_j_38;
  t = n_13(y_126, z_126, t);
  t = reverse_acc_2_0(_id, d_10, t);
  t = map_1_0(e_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  static ATerm d_128 (ATerm t)
  {
    ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
    a_128 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_128 = ATgetFirst((ATermList) t);
        c_128 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_56 = NULL,g_56 = NULL,l_37 = NULL;
          t = SSLgetAnnotations(a_128);
          c_56 = t;
          t = b_128;
          t = l_98(t);
          g_56 = t;
          t = (ATerm) ATinsert(CheckATermList(c_128), g_56);
          l_37 = t;
          t = SSLsetAnnotations(l_37, c_56);
          LocalPopChoice(l_38);
        }
      else
        {
          t = k_38;
          {
            ATerm g_57 = NULL,m_57 = NULL,o_37 = NULL;
            t = SSLgetAnnotations(a_128);
            g_57 = t;
            t = c_128;
            t = d_128(t);
            m_57 = t;
            t = (ATerm) ATinsert(CheckATermList(m_57), b_128);
            o_37 = t;
            t = SSLsetAnnotations(o_37, g_57);
          }
        }
    }
    return(t);
  }
  t = d_128(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL;
  h_128 = t;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_128;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_38 = ATgetFirst((ATermList) t);
                ATerm p_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_128;
          }
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATinsert(ATempty, h_128);
      }
  }
  i_128 = t;
  t = term_c_12;
  j_128 = t;
  t = SSL_printnl(j_128, i_128);
  t = h_128;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL;
  t = term_q_11;
  n_128 = t;
  t = term_d_37;
  o_128 = t;
  t = term_e_37;
  t = n_13(n_128, o_128, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm p_128 = NULL,q_128 = NULL;
  t = term_q_38;
  p_128 = t;
  t = term_g_14;
  q_128 = t;
  t = term_r_38;
  t = q_13(p_128, q_128, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
  t = term_q_38;
  t_128 = t;
  t = term_g_14;
  u_128 = t;
  t = term_r_38;
  t = q_13(t_128, u_128, t);
  t = term_t_38;
  r_128 = t;
  t = term_g_14;
  s_128 = t;
  t = term_u_38;
  t = q_13(r_128, s_128, t);
  t = term_v_38;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_10, g_10, h_10, t);
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      t = Option_3_0(j_10, l_10, m_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL,u_37 = NULL;
  a_129 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_128 = ATgetFirst((ATermList) t);
      x_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_129);
  v_128 = t;
  t = w_128;
  t = h_75(t);
  y_128 = t;
  t = x_128;
  t = i_75(t);
  z_128 = t;
  t = (ATerm) ATinsert(CheckATermList(z_128), y_128);
  u_37 = t;
  t = SSLsetAnnotations(u_37, v_128);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL,h_129 = NULL,i_129 = NULL,k_129 = NULL,l_129 = NULL,x_37 = NULL;
  f_129 = t;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_39;
        t = q_119(t);
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
      }
  }
  t = f_129;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_129 = ATgetFirst((ATermList) t);
      i_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_129);
  g_129 = t;
  t = term_d_37;
  l_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_37, h_129);
  t = q_13(l_129, h_129, t);
  t = i_129;
  {
    static ATerm v_129 (ATerm t)
    {
      ATerm c_39 = t;
      int d_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_129 = NULL;
              o_129 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_129;
              LocalPopChoice(h_39);
            }
          else
            {
              t = e_39;
              t = q_119(t);
              t = Cons_2_0(_id, v_129, t);
            }
          LocalPopChoice(d_39);
        }
      else
        {
          t = c_39;
          {
            ATerm r_129 = NULL,s_129 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_129 = ATgetFirst((ATermList) t);
                s_129 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_129), (ATerm) ATmakeAppl(sym_Undefined_1, r_129));
          }
        }
      return(t);
    }
    t = v_129(t);
  }
  k_129 = t;
  t = (ATerm) ATinsert(CheckATermList(k_129), (ATerm) ATmakeAppl(sym_Program_1, h_129));
  x_37 = t;
  t = SSLsetAnnotations(x_37, g_129);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm i_130 = NULL;
  i_130 = t;
  if(match_string(t, "--help"))
    {
      t = i_130;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_130;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_130;
        }
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL;
  t = term_y_37;
  j_130 = t;
  t = term_g_14;
  k_130 = t;
  t = term_i_39;
  t = q_13(j_130, k_130, t);
  t = term_j_39;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL;
  c_130 = t;
  t = term_j_35;
  d_130 = t;
  t = term_n_39;
  t = lookup_table_0_1(d_130, t);
  h_130 = t;
  t = term_k_35;
  e_130 = t;
  t = (ATerm) ATempty;
  f_130 = t;
  t = h_130;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(e_130, f_130, g_130, t);
  t = c_130;
  {
    static ATerm o_10 (ATerm t)
    {
      ATerm o_39 = t;
      int p_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_119(t);
          LocalPopChoice(p_39);
        }
      else
        {
          t = o_39;
          {
            ATerm q_39 = t;
            int r_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_10, q_10, r_10, t);
                LocalPopChoice(r_39);
              }
            else
              {
                t = q_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_10, t);
  }
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_130 = NULL;
        v_130 = t;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_58 = NULL;
              t = v_130;
              {
                ATerm w_39 = t;
                int z_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_58 = NULL,h_58 = NULL;
                    t = term_q_11;
                    g_58 = t;
                    t = term_y_37;
                    h_58 = t;
                    t = term_z_37;
                    t = n_13(g_58, h_58, t);
                    LocalPopChoice(z_39);
                  }
                else
                  {
                    t = w_39;
                    t = fetch_1_0(s_10, t);
                  }
              }
              t = v_130;
              t = default_system_usage_0_0(t);
              t = term_i_20;
              d_58 = t;
              t = SSL_exit(d_58);
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
              {
                ATerm r_58 = NULL,u_58 = NULL,v_58 = NULL;
                t = term_q_11;
                u_58 = t;
                t = term_q_38;
                v_58 = t;
                t = term_a_40;
                t = n_13(u_58, v_58, t);
                t = v_130;
                t = default_system_about_0_0(t);
                t = term_i_20;
                r_58 = t;
                t = SSL_exit(r_58);
              }
            }
        }
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_130 = NULL,x_130 = NULL,y_130 = NULL;
              static ATerm t_10 (ATerm t)
              {
                ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,a_38 = NULL;
                b_131 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_131 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_131);
                z_130 = t;
                t = a_131;
                if(((a_130 != NULL) && (a_130 != t)))
                  _fail(t);
                else
                  a_130 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_131);
                a_38 = t;
                t = SSLsetAnnotations(a_38, z_130);
                return(t);
              }
              t = fetch_1_0(t_10, t);
              t = term_p_12;
              x_130 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_130)), term_f_40);
              y_130 = t;
              t = SSL_printnl(x_130, y_130);
              t = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_130)), term_f_40));
              t = default_system_usage_0_0(t);
              t = term_f_20;
              w_130 = t;
              t = SSL_exit(w_130);
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
            }
        }
      }
  }
  b_130 = t;
  t = term_j_35;
  t = table_destroy_0_0(t);
  t = b_130;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL;
  t = parse_options_1_0(p_117, t);
  g_131 = t;
  t = term_g_40;
  t = table_create_0_0(t);
  t = term_g_40;
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_40, term_h_40, g_131);
  t = lookup_table_0_1(h_131, t);
  k_131 = t;
  t = term_h_40;
  i_131 = t;
  t = k_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(i_131, g_131, j_131, t);
  t = g_131;
  t = r_117(t);
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_117, t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_117(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm s_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_latex_options_0_0(t);
      LocalPopChoice(u_40);
    }
  else
    {
      t = s_40;
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            {
              ATerm x_40 = t;
              int y_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(y_40);
                }
              else
                {
                  t = x_40;
                  {
                    ATerm z_40 = t;
                    int a_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_10, x_10, z_10, t);
                        LocalPopChoice(a_41);
                      }
                    else
                      {
                        t = z_40;
                        {
                          ATerm b_41 = t;
                          int c_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(c_41);
                            }
                          else
                            {
                              t = b_41;
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
static ATerm v_10 (ATerm t)
{
  t = xtc_temp_files_1_0(a_11, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL;
  t = term_d_41;
  p_131 = t;
  t = term_g_14;
  q_131 = t;
  t = term_e_41;
  t = q_13(p_131, q_131, t);
  t = term_f_41;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL;
      t = term_q_11;
      v_131 = t;
      t = term_n_35;
      w_131 = t;
      t = term_j_41;
      t = n_13(v_131, w_131, t);
      u_131 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_131);
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      t = term_n_12;
    }
  t = load_latex_table_0_0(t);
  t = read_from_0_0(t);
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL;
        x_131 = t;
        t = term_q_11;
        y_131 = t;
        t = term_u_35;
        z_131 = t;
        t = term_m_41;
        t = n_13(y_131, z_131, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("alltt", 0, ATtrue)))
          _fail(t);
        t = x_131;
        LocalPopChoice(l_41);
        {
          ATerm a_132 = NULL,b_132 = NULL,c_132 = NULL;
          a_132 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_132, term_i_20);
          t = try_abox2alltt_0_0(t);
          c_132 = t;
          t = SSL_explode_term(c_132);
          if(match_cons(t, sym__2))
            {
              ATerm n_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_41) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm o_41 = ATgetArgument(t, 1);
                if(((ATgetType(o_41) == AT_LIST) && !(ATisEmpty(o_41))))
                  {
                    b_132 = ATgetFirst((ATermList) o_41);
                    {
                      ATerm q_41 = (ATerm) ATgetNext((ATermList) o_41);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ALLTT_1, b_132);
          t = bottomup_1_0(c_11, t);
        }
      }
    else
      {
        t = k_41;
        {
          ATerm f_132 = NULL,g_132 = NULL;
          t = topdown_1_0(d_11, t);
          g_132 = t;
          t = BOXENV_args_0_0(t);
          f_132 = t;
          t = (ATerm) ATmakeAppl(sym_BOXENV_2, f_132, g_132);
          t = bottomup_1_0(e_11, t);
        }
      }
  }
  t_131 = t;
  t = term_g_14;
  t = create_header_0_0(t);
  s_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, t_131), s_131), term_k_14);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
    }
  return(t);
}
ATerm io_Abox_2_latex_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_10, default_usage_0_0, _id, v_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_latex_0_0(t);
  return(t);
}

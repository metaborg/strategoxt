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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_d_42;
ATerm term_a_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_u_40;
ATerm term_r_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_s_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_u_33;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_y_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_c_28;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_m_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_s_21;
ATerm term_g_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_l_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_s_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_m_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically by \n", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001-2004 Merijn de Jonge (mdejonge@cs.uu.nl) \n", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{alltt}\n", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\\end{alltt}\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_p_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_CSEP_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_L_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_R_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_EOR_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(61);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_o_34);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_w_14);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_s_35, term_g_21);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_21);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_x_35, term_f_15);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("alltt", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_y_36);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("boxenv", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_c_37);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_a_38);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_s_35);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_q_38);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_i_36);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_h_39, term_f_15);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_f_15);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_f_15);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__3, term_h_36, term_i_36, (ATerm) ATempty);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_h_39);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_f_15);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_k_36);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_x_36);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm i_13 (ATerm j_59, ATerm i_59, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_101 (ATerm), ATerm t);
static ATerm u_4 (ATerm b_4, ATerm t);
static ATerm v_4 (ATerm f_4, ATerm g_4, ATerm h_4, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm v_11 (ATerm c_115 (ATerm), ATerm l_41, ATerm j_41, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm tables2text_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm e_50 (ATerm x_6, ATerm y_6, ATerm z_6, ATerm t);
ATerm Latex2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm f_95 (ATerm), ATerm t);
ATerm BOXENV_args_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm e_93 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm LatexComment_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm make_latex_comment_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm toh_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
static ATerm w_59 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_11 (ATerm q_17, ATerm t);
ATerm MkRows_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm y_11 (ATerm m_17, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm w_11 (ATerm p_19, ATerm t);
ATerm listtd_1_0 (ATerm a_103 (ATerm), ATerm t);
static ATerm d_78 (ATerm q_71, ATerm r_71, ATerm s_71, ATerm t);
static ATerm e_78 (ATerm w_71, ATerm x_71, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm Abox2latex_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_95 (ATerm), ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm z_11 (ATerm p_73, ATerm n_73, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm a_12 (ATerm h_73, ATerm l_73, ATerm i_73, ATerm t);
static ATerm b_12 (ATerm q_21, ATerm r_21, ATerm t);
static ATerm c_12 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm g_74, ATerm f_74, ATerm t);
static ATerm d_12 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm b_74, ATerm z_73, ATerm c_74, ATerm a_74, ATerm t);
ATerm foldl_1_0 (ATerm u_108 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm z_92 (ATerm), ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm g_12 (ATerm x_0 (ATerm), ATerm b_1 (ATerm), ATerm y_0, ATerm c_1, ATerm w_0, ATerm t);
ATerm thread_map_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_109 (ATerm), ATerm t);
static ATerm h_12 (ATerm k_129 (ATerm), ATerm w_74, ATerm x_74, ATerm y_74, ATerm t);
static ATerm n_83 (ATerm c_83, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
static ATerm j_12 (ATerm w_32, ATerm x_32, ATerm y_32, ATerm t);
static ATerm k_12 (ATerm p_40, ATerm q_40, ATerm t);
static ATerm l_12 (ATerm v_40, ATerm w_40, ATerm t);
static ATerm m_12 (ATerm i_33, ATerm j_33, ATerm e_33, ATerm t);
static ATerm n_12 (ATerm p_33, ATerm n_33, ATerm o_33, ATerm t);
static ATerm o_12 (ATerm a_33, ATerm b_33, ATerm c_33, ATerm t);
static ATerm x_86 (ATerm s_85, ATerm t_85, ATerm u_85, ATerm t);
static ATerm y_86 (ATerm c_86, ATerm d_86, ATerm t);
static ATerm z_86 (ATerm i_86, ATerm j_86, ATerm t);
ATerm align_column_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_12 (ATerm o_129 (ATerm), ATerm v_75, ATerm u_75, ATerm q_75, ATerm s_75, ATerm p_75, ATerm t);
ATerm do_A_column_1_0 (ATerm o_129 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t);
ATerm map_with_index_1_0 (ATerm o_103 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm copy_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm FitToMax_1_0 (ATerm q_129 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm abox2text_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm x_12 (ATerm d_40, ATerm e_40, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_13 (ATerm e_22, ATerm f_257, ATerm t);
ATerm at_suffix_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_102 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm m_111 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm y_12 (ATerm a_19, ATerm b_19, ATerm t);
ATerm at_end_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_106 (ATerm p_106, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm escape_special_characters_0_0 (ATerm t);
ATerm abox2alltt_1_0 (ATerm q_0 (ATerm), ATerm t);
ATerm try_abox2alltt_0_0 (ATerm t);
static ATerm p_13 (ATerm p_54, ATerm q_54, ATerm t);
static ATerm h_13 (ATerm r_36, ATerm s_36, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_116 (ATerm c_116, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_13 (ATerm i_21, ATerm t);
static ATerm g_13 (ATerm f_35, ATerm g_35, ATerm t);
static ATerm b_13 (ATerm d_37, ATerm e_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_117 (ATerm s_116, ATerm t);
static ATerm u_117 (ATerm w_116, ATerm x_116, ATerm y_116, ATerm t);
static ATerm v_117 (ATerm g_117, ATerm h_117, ATerm i_117, ATerm t);
static ATerm c_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm load_latex_table_0_0 (ATerm t);
static ATerm j_13 (ATerm b_53, ATerm c_53, ATerm t);
ATerm end_scope_1_0 (ATerm z_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_114 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_13 (ATerm g_63, ATerm h_63, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm q_13 (ATerm w_52, ATerm x_52, ATerm v_52, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm Abox_2_latex_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_13 (ATerm x_39, ATerm y_39, ATerm t);
ATerm foldr_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_118 (ATerm), ATerm t);
static ATerm h_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm need_help_1_0 (ATerm i_121 (ATerm), ATerm t);
static ATerm t_13 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm t);
static ATerm u_13 (ATerm r_57, ATerm s_57, ATerm t);
ATerm lookup_table_0_1 (ATerm i_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_57, ATerm x_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_13 (ATerm t_57, ATerm u_57, ATerm t);
static ATerm n_13 (ATerm y_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_102 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_123 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_options_1_0 (ATerm k_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm io_Abox_2_latex_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = t_1;
        t = p_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, u_1, e_0);
        t = i_13(u_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = t_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm i_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_0;
                          }
                        else
                          {
                            t = z_0;
                            if((u_1 != t))
                              {
                                _fail(t);
                              }
                            t = z_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_12;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_1, v_0);
              t = i_13(u_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = t_1;
              t = p_0(t);
              if((u_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
            }
        }
      }
  }
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  i_2 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL;
        t = SSL_filemode(i_2);
        if(match_cons(t, sym__2))
          {
            g_1 = ATgetArgument(t, 0);
            {
              ATerm r_12 = ATgetArgument(t, 1);
              if(((ATgetType(r_12) != AT_INT) || (ATgetInt((ATermInt) r_12) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_1;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm j_2 = NULL,n_2 = NULL;
          t = term_s_12;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_12, i_2);
          t = g_13(n_2, i_2, t);
          j_2 = t;
          t = SSL_perror(j_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm i_13 (ATerm j_59, ATerm i_59, ATerm t)
{
  ATerm m_2 = NULL,q_2 = NULL;
  q_2 = t;
  {
    ATerm u_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL,s_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_13);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_59, (ATerm) ATinsert(ATempty, term_d_13));
        t = h_13(i_59, s_2, t);
        t = filemode_0_0(t);
        r_2 = t;
        t = SSL_S_ISDIR(r_2);
        t = q_2;
        LocalPopChoice(w_12);
        {
          ATerm t_2 = NULL,v_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_e_13), j_59);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          t_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_2), term_l_13), i_59);
          v_2 = t;
          t = SSL_concat_strings(v_2);
        }
      }
    else
      {
        t = u_12;
        t = i_59;
      }
  }
  m_2 = t;
  t = SSL_copy(j_59, m_2);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,k_3 = NULL;
      t = term_x_13;
      j_3 = t;
      t = term_y_13;
      k_3 = t;
      t = term_a_14;
      t = p_13(j_3, k_3, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = o_13;
      t = term_b_14;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_2 = NULL,w_2 = NULL;
      t = term_y_13;
      {
        ATerm c_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 = NULL,y_2 = NULL;
            t = term_x_13;
            x_2 = t;
            t = term_y_13;
            y_2 = t;
            t = term_a_14;
            t = p_13(x_2, y_2, t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = c_14;
            t = term_b_14;
          }
      }
      u_2 = t;
      t = term_f_14;
      w_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_14, u_2);
      t = i_13(w_2, u_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm g_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_3;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,t_3 = NULL;
  m_3 = t;
  t = f_101(t);
  o_3 = t;
  t = term_h_14;
  p_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_3), o_3);
  t_3 = t;
  t = SSL_printnl(p_3, t_3);
  t = m_3;
  return(t);
}
static ATerm u_4 (ATerm b_4, ATerm t)
{
  t = b_4;
  {
    ATerm i_14 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_14 = ATgetArgument(t, 0);
            ATerm k_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_14;
      }
  }
  t = term_l_14;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_m_14);
  t = open_file_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm f_4, ATerm g_4, ATerm h_4, ATerm t)
{
  t = SSL_open_file(f_4, g_4);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,t_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_4(p_4, t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = v_4(q_4, t_4, p_4, t);
          }
      }
    }
  else
    {
      t = u_4(p_4, t);
    }
  return(t);
}
static ATerm v_11 (ATerm c_115 (ATerm), ATerm l_41, ATerm j_41, ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  z_4 = t;
  t = c_115(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_4, l_41, j_41);
  t = q_13(w_4, l_41, j_41, t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_w_14;
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_4, term_w_14);
        t = p_13(w_4, e_5, t);
        {
          ATerm x_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_14;
            }
        }
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_4 = ATgetFirst((ATermList) t);
      y_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_4, term_w_14, (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATinsert(CheckATermList(x_4), l_41)));
  t = lookup_table_0_1(w_4, t);
  d_5 = t;
  t = term_w_14;
  a_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATinsert(CheckATermList(x_4), l_41));
  b_5 = t;
  t = d_5;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(a_5, b_5, c_5, t);
  t = z_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL,n_3 = NULL;
      k_5 = t;
      t = term_b_15;
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, term_b_15);
      t = g_13(k_5, n_3, t);
      g_5 = t;
      t = SSL_mkstemp(g_5);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm l_5 = NULL;
        t = term_c_15;
        l_5 = t;
        t = SSL_perror(l_5);
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
  t = term_d_15;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  t = P__tmpdir_0_0(t);
  q_5 = t;
  t = term_e_15;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_5, term_e_15);
  t = g_13(q_5, r_5, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_15;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, term_f_15);
  t = v_11(c_0, o_5, p_5, t);
  t = SSL_close(n_5);
  t = o_5;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  v_5 = t;
  t = xtc_new_file_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, term_m_14);
  t = open_file_0_0(t);
  t = v_5;
  {
    static ATerm i_0 (ATerm t);
    static ATerm i_0 (ATerm t)
    {
      ATerm c_6 = NULL;
      c_6 = t;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL,u_3 = NULL;
            t = SSL_is_string(c_6);
            s_3 = t;
            t = (ATerm) ATinsert(ATempty, s_3);
            u_3 = t;
            t = SSL_print(w_5, u_3);
            t = s_3;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = c_6;
          }
      }
      return(t);
    }
    t = topdown_1_0(i_0, t);
  }
  t = SSL_close_file(w_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_5);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_15), j_6), term_i_15);
  k_6 = t;
  t = SSL_concat_strings(k_6);
  return(t);
}
ATerm tables2text_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 = NULL,i_6 = NULL;
      t = term_x_13;
      h_6 = t;
      t = term_m_15;
      i_6 = t;
      t = term_n_15;
      t = p_13(h_6, i_6, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = (ATerm) ATempty;
    }
  t = map_1_0(k_0, t);
  f_6 = t;
  t = SSL_concat_strings(f_6);
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL;
  t = term_f_15;
  t = tables2text_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_15), term_f_16), term_e_16), term_p_15), term_d_16), term_a_16), term_y_15), term_x_15), term_u_15), term_p_15), l_6), term_t_15), term_s_15), term_p_15), term_r_15), term_p_15), term_q_15), term_p_15);
  m_6 = t;
  t = SSL_concat_strings(m_6);
  return(t);
}
static ATerm e_50 (ATerm x_6, ATerm y_6, ATerm z_6, ATerm t)
{
  ATerm a_8 = NULL;
  t = SSL_is_int(x_6);
  t = SSL_int_to_string(x_6);
  a_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_16), y_6), term_k_16), a_8), term_j_16);
  return(t);
}
ATerm Latex2text_0_0 (ATerm t)
{
  ATerm b_8 = NULL,e_8 = NULL,f_8 = NULL,k_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_ALLTT_1))
    {
      k_8 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), k_8), term_m_16);
    }
  else
    {
      if(match_cons(t, sym_BOXENV_2))
        {
          k_8 = ATgetArgument(t, 0);
          n_8 = ATgetArgument(t, 1);
          t = k_8;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_16), n_8), term_o_16);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_8 = ATgetFirst((ATermList) t);
                  b_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_8;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), n_8), term_r_16), l_8), term_q_16);
            }
        }
      else
        {
          if(match_cons(t, sym_HBOX_2))
            {
              k_8 = ATgetArgument(t, 0);
              n_8 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), n_8), term_r_16), k_8), term_y_16);
            }
          else
            {
              if(match_cons(t, sym_VBOX_3))
                {
                  k_8 = ATgetArgument(t, 0);
                  n_8 = ATgetArgument(t, 1);
                  e_8 = ATgetArgument(t, 2);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_17), e_8), term_r_16), n_8), term_k_16), k_8), term_a_17);
                }
              else
                {
                  if(match_cons(t, sym_HVBOX_4))
                    {
                      k_8 = ATgetArgument(t, 0);
                      n_8 = ATgetArgument(t, 1);
                      e_8 = ATgetArgument(t, 2);
                      f_8 = ATgetArgument(t, 3);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_17), f_8), term_r_16), e_8), term_k_16), n_8), term_k_16), k_8), term_c_17);
                    }
                  else
                    {
                      if(match_cons(t, sym_ABOX_2))
                        {
                          k_8 = ATgetArgument(t, 0);
                          n_8 = ATgetArgument(t, 1);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), n_8), term_r_16), k_8), term_e_17);
                        }
                      else
                        {
                          if(match_cons(t, sym_ALTBOX_2))
                            {
                              k_8 = ATgetArgument(t, 0);
                              n_8 = ATgetArgument(t, 1);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_17), n_8), term_i_17), k_8), term_g_17);
                            }
                          else
                            {
                              if(match_cons(t, sym_CBOX_1))
                                {
                                  k_8 = ATgetArgument(t, 0);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_17), k_8), term_t_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBOX_2))
                                    {
                                      k_8 = ATgetArgument(t, 0);
                                      n_8 = ATgetArgument(t, 1);
                                      t = k_8;
                                      if(match_string(t, "="))
                                        {
                                          ATerm v_17 = t;
                                          int w_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = e_50(k_8, n_8, o_8, t);
                                              LocalPopChoice(w_17);
                                            }
                                          else
                                            {
                                              t = v_17;
                                              {
                                                ATerm f_18 = t;
                                                int g_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_18), n_8), term_h_18);
                                                    LocalPopChoice(g_18);
                                                  }
                                                else
                                                  {
                                                    t = f_18;
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), n_8), term_r_16), k_8), term_j_18);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm k_18 = t;
                                          int l_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = e_50(k_8, n_8, o_8, t);
                                              LocalPopChoice(l_18);
                                            }
                                          else
                                            {
                                              t = k_18;
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), n_8), term_r_16), k_8), term_j_18);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBLBOX_2))
                                        {
                                          k_8 = ATgetArgument(t, 0);
                                          n_8 = ATgetArgument(t, 1);
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_8), term_o_18), k_8), term_m_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REFBOX_2))
                                            {
                                              k_8 = ATgetArgument(t, 0);
                                              n_8 = ATgetArgument(t, 1);
                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_k_16), k_8), term_p_18);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_BOXFONT_2))
                                                {
                                                  k_8 = ATgetArgument(t, 0);
                                                  n_8 = ATgetArgument(t, 1);
                                                  t = k_8;
                                                  if(match_cons(t, sym_KW_0))
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_q_18);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_VAR_0))
                                                        {
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_t_18);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_NUM_0))
                                                            {
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_x_18);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_MATH_0))
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_y_18);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "sf"))
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_z_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "rm"))
                                                                        {
                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_c_19);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "tt"))
                                                                            {
                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_d_19);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "md"))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_e_19);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "bf"))
                                                                                    {
                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_h_19);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "up"))
                                                                                        {
                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_i_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "it"))
                                                                                            {
                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_k_19);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "sc"))
                                                                                                {
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_m_19);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "sl"))
                                                                                                    {
                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_o_19);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "em"))
                                                                                                        {
                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_r_19);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "tiny"))
                                                                                                            {
                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_s_19);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "scriptsize"))
                                                                                                                {
                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_u_19);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "footnotesize"))
                                                                                                                    {
                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_v_19);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "small"))
                                                                                                                        {
                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_w_19);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "normalsize"))
                                                                                                                            {
                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_x_19);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "large"))
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_y_19);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "Large"))
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_z_19);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "LARGE"))
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_a_20);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "huge"))
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_d_20);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "Huge"))
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_e_20);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      l_8 = ATgetArgument(t, 0);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), n_8), term_k_16), l_8), term_f_20);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
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
                                                      t = term_g_20;
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_R_0))
                                                        {
                                                          t = term_i_20;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_L_0))
                                                            {
                                                              t = term_j_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_EOR_0))
                                                                {
                                                                  t = term_k_20;
                                                                }
                                                              else
                                                                {
                                                                  if(!(match_cons(t, sym_CSEP_0)))
                                                                    _fail(t);
                                                                  t = term_m_20;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    t = bottomup_1_0(f_95, t);
    return(t);
  }
  t = SRTS_all(n_0, t);
  t = f_95(t);
  return(t);
}
ATerm BOXENV_args_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_50 = NULL,h_50 = NULL,j_50 = NULL;
      t = term_x_13;
      h_50 = t;
      t = term_p_20;
      j_50 = t;
      t = term_q_20;
      t = p_13(h_50, j_50, t);
      g_50 = t;
      t = (ATerm) ATinsert(ATempty, g_50);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  static ATerm o_52 (ATerm t);
  static ATerm o_52 (ATerm t)
  {
    ATerm q_51 = NULL,r_51 = NULL,l_52 = NULL;
    l_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_51 = ATgetFirst((ATermList) t);
        r_51 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 = NULL,t_5 = NULL,g_6 = NULL,h_1 = NULL;
              t = SSLgetAnnotations(l_52);
              t_5 = t;
              t = q_51;
              t = e_93(t);
              g_6 = t;
              t = (ATerm) ATinsert(CheckATermList(r_51), g_6);
              h_1 = t;
              t = SSLsetAnnotations(h_1, t_5);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_20 = ATgetFirst((ATermList) t);
                  s_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_5;
              t = o_52(t);
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              t = l_52;
            }
        }
      }
    else
      {
        t = l_52;
      }
    return(t);
  }
  t = o_52(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  if(match_int(t, 9))
    {
      t = y_52;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = y_52;
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
  ATerm s_52 = NULL,t_52 = NULL;
  t = remove_trailing_1_0(s_0, t);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          ATerm z_52 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,k_1 = NULL;
          i_53 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_53 = ATgetFirst((ATermList) t);
              g_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_53);
          z_52 = t;
          t = f_53;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 37)))
            _fail(t);
          t = g_53;
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              if(((s_52 != NULL) && (s_52 != t)))
                _fail(t);
              else
                s_52 = t;
              return(t);
            }
            t = Cons_2_0(u_0, a_1, t);
          }
          h_53 = t;
          t = (ATerm) ATinsert(CheckATermList(h_53), f_53);
          k_1 = t;
          t = SSLsetAnnotations(k_1, z_52);
          t = not_null(s_52);
          return(t);
        }
        t = at_suffix_1_0(t_0, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
      }
  }
  t_52 = t;
  t = SSL_implode_string(t_52);
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm s_55 = NULL;
  s_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_15), s_55);
  return(t);
}
ATerm make_latex_comment_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  u_53 = t;
  t = SSL_explode_string(u_53);
  t = reverse_acc_2_0(_id, d_1, t);
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, (ATerm) ATempty);
  {
    static ATerm t_55 (ATerm t);
    static ATerm t_55 (ATerm t)
    {
      ATerm x_53 = NULL,y_53 = NULL,b_54 = NULL,c_54 = NULL;
      if(match_cons(t, sym__2))
        {
          x_53 = ATgetArgument(t, 0);
          c_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_53;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm n_54 = NULL;
          t = c_54;
          t = LatexComment_0_0(t);
          n_54 = t;
          t = (ATerm) ATinsert(ATempty, n_54);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_53 = ATgetFirst((ATermList) t);
              b_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_53;
          if(match_int(t, 10))
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_54 = NULL,u_54 = NULL;
                  t = c_54;
                  t = LatexComment_0_0(t);
                  t_54 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_54, (ATerm) ATempty);
                  t = t_55(t);
                  u_54 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_54), t_54);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  t = (ATerm) ATmakeAppl(sym__2, b_54, (ATerm) ATinsert(CheckATermList(c_54), y_53));
                  t = t_55(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, b_54, (ATerm) ATinsert(CheckATermList(c_54), y_53));
              t = t_55(t);
            }
        }
      return(t);
    }
    t = t_55(t);
  }
  t = remove_trailing_1_0(e_1, t);
  t = reverse_acc_2_0(_id, f_1, t);
  t = remove_trailing_1_0(i_1, t);
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm y_20 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_20;
    }
  return(t);
}
ATerm toh_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  t = filter_1_0(l_1, t);
  s_6 = t;
  t = term_z_20;
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, s_6);
  t = b_12(r_6, s_6, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm u_55 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = term_c_21;
    }
  u_55 = t;
  t = SSL_int_to_string(u_55);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm a_56 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(s_1, t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = term_g_21;
    }
  a_56 = t;
  t = SSL_int_to_string(a_56);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm b_56 = NULL;
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(v_1, t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      t = term_g_21;
    }
  b_56 = t;
  t = SSL_int_to_string(b_56);
  return(t);
}
static ATerm w_59 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm r_56 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(m_56);
  r_56 = t;
  t = l_56;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_56), k_56);
  m_1 = t;
  t = SSLsetAnnotations(m_1, r_56);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,q_1 = NULL;
  y_58 = t;
  if(match_cons(t, sym_C_2))
    {
      w_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_58);
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, w_58, x_58);
  q_1 = t;
  t = SSLsetAnnotations(q_1, v_58);
  return(t);
}
static ATerm x_11 (ATerm q_17, ATerm t)
{
  static ATerm u_59 (ATerm t);
  static ATerm u_59 (ATerm t)
  {
    static ATerm z_59 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm t);
    static ATerm a_60 (ATerm d_58, ATerm e_58, ATerm g_58, ATerm t);
    static ATerm z_59 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm t)
    {
      ATerm c_57 = NULL,f_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,v_57 = NULL,p_1 = NULL,n_1 = NULL;
      t = SSLgetAnnotations(y_56);
      c_57 = t;
      t = w_56;
      if(match_cons(t, sym_C_2))
        {
          i_57 = ATgetArgument(t, 0);
          k_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_56);
      h_57 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, i_57, k_57);
      n_1 = t;
      t = SSLsetAnnotations(n_1, h_57);
      v_57 = t;
      t = x_56;
      t = Cons_2_0(_id, u_59, t);
      f_57 = t;
      t = (ATerm) ATinsert(CheckATermList(f_57), v_57);
      p_1 = t;
      t = SSLsetAnnotations(p_1, c_57);
      return(t);
    }
    static ATerm a_60 (ATerm d_58, ATerm e_58, ATerm g_58, ATerm t)
    {
      ATerm n_58 = NULL,t_58 = NULL,r_1 = NULL;
      t = SSLgetAnnotations(g_58);
      n_58 = t;
      t = e_58;
      t = Cons_2_0(w_1, u_59, t);
      t_58 = t;
      t = (ATerm) ATinsert(CheckATermList(t_58), d_58);
      r_1 = t;
      t = SSLsetAnnotations(r_1, n_58);
      return(t);
    }
    ATerm z_58 = NULL,a_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
    z_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_58;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_59 = ATgetFirst((ATermList) t);
            d_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_59 = ATgetFirst((ATermList) t);
            f_59 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_59(a_59, d_59, z_58, t);
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
                        t = z_59(a_59, d_59, z_58, t);
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
                              t = a_60(a_59, d_59, z_58, t);
                              LocalPopChoice(p_21);
                            }
                          else
                            {
                              t = o_21;
                              {
                                ATerm t_59 = NULL;
                                t = (ATerm) ATinsert(CheckATermList(f_59), e_59);
                                t = u_59(t);
                                t_59 = t;
                                t = (ATerm) ATinsert(ATinsert(CheckATermList(t_59), term_s_21), a_59);
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
            ATerm t_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_59(a_59, d_59, z_58, t);
                LocalPopChoice(v_21);
              }
            else
              {
                t = t_21;
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_59(a_59, d_59, z_58, t);
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                      t = a_60(a_59, d_59, z_58, t);
                    }
                }
              }
          }
      }
    return(t);
  }
  t = q_17;
  t = u_59(t);
  return(t);
}
ATerm MkRows_0_0 (ATerm t)
{
  ATerm a_61 = NULL,c_61 = NULL,g_61 = NULL;
  a_61 = t;
  if(match_cons(t, sym_LBL_2))
    {
      c_61 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
      {
        ATerm c_7 = NULL,m_7 = NULL,n_7 = NULL;
        t = g_61;
        if(match_cons(t, sym_R_2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            n_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_11(n_7, t);
        t = g_61;
        if(match_cons(t, sym_R_2))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_11(m_7, t);
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym_LBLBOX_2, c_61, c_7);
      }
    }
  else
    {
      if(match_cons(t, sym_R_2))
        {
          ATerm a_22 = ATgetArgument(t, 0);
          g_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_61;
      t = x_11(g_61, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  static ATerm i_63 (ATerm t);
  static ATerm i_63 (ATerm t)
  {
    ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
    z_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_63 = ATgetFirst((ATermList) t);
        b_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 = NULL,c_2 = NULL;
          t = SSLgetAnnotations(z_62);
          w_7 = t;
          t = b_63;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_63), a_63);
          c_2 = t;
          t = SSLsetAnnotations(c_2, w_7);
          t = s_102(t);
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          {
            ATerm p_8 = NULL,u_8 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(z_62);
            p_8 = t;
            t = b_63;
            t = i_63(t);
            u_8 = t;
            t = (ATerm) ATinsert(CheckATermList(u_8), a_63);
            d_2 = t;
            t = SSLsetAnnotations(d_2, p_8);
          }
        }
    }
    return(t);
  }
  t = i_63(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_64 = NULL;
  if(match_cons(t, sym_AL_1))
    {
      x_64 = ATgetArgument(t, 0);
      {
        ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL;
        t = x_64;
        t = Hspace_0_0(t);
        p_9 = t;
        t = SSL_string_to_int(p_9);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, term_z_20);
        t = copy_0_0(t);
        m_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_9), term_d_22);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          x_64 = ATgetArgument(t, 0);
          {
            ATerm d_10 = NULL,k_10 = NULL,l_10 = NULL;
            t = x_64;
            t = Hspace_0_0(t);
            l_10 = t;
            t = SSL_string_to_int(l_10);
            k_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_10, term_z_20);
            t = copy_0_0(t);
            d_10 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, d_10), term_f_22);
          }
        }
      else
        {
          ATerm t_10 = NULL,w_10 = NULL,z_10 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              x_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_64;
          t = Hspace_0_0(t);
          z_10 = t;
          t = SSL_string_to_int(z_10);
          w_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_10, term_z_20);
          t = copy_0_0(t);
          t_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, t_10), term_g_22);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_22);
  return(t);
}
static ATerm y_11 (ATerm m_17, ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL;
  t = m_17;
  t = map_1_0(x_1, t);
  d_11 = t;
  t = (ATerm) ATinsert(ATempty, term_s_21);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_21), d_11);
  t = b_12(b_11, d_11, t);
  t = concat_0_0(t);
  t = at_last_1_0(y_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_22 = ATgetFirst((ATermList) t);
      if(((ATgetType(j_22) != AT_INT) || (ATgetInt((ATermInt) j_22) != 34)))
        _fail(t);
      l_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_50), term_k_22), term_k_22);
  return(t);
}
static ATerm w_11 (ATerm p_19, ATerm t)
{
  ATerm k_50 = NULL;
  t = p_19;
  t = at_suffix_1_0(z_1, t);
  k_50 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_50), term_l_22), term_l_22);
  return(t);
}
ATerm listtd_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  static ATerm a_51 (ATerm t);
  static ATerm a_51 (ATerm t)
  {
    ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
    t = a_103(t);
    x_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_50;
      }
    else
      {
        ATerm a_4 = NULL,j_4 = NULL,g_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_50 = ATgetFirst((ATermList) t);
            z_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_50);
        a_4 = t;
        t = z_50;
        t = a_51(t);
        j_4 = t;
        t = (ATerm) ATinsert(CheckATermList(j_4), y_50);
        g_2 = t;
        t = SSLsetAnnotations(g_2, a_4);
      }
    return(t);
  }
  t = a_51(t);
  return(t);
}
static ATerm d_78 (ATerm q_71, ATerm r_71, ATerm s_71, ATerm t)
{
  t = q_71;
  if(match_cons(t, sym_KW_0))
    {
      t = q_71;
    }
  else
    {
      if(match_cons(t, sym_VAR_0))
        {
          t = q_71;
        }
      else
        {
          if(match_cons(t, sym_NUM_0))
            {
              t = q_71;
            }
          else
            {
              if(!(match_cons(t, sym_MATH_0)))
                _fail(t);
              t = q_71;
            }
        }
    }
  t = (ATerm) ATmakeAppl(sym_BOXFONT_2, q_71, r_71);
  return(t);
}
static ATerm e_78 (ATerm w_71, ATerm x_71, ATerm t)
{
  t = w_71;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_72 = NULL;
        t = term_o_22;
        c_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_22, w_71);
        t = p_13(c_72, w_71, t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm c_16 = NULL;
          t = SSL_explode_string(w_71);
          t = escape_special_characters_0_0(t);
          t = listtd_1_0(a_2, t);
          c_16 = t;
          t = SSL_implode_string(c_16);
        }
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  i_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_16 = ATgetFirst((ATermList) t);
      h_16 = (ATerm) ATgetNext((ATermList) t);
      t = g_16;
      if(match_int(t, 34))
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_16;
              t = w_11(h_16, t);
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = i_16;
            }
        }
      else
        {
          t = i_16;
        }
    }
  else
    {
      t = i_16;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm s_22 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_22;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm t_22 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_22;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_77 = NULL;
  if(match_cons(t, sym_S_1))
    {
      z_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_77;
  t = make_latex_comment_0_0(t);
  return(t);
}
ATerm Abox2latex_0_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,y_72 = NULL,z_72 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym_REF_2))
    {
      f_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, f_73, d_73);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          f_73 = ATgetArgument(t, 0);
          d_73 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, f_73, d_73);
        }
      else
        {
          if(match_cons(t, sym_L_2))
            {
              f_73 = ATgetArgument(t, 0);
              d_73 = ATgetArgument(t, 1);
              {
                ATerm s_16 = NULL;
                t = e_73;
                {
                  ATerm u_22 = t;
                  int v_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_string_to_int(f_73);
                      s_16 = t;
                      LocalPopChoice(v_22);
                    }
                  else
                    {
                      t = u_22;
                      {
                        ATerm w_22 = t;
                        int x_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,k_2 = NULL;
                            t = SSL_explode_string(f_73);
                            x_16 = t;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_16 = ATgetFirst((ATermList) t);
                                w_16 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSLgetAnnotations(x_16);
                            u_16 = t;
                            t = v_16;
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 61)))
                              _fail(t);
                            t = (ATerm) ATinsert(CheckATermList(w_16), v_16);
                            k_2 = t;
                            t = SSLsetAnnotations(k_2, u_16);
                            t = (ATerm) ATinsert(ATempty, term_y_22);
                            t_16 = t;
                            t = SSL_implode_string(t_16);
                            s_16 = t;
                            LocalPopChoice(x_22);
                          }
                        else
                          {
                            t = w_22;
                            t = f_73;
                            s_16 = t;
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, s_16, d_73);
              }
            }
          else
            {
              if(match_cons(t, sym_ALT_2))
                {
                  f_73 = ATgetArgument(t, 0);
                  d_73 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, f_73, d_73);
                }
              else
                {
                  if(match_cons(t, sym_A_3))
                    {
                      f_73 = ATgetArgument(t, 0);
                      d_73 = ATgetArgument(t, 1);
                      t_72 = ATgetArgument(t, 2);
                      {
                        ATerm h_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,r_17 = NULL,x_17 = NULL;
                        t = t_72;
                        t = construct_rows_0_0(t);
                        k_17 = t;
                        t = d_73;
                        t = Vspace_0_0(t);
                        r_17 = t;
                        t = SSL_string_to_int(r_17);
                        h_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, h_17, term_i_22);
                        t = copy_0_0(t);
                        o_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_17, (ATerm) ATinsert(ATinsert(ATempty, term_j_15), term_i_22));
                        t = conc_0_0(t);
                        l_17 = t;
                        t = f_73;
                        if(match_cons(t, sym_AOPTIONS_1))
                          {
                            p_17 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_11(p_17, t);
                        j_17 = t;
                        t = k_17;
                        t = map_1_0(MkRows_0_0, t);
                        x_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, l_17, x_17);
                        t = b_12(l_17, x_17, t);
                        n_17 = t;
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, j_17, n_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_HV_2))
                        {
                          f_73 = ATgetArgument(t, 0);
                          d_73 = ATgetArgument(t, 1);
                          {
                            ATerm c_75 = NULL,d_75 = NULL,i_76 = NULL,f_77 = NULL,z_17 = NULL,a_18 = NULL;
                            t = f_73;
                            t = Hspace_0_0(t);
                            c_75 = t;
                            t = f_73;
                            t = Vspace_0_0(t);
                            d_75 = t;
                            t = f_73;
                            t = Ispace_0_0(t);
                            i_76 = t;
                            t = d_73;
                            t = filter_1_0(b_2, t);
                            a_18 = t;
                            t = term_z_22;
                            z_17 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_z_22, a_18);
                            t = b_12(z_17, a_18, t);
                            f_77 = t;
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, c_75, d_75, i_76, f_77);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_V_2))
                            {
                              f_73 = ATgetArgument(t, 0);
                              d_73 = ATgetArgument(t, 1);
                              {
                                ATerm g_77 = NULL,i_77 = NULL,l_77 = NULL,c_18 = NULL,d_18 = NULL;
                                t = f_73;
                                t = Vspace_0_0(t);
                                g_77 = t;
                                t = f_73;
                                t = Ispace_0_0(t);
                                i_77 = t;
                                t = d_73;
                                t = filter_1_0(e_2, t);
                                d_18 = t;
                                t = term_a_23;
                                c_18 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_a_23, d_18);
                                t = b_12(c_18, d_18, t);
                                l_77 = t;
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, g_77, i_77, l_77);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_H_2))
                                {
                                  f_73 = ATgetArgument(t, 0);
                                  d_73 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_77 = NULL,r_77 = NULL;
                                    t = f_73;
                                    t = Hspace_0_0(t);
                                    p_77 = t;
                                    t = d_73;
                                    t = toh_0_0(t);
                                    r_77 = t;
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, p_77, r_77);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_FBOX_2))
                                    {
                                      f_73 = ATgetArgument(t, 0);
                                      d_73 = ATgetArgument(t, 1);
                                      t = f_73;
                                      if(match_cons(t, sym_F_1))
                                        {
                                          z_72 = ATgetArgument(t, 0);
                                          t = z_72;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              u_72 = ATgetFirst((ATermList) t);
                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                              {
                                                ATerm b_23 = t;
                                                int c_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm n_18 = NULL,b_20 = NULL,c_20 = NULL;
                                                    t = u_72;
                                                    if(match_cons(t, sym_FFID_2))
                                                      {
                                                        b_20 = ATgetArgument(t, 0);
                                                        c_20 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm d_23 = t;
                                                      int e_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_21 = NULL,l_2 = NULL;
                                                          t = SSLgetAnnotations(u_72);
                                                          f_21 = t;
                                                          t = b_20;
                                                          if(!(match_cons(t, sym_FM_0)))
                                                            _fail(t);
                                                          t = c_20;
                                                          n_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_FFID_2, b_20, c_20);
                                                          l_2 = t;
                                                          t = SSLsetAnnotations(l_2, f_21);
                                                          LocalPopChoice(e_23);
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          {
                                                            ATerm f_23 = t;
                                                            int g_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_21 = NULL,z_2 = NULL;
                                                                t = SSLgetAnnotations(u_72);
                                                                u_21 = t;
                                                                t = b_20;
                                                                if(!(match_cons(t, sym_SE_0)))
                                                                  _fail(t);
                                                                t = c_20;
                                                                n_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_FFID_2, b_20, c_20);
                                                                z_2 = t;
                                                                t = SSLsetAnnotations(z_2, u_21);
                                                                LocalPopChoice(g_23);
                                                              }
                                                            else
                                                              {
                                                                t = f_23;
                                                                {
                                                                  ATerm i_23 = t;
                                                                  int j_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm h_22 = NULL,a_3 = NULL;
                                                                      t = SSLgetAnnotations(u_72);
                                                                      h_22 = t;
                                                                      t = b_20;
                                                                      if(!(match_cons(t, sym_SH_0)))
                                                                        _fail(t);
                                                                      t = c_20;
                                                                      n_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_FFID_2, b_20, c_20);
                                                                      a_3 = t;
                                                                      t = SSLsetAnnotations(a_3, h_22);
                                                                      LocalPopChoice(j_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_23;
                                                                      {
                                                                        ATerm k_23 = t;
                                                                        int l_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm r_22 = NULL,c_3 = NULL;
                                                                            t = SSLgetAnnotations(u_72);
                                                                            r_22 = t;
                                                                            t = b_20;
                                                                            if(!(match_cons(t, sym_SZ_0)))
                                                                              _fail(t);
                                                                            t = c_20;
                                                                            n_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_FFID_2, b_20, c_20);
                                                                            c_3 = t;
                                                                            t = SSLsetAnnotations(c_3, r_22);
                                                                            LocalPopChoice(l_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_23;
                                                                            {
                                                                              ATerm h_23 = NULL,d_3 = NULL;
                                                                              t = SSLgetAnnotations(u_72);
                                                                              h_23 = t;
                                                                              t = b_20;
                                                                              if(!(match_cons(t, sym_CL_0)))
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_FFID_2, b_20, c_20);
                                                                              d_3 = t;
                                                                              t = SSLsetAnnotations(d_3, h_23);
                                                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, c_20);
                                                                              n_18 = t;
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, n_18, (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, y_72), d_73));
                                                    LocalPopChoice(c_23);
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                    t = d_78(f_73, d_73, e_73, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = d_73;
                                                }
                                              else
                                                {
                                                  t = d_78(f_73, d_73, e_73, t);
                                                }
                                            }
                                        }
                                      else
                                        {
                                          t = d_78(f_73, d_73, e_73, t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_C_2))
                                        {
                                          f_73 = ATgetArgument(t, 0);
                                          d_73 = ATgetArgument(t, 1);
                                          {
                                            ATerm w_77 = NULL;
                                            t = f_73;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = d_73;
                                            t = map_1_0(f_2, t);
                                            w_77 = t;
                                            t = (ATerm) ATmakeAppl(sym_CBOX_1, w_77);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_S_1))
                                            {
                                              f_73 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_78(f_73, e_73, t);
                                        }
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
ATerm topdown_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t);
  static ATerm h_2 (ATerm t)
  {
    t = topdown_1_0(e_95, t);
    return(t);
  }
  t = e_95(t);
  t = SRTS_all(h_2, t);
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm m_23 = t;
  if((PushChoice() == 0))
    {
      ATerm x_93 = NULL,y_93 = NULL;
      if(match_cons(t, sym__2))
        {
          x_93 = ATgetArgument(t, 0);
          y_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, x_93, y_93);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(x_93, y_93);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            t = SSL_gtr(x_93, y_93);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, x_93, y_93);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_23;
    }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_93 = NULL,c_94 = NULL;
      t = term_x_13;
      z_93 = t;
      t = term_p_20;
      c_94 = t;
      t = term_q_20;
      t = p_13(z_93, c_94, t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = term_r_23;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm z_11 (ATerm p_73, ATerm n_73, ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  t = p_73;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(o_2, t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = term_g_21;
      }
  }
  r_78 = t;
  t = term_c_21;
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_78, term_c_21);
  t = k_13(r_78, s_78, t);
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_78, term_u_23);
  t = copy_char_0_0(t);
  k_78 = t;
  t = p_73;
  {
    ATerm v_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(p_2, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = v_23;
        t = term_g_21;
      }
  }
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_78, term_y_23);
  t = copy_char_0_0(t);
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_73, term_y_23);
  t = copy_char_0_0(t);
  m_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_78), l_78), k_78);
  o_78 = t;
  t = SSL_concat_strings(o_78);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL;
  a_79 = t;
  t = SSL_explode_term(a_79);
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            z_78 = ATgetFirst((ATermList) a_24);
            {
              ATerm b_24 = (ATerm) ATgetNext((ATermList) a_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_78;
  return(t);
}
static ATerm a_12 (ATerm h_73, ATerm l_73, ATerm i_73, ATerm t)
{
  ATerm t_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_73, i_73);
  t = z_11(h_73, i_73, t);
  w_78 = t;
  t = l_73;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_73;
  t = map_1_0(b_3, t);
  y_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_78, y_78);
  t = b_12(w_78, y_78, t);
  x_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_78, t_78);
  return(t);
}
static ATerm b_12 (ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  t = r_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_21;
    }
  else
    {
      ATerm w_23 = NULL,g_24 = NULL,y_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_79 = ATgetFirst((ATermList) t);
          r_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_21);
      w_23 = t;
      t = r_79;
      {
        static ATerm x_24 (ATerm t);
        static ATerm x_24 (ATerm t)
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_24 = NULL;
              t_24 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_24;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              {
                ATerm u_24 = NULL;
                t = Cons_2_0(_id, x_24, t);
                u_24 = t;
                t = (ATerm) ATinsert(CheckATermList(u_24), q_21);
              }
            }
          return(t);
        }
        t = x_24(t);
      }
      g_24 = t;
      t = (ATerm) ATinsert(CheckATermList(g_24), q_79);
      y_5 = t;
      t = SSLsetAnnotations(y_5, w_23);
    }
  return(t);
}
static ATerm c_12 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm g_74, ATerm f_74, ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,z_79 = NULL;
  t = term_f_15;
  t = h_129(t);
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_74, z_79);
  t = f_129(t);
  if(match_cons(t, sym__2))
    {
      u_79 = ATgetArgument(t, 0);
      v_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_15;
  t = g_129(t);
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_79, x_79);
  t = k_13(v_79, x_79, t);
  w_79 = t;
  t = (ATerm) ATinsert(CheckATermList(f_74), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_79), w_79));
  return(t);
}
static ATerm d_12 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm b_74, ATerm z_73, ATerm c_74, ATerm a_74, ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,f_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_74, c_74);
  t = d_129(t);
  if(match_cons(t, sym__2))
    {
      a_80 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_15;
  t = get_width_0_0(t);
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_80, f_80);
  t = leq_0_0(t);
  t = term_f_15;
  t = e_129(t);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_80, d_80);
  t = k_13(b_80, d_80, t);
  c_80 = t;
  t = (ATerm) ATinsert(CheckATermList(a_74), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_73), a_80), c_80));
  return(t);
}
ATerm foldl_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  static ATerm s_80 (ATerm t);
  static ATerm s_80 (ATerm t)
  {
    ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
    if(match_cons(t, sym__2))
      {
        j_80 = ATgetArgument(t, 0);
        m_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_80;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_80;
      }
    else
      {
        ATerm r_80 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_80 = ATgetFirst((ATermList) t);
            l_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_80, m_80);
        t = u_108(t);
        r_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_80, r_80);
        t = s_80(t);
      }
    return(t);
  }
  t = s_80(t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm t_80 = NULL;
  static ATerm e_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,a_6 = NULL;
    y_80 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        v_80 = ATgetArgument(t, 0);
        w_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_80);
    u_80 = t;
    t = v_80;
    t = z_92(t);
    x_80 = t;
    t = w_80;
    if(((t_80 != NULL) && (t_80 != t)))
      _fail(t);
    else
      t_80 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, x_80, w_80);
    a_6 = t;
    t = SSLsetAnnotations(a_6, u_80);
    return(t);
  }
  t = fetch_1_0(e_3, t);
  t = SSL_string_to_int(not_null(t_80));
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm z_80 = NULL;
  t = copy_0_0(t);
  z_80 = t;
  t = SSL_implode_string(z_80);
  return(t);
}
static ATerm g_12 (ATerm x_0 (ATerm), ATerm b_1 (ATerm), ATerm y_0, ATerm c_1, ATerm w_0, ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_0, w_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      c_81 = ATgetArgument(t, 0);
      a_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_1, a_81);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      d_81 = ATgetArgument(t, 0);
      b_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_81), c_81), b_81);
  return(t);
}
ATerm thread_map_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  static ATerm p_81 (ATerm t);
  static ATerm p_81 (ATerm t)
  {
    ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
    i_81 = t;
    if(match_cons(t, sym__2))
      {
        j_81 = ATgetArgument(t, 0);
        k_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_81;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_81 = ATgetFirst((ATermList) t);
        h_81 = (ATerm) ATgetNext((ATermList) t);
        t = i_81;
        t = g_12(g_109, p_81, g_81, h_81, k_81, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_81);
      }
    return(t);
  }
  t = p_81(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm f_24 = t;
  if((PushChoice() == 0))
    {
      ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL;
      z_81 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_81;
        }
      else
        {
          ATerm o_25 = NULL,e_6 = NULL;
          if(match_cons(t, sym_H_2))
            {
              a_82 = ATgetArgument(t, 0);
              b_82 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_81);
          o_25 = t;
          t = a_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_H_2, a_82, b_82);
          e_6 = t;
          t = SSLsetAnnotations(e_6, o_25);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_24;
    }
  return(t);
}
ATerm filter_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
  o_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_82;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_82 = ATgetFirst((ATermList) t);
          q_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_26 = NULL,w_26 = NULL,x_26 = NULL,g_11 = NULL;
            t = SSLgetAnnotations(o_82);
            p_26 = t;
            t = p_82;
            t = t_109(t);
            w_26 = t;
            t = q_82;
            t = filter_1_0(t_109, t);
            x_26 = t;
            t = (ATerm) ATinsert(CheckATermList(x_26), w_26);
            g_11 = t;
            t = SSLsetAnnotations(g_11, p_26);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = q_82;
            t = filter_1_0(t_109, t);
          }
      }
    }
  return(t);
}
static ATerm h_12 (ATerm k_129 (ATerm), ATerm w_74, ATerm x_74, ATerm y_74, ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,i_11 = NULL;
  t = y_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_82 = ATgetFirst((ATermList) t);
      v_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_74);
  t_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_82, w_74);
  t = k_129(t);
  w_82 = t;
  t = v_82;
  {
    static ATerm f_3 (ATerm t);
    static ATerm f_3 (ATerm t)
    {
      ATerm y_82 = NULL;
      y_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_82, x_74);
      t = k_129(t);
      return(t);
    }
    t = map_1_0(f_3, t);
  }
  x_82 = t;
  t = (ATerm) ATinsert(CheckATermList(x_82), w_82);
  i_11 = t;
  t = SSLsetAnnotations(i_11, t_82);
  return(t);
}
static ATerm n_83 (ATerm c_83, ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,k_11 = NULL;
  t = SSL_explode_term(c_83);
  if(match_cons(t, sym__2))
    {
      d_83 = ATgetArgument(t, 0);
      e_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_83 = ATgetFirst((ATermList) t);
      i_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_83);
  g_83 = t;
  t = i_83;
  t = Cons_2_0(g_3, i_3, t);
  j_83 = t;
  t = (ATerm) ATinsert(CheckATermList(j_83), h_83);
  k_11 = t;
  t = SSLsetAnnotations(k_11, g_83);
  k_83 = t;
  t = SSL_mkterm(d_83, k_83);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_83 = NULL;
      l_83 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_83;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = Cons_2_0(l_3, q_3, t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm l_24 = t;
  if((PushChoice() == 0))
    {
      ATerm m_83 = NULL;
      m_83 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_83;
        }
      else
        {
          t = n_83(m_83, t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_24;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_83 = ATgetFirst((ATermList) t);
      y_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_83, y_83);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_24;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_83 = ATgetFirst((ATermList) t);
      a_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_83, a_84);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if(match_cons(n_24, sym__2))
        {
          b_84 = ATgetArgument(n_24, 0);
          c_84 = ATgetArgument(n_24, 1);
        }
      else
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(match_cons(o_24, sym__2))
          {
            d_84 = ATgetArgument(o_24, 0);
            e_84 = ATgetArgument(o_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_84), b_84), (ATerm) ATinsert(CheckATermList(e_84), c_84));
  return(t);
}
ATerm matrix_transpose_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(r_3, t);
      t = (ATerm) ATempty;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,w_83 = NULL,n_11 = NULL;
        t = map_1_0(v_3, t);
        t = genzip_4_0(w_3, x_3, y_3, _id, t);
        w_83 = t;
        if(match_cons(t, sym__2))
          {
            s_83 = ATgetArgument(t, 0);
            t_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_83);
        r_83 = t;
        t = t_83;
        t = matrix_transpose_0_0(t);
        u_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_83, u_83);
        n_11 = t;
        t = SSLsetAnnotations(n_11, r_83);
        if(match_cons(t, sym__2))
          {
            p_83 = ATgetArgument(t, 0);
            q_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_83), p_83);
      }
    }
  return(t);
}
static ATerm j_12 (ATerm w_32, ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm g_84 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, w_32, x_32, y_32);
  t = n_12(w_32, x_32, y_32, t);
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_84, x_32);
  t = g_13(g_84, x_32, t);
  return(t);
}
static ATerm k_12 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_divi(p_40, q_40);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      t = SSL_divr(p_40, q_40);
    }
  return(t);
}
static ATerm l_12 (ATerm v_40, ATerm w_40, ATerm t)
{
  t = SSL_mod(v_40, w_40);
  return(t);
}
static ATerm m_12 (ATerm i_33, ATerm j_33, ATerm e_33, ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  t = SSL_strlen(j_33);
  l_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, l_84);
  t = x_12(e_33, l_84, t);
  i_84 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_84 = NULL;
        t = term_y_24;
        s_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_84, term_y_24);
        t = l_12(i_84, s_84, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_84;
        LocalPopChoice(w_24);
        {
          ATerm t_84 = NULL,u_84 = NULL;
          t = term_y_24;
          u_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_84, term_y_24);
          t = k_12(i_84, u_84, t);
          t_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_84, t_84);
        }
      }
    else
      {
        t = v_24;
        {
          ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,v_12 = NULL;
          t = term_c_21;
          y_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_84, term_c_21);
          t = x_12(i_84, y_84, t);
          w_84 = t;
          t = term_y_24;
          x_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_84, term_y_24);
          t = k_12(w_84, x_84, t);
          v_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_84, v_84);
          c_85 = t;
          if(match_cons(t, sym__2))
            {
              ATerm z_24 = ATgetArgument(t, 0);
              ATerm a_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_85);
          z_84 = t;
          t = term_c_21;
          b_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_84, term_c_21);
          t = k_13(v_84, b_85, t);
          a_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_85, v_84);
          v_12 = t;
          t = SSLsetAnnotations(v_12, z_84);
        }
      }
  }
  if(match_cons(t, sym__2))
    {
      j_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_84, j_84);
  t = k_13(l_84, j_84, t);
  q_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_33, j_33, q_84);
  t = n_12(i_33, j_33, q_84, t);
  k_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_84, m_84);
  t = k_13(l_84, m_84, t);
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_33, j_33, p_84);
  t = n_12(i_33, j_33, p_84, t);
  n_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_84), j_33), k_84);
  r_84 = t;
  t = SSL_concat_strings(r_84);
  return(t);
}
static ATerm n_12 (ATerm p_33, ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm d_85 = NULL;
  t = SSL_strlen(n_33);
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, d_85);
  t = x_12(o_33, d_85, t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_85 = NULL;
        e_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_85, term_g_21);
        t = geq_0_0(t);
        t = e_85;
        LocalPopChoice(c_25);
        {
          ATerm f_85 = NULL;
          f_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_85, p_33);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = b_25;
        t = term_d_25;
      }
  }
  return(t);
}
static ATerm o_12 (ATerm a_33, ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm g_85 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, a_33, b_33, c_33);
  t = n_12(a_33, b_33, c_33, t);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, g_85);
  t = g_13(b_33, g_85, t);
  return(t);
}
static ATerm x_86 (ATerm s_85, ATerm t_85, ATerm u_85, ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL;
  t = term_c_21;
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_85, term_c_21);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(s_85, b_86);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = SSL_gtr(s_85, b_86);
      }
  }
  t = t_85;
  if(match_cons(t, sym__3))
    {
      y_85 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
      a_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_12(y_85, z_85, a_86, t);
  return(t);
}
static ATerm y_86 (ATerm c_86, ATerm d_86, ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  t = c_86;
  if(match_cons(t, sym__3))
    {
      f_86 = ATgetArgument(t, 0);
      g_86 = ATgetArgument(t, 1);
      h_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_12(f_86, g_86, h_86, t);
  return(t);
}
static ATerm z_86 (ATerm i_86, ATerm j_86, ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  t = i_86;
  if(match_cons(t, sym__3))
    {
      l_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
      n_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_12(l_86, m_86, n_86, t);
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm p_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,v_86 = NULL;
  r_86 = t;
  if(match_cons(t, sym__3))
    {
      s_86 = ATgetArgument(t, 0);
      t_86 = ATgetArgument(t, 1);
      v_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_86;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm i_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_25);
        t = v_86;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm l_25 = ATgetArgument(t, 0);
                  p_86 = ATgetArgument(t, 1);
                  {
                    ATerm m_25 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_25);
              t = s_86;
              if(match_int(t, 1))
                {
                  ATerm n_25 = t;
                  int p_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_86(s_86, v_86, r_86, t);
                      LocalPopChoice(p_25);
                    }
                  else
                    {
                      t = n_25;
                      t = p_86;
                    }
                }
              else
                {
                  t = x_86(s_86, v_86, r_86, t);
                }
            }
          else
            {
              t = j_25;
              t = s_86;
              t = x_86(s_86, v_86, r_86, t);
            }
        }
      }
    else
      {
        t = g_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm s_25 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(r_25);
              t = s_86;
              t = y_86(v_86, r_86, t);
            }
          else
            {
              t = q_25;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm t_25 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_86;
              t = z_86(v_86, r_86, t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,z_12 = NULL;
      l_87 = t;
      if(match_cons(t, sym__2))
        {
          j_87 = ATgetArgument(t, 0);
          k_87 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_87);
      i_87 = t;
      t = j_87;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_87;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_25 = ATgetFirst((ATermList) t);
              ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_87;
        }
      t = (ATerm) ATmakeAppl(sym__2, j_87, k_87);
      z_12 = t;
      t = SSLsetAnnotations(z_12, i_87);
      LocalPopChoice(v_25);
      t = conc_0_0(t);
    }
  else
    {
      t = u_25;
      {
        ATerm p_87 = NULL,q_87 = NULL;
        if(match_cons(t, sym__2))
          {
            p_87 = ATgetArgument(t, 0);
            q_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_87), p_87);
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_87 = NULL;
      r_87 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_87;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_26 = ATgetFirst((ATermList) t);
              ATerm b_26 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_87;
        }
      LocalPopChoice(z_25);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = y_25;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(z_3, c_4, d_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_24;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_88 = ATgetFirst((ATermList) t);
      o_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_88, o_88);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(match_cons(c_26, sym__2))
        {
          p_88 = ATgetArgument(c_26, 0);
          q_88 = ATgetArgument(c_26, 1);
        }
      else
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(match_cons(d_26, sym__2))
          {
            r_88 = ATgetArgument(d_26, 0);
            s_88 = ATgetArgument(d_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_88), p_88), (ATerm) ATinsert(CheckATermList(s_88), q_88));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_88 = NULL;
      t = flatten_list_0_0(t);
      u_88 = t;
      t = SSL_concat_strings(u_88);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_27 = NULL,t_27 = NULL;
      if(match_cons(t, sym__2))
        {
          s_27 = ATgetArgument(t, 0);
          t_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(s_27, t_27);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = SSL_gtr(s_27, t_27);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
      LocalPopChoice(h_26);
      {
        ATerm u_27 = NULL,v_27 = NULL;
        v_27 = t;
        t = SSL_explode_term(v_27);
        if(match_cons(t, sym__2))
          {
            ATerm k_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_26 = ATgetArgument(t, 1);
              if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
                {
                  u_27 = ATgetFirst((ATermList) l_26);
                  {
                    ATerm m_26 = (ATerm) ATgetNext((ATermList) l_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_27;
      }
    }
  else
    {
      t = g_26;
      {
        ATerm w_27 = NULL,z_27 = NULL;
        z_27 = t;
        t = SSL_explode_term(z_27);
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_26 = ATgetArgument(t, 1);
              if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
                {
                  ATerm q_26 = ATgetFirst((ATermList) o_26);
                  ATerm r_26 = (ATerm) ATgetNext((ATermList) o_26);
                  if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
                    {
                      w_27 = ATgetFirst((ATermList) r_26);
                      {
                        ATerm s_26 = (ATerm) ATgetNext((ATermList) r_26);
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
        t = w_27;
      }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm o_129 (ATerm), ATerm v_75, ATerm u_75, ATerm q_75, ATerm s_75, ATerm p_75, ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,r_13 = NULL,l_27 = NULL,m_27 = NULL;
  t = q_75;
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      ATerm m_88 = NULL;
      m_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_88, s_75);
      t = o_129(t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  t = genzip_4_0(i_4, k_4, l_4, _id, t);
  l_88 = t;
  if(match_cons(t, sym__2))
    {
      h_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_88);
  g_88 = t;
  t = h_88;
  t = map_1_0(m_4, t);
  j_88 = t;
  t = i_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_26 = ATgetFirst((ATermList) t);
      m_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_27 = ATgetFirst((ATermList) t);
      {
        ATerm u_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_27, l_27);
  t = foldl_1_0(n_4, t);
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_88, k_88);
  r_13 = t;
  t = SSLsetAnnotations(r_13, g_88);
  if(match_cons(t, sym__2))
    {
      z_87 = ATgetArgument(t, 0);
      y_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_87, s_75);
  t = x_12(y_87, s_75, t);
  a_88 = t;
  {
    ATerm v_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_89 = NULL;
        t = term_c_21;
        b_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_75, term_c_21);
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_75, b_89);
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              t = SSL_gtr(u_75, b_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_75, term_c_21);
        LocalPopChoice(y_26);
        {
          ATerm c_89 = NULL,e_89 = NULL;
          t = v_75;
          if(match_cons(t, sym_AC_1))
            {
              e_89 = ATgetArgument(t, 0);
              t = e_89;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  e_89 = ATgetArgument(t, 0);
                  t = e_89;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      e_89 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_89;
                }
            }
          {
            ATerm b_27 = t;
            int c_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(o_4, t);
                LocalPopChoice(c_27);
              }
            else
              {
                t = b_27;
                t = term_c_21;
              }
          }
          c_89 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_89, term_y_23);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = v_26;
        t = term_d_25;
      }
  }
  b_88 = t;
  t = z_87;
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      ATerm i_89 = NULL,j_89 = NULL;
      j_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_75, v_75, (ATerm) ATmakeAppl(sym__3, term_y_23, j_89, a_88));
      t = align_column_0_0(t);
      i_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_89, b_88);
      t = g_13(i_89, b_88, t);
      return(t);
    }
    t = map_1_0(r_4, t);
  }
  c_88 = t;
  t = SSL_strlen(b_88);
  e_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_88, y_87);
  t = k_13(e_88, y_87, t);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_88, (ATerm) ATinsert(CheckATermList(p_75), c_88));
  return(t);
}
ATerm do_A_column_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          k_89 = ATgetArgument(d_27, 0);
          {
            ATerm f_27 = ATgetArgument(d_27, 1);
            if(match_cons(f_27, sym__2))
              {
                l_89 = ATgetArgument(f_27, 0);
                m_89 = ATgetArgument(f_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            n_89 = ATgetArgument(e_27, 0);
            o_89 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_12(o_129, k_89, l_89, m_89, n_89, o_89, t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  static ATerm v_89 (ATerm t);
  static ATerm v_89 (ATerm t)
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_103(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,w_13 = NULL;
          t = v_103(t);
          u_89 = t;
          if(match_cons(t, sym__2))
            {
              q_89 = ATgetArgument(t, 0);
              r_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_89);
          p_89 = t;
          t = q_89;
          t = x_103(t);
          s_89 = t;
          t = r_89;
          t = v_89(t);
          t_89 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_89, t_89);
          w_13 = t;
          t = SSLsetAnnotations(w_13, p_89);
          t = w_103(t);
        }
      }
    return(t);
  }
  t = v_89(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm y_89 = NULL;
  static ATerm l_90 (ATerm t);
  static ATerm l_90 (ATerm t)
  {
    ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL;
    if(match_cons(t, sym__2))
      {
        a_90 = ATgetArgument(t, 0);
        b_90 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_90;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_90 = ATgetFirst((ATermList) t);
            d_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_90, c_90);
        t = o_103(t);
        h_90 = t;
        t = term_c_21;
        k_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_90, term_c_21);
        t = k_13(a_90, k_90, t);
        j_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_90, d_90);
        t = l_90(t);
        i_90 = t;
        t = (ATerm) ATinsert(CheckATermList(i_90), h_90);
      }
    return(t);
  }
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, y_89);
  t = l_90(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_90;
      t = r_108(t);
    }
  else
    {
      ATerm s_90 = NULL,t_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_90 = ATgetFirst((ATermList) t);
          p_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_90;
      t = t_108(t);
      s_90 = t;
      t = p_90;
      t = foldr_3_0(r_108, s_108, t_108, t);
      t_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_90, t_90);
      t = s_108(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t)
{
  static ATerm u_90 (ATerm t);
  static ATerm u_90 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_94(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = w_94(t);
        t = u_90(t);
      }
    return(t);
  }
  t = u_90(t);
  return(t);
}
ATerm for_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  t = y_94(t);
  t = while_not_2_0(z_94, a_95, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL;
  if(match_cons(t, sym__2))
    {
      x_90 = ATgetArgument(t, 0);
      y_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_90, y_90, (ATerm) ATempty);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_90 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(((ATgetType(k_27) != AT_INT) || (ATgetInt((ATermInt) k_27) != 0)))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
      }
      z_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_90;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__3))
    {
      a_91 = ATgetArgument(t, 0);
      b_91 = ATgetArgument(t, 1);
      c_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_91, term_c_21);
  t = geq_0_0(t);
  t = term_c_21;
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_91, term_c_21);
  t = x_12(a_91, e_91, t);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_91, b_91, (ATerm) ATinsert(CheckATermList(c_91), b_91));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_4, f_5, h_5, t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,k_28 = NULL,z_13 = NULL;
        m_91 = t;
        if(match_cons(t, sym__2))
          {
            n_91 = ATgetArgument(t, 0);
            o_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_91);
        k_28 = t;
        t = n_91;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_91, o_91);
        z_13 = t;
        t = SSLsetAnnotations(z_13, k_28);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  if(match_cons(t, sym__2))
    {
      w_91 = ATgetArgument(t, 0);
      x_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13(w_91, x_91, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm FitToMax_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL;
  u_91 = t;
  t = foldr_3_0(i_5, j_5, m_5, t);
  r_91 = t;
  t = term_f_15;
  t = q_129(t);
  v_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, r_91);
  t = x_12(v_91, r_91, t);
  s_91 = t;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_91 = NULL;
        t = term_g_21;
        y_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_91, term_g_21);
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_91, y_91);
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = SSL_gtr(s_91, y_91);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_91, (ATerm) ATempty);
        t = copy_0_0(t);
        t_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_91, t_91);
        t = conc_0_0(t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = u_91;
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              {
                ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
                t = term_h_14;
                b_92 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, u_91), term_c_28);
                c_92 = t;
                t = SSL_printnl(b_92, c_92);
                t = term_c_21;
                a_92 = t;
                t = SSL_exit(a_92);
                t = (ATerm) ATinsert(ATinsert(ATempty, u_91), term_c_28);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm d_28 = t;
  if((PushChoice() == 0))
    {
      ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,d_14 = NULL;
      v_93 = t;
      if(match_cons(t, sym_R_2))
        {
          t_93 = ATgetArgument(t, 0);
          u_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_93);
      s_93 = t;
      t = u_93;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, t_93, u_93);
      d_14 = t;
      t = SSLsetAnnotations(d_14, s_93);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_92, (ATerm) ATempty);
  {
    static ATerm w_93 (ATerm t);
    static ATerm w_93 (ATerm t)
    {
      ATerm j_92 = NULL,k_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL;
      if(match_cons(t, sym__2))
        {
          m_92 = ATgetArgument(t, 0);
          p_92 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_92;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm w_92 = NULL;
          t = p_92;
          t = reverse_acc_2_0(_id, u_5, t);
          w_92 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, w_92));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_92 = ATgetFirst((ATermList) t);
              o_92 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_92;
          if(match_cons(t, sym_R_2))
            {
              j_92 = ATgetArgument(t, 0);
              k_92 = ATgetArgument(t, 1);
              {
                ATerm e_28 = t;
                int f_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_93 = NULL,i_93 = NULL;
                    t = p_92;
                    t = reverse_acc_2_0(_id, x_5, t);
                    h_93 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATempty);
                    t = w_93(t);
                    i_93 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_93), (ATerm) ATmakeAppl(sym_R_2, j_92, k_92)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, h_93));
                    LocalPopChoice(f_28);
                  }
                else
                  {
                    t = e_28;
                    t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATinsert(CheckATermList(p_92), n_92));
                    t = w_93(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATinsert(CheckATermList(p_92), n_92));
              t = w_93(t);
            }
        }
      return(t);
    }
    t = w_93(t);
  }
  t = filter_1_0(z_5, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_96 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      n_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_96;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13(o_96, p_96, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(((ATgetType(h_28) != AT_LIST) || !(ATisEmpty(h_28))))
        _fail(t);
      {
        ATerm i_28 = ATgetArgument(t, 1);
        if(((ATgetType(i_28) != AT_LIST) || !(ATisEmpty(i_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
        {
          t_96 = ATgetFirst((ATermList) j_28);
          u_96 = (ATerm) ATgetNext((ATermList) j_28);
        }
      else
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
        if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
          {
            v_96 = ATgetFirst((ATermList) l_28);
            w_96 = (ATerm) ATgetNext((ATermList) l_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, v_96), (ATerm) ATmakeAppl(sym__2, u_96, w_96));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      x_96 = ATgetArgument(t, 0);
      y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_96), x_96);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,v_14 = NULL;
  h_100 = t;
  if(match_cons(t, sym__2))
    {
      e_100 = ATgetArgument(t, 0);
      f_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_100);
  d_100 = t;
  t = e_100;
  t = reverse_acc_2_0(_id, y_7, t);
  g_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_100, f_100);
  v_14 = t;
  t = SSLsetAnnotations(v_14, d_100);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm abox2text_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm z_101 (ATerm y_95, ATerm z_95, ATerm a_96, ATerm b_96, ATerm c_96, ATerm t);
  static ATerm c_102 (ATerm c_97, ATerm d_97, ATerm e_97, ATerm f_97, ATerm t);
  static ATerm e_102 (ATerm n_97, ATerm o_97, ATerm p_97, ATerm q_97, ATerm t);
  static ATerm f_102 (ATerm v_98, ATerm w_98, ATerm x_98, ATerm y_98, ATerm t);
  static ATerm z_101 (ATerm y_95, ATerm z_95, ATerm a_96, ATerm b_96, ATerm c_96, ATerm t)
  {
    ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,j_96 = NULL,m_96 = NULL;
    t = a_96;
    t = construct_rows_0_0(t);
    t = map_1_0(b_6, t);
    {
      static ATerm d_6 (ATerm t);
      static ATerm d_6 (ATerm t)
      {
        static ATerm n_6 (ATerm t);
        static ATerm n_6 (ATerm t)
        {
          t = y_95;
          t = foldr_3_0(o_6, p_6, q_6, t);
          return(t);
        }
        t = FitToMax_1_0(n_6, t);
        return(t);
      }
      t = map_1_0(d_6, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_acc_2_0(_id, t_6, t);
    t = map_with_index_1_0(_id, t);
    t = reverse_acc_2_0(_id, u_6, t);
    f_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_95, f_96);
    t = genzip_4_0(v_6, w_6, a_7, _id, t);
    g_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_96, (ATerm) ATmakeAppl(sym__2, b_96, (ATerm) ATempty));
    {
      static ATerm b_7 (ATerm t);
      static ATerm b_7 (ATerm t)
      {
        t = do_A_column_1_0(r_0, t);
        return(t);
      }
      t = foldl_1_0(b_7, t);
    }
    if(match_cons(t, sym__2))
      {
        j_96 = ATgetArgument(t, 0);
        h_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_96;
    t = reverse_acc_2_0(_id, d_7, t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm e_7 (ATerm t);
      static ATerm e_7 (ATerm t)
      {
        ATerm b_97 = NULL;
        b_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_97, j_96);
        return(t);
      }
      t = map_1_0(e_7, t);
    }
    m_96 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_95, m_96, b_96);
    t = a_12(z_95, m_96, b_96, t);
    return(t);
  }
  static ATerm c_102 (ATerm c_97, ATerm d_97, ATerm e_97, ATerm f_97, ATerm t)
  {
    ATerm h_97 = NULL,i_97 = NULL,l_97 = NULL;
    t = c_97;
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(f_7, t);
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          t = term_g_21;
        }
    }
    l_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_97, l_97);
    t = k_13(e_97, l_97, t);
    i_97 = t;
    t = d_97;
    t = filter_1_0(is_real_vbox_0_0, t);
    h_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_97);
      }
    else
      {
        ATerm m_97 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, e_97, i_97, h_97);
        t = h_12(r_0, e_97, i_97, h_97, t);
        m_97 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_97, m_97, e_97);
        t = a_12(c_97, m_97, e_97, t);
      }
    return(t);
  }
  static ATerm e_102 (ATerm n_97, ATerm o_97, ATerm p_97, ATerm q_97, ATerm t)
  {
    ATerm t_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,q_98 = NULL,r_98 = NULL,t_14 = NULL;
    t = n_97;
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(g_7, t);
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          t = term_c_21;
        }
    }
    x_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_97, term_y_23);
    t = copy_char_0_0(t);
    v_97 = t;
    t = SSL_strlen(v_97);
    w_97 = t;
    t = o_97;
    t = filter_1_0(is_real_hbox_0_0, t);
    t_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_97, p_97);
    {
      static ATerm h_7 (ATerm t);
      static ATerm h_7 (ATerm t)
      {
        ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,s_14 = NULL;
        t = r_0(t);
        i_98 = t;
        if(match_cons(t, sym__2))
          {
            f_98 = ATgetArgument(t, 0);
            g_98 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_98);
        e_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_97, g_98);
        t = k_13(w_97, g_98, t);
        h_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_98, h_98);
        s_14 = t;
        t = SSLsetAnnotations(s_14, e_98);
        return(t);
      }
      t = thread_map_1_0(h_7, t);
    }
    d_98 = t;
    if(match_cons(t, sym__2))
      {
        z_97 = ATgetArgument(t, 0);
        a_98 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_98);
    y_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_97, z_97);
    t = b_12(v_97, z_97, t);
    b_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_98, a_98);
    t_14 = t;
    t = SSLsetAnnotations(t_14, y_97);
    c_98 = t;
    if(match_cons(t, sym__2))
      {
        q_98 = ATgetArgument(t, 0);
        r_98 = ATgetArgument(t, 1);
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_28 = NULL,y_28 = NULL,z_28 = NULL,u_14 = NULL;
              t = SSLgetAnnotations(c_98);
              u_28 = t;
              t = q_98;
              {
                ATerm s_28 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_28;
                  }
              }
              y_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_98, w_97);
              t = x_12(r_98, w_97, t);
              z_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
              u_14 = t;
              t = SSLsetAnnotations(u_14, u_28);
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = c_98;
            }
        }
      }
    else
      {
        t = c_98;
      }
    return(t);
  }
  static ATerm f_102 (ATerm v_98, ATerm w_98, ATerm x_98, ATerm y_98, ATerm t)
  {
    ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
    t = v_98;
    {
      ATerm t_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(i_7, t);
          LocalPopChoice(v_28);
        }
      else
        {
          t = t_28;
          t = term_c_21;
        }
    }
    k_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_99, term_y_23);
    t = copy_char_0_0(t);
    c_99 = t;
    t = v_98;
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(j_7, t);
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          t = term_g_21;
        }
    }
    i_99 = t;
    t = term_c_21;
    j_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_99, term_c_21);
    t = k_13(i_99, j_99, t);
    h_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_99, term_u_23);
    t = copy_char_0_0(t);
    t = SSL_strlen(c_99);
    a_99 = t;
    t = v_98;
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(k_7, t);
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          t = term_g_21;
        }
    }
    g_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_98, g_99);
    t = k_13(x_98, g_99, t);
    b_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_98, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_98)));
    {
      static ATerm l_7 (ATerm t);
      static ATerm l_7 (ATerm t)
      {
        ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
        p_99 = t;
        if(match_cons(t, sym__2))
          {
            q_99 = ATgetArgument(t, 0);
            r_99 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_99;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_99 = ATgetFirst((ATermList) t);
            o_99 = (ATerm) ATgetNext((ATermList) t);
            t = l_99;
            if(match_cons(t, sym__2))
              {
                m_99 = ATgetArgument(t, 0);
                n_99 = ATgetArgument(t, 1);
                {
                  ATerm c_29 = t;
                  int d_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm o_7 (ATerm t);
                      static ATerm o_7 (ATerm t)
                      {
                        t = a_99;
                        return(t);
                      }
                      t = p_99;
                      t = d_12(r_0, o_7, q_99, m_99, n_99, o_99, t);
                      LocalPopChoice(d_29);
                    }
                  else
                    {
                      t = c_29;
                      {
                        static ATerm p_7 (ATerm t);
                        static ATerm q_7 (ATerm t);
                        static ATerm p_7 (ATerm t)
                        {
                          t = a_99;
                          return(t);
                        }
                        static ATerm q_7 (ATerm t)
                        {
                          t = b_99;
                          return(t);
                        }
                        t = p_99;
                        t = c_12(r_0, p_7, q_7, q_99, r_99, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm r_7 (ATerm t);
                static ATerm s_7 (ATerm t);
                static ATerm r_7 (ATerm t)
                {
                  t = a_99;
                  return(t);
                }
                static ATerm s_7 (ATerm t)
                {
                  t = b_99;
                  return(t);
                }
                t = p_99;
                t = c_12(r_0, r_7, s_7, q_99, r_99, t);
              }
          }
        else
          {
            static ATerm t_7 (ATerm t);
            static ATerm u_7 (ATerm t);
            static ATerm t_7 (ATerm t)
            {
              t = a_99;
              return(t);
            }
            static ATerm u_7 (ATerm t)
            {
              t = b_99;
              return(t);
            }
            t = p_99;
            t = c_12(r_0, t_7, u_7, q_99, r_99, t);
          }
        return(t);
      }
      t = foldl_1_0(l_7, t);
    }
    t = reverse_acc_2_0(_id, v_7, t);
    t = map_1_0(x_7, t);
    {
      static ATerm z_7 (ATerm t);
      static ATerm z_7 (ATerm t)
      {
        ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,y_14 = NULL;
        n_100 = t;
        if(match_cons(t, sym__2))
          {
            k_100 = ATgetArgument(t, 0);
            l_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_100);
        j_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_99, k_100);
        t = b_12(c_99, k_100, t);
        m_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_100, l_100);
        y_14 = t;
        t = SSLsetAnnotations(y_14, j_100);
        return(t);
      }
      t = map_1_0(z_7, t);
    }
    f_99 = t;
    t = (ATerm) ATmakeAppl(sym__3, v_98, f_99, x_98);
    t = a_12(v_98, f_99, x_98, t);
    return(t);
  }
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL;
  v_100 = t;
  if(match_cons(t, sym__2))
    {
      w_100 = ATgetArgument(t, 0);
      z_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_100;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_25, z_100);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_100 = ATgetFirst((ATermList) t);
          y_100 = (ATerm) ATgetNext((ATermList) t);
          t = y_100;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_100, z_100);
          t = r_0(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              x_100 = ATgetArgument(t, 0);
              y_100 = ATgetArgument(t, 1);
              {
                ATerm u_29 = NULL,c_30 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, x_100, z_100);
                t = r_0(t);
                u_29 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm e_29 = ATgetArgument(t, 0);
                    c_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, x_100, y_100), z_100);
                {
                  ATerm f_29 = t;
                  int g_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_30 = NULL;
                      t = get_width_0_0(t);
                      d_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_30, d_30);
                      t = leq_0_0(t);
                      LocalPopChoice(g_29);
                      t = u_29;
                    }
                  else
                    {
                      t = f_29;
                      t = (ATerm) ATmakeAppl(sym__2, y_100, z_100);
                      t = r_0(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  x_100 = ATgetArgument(t, 0);
                  y_100 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, x_100, y_100), z_100);
                  t = r_0(t);
                }
              else
                {
                  ATerm h_29 = t;
                  int i_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm j_29 = ATgetArgument(t, 0);
                          y_100 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_29);
                      t = (ATerm) ATmakeAppl(sym__2, y_100, z_100);
                      t = r_0(t);
                    }
                  else
                    {
                      t = h_29;
                      {
                        ATerm k_29 = t;
                        int l_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm m_29 = ATgetArgument(t, 0);
                                y_100 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(l_29);
                            t = y_100;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                o_100 = ATgetFirst((ATermList) t);
                                q_100 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = o_100;
                            if(match_cons(t, sym_S_1))
                              {
                                p_100 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = q_100;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, p_100, z_100);
                          }
                        else
                          {
                            t = k_29;
                            if(match_cons(t, sym_S_1))
                              {
                                x_100 = ATgetArgument(t, 0);
                                {
                                  ATerm u_101 = NULL,v_101 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, x_100, z_100);
                                  t = y_12(x_100, z_100, t);
                                  v_101 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, z_100, v_101);
                                  t = k_13(z_100, v_101, t);
                                  u_101 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, x_100, u_101);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    x_100 = ATgetArgument(t, 0);
                                    y_100 = ATgetArgument(t, 1);
                                    u_100 = ATgetArgument(t, 2);
                                    t = x_100;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        t_100 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_100;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        r_100 = ATgetFirst((ATermList) t);
                                        s_100 = (ATerm) ATgetNext((ATermList) t);
                                        t = s_100;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = r_100;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm n_29 = t;
                                                int o_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_101(t_100, y_100, u_100, z_100, v_100, t);
                                                    LocalPopChoice(o_29);
                                                  }
                                                else
                                                  {
                                                    t = n_29;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_100);
                                                  }
                                              }
                                            else
                                              {
                                                t = z_101(t_100, y_100, u_100, z_100, v_100, t);
                                              }
                                          }
                                        else
                                          {
                                            t = r_100;
                                            t = z_101(t_100, y_100, u_100, z_100, v_100, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm p_29 = t;
                                            int q_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_101(t_100, y_100, u_100, z_100, v_100, t);
                                                LocalPopChoice(q_29);
                                              }
                                            else
                                              {
                                                t = p_29;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_100);
                                              }
                                          }
                                        else
                                          {
                                            t = z_101(t_100, y_100, u_100, z_100, v_100, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        x_100 = ATgetArgument(t, 0);
                                        y_100 = ATgetArgument(t, 1);
                                        t = c_102(x_100, y_100, z_100, v_100, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            x_100 = ATgetArgument(t, 0);
                                            y_100 = ATgetArgument(t, 1);
                                            t = e_102(x_100, y_100, z_100, v_100, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                x_100 = ATgetArgument(t, 0);
                                                y_100 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = f_102(x_100, y_100, z_100, v_100, t);
                                          }
                                      }
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
static ATerm x_12 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_40, e_40);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = SSL_subtr(d_40, e_40);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_102 = ATgetFirst((ATermList) t);
      p_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_102;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_102;
    }
  else
    {
      t = p_102;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_13 (ATerm e_22, ATerm f_257, ATerm t)
{
  static ATerm c_8 (ATerm t);
  static ATerm c_8 (ATerm t)
  {
    if((e_22 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = f_257;
  t = fetch_1_0(c_8, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  static ATerm l_103 (ATerm t);
  static ATerm l_103 (ATerm t)
  {
    ATerm t_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_102(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = t_29;
        {
          ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,j_31 = NULL,s_31 = NULL,o_15 = NULL;
          i_103 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_103 = ATgetFirst((ATermList) t);
              k_103 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_103);
          j_31 = t;
          t = k_103;
          t = l_103(t);
          s_31 = t;
          t = (ATerm) ATinsert(CheckATermList(s_31), j_103);
          o_15 = t;
          t = SSLsetAnnotations(o_15, j_31);
        }
      }
    return(t);
  }
  t = l_103(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm n_103 = NULL,q_103 = NULL;
  static ATerm d_8 (ATerm t);
  static ATerm d_8 (ATerm t)
  {
    ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,w_15 = NULL,v_15 = NULL;
    e_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_104 = ATgetFirst((ATermList) t);
        b_104 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_104);
    z_103 = t;
    t = a_104;
    t = d_102(t);
    c_104 = t;
    t = (ATerm) ATinsert(CheckATermList(b_104), c_104);
    v_15 = t;
    t = SSLsetAnnotations(v_15, z_103);
    d_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_103 = ATgetFirst((ATermList) t);
        t_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_104);
    r_103 = t;
    t = t_103;
    if(((n_103 != NULL) && (n_103 != t)))
      _fail(t);
    else
      n_103 = t;
    t = (ATerm) ATinsert(CheckATermList(t_103), s_103);
    w_15 = t;
    t = SSLsetAnnotations(w_15, r_103);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(d_8, t);
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_103, not_null(n_103));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm m_111 (ATerm), ATerm t)
{
  ATerm m_104 = NULL,p_104 = NULL;
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(m_111, t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm j_104 = NULL;
        j_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_104, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      p_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_104;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_104;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_29 = ATgetFirst((ATermList) t);
              ATerm z_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_104;
          t = list_tokenize_1_0(m_111, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_30 = ATgetFirst((ATermList) t);
          ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_104;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, m_104);
        }
      else
        {
          ATerm w_104 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_30 = ATgetFirst((ATermList) t);
              ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_104;
          t = list_tokenize_1_0(m_111, t);
          w_104 = t;
          t = (ATerm) ATinsert(CheckATermList(w_104), m_104);
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_implode_string(f_105);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,z_15 = NULL;
  d_105 = t;
  if(match_cons(t, sym__2))
    {
      a_105 = ATgetArgument(t, 0);
      b_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_105);
  z_104 = t;
  t = SSL_explode_string(b_105);
  c_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_105, c_105);
  z_15 = t;
  t = SSLsetAnnotations(z_15, z_104);
  if(match_cons(t, sym__2))
    {
      x_104 = ATgetArgument(t, 0);
      y_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_104;
  {
    static ATerm g_8 (ATerm t);
    static ATerm g_8 (ATerm t)
    {
      ATerm e_105 = NULL;
      e_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_105, x_104);
      t = f_13(e_105, x_104, t);
      return(t);
    }
    t = list_tokenize_1_0(g_8, t);
  }
  t = map_1_0(h_8, t);
  return(t);
}
static ATerm y_12 (ATerm a_19, ATerm b_19, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_u_23), a_19);
  t = string_tokenize_0_0(t);
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_105 = NULL,n_105 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_g_21;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_105 = ATgetFirst((ATermList) t);
                n_105 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_105;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_strlen(m_105);
          }
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm o_105 = NULL,p_105 = NULL;
          t = last_0_0(t);
          p_105 = t;
          t = SSL_strlen(p_105);
          o_105 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_105, b_19);
          t = x_12(o_105, b_19, t);
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  static ATerm l_106 (ATerm t);
  static ATerm l_106 (ATerm t)
  {
    ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
    k_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_106 = ATgetFirst((ATermList) t);
        j_106 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_33 = NULL,h_33 = NULL,b_16 = NULL;
          t = SSLgetAnnotations(k_106);
          d_33 = t;
          t = j_106;
          t = l_106(t);
          h_33 = t;
          t = (ATerm) ATinsert(CheckATermList(h_33), i_106);
          b_16 = t;
          t = SSLsetAnnotations(b_16, d_33);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_106;
        t = h_102(t);
      }
    return(t);
  }
  t = l_106(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL;
  s_105 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_105;
    }
  else
    {
      static ATerm i_8 (ATerm t);
      static ATerm i_8 (ATerm t)
      {
        t = not_null(u_105);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_105 = ATgetFirst((ATermList) t);
          if(((u_105 != NULL) && (u_105 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_105;
      t = at_end_1_0(i_8, t);
    }
  return(t);
}
static ATerm x_106 (ATerm p_106, ATerm t)
{
  ATerm q_106 = NULL;
  t = SSL_explode_term(p_106);
  if(match_cons(t, sym__2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_106;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  u_106 = t;
  if(match_cons(t, sym__2))
    {
      s_106 = ATgetArgument(t, 0);
      t_106 = ATgetArgument(t, 1);
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_8 (ATerm t);
            static ATerm j_8 (ATerm t)
            {
              t = t_106;
              return(t);
            }
            t = s_106;
            t = at_end_1_0(j_8, t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = x_106(u_106, t);
          }
      }
    }
  else
    {
      t = x_106(u_106, t);
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
  g_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_108;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_108 = ATgetFirst((ATermList) t);
          i_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_33 = NULL,j_34 = NULL,y_17 = NULL;
            t = SSLgetAnnotations(g_108);
            v_33 = t;
            t = h_108;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_108;
            t = flat_list_0_0(t);
            j_34 = t;
            t = (ATerm) ATinsert(CheckATermList(j_34), h_108);
            y_17 = t;
            t = SSLsetAnnotations(y_17, v_33);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm n_30 = t;
              int o_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_34 = NULL,w_34 = NULL,x_34 = NULL,d_35 = NULL,b_18 = NULL;
                  t = SSLgetAnnotations(g_108);
                  x_34 = t;
                  t = h_108;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = h_108;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm p_30 = ATgetFirst((ATermList) t);
                          ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = h_108;
                    }
                  t = (ATerm) ATinsert(CheckATermList(i_108), h_108);
                  b_18 = t;
                  t = SSLsetAnnotations(b_18, x_34);
                  d_35 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_34 = ATgetFirst((ATermList) t);
                      {
                        ATerm r_30 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = d_35;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm s_30 = ATgetFirst((ATermList) t);
                      s_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_34, s_34);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
                  {
                    ATerm z_35 = NULL,c_36 = NULL,e_18 = NULL;
                    t = SSLgetAnnotations(g_108);
                    z_35 = t;
                    t = i_108;
                    t = flat_list_0_0(t);
                    c_36 = t;
                    t = (ATerm) ATinsert(CheckATermList(c_36), h_108);
                    e_18 = t;
                    t = SSLsetAnnotations(e_18, z_35);
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_110 = NULL;
  e_110 = t;
  if(match_int(t, 32))
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_36 = NULL;
          t = term_v_30;
          n_36 = t;
          t = SSL_explode_string(n_36);
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          t = e_110;
        }
    }
  else
    {
      if(match_int(t, 35))
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_36 = NULL;
              t = term_y_30;
              o_36 = t;
              t = SSL_explode_string(o_36);
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              t = e_110;
            }
        }
      else
        {
          if(match_int(t, 36))
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_36 = NULL;
                  t = term_b_31;
                  p_36 = t;
                  t = SSL_explode_string(p_36);
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  t = e_110;
                }
            }
          else
            {
              if(match_int(t, 37))
                {
                  ATerm c_31 = t;
                  int d_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_36 = NULL;
                      t = term_e_31;
                      q_36 = t;
                      t = SSL_explode_string(q_36);
                      LocalPopChoice(d_31);
                    }
                  else
                    {
                      t = c_31;
                      t = e_110;
                    }
                }
              else
                {
                  if(match_int(t, 38))
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
                          t = e_110;
                        }
                    }
                  else
                    {
                      if(match_int(t, 45))
                        {
                          ATerm i_31 = t;
                          int k_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_37 = NULL;
                              t = term_l_31;
                              a_37 = t;
                              t = SSL_explode_string(a_37);
                              LocalPopChoice(k_31);
                            }
                          else
                            {
                              t = i_31;
                              t = e_110;
                            }
                        }
                      else
                        {
                          if(match_int(t, 60))
                            {
                              ATerm m_31 = t;
                              int n_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_37 = NULL;
                                  t = term_o_31;
                                  f_37 = t;
                                  t = SSL_explode_string(f_37);
                                  LocalPopChoice(n_31);
                                }
                              else
                                {
                                  t = m_31;
                                  t = e_110;
                                }
                            }
                          else
                            {
                              if(match_int(t, 62))
                                {
                                  ATerm p_31 = t;
                                  int q_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm g_37 = NULL;
                                      t = term_r_31;
                                      g_37 = t;
                                      t = SSL_explode_string(g_37);
                                      LocalPopChoice(q_31);
                                    }
                                  else
                                    {
                                      t = p_31;
                                      t = e_110;
                                    }
                                }
                              else
                                {
                                  if(match_int(t, 92))
                                    {
                                      ATerm t_31 = t;
                                      int u_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_37 = NULL;
                                          t = term_v_31;
                                          l_37 = t;
                                          t = SSL_explode_string(l_37);
                                          LocalPopChoice(u_31);
                                        }
                                      else
                                        {
                                          t = t_31;
                                          t = e_110;
                                        }
                                    }
                                  else
                                    {
                                      if(match_int(t, 94))
                                        {
                                          ATerm w_31 = t;
                                          int x_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm m_37 = NULL;
                                              t = term_y_31;
                                              m_37 = t;
                                              t = SSL_explode_string(m_37);
                                              LocalPopChoice(x_31);
                                            }
                                          else
                                            {
                                              t = w_31;
                                              t = e_110;
                                            }
                                        }
                                      else
                                        {
                                          if(match_int(t, 95))
                                            {
                                              ATerm z_31 = t;
                                              int a_32 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_37 = NULL;
                                                  t = term_b_32;
                                                  n_37 = t;
                                                  t = SSL_explode_string(n_37);
                                                  LocalPopChoice(a_32);
                                                }
                                              else
                                                {
                                                  t = z_31;
                                                  t = e_110;
                                                }
                                            }
                                          else
                                            {
                                              if(match_int(t, 123))
                                                {
                                                  ATerm c_32 = t;
                                                  int d_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_37 = NULL;
                                                      t = term_e_32;
                                                      o_37 = t;
                                                      t = SSL_explode_string(o_37);
                                                      LocalPopChoice(d_32);
                                                    }
                                                  else
                                                    {
                                                      t = c_32;
                                                      t = e_110;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_int(t, 124))
                                                    {
                                                      ATerm f_32 = t;
                                                      int g_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_37 = NULL;
                                                          t = term_h_32;
                                                          r_37 = t;
                                                          t = SSL_explode_string(r_37);
                                                          LocalPopChoice(g_32);
                                                        }
                                                      else
                                                        {
                                                          t = f_32;
                                                          t = e_110;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_int(t, 125))
                                                        {
                                                          ATerm i_32 = t;
                                                          int j_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_37 = NULL;
                                                              t = term_k_32;
                                                              v_37 = t;
                                                              t = SSL_explode_string(v_37);
                                                              LocalPopChoice(j_32);
                                                            }
                                                          else
                                                            {
                                                              t = i_32;
                                                              t = e_110;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_int(t, 126))
                                                            {
                                                              ATerm l_32 = t;
                                                              int m_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_37 = NULL;
                                                                  t = term_n_32;
                                                                  w_37 = t;
                                                                  t = SSL_explode_string(w_37);
                                                                  LocalPopChoice(m_32);
                                                                }
                                                              else
                                                                {
                                                                  t = l_32;
                                                                  t = e_110;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              t = e_110;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  t = map_1_0(m_8, t);
  t = flat_list_0_0(t);
  return(t);
}
ATerm abox2alltt_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  static ATerm x_114 (ATerm a_114, ATerm b_114, ATerm c_114, ATerm d_114, ATerm t);
  static ATerm x_114 (ATerm a_114, ATerm b_114, ATerm c_114, ATerm d_114, ATerm t)
  {
    ATerm h_114 = NULL,i_114 = NULL;
    t = a_114;
    if(match_cons(t, sym_KW_0))
      {
        t = a_114;
      }
    else
      {
        if(match_cons(t, sym_VAR_0))
          {
            t = a_114;
          }
        else
          {
            if(match_cons(t, sym_NUM_0))
              {
                t = a_114;
              }
            else
              {
                if(!(match_cons(t, sym_MATH_0)))
                  _fail(t);
                t = a_114;
              }
          }
      }
    t = (ATerm) ATmakeAppl(sym__2, b_114, c_114);
    t = q_0(t);
    if(match_cons(t, sym__2))
      {
        h_114 = ATgetArgument(t, 0);
        i_114 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, a_114, h_114), i_114);
    return(t);
  }
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL;
  n_114 = t;
  if(match_cons(t, sym__2))
    {
      o_114 = ATgetArgument(t, 0);
      r_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_114;
  if(match_cons(t, sym_S_1))
    {
      p_114 = ATgetArgument(t, 0);
      {
        ATerm h_41 = NULL,i_41 = NULL,k_41 = NULL;
        t = p_114;
        {
          ATerm o_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_41 = NULL;
              t = term_o_22;
              m_41 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, p_114);
              t = p_13(m_41, p_114, t);
              LocalPopChoice(p_32);
            }
          else
            {
              t = o_32;
              {
                ATerm n_41 = NULL;
                t = SSL_explode_string(p_114);
                t = escape_special_characters_0_0(t);
                n_41 = t;
                t = SSL_implode_string(n_41);
              }
            }
        }
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_114, r_114);
        t = y_12(p_114, r_114, t);
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_114, k_41);
        t = k_13(r_114, k_41, t);
        i_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_41, i_41);
      }
    }
  else
    {
      if(match_cons(t, sym_FBOX_2))
        {
          p_114 = ATgetArgument(t, 0);
          q_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_114;
      if(match_cons(t, sym_F_1))
        {
          m_114 = ATgetArgument(t, 0);
          t = m_114;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_114 = ATgetFirst((ATermList) t);
              l_114 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm q_32 = t;
                int r_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_42 = NULL,t_42 = NULL,u_42 = NULL,n_45 = NULL,p_45 = NULL;
                    t = k_114;
                    if(match_cons(t, sym_FFID_2))
                      {
                        n_45 = ATgetArgument(t, 0);
                        p_45 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm s_32 = t;
                      int t_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_46 = NULL,r_18 = NULL;
                          t = SSLgetAnnotations(k_114);
                          v_46 = t;
                          t = n_45;
                          if(!(match_cons(t, sym_FM_0)))
                            _fail(t);
                          t = p_45;
                          o_42 = t;
                          t = (ATerm) ATmakeAppl(sym_FFID_2, n_45, p_45);
                          r_18 = t;
                          t = SSLsetAnnotations(r_18, v_46);
                          LocalPopChoice(t_32);
                        }
                      else
                        {
                          t = s_32;
                          {
                            ATerm u_32 = t;
                            int v_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_48 = NULL,s_18 = NULL;
                                t = SSLgetAnnotations(k_114);
                                d_48 = t;
                                t = n_45;
                                if(!(match_cons(t, sym_SE_0)))
                                  _fail(t);
                                t = p_45;
                                o_42 = t;
                                t = (ATerm) ATmakeAppl(sym_FFID_2, n_45, p_45);
                                s_18 = t;
                                t = SSLsetAnnotations(s_18, d_48);
                                LocalPopChoice(v_32);
                              }
                            else
                              {
                                t = u_32;
                                {
                                  ATerm z_32 = t;
                                  int f_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm w_48 = NULL,u_18 = NULL;
                                      t = SSLgetAnnotations(k_114);
                                      w_48 = t;
                                      t = n_45;
                                      if(!(match_cons(t, sym_SH_0)))
                                        _fail(t);
                                      t = p_45;
                                      o_42 = t;
                                      t = (ATerm) ATmakeAppl(sym_FFID_2, n_45, p_45);
                                      u_18 = t;
                                      t = SSLsetAnnotations(u_18, w_48);
                                      LocalPopChoice(f_33);
                                    }
                                  else
                                    {
                                      t = z_32;
                                      {
                                        ATerm g_33 = t;
                                        int k_33 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_49 = NULL,v_18 = NULL;
                                            t = SSLgetAnnotations(k_114);
                                            x_49 = t;
                                            t = n_45;
                                            if(!(match_cons(t, sym_SZ_0)))
                                              _fail(t);
                                            t = p_45;
                                            o_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_FFID_2, n_45, p_45);
                                            v_18 = t;
                                            t = SSLsetAnnotations(v_18, x_49);
                                            LocalPopChoice(k_33);
                                          }
                                        else
                                          {
                                            t = g_33;
                                            {
                                              ATerm o_50 = NULL,w_18 = NULL;
                                              t = SSLgetAnnotations(k_114);
                                              o_50 = t;
                                              t = n_45;
                                              if(!(match_cons(t, sym_CL_0)))
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_FFID_2, n_45, p_45);
                                              w_18 = t;
                                              t = SSLsetAnnotations(w_18, o_50);
                                              t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, p_45);
                                              o_42 = t;
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, l_114), q_114), r_114);
                    t = q_0(t);
                    if(match_cons(t, sym__2))
                      {
                        t_42 = ATgetArgument(t, 0);
                        u_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_BOXFONT_2, o_42, t_42), u_42);
                    LocalPopChoice(r_32);
                  }
                else
                  {
                    t = q_32;
                    t = x_114(p_114, q_114, r_114, n_114, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm l_33 = t;
                  int m_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, q_114, r_114);
                      t = q_0(t);
                      LocalPopChoice(m_33);
                    }
                  else
                    {
                      t = l_33;
                      t = x_114(p_114, q_114, r_114, n_114, t);
                    }
                }
              else
                {
                  t = x_114(p_114, q_114, r_114, n_114, t);
                }
            }
        }
      else
        {
          t = x_114(p_114, q_114, r_114, n_114, t);
        }
    }
  return(t);
}
ATerm try_abox2alltt_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2alltt_1_0(try_abox2alltt_0_0, t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = abox2text_1_0(try_abox2alltt_0_0, t);
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            {
              ATerm m_115 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
              m_115 = t;
              t = term_h_14;
              w_51 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_115), term_u_33);
              x_51 = t;
              t = SSL_printnl(w_51, x_51);
              t = term_c_21;
              v_51 = t;
              t = SSL_exit(v_51);
              t = (ATerm) ATinsert(ATinsert(ATempty, m_115), term_u_33);
            }
          }
      }
    }
  return(t);
}
static ATerm p_13 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm o_115 = NULL;
  t = lookup_table_0_1(p_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_13(q_54, o_115, t);
  return(t);
}
static ATerm h_13 (ATerm r_36, ATerm s_36, ATerm t)
{
  t = SSL_access(r_36, s_36);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_115 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_14;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_115 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_13);
      u_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_115, (ATerm) ATinsert(ATempty, term_d_13));
      t = h_13(s_115, u_115, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_116 (ATerm c_116, ATerm t)
{
  t = SSL_fclose(c_116);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL;
  g_116 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_116 = ATgetArgument(t, 0);
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_116);
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            t = i_116(g_116, t);
          }
      }
    }
  else
    {
      t = i_116(g_116, t);
    }
  return(t);
}
static ATerm a_13 (ATerm i_21, ATerm t)
{
  t = SSL_read_term_from_stream(i_21);
  return(t);
}
static ATerm g_13 (ATerm f_35, ATerm g_35, ATerm t)
{
  t = SSL_strcat(f_35, g_35);
  return(t);
}
static ATerm b_13 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm j_116 = NULL;
  t = SSL_fopen(d_37, e_37);
  j_116 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_116);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_116 = NULL;
  t = SSL_stdin_stream();
  k_116 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_116);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_116 = NULL;
  t = SSL_stdout_stream();
  l_116 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_116);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_116 = NULL;
  t = SSL_stderr_stream();
  m_116 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_116);
  return(t);
}
static ATerm t_117 (ATerm s_116, ATerm t)
{
  ATerm t_116 = NULL;
  t = SSL_explode_term(s_116);
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            t_116 = ATgetFirst((ATermList) z_33);
            {
              ATerm a_34 = (ATerm) ATgetNext((ATermList) z_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_116;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_116;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_116;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_116;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_117 (ATerm w_116, ATerm x_116, ATerm y_116, ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,e_117 = NULL,f_19 = NULL;
  t = SSLgetAnnotations(y_116);
  b_117 = t;
  t = w_116;
  if(match_cons(t, sym_Path_1))
    {
      e_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_117, x_116);
  f_19 = t;
  t = SSLsetAnnotations(f_19, b_117);
  if(match_cons(t, sym__2))
    {
      z_116 = ATgetArgument(t, 0);
      a_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(z_116, a_117, t);
  return(t);
}
static ATerm v_117 (ATerm g_117, ATerm h_117, ATerm i_117, ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,o_117 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(i_117);
  l_117 = t;
  t = SSL_is_string(g_117);
  o_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_117, h_117);
  g_19 = t;
  t = SSLsetAnnotations(g_19, l_117);
  if(match_cons(t, sym__2))
    {
      j_117 = ATgetArgument(t, 0);
      k_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(j_117, k_117, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
  q_117 = t;
  if(match_cons(t, sym__2))
    {
      r_117 = ATgetArgument(t, 0);
      s_117 = ATgetArgument(t, 1);
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_117(q_117, t);
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            {
              ATerm d_34 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_117(r_117, s_117, q_117, t);
                  LocalPopChoice(e_34);
                }
              else
                {
                  t = d_34;
                  t = v_117(r_117, s_117, q_117, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_117(q_117, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL,e_118 = NULL;
  e_118 = t;
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_118, term_h_34);
        t = c_13(t);
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm h_52 = NULL,i_52 = NULL;
          t = term_i_34;
          i_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_34, e_118);
          t = g_13(i_52, e_118, t);
          h_52 = t;
          t = SSL_perror(h_52);
          _fail(t);
        }
      }
  }
  y_117 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(z_117, t);
  x_117 = t;
  t = y_117;
  t = fclose_0_0(t);
  t = x_117;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_118 = ATgetFirst((ATermList) t);
      {
        ATerm k_34 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
          {
            m_118 = ATgetFirst((ATermList) k_34);
            {
              ATerm l_34 = (ATerm) ATgetNext((ATermList) k_34);
              if(((ATgetType(l_34) != AT_LIST) || !(ATisEmpty(l_34))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_o_22;
  n_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, l_118, m_118);
  t = lookup_table_0_1(n_118, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(l_118, m_118, o_118, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, l_118, m_118);
  return(t);
}
ATerm load_latex_table_0_0 (ATerm t)
{
  ATerm i_118 = NULL;
  i_118 = t;
  t = term_o_22;
  t = table_create_0_0(t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_118 = NULL,k_118 = NULL;
        t = term_x_13;
        j_118 = t;
        t = term_o_34;
        k_118 = t;
        t = term_p_34;
        t = p_13(j_118, k_118, t);
        t = ReadFromFile_0_0(t);
        t = map_1_0(q_8, t);
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
      }
  }
  t = i_118;
  return(t);
}
static ATerm j_13 (ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL;
  u_118 = t;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
        t = p_13(b_53, c_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_34 = ATgetFirst((ATermList) t);
            t_118 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_34);
        {
          ATerm v_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_53, c_53, t_118);
          t = lookup_table_0_1(b_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_13(c_53, t_118, v_118, t);
          t = (ATerm) ATmakeAppl(sym__3, b_53, c_53, t_118);
        }
      }
    else
      {
        t = q_34;
        {
          ATerm x_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
          t = lookup_table_0_1(b_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_13(c_53, x_118, t);
          t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
        }
      }
  }
  t = u_118;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL;
  c_119 = t;
  t = z_114(t);
  b_119 = t;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_119 = NULL;
        t = term_w_14;
        g_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_119, term_w_14);
        t = p_13(b_119, g_119, t);
        {
          ATerm y_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_34;
            }
        }
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_119 = ATgetFirst((ATermList) t);
      z_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_119, term_w_14, z_118);
  t = lookup_table_0_1(b_119, t);
  f_119 = t;
  t = term_w_14;
  d_119 = t;
  t = f_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(d_119, z_118, e_119, t);
  t = a_119;
  {
    static ATerm r_8 (ATerm t);
    static ATerm r_8 (ATerm t)
    {
      ATerm h_119 = NULL;
      h_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_119, h_119);
      t = j_13(b_119, h_119, t);
      return(t);
    }
    t = map_1_0(r_8, t);
  }
  t = c_119;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_94(t);
      t = b_94(t);
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = b_94(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL;
  k_119 = t;
  t = y_114(t);
  j_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_119, term_w_14);
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_119 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_35 = ATgetArgument(t, 0);
            ATerm h_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_14;
        t_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_119, term_w_14);
        t = p_13(j_119, t_119, t);
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATempty;
      }
  }
  l_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_119, term_w_14, (ATerm) ATinsert(CheckATermList(l_119), (ATerm) ATempty));
  t = lookup_table_0_1(j_119, t);
  p_119 = t;
  t = term_w_14;
  m_119 = t;
  t = (ATerm) ATinsert(CheckATermList(l_119), (ATerm) ATempty);
  n_119 = t;
  t = p_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(m_119, n_119, o_119, t);
  t = k_119;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_d_15;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm c_120 = NULL;
  c_120 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_120);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = c_120;
      }
  }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_128 (ATerm), ATerm t)
{
  ATerm w_119 = NULL;
  static ATerm t_8 (ATerm t);
  static ATerm t_8 (ATerm t)
  {
    ATerm x_119 = NULL;
    x_119 = t;
    {
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_119 = NULL,z_119 = NULL;
          t = term_d_15;
          y_119 = t;
          t = term_w_14;
          z_119 = t;
          t = term_m_35;
          t = p_13(y_119, z_119, t);
          LocalPopChoice(l_35);
        }
      else
        {
          t = k_35;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_119 != NULL) && (w_119 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_119 = ATgetFirst((ATermList) t);
        {
          ATerm n_35 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_119;
    t = map_1_0(v_8, t);
    t = x_119;
    t = end_scope_1_0(w_8, t);
    return(t);
  }
  t = begin_scope_1_0(s_8, t);
  t = restore_always_2_0(h_128, t_8, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL;
  f_120 = t;
  t = term_f_15;
  t = whoami_0_0(t);
  g_120 = t;
  t = term_h_14;
  i_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_35), g_120), term_o_35);
  j_120 = t;
  t = SSL_printnl(i_120, j_120);
  t = term_c_21;
  h_120 = t;
  t = SSL_exit(h_120);
  t = f_120;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm l_120 = NULL;
  l_120 = t;
  if(match_string(t, "-k"))
    {
      t = l_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_120;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
  m_120 = t;
  t = SSL_string_to_int(m_120);
  n_120 = t;
  t = term_q_35;
  o_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_35, n_120);
  t = s_13(o_120, n_120, t);
  t = m_120;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_8, y_8, z_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm q_120 = NULL;
  q_120 = t;
  if(match_string(t, "-S"))
    {
      t = q_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_120;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL;
  t = term_s_35;
  r_120 = t;
  t = term_g_21;
  s_120 = t;
  t = term_t_35;
  t = s_13(r_120, s_120, t);
  t = term_u_35;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
  t_120 = t;
  t = SSL_string_to_int(t_120);
  u_120 = t;
  t = term_s_35;
  v_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_35, u_120);
  t = s_13(v_120, u_120, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_120);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL;
  t = term_x_35;
  w_120 = t;
  t = term_f_15;
  x_120 = t;
  t = term_y_35;
  t = s_13(w_120, x_120, t);
  t = term_a_36;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_9, b_9, c_9, t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_9, e_9, f_9, t);
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = Option_3_0(g_9, h_9, i_9, t);
          }
      }
    }
  return(t);
}
static ATerm s_13 (ATerm g_63, ATerm h_63, ATerm t)
{
  ATerm y_120 = NULL,z_120 = NULL;
  t = term_x_13;
  y_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_13, g_63, h_63);
  t = lookup_table_0_1(y_120, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(g_63, h_63, z_120, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_13, g_63, h_63);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_121 = NULL,e_121 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL;
      t = term_f_15;
      t = g_0(t);
      f_121 = t;
      t = term_h_36;
      g_121 = t;
      t = term_i_36;
      h_121 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_36, term_i_36, f_121);
      t = q_13(g_121, h_121, f_121, t);
      _fail(t);
    }
  else
    {
      ATerm p_121 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_121 = ATgetFirst((ATermList) t);
          e_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_121;
      t = d_0(t);
      t = term_f_15;
      t = f_0(t);
      p_121 = t;
      t = (ATerm) ATinsert(CheckATermList(e_121), p_121);
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm r_121 = NULL;
  r_121 = t;
  if(match_string(t, "-o"))
    {
      t = r_121;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_121;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm s_121 = NULL,t_121 = NULL;
  s_121 = t;
  t = term_y_13;
  t_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, s_121);
  t = s_13(t_121, s_121, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_121);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_9, k_9, l_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm v_121 = NULL;
  v_121 = t;
  if(match_string(t, "-i"))
    {
      t = v_121;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_121;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL;
  w_121 = t;
  t = term_k_36;
  x_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_36, w_121);
  t = s_13(x_121, w_121, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_121);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, q_9, r_9, t);
  return(t);
}
static ATerm q_13 (ATerm w_52, ATerm x_52, ATerm v_52, ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL;
  z_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
  {
    ATerm m_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_36 = ATgetArgument(t, 0);
            ATerm w_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
        t = p_13(w_52, x_52, t);
        LocalPopChoice(u_36);
      }
    else
      {
        t = m_36;
        t = (ATerm) ATempty;
      }
  }
  a_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_52, x_52, (ATerm) ATinsert(CheckATermList(a_122), v_52));
  t = lookup_table_0_1(w_52, t);
  d_122 = t;
  t = (ATerm) ATinsert(CheckATermList(a_122), v_52);
  b_122 = t;
  t = d_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(x_52, b_122, c_122, t);
  t = z_121;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL;
      t = term_f_15;
      t = o_0(t);
      o_122 = t;
      t = term_h_36;
      p_122 = t;
      t = term_i_36;
      q_122 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_36, term_i_36, o_122);
      t = q_13(p_122, q_122, o_122, t);
      _fail(t);
    }
  else
    {
      ATerm u_122 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_122 = ATgetFirst((ATermList) t);
          l_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_122;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_122 = ATgetFirst((ATermList) t);
          n_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_122;
      t = l_0(t);
      t = m_122;
      t = m_0(t);
      u_122 = t;
      t = (ATerm) ATinsert(CheckATermList(n_122), u_122);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm x_122 = NULL,y_122 = NULL;
  t = term_x_36;
  x_122 = t;
  t = term_y_36;
  y_122 = t;
  t = term_z_36;
  t = s_13(x_122, y_122, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_b_37;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL;
  t = term_x_36;
  z_122 = t;
  t = term_c_37;
  a_123 = t;
  t = term_h_37;
  t = s_13(z_122, a_123, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm b_123 = NULL;
  b_123 = t;
  if(match_string(t, "-t"))
    {
      t = b_123;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = b_123;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL;
  c_123 = t;
  t = term_o_34;
  d_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_34, c_123);
  t = s_13(d_123, c_123, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm e_123 = NULL;
  e_123 = t;
  if(match_string(t, "-w"))
    {
      t = e_123;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = e_123;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm f_123 = NULL,g_123 = NULL;
  f_123 = t;
  t = term_p_20;
  g_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, f_123);
  t = s_13(g_123, f_123, t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm Abox_2_latex_options_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_9, t_9, u_9, t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_9, w_9, x_9, t);
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            {
              ATerm u_37 = t;
              int y_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(y_9, z_9, a_10, t);
                  LocalPopChoice(y_37);
                }
              else
                {
                  t = u_37;
                  t = ArgOption_3_0(b_10, c_10, e_10, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL,m_123 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_15;
  t = whoami_0_0(t);
  h_123 = t;
  t = term_h_14;
  j_123 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_37), h_123);
  m_123 = t;
  t = SSL_printnl(j_123, m_123);
  t = term_c_21;
  i_123 = t;
  t = SSL_exit(i_123);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_123 = NULL,o_123 = NULL;
  t = term_x_13;
  n_123 = t;
  t = term_a_38;
  o_123 = t;
  t = term_b_38;
  t = p_13(n_123, o_123, t);
  return(t);
}
static ATerm k_13 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_39, y_39);
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = SSL_addr(x_39, y_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
  q_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_123;
      t = p_108(t);
    }
  else
    {
      ATerm v_123 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_123 = ATgetFirst((ATermList) t);
          s_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_123;
      t = foldr_2_0(p_108, q_108, t);
      v_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_123, v_123);
      t = q_108(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  if(match_cons(t, sym__2))
    {
      j_53 = ATgetArgument(t, 0);
      k_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13(j_53, k_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_123 = NULL,u_52 = NULL,a_53 = NULL;
  t = times_0_0(t);
  a_53 = t;
  t = SSL_explode_term(a_53);
  if(match_cons(t, sym__2))
    {
      ATerm e_38 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_52;
  t = foldr_2_0(f_10, g_10, t);
  y_123 = t;
  t = SSL_TicksToSeconds(y_123);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  j_124 = t;
  if(match_cons(t, sym__2))
    {
      k_124 = ATgetArgument(t, 0);
      l_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_124;
        if((k_124 != t))
          {
            _fail(t);
          }
        t = j_124;
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = (ATerm) ATmakeAppl(sym__2, k_124, l_124);
        {
          ATerm h_38 = t;
          int i_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_124, l_124);
              LocalPopChoice(i_38);
            }
          else
            {
              t = h_38;
              t = SSL_gtr(k_124, l_124);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_124, l_124);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm p_124 = NULL;
  p_124 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
        t = term_x_13;
        s_124 = t;
        t = term_s_35;
        t_124 = t;
        t = term_l_38;
        t = p_13(s_124, t_124, t);
        r_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_124, term_c_21);
        t = geq_0_0(t);
        t = p_124;
        t = s_118(t);
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        t = p_124;
      }
  }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm v_124 = NULL,w_124 = NULL,y_124 = NULL,z_124 = NULL;
  t = run_time_0_0(t);
  v_124 = t;
  t = term_f_15;
  t = whoami_0_0(t);
  w_124 = t;
  t = term_h_14;
  y_124 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_38), v_124), term_m_38), w_124);
  z_124 = t;
  t = SSL_printnl(y_124, z_124);
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_38), v_124), term_m_38), w_124));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_125 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_21;
  a_125 = t;
  t = SSL_exit(a_125);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm k_125 = NULL,l_125 = NULL;
  l_125 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_125;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_125 = ATgetArgument(t, 0);
          {
            ATerm j_54 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(l_125);
            j_54 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_125);
            j_19 = t;
            t = SSLsetAnnotations(j_19, j_54);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_125;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_125 = NULL,e_125 = NULL;
      t = term_x_13;
      d_125 = t;
      t = term_q_38;
      e_125 = t;
      t = term_r_38;
      t = p_13(d_125, e_125, t);
      LocalPopChoice(p_38);
    }
  else
    {
      t = o_38;
      t = fetch_1_0(i_10, t);
    }
  t = i_121(t);
  return(t);
}
static ATerm t_13 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm n_125 = NULL;
  t = SSL_hashtable_put(q_57, o_57, p_57);
  n_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_125);
  return(t);
}
static ATerm u_13 (ATerm r_57, ATerm s_57, ATerm t)
{
  t = SSL_hashtable_get(s_57, r_57);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_54, ATerm t)
{
  ATerm w_125 = NULL;
  t = table_hashtable_0_0(t);
  w_125 = t;
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_55 = NULL;
        t = w_125;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_13(i_54, d_55, t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        {
          ATerm j_55 = NULL;
          t = i_54;
          t = table_create_0_0(t);
          t = w_125;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_13(i_54, j_55, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_57, ATerm x_57, ATerm t)
{
  ATerm z_125 = NULL;
  t = SSL_hashtable_create(w_57, x_57);
  z_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_125);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL,c_126 = NULL,e_126 = NULL,f_126 = NULL;
  a_126 = t;
  t = term_u_38;
  e_126 = t;
  t = term_v_38;
  f_126 = t;
  t = a_126;
  t = new_hashtable_0_2(e_126, f_126, t);
  b_126 = t;
  t = a_126;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(a_126, b_126, c_126, t);
  t = a_126;
  return(t);
}
static ATerm m_13 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm g_126 = NULL;
  t = SSL_hashtable_remove(u_57, t_57);
  g_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_126);
  return(t);
}
static ATerm n_13 (ATerm y_57, ATerm t)
{
  ATerm h_126 = NULL;
  t = SSL_hashtable_destroy(y_57);
  h_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_126);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_126 = NULL;
  t = SSL_table_hashtable();
  i_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_126);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL,m_126 = NULL;
  j_126 = t;
  t = table_hashtable_0_0(t);
  k_126 = t;
  t = lookup_table_0_1(j_126, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_13(m_126, t);
  t = k_126;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_13(j_126, l_126, t);
  t = j_126;
  return(t);
}
ATerm map_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  static ATerm b_127 (ATerm t);
  static ATerm b_127 (ATerm t)
  {
    ATerm y_126 = NULL,z_126 = NULL,a_127 = NULL;
    y_126 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_126;
      }
    else
      {
        ATerm p_55 = NULL,w_55 = NULL,x_55 = NULL,l_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_126 = ATgetFirst((ATermList) t);
            a_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_126);
        p_55 = t;
        t = z_126;
        t = q_101(t);
        w_55 = t;
        t = a_127;
        t = b_127(t);
        x_55 = t;
        t = (ATerm) ATinsert(CheckATermList(x_55), w_55);
        l_19 = t;
        t = SSLsetAnnotations(l_19, p_55);
      }
    return(t);
  }
  t = b_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_127 = ATgetFirst((ATermList) t);
      f_127 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_127 = NULL,k_127 = NULL;
        static ATerm j_10 (ATerm t);
        static ATerm j_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_127)), not_null(k_127));
          return(t);
        }
        t = f_127;
        t = j_0(t);
        if(((j_127 != NULL) && (j_127 != t)))
          _fail(t);
        else
          j_127 = t;
        t = e_127;
        t = h_0(t);
        if(((k_127 != NULL) && (k_127 != t)))
          _fail(t);
        else
          k_127 = t;
        t = f_127;
        t = reverse_acc_2_0(h_0, j_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL,n_19 = NULL;
  s_127 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_127);
  q_127 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_127);
  n_19 = t;
  t = SSLsetAnnotations(n_19, q_127);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm u_127 = NULL;
  u_127 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_127), term_w_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_127 = NULL,p_127 = NULL;
      t = term_x_13;
      o_127 = t;
      t = term_a_38;
      p_127 = t;
      t = term_b_38;
      t = p_13(o_127, p_127, t);
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      t = fetch_1_0(m_10, t);
    }
  t = term_z_38;
  t = echo_0_0(t);
  t = term_h_36;
  m_127 = t;
  t = term_i_36;
  n_127 = t;
  t = term_a_39;
  t = p_13(m_127, n_127, t);
  t = reverse_acc_2_0(_id, n_10, t);
  t = map_1_0(o_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  static ATerm s_128 (ATerm t);
  static ATerm s_128 (ATerm t)
  {
    ATerm p_128 = NULL,q_128 = NULL,r_128 = NULL;
    p_128 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_128 = ATgetFirst((ATermList) t);
        r_128 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_39 = t;
      int c_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_56 = NULL,s_56 = NULL,q_19 = NULL;
          t = SSLgetAnnotations(p_128);
          i_56 = t;
          t = q_128;
          t = a_102(t);
          s_56 = t;
          t = (ATerm) ATinsert(CheckATermList(r_128), s_56);
          q_19 = t;
          t = SSLsetAnnotations(q_19, i_56);
          LocalPopChoice(c_39);
        }
      else
        {
          t = b_39;
          {
            ATerm f_58 = NULL,k_58 = NULL,t_19 = NULL;
            t = SSLgetAnnotations(p_128);
            f_58 = t;
            t = r_128;
            t = s_128(t);
            k_58 = t;
            t = (ATerm) ATinsert(CheckATermList(k_58), q_128);
            t_19 = t;
            t = SSLsetAnnotations(t_19, f_58);
          }
        }
    }
    return(t);
  }
  t = s_128(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
  w_128 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_128;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_39 = ATgetFirst((ATermList) t);
                ATerm g_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_128;
          }
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = (ATerm) ATinsert(ATempty, w_128);
      }
  }
  x_128 = t;
  t = term_b_14;
  y_128 = t;
  t = SSL_printnl(y_128, x_128);
  t = w_128;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_129 = NULL,i_129 = NULL;
  t = term_x_13;
  c_129 = t;
  t = term_a_38;
  i_129 = t;
  t = term_b_38;
  t = p_13(c_129, i_129, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm j_129 = NULL,l_129 = NULL;
  t = term_h_39;
  j_129 = t;
  t = term_f_15;
  l_129 = t;
  t = term_i_39;
  t = s_13(j_129, l_129, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm m_129 = NULL,n_129 = NULL,p_129 = NULL,r_129 = NULL;
  t = term_h_39;
  p_129 = t;
  t = term_f_15;
  r_129 = t;
  t = term_i_39;
  t = s_13(p_129, r_129, t);
  t = term_k_39;
  m_129 = t;
  t = term_f_15;
  n_129 = t;
  t = term_l_39;
  t = s_13(m_129, n_129, t);
  t = term_m_39;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_10, q_10, r_10, t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = Option_3_0(s_10, u_10, v_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,h_20 = NULL;
  x_129 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_129 = ATgetFirst((ATermList) t);
      u_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_129);
  s_129 = t;
  t = t_129;
  t = u_78(t);
  v_129 = t;
  t = u_129;
  t = v_78(t);
  w_129 = t;
  t = (ATerm) ATinsert(CheckATermList(w_129), v_129);
  h_20 = t;
  t = SSLsetAnnotations(h_20, s_129);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,h_130 = NULL,i_130 = NULL,l_20 = NULL;
  c_130 = t;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_39;
        t = l_123(t);
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
      }
  }
  t = c_130;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_130 = ATgetFirst((ATermList) t);
      f_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_130);
  d_130 = t;
  t = term_a_38;
  i_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, e_130);
  t = s_13(i_130, e_130, t);
  t = f_130;
  {
    static ATerm s_130 (ATerm t);
    static ATerm s_130 (ATerm t)
    {
      ATerm t_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_130 = NULL;
              l_130 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_130;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              t = l_123(t);
              t = Cons_2_0(_id, s_130, t);
            }
          LocalPopChoice(u_39);
        }
      else
        {
          t = t_39;
          {
            ATerm o_130 = NULL,p_130 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_130 = ATgetFirst((ATermList) t);
                p_130 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_130), (ATerm) ATmakeAppl(sym_Undefined_1, o_130));
          }
        }
      return(t);
    }
    t = s_130(t);
  }
  h_130 = t;
  t = (ATerm) ATinsert(CheckATermList(h_130), (ATerm) ATmakeAppl(sym_Program_1, e_130));
  l_20 = t;
  t = SSLsetAnnotations(l_20, d_130);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm f_131 = NULL;
  f_131 = t;
  if(match_string(t, "--help"))
    {
      t = f_131;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_131;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_131;
        }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL;
  t = term_q_38;
  g_131 = t;
  t = term_f_15;
  h_131 = t;
  t = term_z_39;
  t = s_13(g_131, h_131, t);
  t = term_a_40;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_b_40;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL;
  z_130 = t;
  t = term_h_36;
  a_131 = t;
  t = term_c_40;
  t = lookup_table_0_1(a_131, t);
  e_131 = t;
  t = term_i_36;
  b_131 = t;
  t = (ATerm) ATempty;
  c_131 = t;
  t = e_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(b_131, c_131, d_131, t);
  t = z_130;
  {
    static ATerm x_10 (ATerm t);
    static ATerm x_10 (ATerm t)
    {
      ATerm f_40 = t;
      int g_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_123(t);
          LocalPopChoice(g_40);
        }
      else
        {
          t = f_40;
          {
            ATerm h_40 = t;
            int i_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_10, a_11, c_11, t);
                LocalPopChoice(i_40);
              }
            else
              {
                t = h_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_10, t);
  }
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_131 = NULL;
        s_131 = t;
        {
          ATerm l_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_59 = NULL;
              t = s_131;
              {
                ATerm n_40 = t;
                int o_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_59 = NULL,o_59 = NULL;
                    t = term_x_13;
                    m_59 = t;
                    t = term_q_38;
                    o_59 = t;
                    t = term_r_38;
                    t = p_13(m_59, o_59, t);
                    LocalPopChoice(o_40);
                  }
                else
                  {
                    t = n_40;
                    t = fetch_1_0(e_11, t);
                  }
              }
              t = s_131;
              t = default_system_usage_0_0(t);
              t = term_g_21;
              l_59 = t;
              t = SSL_exit(l_59);
              LocalPopChoice(m_40);
            }
          else
            {
              t = l_40;
              {
                ATerm y_59 = NULL,b_60 = NULL,c_60 = NULL;
                t = term_x_13;
                b_60 = t;
                t = term_h_39;
                c_60 = t;
                t = term_r_40;
                t = p_13(b_60, c_60, t);
                t = s_131;
                t = default_system_about_0_0(t);
                t = term_g_21;
                y_59 = t;
                t = SSL_exit(y_59);
              }
            }
        }
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm s_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL;
              static ATerm f_11 (ATerm t);
              static ATerm f_11 (ATerm t)
              {
                ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL,x_37 = NULL;
                y_131 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_131 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_131);
                w_131 = t;
                t = x_131;
                if(((x_130 != NULL) && (x_130 != t)))
                  _fail(t);
                else
                  x_130 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_131);
                x_37 = t;
                t = SSLsetAnnotations(x_37, w_131);
                return(t);
              }
              t = fetch_1_0(f_11, t);
              t = term_h_14;
              u_131 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_130)), term_u_40);
              v_131 = t;
              t = SSL_printnl(u_131, v_131);
              t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_130)), term_u_40));
              t = default_system_usage_0_0(t);
              t = term_c_21;
              t_131 = t;
              t = SSL_exit(t_131);
              LocalPopChoice(t_40);
            }
          else
            {
              t = s_40;
            }
        }
      }
  }
  y_130 = t;
  t = term_h_36;
  t = table_destroy_0_0(t);
  t = y_130;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL;
  t = parse_options_1_0(k_121, t);
  d_132 = t;
  t = term_x_40;
  t = table_create_0_0(t);
  t = term_x_40;
  e_132 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_40, term_y_40, d_132);
  t = lookup_table_0_1(e_132, t);
  h_132 = t;
  t = term_y_40;
  f_132 = t;
  t = h_132;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(f_132, d_132, g_132, t);
  t = d_132;
  t = m_121(t);
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_121, t);
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
              t = n_121(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_41);
            }
          else
            {
              t = b_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_latex_options_0_0(t);
      LocalPopChoice(e_41);
    }
  else
    {
      t = d_41;
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm o_41 = t;
              int p_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(p_41);
                }
              else
                {
                  t = o_41;
                  {
                    ATerm q_41 = t;
                    int r_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_11, m_11, o_11, t);
                        LocalPopChoice(r_41);
                      }
                    else
                      {
                        t = q_41;
                        {
                          ATerm s_41 = t;
                          int t_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(t_41);
                            }
                          else
                            {
                              t = s_41;
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
static ATerm j_11 (ATerm t)
{
  t = xtc_temp_files_1_0(p_11, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL;
  t = term_u_41;
  m_132 = t;
  t = term_f_15;
  n_132 = t;
  t = term_v_41;
  t = s_13(m_132, n_132, t);
  t = term_w_41;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm p_132 = NULL,q_132 = NULL;
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL;
      t = term_x_13;
      s_132 = t;
      t = term_k_36;
      t_132 = t;
      t = term_a_42;
      t = p_13(s_132, t_132, t);
      r_132 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_132);
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = term_f_14;
    }
  t = load_latex_table_0_0(t);
  t = read_from_0_0(t);
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL;
        u_132 = t;
        t = term_x_13;
        v_132 = t;
        t = term_x_36;
        w_132 = t;
        t = term_d_42;
        t = p_13(v_132, w_132, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("alltt", 0, ATtrue)))
          _fail(t);
        t = u_132;
        LocalPopChoice(c_42);
        {
          ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL;
          x_132 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_132, term_g_21);
          t = try_abox2alltt_0_0(t);
          z_132 = t;
          t = SSL_explode_term(z_132);
          if(match_cons(t, sym__2))
            {
              ATerm e_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_42) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm f_42 = ATgetArgument(t, 1);
                if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
                  {
                    y_132 = ATgetFirst((ATermList) f_42);
                    {
                      ATerm g_42 = (ATerm) ATgetNext((ATermList) f_42);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ALLTT_1, y_132);
          t = bottomup_1_0(q_11, t);
        }
      }
    else
      {
        t = b_42;
        {
          ATerm c_133 = NULL,d_133 = NULL;
          t = topdown_1_0(r_11, t);
          d_133 = t;
          t = BOXENV_args_0_0(t);
          c_133 = t;
          t = (ATerm) ATmakeAppl(sym_BOXENV_2, c_133, d_133);
          t = bottomup_1_0(s_11, t);
        }
      }
  }
  q_132 = t;
  t = term_f_15;
  t = create_header_0_0(t);
  p_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, q_132), p_132), term_j_15);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2latex_0_0(t);
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Latex2text_0_0(t);
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
    }
  return(t);
}
ATerm io_Abox_2_latex_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_11, default_usage_0_0, _id, j_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_latex_0_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_TABLE_2;
Symbol sym_TR_2;
Symbol sym_TD_2;
Symbol sym_TD_p__1;
Symbol sym_SPAN_2;
Symbol sym_HREF_2;
Symbol sym_ANCHOR_1;
Symbol sym_BR_0;
Symbol sym_NBSP_0;
Symbol sym_S_1;
Symbol sym_TDTD_0;
Symbol sym_TDTR_1;
Symbol sym_PRE_1;
Symbol sym_HR_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Path_2;
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_LNAT_2;
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
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_LNAT_2;
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
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
  sym_TABLE_2 = ATmakeSymbol("TABLE", 2, ATfalse);
  ATprotectSymbol(sym_TABLE_2);
  sym_TR_2 = ATmakeSymbol("TR", 2, ATfalse);
  ATprotectSymbol(sym_TR_2);
  sym_TD_2 = ATmakeSymbol("TD", 2, ATfalse);
  ATprotectSymbol(sym_TD_2);
  sym_TD_p__1 = ATmakeSymbol("TD'", 1, ATfalse);
  ATprotectSymbol(sym_TD_p__1);
  sym_SPAN_2 = ATmakeSymbol("SPAN", 2, ATfalse);
  ATprotectSymbol(sym_SPAN_2);
  sym_HREF_2 = ATmakeSymbol("HREF", 2, ATfalse);
  ATprotectSymbol(sym_HREF_2);
  sym_ANCHOR_1 = ATmakeSymbol("ANCHOR", 1, ATfalse);
  ATprotectSymbol(sym_ANCHOR_1);
  sym_BR_0 = ATmakeSymbol("BR", 0, ATfalse);
  ATprotectSymbol(sym_BR_0);
  sym_NBSP_0 = ATmakeSymbol("NBSP", 0, ATfalse);
  ATprotectSymbol(sym_NBSP_0);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_TDTD_0 = ATmakeSymbol("TDTD", 0, ATfalse);
  ATprotectSymbol(sym_TDTD_0);
  sym_TDTR_1 = ATmakeSymbol("TDTR", 1, ATfalse);
  ATprotectSymbol(sym_TDTR_1);
  sym_PRE_1 = ATmakeSymbol("PRE", 1, ATfalse);
  ATprotectSymbol(sym_PRE_1);
  sym_HR_0 = ATmakeSymbol("HR", 0, ATfalse);
  ATprotectSymbol(sym_HR_0);
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
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
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
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
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
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
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_g_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_h_16;
ATerm term_r_15;
ATerm term_i_15;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
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
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_y_8);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_a_13);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_13);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_g_9);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_x_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_r_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_q_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_k_20);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_g_9);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_g_9);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_g_9);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, (ATerm) ATempty);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_p_22);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_g_9);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_s_20);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t_49, ATerm u_49, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm t);
static ATerm i_3 (ATerm n_2, ATerm t);
static ATerm j_3 (ATerm p_2, ATerm q_2, ATerm r_2, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm j_6 (ATerm n_106 (ATerm), ATerm m_39, ATerm k_39, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm q_86 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_87 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm l_94 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm sep_by_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm m_6 (ATerm h_20, ATerm i_20, ATerm t);
ATerm tov_1_0 (ATerm n_84 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm n_6 (ATerm e_38, ATerm f_38, ATerm t);
ATerm while_not_2_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm a_119 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm o_6 (ATerm q_84 (ATerm), ATerm t_17, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_93 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_43 (ATerm u_42, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm d_94 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm w_93 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm o_93 (ATerm), ATerm t);
static ATerm p_6 (ATerm a_16, ATerm v_15, ATerm t);
static ATerm a_4 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm g_47 (ATerm a_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_6 (ATerm z_19, ATerm t);
static ATerm r_6 (ATerm v_33, ATerm w_33, ATerm t);
static ATerm s_6 (ATerm e_35, ATerm f_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_48 (ATerm q_47, ATerm t);
static ATerm s_48 (ATerm u_47, ATerm v_47, ATerm w_47, ATerm t);
static ATerm t_48 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t);
static ATerm t_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm u_6 (ATerm v_34, ATerm w_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_7 (ATerm a_60, ATerm b_60, ATerm t);
static ATerm w_6 (ATerm m_58, ATerm n_58, ATerm t);
ATerm end_scope_1_0 (ATerm k_106 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_106 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_7 (ATerm m_53, ATerm n_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_7 (ATerm h_58, ATerm i_58, ATerm g_58, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm y_37, ATerm z_37, ATerm t);
ATerm foldr_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_109 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm need_help_1_0 (ATerm o_112 (ATerm), ATerm t);
static ATerm g_7 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t);
static ATerm h_7 (ATerm c_63, ATerm d_63, ATerm t);
ATerm lookup_table_0_1 (ATerm t_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_63, ATerm i_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_6 (ATerm e_63, ATerm f_63, ATerm t);
static ATerm a_7 (ATerm j_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_93 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_114 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm q_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = m_1;
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
        t = (ATerm) ATmakeAppl(sym__2, o_1, e_0);
        t = v_6(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = m_1;
              t = q_0(t);
              t_0 = t;
              {
                ATerm y_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_0 = NULL;
                    u_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = u_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = u_0;
                          }
                        else
                          {
                            t = u_0;
                            if((o_1 != t))
                              {
                                _fail(t);
                              }
                            t = u_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, t_0);
              t = v_6(o_1, t_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              t = m_1;
              t = q_0(t);
              if((o_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t_49, ATerm u_49, ATerm t)
{
  t = SSL_copy(t_49, u_49);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm z_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 = NULL,e_2 = NULL;
      t = term_c_8;
      d_2 = t;
      t = term_d_8;
      e_2 = t;
      t = term_e_8;
      t = c_7(d_2, e_2, t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = z_7;
      t = term_f_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_1 = NULL,g_1 = NULL;
      t = term_d_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL,j_1 = NULL;
            t = term_c_8;
            h_1 = t;
            t = term_d_8;
            j_1 = t;
            t = term_e_8;
            t = c_7(h_1, j_1, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = term_f_8;
          }
      }
      c_1 = t;
      t = term_j_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_1);
      t = v_6(g_1, c_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
  g_2 = t;
  t = q_92(t);
  h_2 = t;
  t = term_m_8;
  i_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_2), h_2);
  j_2 = t;
  t = SSL_printnl(i_2, j_2);
  t = g_2;
  return(t);
}
static ATerm i_3 (ATerm n_2, ATerm t)
{
  t = n_2;
  {
    ATerm n_8 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_8 = ATgetArgument(t, 0);
            ATerm p_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_8;
      }
  }
  t = term_q_8;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, n_2, term_r_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm j_3 (ATerm p_2, ATerm q_2, ATerm r_2, ATerm t)
{
  t = SSL_open_file(p_2, q_2);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_t_8;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_3(f_3, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = j_3(g_3, h_3, f_3, t);
          }
      }
    }
  else
    {
      t = i_3(f_3, t);
    }
  return(t);
}
static ATerm j_6 (ATerm n_106 (ATerm), ATerm m_39, ATerm k_39, ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  u_3 = t;
  t = n_106(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_3, m_39, k_39);
  t = d_7(m_3, m_39, k_39, t);
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        t = term_y_8;
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_3, term_y_8);
        t = c_7(m_3, b_4, t);
        {
          ATerm z_8 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_8;
            }
        }
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_3, term_y_8, (ATerm) ATinsert(CheckATermList(s_3), (ATerm) ATinsert(CheckATermList(o_3), m_39)));
  t = lookup_table_0_1(m_3, t);
  z_3 = t;
  t = term_y_8;
  v_3 = t;
  t = (ATerm) ATinsert(CheckATermList(s_3), (ATerm) ATinsert(CheckATermList(o_3), m_39));
  x_3 = t;
  t = z_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(v_3, x_3, y_3, t);
  t = u_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 = NULL,u_1 = NULL;
      k_4 = t;
      t = term_c_9;
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, term_c_9);
      t = r_6(k_4, u_1, t);
      e_4 = t;
      t = SSL_mkstemp(e_4);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm l_4 = NULL;
        t = term_d_9;
        l_4 = t;
        t = SSL_perror(l_4);
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
  t = term_e_9;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,t_4 = NULL,u_4 = NULL;
  t = P__tmpdir_0_0(t);
  t_4 = t;
  t = term_f_9;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_f_9);
  t = r_6(t_4, u_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_9;
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, term_g_9);
  t = j_6(c_0, o_4, p_4, t);
  t = SSL_close(n_4);
  t = o_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  a_5 = t;
  t = xtc_new_file_0_0(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, term_r_8);
  t = open_file_0_0(t);
  t = a_5;
  {
    static ATerm f_0 (ATerm t);
    static ATerm f_0 (ATerm t)
    {
      ATerm h_5 = NULL;
      h_5 = t;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 = NULL,m_2 = NULL;
            t = SSL_is_string(h_5);
            l_2 = t;
            t = (ATerm) ATinsert(ATempty, l_2);
            m_2 = t;
            t = SSL_print(b_5, m_2);
            t = l_2;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = h_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(f_0, t);
  }
  t = SSL_close_file(b_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_5);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      o_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), m_5), term_k_9), o_5), term_j_9);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          o_5 = ATgetArgument(t, 0);
          m_5 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_9), m_5), term_k_9), o_5), term_m_9);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              o_5 = ATgetArgument(t, 0);
              m_5 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), m_5), term_k_9), o_5), term_p_9);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  o_5 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), o_5), term_q_9);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      o_5 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_9), m_5), term_k_9), o_5), term_u_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          o_5 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), o_5), term_w_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              o_5 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), o_5), term_y_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  o_5 = ATgetArgument(t, 0);
                                  m_5 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_10), m_5), term_b_10), o_5), term_a_10);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      o_5 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_10), o_5), term_d_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_g_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_h_10;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_i_10;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_j_10;
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = bottomup_1_0(q_86, t);
    return(t);
  }
  t = SRTS_all(i_0, t);
  t = q_86(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_14 = ATgetFirst((ATermList) t);
          m_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 = NULL,b_3 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(k_14);
            y_2 = t;
            t = l_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_14;
            t = flat_list_0_0(t);
            b_3 = t;
            t = (ATerm) ATinsert(CheckATermList(b_3), l_14);
            w_0 = t;
            t = SSLsetAnnotations(w_0, y_2);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_3 = NULL,t_3 = NULL,w_3 = NULL,d_4 = NULL,x_0 = NULL;
                  t = SSLgetAnnotations(k_14);
                  w_3 = t;
                  t = l_14;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = l_14;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm o_10 = ATgetFirst((ATermList) t);
                          ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = l_14;
                    }
                  t = (ATerm) ATinsert(CheckATermList(m_14), l_14);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, w_3);
                  d_4 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_3 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = d_4;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm u_10 = ATgetFirst((ATermList) t);
                      r_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_3, r_3);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm e_5 = NULL,n_5 = NULL,y_0 = NULL;
                    t = SSLgetAnnotations(k_14);
                    e_5 = t;
                    t = m_14;
                    t = flat_list_0_0(t);
                    n_5 = t;
                    t = (ATerm) ATinsert(CheckATermList(n_5), l_14);
                    y_0 = t;
                    t = SSLsetAnnotations(y_0, e_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  static ATerm u_14 (ATerm t);
  static ATerm u_14 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_87(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = SRTS_one(u_14, t);
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_10 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_10) != AT_INT) || (ATgetInt((ATermInt) z_10) != 34)))
        _fail(t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_15), term_a_11), term_a_11);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm v_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,f_1 = NULL;
  d_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_15 = ATgetFirst((ATermList) t);
      c_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_15);
  a_15 = t;
  t = b_15;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_15), b_15);
  f_1 = t;
  t = SSLsetAnnotations(f_1, a_15);
  t = c_15;
  t = oncetd_1_0(k_0, t);
  v_14 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_14), term_b_11), term_b_11);
  return(t);
}
ATerm listtd_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  static ATerm z_16 (ATerm t);
  static ATerm z_16 (ATerm t)
  {
    ATerm y_15 = NULL,o_16 = NULL,s_16 = NULL;
    t = l_94(t);
    y_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_15;
      }
    else
      {
        ATerm f_6 = NULL,l_6 = NULL,k_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_16 = ATgetFirst((ATermList) t);
            s_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_15);
        f_6 = t;
        t = s_16;
        t = z_16(t);
        l_6 = t;
        t = (ATerm) ATinsert(CheckATermList(l_6), o_16);
        k_1 = t;
        t = SSLsetAnnotations(k_1, f_6);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  if(match_int(t, 32))
    {
      ATerm e_11 = t;
      int g_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_7 = NULL;
          t = term_h_10;
          p_7 = t;
          t = SSL_explode_string(p_7);
          LocalPopChoice(g_11);
        }
      else
        {
          t = e_11;
          t = y_18;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_7 = NULL;
              t = term_j_11;
              q_7 = t;
              t = SSL_explode_string(q_7);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = y_18;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_7 = NULL;
                  t = term_m_11;
                  v_7 = t;
                  t = SSL_explode_string(v_7);
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  t = y_18;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm p_11 = t;
                  int q_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_8 = NULL;
                      t = term_r_11;
                      a_8 = t;
                      t = SSL_explode_string(a_8);
                      LocalPopChoice(q_11);
                    }
                  else
                    {
                      t = p_11;
                      t = y_18;
                    }
                }
              else
                {
                  t = y_18;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  o_18 = t;
  t = SSL_explode_string(o_18);
  t = listtd_1_0(n_0, t);
  t = map_1_0(r_0, t);
  t = flat_list_0_0(t);
  n_18 = t;
  t = SSL_implode_string(n_18);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  static ATerm r_21 (ATerm t);
  static ATerm r_21 (ATerm t)
  {
    ATerm i_21 = NULL,j_21 = NULL,n_21 = NULL;
    n_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_21 = ATgetFirst((ATermList) t);
        j_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_8 = NULL,l_8 = NULL,s_8 = NULL,q_1 = NULL;
              t = SSLgetAnnotations(n_21);
              l_8 = t;
              t = i_21;
              t = x_118(t);
              s_8 = t;
              t = (ATerm) ATinsert(CheckATermList(j_21), s_8);
              q_1 = t;
              t = SSLsetAnnotations(q_1, l_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_11 = ATgetFirst((ATermList) t);
                  i_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_8;
              t = r_21(t);
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              t = n_21;
            }
        }
      }
    else
      {
        t = n_21;
      }
    return(t);
  }
  t = r_21(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  if(match_int(t, 9))
    {
      t = t_9;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = t_9;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  if(match_int(t, 9))
    {
      t = s_10;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = s_10;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_11), q_24);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  o_22 = t;
  t = SSL_explode_string(o_22);
  t = reverse_acc_2_0(_id, s_0, t);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, (ATerm) ATempty);
  {
    static ATerm u_24 (ATerm t);
    static ATerm u_24 (ATerm t)
    {
      ATerm y_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL;
      if(match_cons(t, sym__2))
        {
          y_23 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_9 = NULL,s_9 = NULL;
          t = d_24;
          t = remove_trailing_1_0(v_0, t);
          s_9 = t;
          t = SSL_implode_string(s_9);
          o_9 = t;
          t = (ATerm) ATinsert(ATempty, o_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_24 = ATgetFirst((ATermList) t);
              b_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_24;
          if(match_int(t, 10))
            {
              ATerm w_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_10 = NULL,q_10 = NULL,r_10 = NULL;
                  t = d_24;
                  t = remove_trailing_1_0(z_0, t);
                  r_10 = t;
                  t = SSL_implode_string(r_10);
                  f_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATempty);
                  t = u_24(t);
                  q_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_10), f_10);
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = w_11;
                  t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATinsert(CheckATermList(d_24), a_24));
                  t = u_24(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATinsert(CheckATermList(d_24), a_24));
              t = u_24(t);
            }
        }
      return(t);
    }
    t = u_24(t);
  }
  t = remove_trailing_1_0(a_1, t);
  t = reverse_acc_2_0(_id, b_1, t);
  t = remove_trailing_1_0(d_1, t);
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATinsert(ATempty, z_24);
  return(t);
}
ATerm sep_by_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  t = map_1_0(i_1, t);
  w_10 = t;
  t = term_g_9;
  t = o_84(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
  t = m_6(v_10, w_10, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_25;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_25 = ATgetFirst((ATermList) t);
          a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL,n_11 = NULL,o_11 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(y_25);
            f_11 = t;
            t = z_25;
            t = e_101(t);
            n_11 = t;
            t = a_26;
            t = filter_1_0(e_101, t);
            o_11 = t;
            t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
            w_1 = t;
            t = SSLsetAnnotations(w_1, f_11);
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = a_26;
            t = filter_1_0(e_101, t);
          }
      }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm j_26 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(l_1, t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = term_i_12;
    }
  j_26 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_26, term_j_12);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t = i_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_20;
    }
  else
    {
      ATerm a_12 = NULL,d_12 = NULL,y_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_20);
      a_12 = t;
      t = u_27;
      {
        static ATerm l_12 (ATerm t);
        static ATerm l_12 (ATerm t)
        {
          ATerm k_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_12 = NULL;
              e_12 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_12;
              LocalPopChoice(n_12);
            }
          else
            {
              t = k_12;
              {
                ATerm g_12 = NULL;
                t = Cons_2_0(_id, l_12, t);
                g_12 = t;
                t = (ATerm) ATinsert(CheckATermList(g_12), h_20);
              }
            }
          return(t);
        }
        t = l_12(t);
      }
      d_12 = t;
      t = (ATerm) ATinsert(CheckATermList(d_12), t_27);
      y_1 = t;
      t = SSLsetAnnotations(y_1, a_12);
    }
  return(t);
}
ATerm tov_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,e_29 = NULL,j_29 = NULL,m_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym_L_2))
    {
      e_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,a_2 = NULL;
            t = SSLgetAnnotations(m_29);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, e_29, j_29);
            a_2 = t;
            t = SSLsetAnnotations(a_2, c_13);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm p_29 = NULL;
              t = term_g_9;
              t = n_84(t);
              p_29 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_r_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), p_29))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          e_29 = ATgetArgument(t, 0);
          j_29 = ATgetArgument(t, 1);
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(m_29);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, e_29, j_29);
                f_2 = t;
                t = SSLsetAnnotations(f_2, t_13);
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                {
                  ATerm q_29 = NULL;
                  t = term_g_9;
                  t = n_84(t);
                  q_29 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_r_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), q_29))));
                }
              }
          }
        }
      else
        {
          ATerm t_29 = NULL;
          t = term_g_9;
          t = n_84(t);
          t_29 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_r_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), t_29))));
        }
    }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_r_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_28))));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  ATerm v_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(n_1, t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = v_12;
      t = term_a_13;
    }
  d_30 = t;
  if(match_int(t, 0))
    {
      t = term_b_13;
    }
  else
    {
      ATerm g_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_30, term_j_12);
      t = copy_0_0(t);
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, g_30);
    }
  return(t);
}
static ATerm n_6 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_38, f_38);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = SSL_subtr(e_38, f_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm t)
{
  static ATerm i_30 (ATerm t);
  static ATerm i_30 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_86(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = h_86(t);
        t = i_30(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm for_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  t = j_86(t);
  t = while_not_2_0(k_86, l_86, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_30 = NULL,n_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_30, n_30, (ATerm) ATempty);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) != AT_INT) || (ATgetInt((ATermInt) h_13) != 0)))
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
      }
      o_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_30;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL,u_30 = NULL,w_30 = NULL,x_30 = NULL;
  if(match_cons(t, sym__3))
    {
      p_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_30, term_i_12);
  t = geq_0_0(t);
  t = term_i_12;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, term_i_12);
  t = n_6(p_30, x_30, t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_30, r_30, (ATerm) ATinsert(CheckATermList(u_30), r_30));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(p_1, r_1, s_1, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    ATerm a_31 = NULL,b_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,i_4 = NULL;
    i_31 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        b_31 = ATgetArgument(t, 0);
        f_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_31);
    a_31 = t;
    t = b_31;
    t = a_119(t);
    g_31 = t;
    t = f_31;
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, g_31, f_31);
    i_4 = t;
    t = SSLsetAnnotations(i_4, a_31);
    return(t);
  }
  t = fetch_1_0(t_1, t);
  t = SSL_string_to_int(not_null(z_30));
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
  ATerm p_31 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(v_1, t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = term_a_13;
    }
  p_31 = t;
  if(match_int(t, 0))
    {
      t = term_b_13;
    }
  else
    {
      ATerm q_31 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_31, term_v_11);
      t = copy_0_0(t);
      q_31 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, q_31)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm c_32 = NULL,v_31 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      v_31 = ATgetArgument(t, 0);
      t = v_31;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          v_31 = ATgetArgument(t, 0);
          t = v_31;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              v_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_31;
        }
    }
  t = Hspace_0_0(t);
  c_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_32;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, c_32);
    }
  return(t);
}
static ATerm o_6 (ATerm q_84 (ATerm), ATerm t_17, ATerm t)
{
  ATerm f_33 = NULL,k_33 = NULL;
  t = term_g_9;
  t = q_84(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_17, f_33);
  {
    static ATerm i_37 (ATerm t);
    static ATerm i_37 (ATerm t)
    {
      static ATerm j_37 (ATerm m_33, ATerm q_33, ATerm t_33, ATerm u_33, ATerm x_33, ATerm t);
      static ATerm k_37 (ATerm a_35, ATerm d_35, ATerm j_35, ATerm k_35, ATerm t);
      static ATerm j_37 (ATerm m_33, ATerm q_33, ATerm t_33, ATerm u_33, ATerm x_33, ATerm t)
      {
        ATerm t_34 = NULL,u_34 = NULL,x_34 = NULL;
        t = u_33;
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm o_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(n_13);
              t = term_q_13;
            }
          else
            {
              t = m_13;
              {
                ATerm s_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm v_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_13);
                    t = term_y_13;
                  }
                else
                  {
                    t = s_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm z_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_a_14;
                  }
              }
            }
        }
        t_34 = t;
        t = u_33;
        t = make_hs_0_0(t);
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_33), q_33), x_33);
        t = i_37(t);
        x_34 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(x_34), u_34), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, t_34), m_33));
        return(t);
      }
      static ATerm k_37 (ATerm a_35, ATerm d_35, ATerm j_35, ATerm k_35, ATerm t)
      {
        ATerm s_35 = NULL,t_35 = NULL;
        t = j_35;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm d_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_14);
              t = term_q_13;
            }
          else
            {
              t = b_14;
              {
                ATerm e_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm i_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_14);
                    t = term_y_13;
                  }
                else
                  {
                    t = e_14;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm n_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_a_14;
                  }
              }
            }
        }
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_35, k_35);
        t = i_37(t);
        t_35 = t;
        t = (ATerm) ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, s_35), a_35));
        return(t);
      }
      ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
      if(match_cons(t, sym__2))
        {
          b_36 = ATgetArgument(t, 0);
          e_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_36;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_36 = ATgetFirst((ATermList) t);
              d_36 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_36 = ATgetFirst((ATermList) t);
              g_36 = (ATerm) ATgetNext((ATermList) t);
              t = d_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_35 = ATgetFirst((ATermList) t);
                  z_35 = (ATerm) ATgetNext((ATermList) t);
                  t = c_36;
                  if(match_cons(t, sym_C_2))
                    {
                      w_35 = ATgetArgument(t, 0);
                      x_35 = ATgetArgument(t, 1);
                      {
                        ATerm o_14 = t;
                        int p_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_36 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
                            t = i_37(t);
                            t_36 = t;
                            t = (ATerm) ATinsert(CheckATermList(t_36), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, w_35, x_35))));
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
                                  t = j_37(c_36, y_35, z_35, f_36, g_36, t);
                                  LocalPopChoice(r_14);
                                }
                              else
                                {
                                  t = q_14;
                                  t = k_37(c_36, d_36, f_36, g_36, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_14 = t;
                      int t_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_37(c_36, y_35, z_35, f_36, g_36, t);
                          LocalPopChoice(t_14);
                        }
                      else
                        {
                          t = s_14;
                          t = k_37(c_36, d_36, f_36, g_36, t);
                        }
                    }
                }
              else
                {
                  t = c_36;
                  if(match_cons(t, sym_C_2))
                    {
                      w_35 = ATgetArgument(t, 0);
                      x_35 = ATgetArgument(t, 1);
                      {
                        ATerm w_14 = t;
                        int x_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_37 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
                            t = i_37(t);
                            a_37 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, w_35, x_35))));
                            LocalPopChoice(x_14);
                          }
                        else
                          {
                            t = w_14;
                            t = k_37(c_36, d_36, f_36, g_36, t);
                          }
                      }
                    }
                  else
                    {
                      t = k_37(c_36, d_36, f_36, g_36, t);
                    }
                }
            }
          else
            {
              ATerm h_37 = NULL;
              t = c_36;
              if(match_cons(t, sym_C_2))
                {
                  w_35 = ATgetArgument(t, 0);
                  x_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
              t = i_37(t);
              h_37 = t;
              t = (ATerm) ATinsert(CheckATermList(h_37), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, w_35, x_35))));
            }
        }
      return(t);
    }
    t = i_37(t);
  }
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_r_12), (ATerm) ATinsert(ATempty, k_33));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm z_14 = t;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,c_5 = NULL;
      a_39 = t;
      if(match_cons(t, sym_R_2))
        {
          y_38 = ATgetArgument(t, 0);
          z_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_39);
      x_38 = t;
      t = z_38;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, y_38, z_38);
      c_5 = t;
      t = SSLsetAnnotations(c_5, x_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, (ATerm) ATempty);
  {
    static ATerm b_39 (ATerm t);
    static ATerm b_39 (ATerm t)
    {
      ATerm r_37 = NULL,s_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
      if(match_cons(t, sym__2))
        {
          u_37 = ATgetArgument(t, 0);
          x_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_37;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm g_38 = NULL;
          t = x_37;
          t = reverse_acc_2_0(_id, x_1, t);
          g_38 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, g_38));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_37 = ATgetFirst((ATermList) t);
              w_37 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_37;
          if(match_cons(t, sym_R_2))
            {
              r_37 = ATgetArgument(t, 0);
              s_37 = ATgetArgument(t, 1);
              {
                ATerm f_15 = t;
                int g_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_38 = NULL,n_38 = NULL;
                    t = x_37;
                    t = reverse_acc_2_0(_id, z_1, t);
                    m_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_37, (ATerm) ATempty);
                    t = b_39(t);
                    n_38 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_38), (ATerm) ATmakeAppl(sym_R_2, r_37, s_37)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, m_38));
                    LocalPopChoice(g_15);
                  }
                else
                  {
                    t = f_15;
                    t = (ATerm) ATmakeAppl(sym__2, w_37, (ATerm) ATinsert(CheckATermList(x_37), v_37));
                    t = b_39(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, w_37, (ATerm) ATinsert(CheckATermList(x_37), v_37));
              t = b_39(t);
            }
        }
      return(t);
    }
    t = b_39(t);
  }
  t = filter_1_0(c_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm h_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_15);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_15;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm k_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_15;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_41 = NULL;
  if(match_cons(t, sym_S_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_41;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  y_40 = t;
  if(match_cons(t, sym_REF_2))
    {
      z_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, z_40, x_40);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          z_40 = ATgetArgument(t, 0);
          x_40 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_40), (ATerm) ATmakeAppl(sym_ANCHOR_1, z_40));
        }
      else
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm o_15 = ATgetArgument(t, 0);
                  ATerm p_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(n_15);
              t = term_r_15;
            }
          else
            {
              t = m_15;
              {
                ATerm s_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm w_15 = ATgetArgument(t, 0);
                        ATerm x_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_15);
                    t = term_r_15;
                  }
                else
                  {
                    t = s_15;
                    {
                      ATerm z_15 = t;
                      int b_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              z_40 = ATgetArgument(t, 0);
                              {
                                ATerm d_16 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_16);
                          t = z_40;
                        }
                      else
                        {
                          t = z_15;
                          if(match_cons(t, sym_A_3))
                            {
                              z_40 = ATgetArgument(t, 0);
                              x_40 = ATgetArgument(t, 1);
                              w_40 = ATgetArgument(t, 2);
                              {
                                ATerm h_41 = NULL,j_41 = NULL,k_41 = NULL,y_14 = NULL;
                                t = w_40;
                                t = construct_rows_0_0(t);
                                h_41 = t;
                                t = x_40;
                                t = Vspace_0_0(t);
                                j_41 = t;
                                t = h_41;
                                {
                                  static ATerm k_2 (ATerm t);
                                  static ATerm k_2 (ATerm t)
                                  {
                                    ATerm l_41 = NULL;
                                    static ATerm o_2 (ATerm t);
                                    static ATerm o_2 (ATerm t)
                                    {
                                      t = z_40;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm e_16 = ATgetArgument(t, 0);
                                        if(((ATgetType(e_16) != AT_LIST) || !(ATisEmpty(e_16))))
                                          _fail(t);
                                        l_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = o_6(o_2, l_41, t);
                                    return(t);
                                  }
                                  t = map_1_0(k_2, t);
                                }
                                y_14 = t;
                                t = (ATerm) ATmakeAppl(sym__2, j_41, y_14);
                                t = m_6(j_41, y_14, t);
                                k_41 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_41)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  z_40 = ATgetArgument(t, 0);
                                  x_40 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_15 = NULL;
                                    t = z_40;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm f_16 = t;
                                      int g_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = x_40;
                                          t = filter_1_0(s_2, t);
                                          LocalPopChoice(g_16);
                                        }
                                      else
                                        {
                                          t = f_16;
                                          {
                                            ATerm u_15 = NULL,c_16 = NULL;
                                            t = at_last_1_0(t_2, t);
                                            q_15 = t;
                                            t = x_40;
                                            t = filter_1_0(u_2, t);
                                            c_16 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, q_15, c_16);
                                            t = m_6(q_15, c_16, t);
                                            u_15 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, u_15), term_h_16);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      z_40 = ATgetArgument(t, 0);
                                      x_40 = ATgetArgument(t, 1);
                                      {
                                        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,t_16 = NULL,y_16 = NULL,f_5 = NULL;
                                        t = z_40;
                                        t = Vspace_0_0(t);
                                        k_16 = t;
                                        t = z_40;
                                        t = Ispace_0_0(t);
                                        j_16 = t;
                                        t = x_40;
                                        t = filter_1_0(v_2, t);
                                        t_16 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            n_16 = ATgetFirst((ATermList) t);
                                            p_16 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(t_16);
                                        m_16 = t;
                                        t = n_16;
                                        t = tov_1_0(w_2, t);
                                        q_16 = t;
                                        t = p_16;
                                        {
                                          static ATerm x_2 (ATerm t);
                                          static ATerm x_2 (ATerm t)
                                          {
                                            static ATerm z_2 (ATerm t);
                                            static ATerm z_2 (ATerm t)
                                            {
                                              t = j_16;
                                              return(t);
                                            }
                                            t = tov_1_0(z_2, t);
                                            return(t);
                                          }
                                          t = map_1_0(x_2, t);
                                        }
                                        r_16 = t;
                                        t = (ATerm) ATinsert(CheckATermList(r_16), q_16);
                                        f_5 = t;
                                        t = SSLsetAnnotations(f_5, m_16);
                                        y_16 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, k_16, y_16);
                                        t = m_6(k_16, y_16, t);
                                        l_16 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, l_16)), term_h_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          z_40 = ATgetArgument(t, 0);
                                          x_40 = ATgetArgument(t, 1);
                                          {
                                            ATerm o_41 = NULL;
                                            static ATerm c_3 (ATerm t);
                                            static ATerm c_3 (ATerm t)
                                            {
                                              t = not_null(o_41);
                                              return(t);
                                            }
                                            t = z_40;
                                            t = Hspace_0_0(t);
                                            if(((o_41 != NULL) && (o_41 != t)))
                                              _fail(t);
                                            else
                                              o_41 = t;
                                            t = x_40;
                                            t = filter_1_0(a_3, t);
                                            t = sep_by_1_0(c_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              z_40 = ATgetArgument(t, 0);
                                              x_40 = ATgetArgument(t, 1);
                                              t = z_40;
                                              {
                                                ATerm i_16 = t;
                                                int u_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_v_16), (ATerm) ATinsert(ATempty, x_40));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_w_16), (ATerm) ATinsert(ATempty, x_40));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_x_16), (ATerm) ATinsert(ATempty, x_40));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_a_17), (ATerm) ATinsert(ATempty, x_40));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(u_16);
                                                  }
                                                else
                                                  {
                                                    t = i_16;
                                                    t = x_40;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  z_40 = ATgetArgument(t, 0);
                                                  x_40 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm q_41 = NULL;
                                                    t = z_40;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = x_40;
                                                    t = map_1_0(d_3, t);
                                                    q_41 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_b_17), (ATerm) ATinsert(ATempty, q_41)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      z_40 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_40;
                                                  t = html_string_0_0(t);
                                                }
                                            }
                                        }
                                    }
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
ATerm topdown_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  static ATerm e_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    t = topdown_1_0(p_86, t);
    return(t);
  }
  t = p_86(t);
  t = SRTS_all(e_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  static ATerm q_42 (ATerm t);
  static ATerm q_42 (ATerm t)
  {
    ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
    p_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_42 = ATgetFirst((ATermList) t);
        o_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_17 = NULL,r_17 = NULL,k_5 = NULL;
          t = SSLgetAnnotations(p_42);
          o_17 = t;
          t = o_42;
          t = q_42(t);
          r_17 = t;
          t = (ATerm) ATinsert(CheckATermList(r_17), n_42);
          k_5 = t;
          t = SSLsetAnnotations(k_5, o_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_42;
        t = s_93(t);
      }
    return(t);
  }
  t = q_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_41;
    }
  else
    {
      static ATerm k_3 (ATerm t);
      static ATerm k_3 (ATerm t)
      {
        t = not_null(z_41);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_41 = ATgetFirst((ATermList) t);
          if(((z_41 != NULL) && (z_41 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm c_43 (ATerm u_42, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_explode_term(u_42);
  if(match_cons(t, sym__2))
    {
      ATerm c_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_42;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      y_42 = ATgetArgument(t, 1);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_3 (ATerm t);
            static ATerm l_3 (ATerm t)
            {
              t = y_42;
              return(t);
            }
            t = x_42;
            t = at_end_1_0(l_3, t);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = c_43(z_42, t);
          }
      }
    }
  else
    {
      t = c_43(z_42, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  static ATerm y_43 (ATerm t);
  static ATerm y_43 (ATerm t)
  {
    ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
    v_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_43 = ATgetFirst((ATermList) t);
        x_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL,f_12 = NULL;
          t = SSLgetAnnotations(v_43);
          a_18 = t;
          t = x_43;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_43), w_43);
          f_12 = t;
          t = SSLsetAnnotations(f_12, a_18);
          t = d_94(t);
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
          {
            ATerm k_18 = NULL,r_18 = NULL,h_12 = NULL;
            t = SSLgetAnnotations(v_43);
            k_18 = t;
            t = x_43;
            t = y_43(t);
            r_18 = t;
            t = (ATerm) ATinsert(CheckATermList(r_18), w_43);
            h_12 = t;
            t = SSLsetAnnotations(h_12, k_18);
          }
        }
    }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  static ATerm o_44 (ATerm t);
  static ATerm o_44 (ATerm t)
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_93(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,j_19 = NULL,p_19 = NULL,m_12 = NULL;
          l_44 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_44 = ATgetFirst((ATermList) t);
              n_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_44);
          j_19 = t;
          t = n_44;
          t = o_44(t);
          p_19 = t;
          t = (ATerm) ATinsert(CheckATermList(p_19), m_44);
          m_12 = t;
          t = SSLsetAnnotations(m_12, j_19);
        }
      }
    return(t);
  }
  t = o_44(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  static ATerm n_3 (ATerm t);
  static ATerm n_3 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,s_12 = NULL,o_12 = NULL;
    a_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_44 = ATgetFirst((ATermList) t);
        x_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_45);
    v_44 = t;
    t = w_44;
    t = o_93(t);
    y_44 = t;
    t = (ATerm) ATinsert(CheckATermList(x_44), y_44);
    o_12 = t;
    t = SSLsetAnnotations(o_12, v_44);
    z_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_44 = ATgetFirst((ATermList) t);
        u_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_44);
    s_44 = t;
    t = u_44;
    if(((q_44 != NULL) && (q_44 != t)))
      _fail(t);
    else
      q_44 = t;
    t = (ATerm) ATinsert(CheckATermList(u_44), t_44);
    s_12 = t;
    t = SSLsetAnnotations(s_12, s_44);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(n_3, t);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_44, not_null(q_44));
  return(t);
}
static ATerm p_6 (ATerm a_16, ATerm v_15, ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  t = v_15;
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((f_45 != NULL) && (f_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_45 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
            if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
              {
                if(((b_45 != NULL) && (b_45 != ATgetFirst((ATermList) j_17))))
                  _fail(ATgetFirst((ATermList) j_17));
                else
                  b_45 = ATgetFirst((ATermList) j_17);
                if(((c_45 != NULL) && (c_45 != (ATerm) ATgetNext((ATermList) j_17))))
                  _fail((ATerm) ATgetNext((ATermList) j_17));
                else
                  c_45 = (ATerm) ATgetNext((ATermList) j_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(p_3, t);
  }
  if(match_cons(t, sym__2))
    {
      e_45 = ATgetArgument(t, 0);
      d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_45;
  {
    ATerm k_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_17;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(c_45)), not_null(b_45));
  {
    static ATerm q_3 (ATerm t);
    static ATerm q_3 (ATerm t)
    {
      ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,w_12 = NULL;
      l_45 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_45 = ATgetFirst((ATermList) t);
          k_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_45);
      i_45 = t;
      t = k_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_45), j_45);
      w_12 = t;
      t = SSLsetAnnotations(w_12, i_45);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, a_16, (ATerm) ATinsert(CheckATermList(d_45), j_45)));
      return(t);
    }
    t = at_last_1_0(q_3, t);
  }
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(f_45), g_45)));
  t = conc_0_0(t);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, a_16, h_45);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  w_45 = t;
  if(match_cons(t, sym_H_2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
      t = v_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_45 = ATgetFirst((ATermList) t);
          t_45 = (ATerm) ATgetNext((ATermList) t);
          t = t_45;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = s_45;
            }
          else
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_45;
                  t = p_6(u_45, v_45, t);
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  t = w_45;
                }
            }
        }
      else
        {
          ATerm n_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_45;
              t = p_6(u_45, v_45, t);
              LocalPopChoice(p_17);
            }
          else
            {
              t = n_17;
              t = w_45;
            }
        }
    }
  else
    {
      ATerm q_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm u_17 = ATgetArgument(t, 0);
              v_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(s_17);
          t = v_45;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_45 = ATgetFirst((ATermList) t);
              t_45 = (ATerm) ATgetNext((ATermList) t);
              t = t_45;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_45;
                }
              else
                {
                  t = w_45;
                }
            }
          else
            {
              t = w_45;
            }
        }
      else
        {
          t = q_17;
          t = w_45;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(a_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm o_46 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(c_4, t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, o_46)))));
  t = bottomup_1_0(f_4, t);
  return(t);
}
static ATerm g_47 (ATerm a_47, ATerm t)
{
  t = SSL_fclose(a_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_47 = ATgetArgument(t, 0);
      {
        ATerm z_17 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_47);
            LocalPopChoice(b_18);
          }
        else
          {
            t = z_17;
            t = g_47(e_47, t);
          }
      }
    }
  else
    {
      t = g_47(e_47, t);
    }
  return(t);
}
static ATerm q_6 (ATerm z_19, ATerm t)
{
  t = SSL_read_term_from_stream(z_19);
  return(t);
}
static ATerm r_6 (ATerm v_33, ATerm w_33, ATerm t)
{
  t = SSL_strcat(v_33, w_33);
  return(t);
}
static ATerm s_6 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm h_47 = NULL;
  t = SSL_fopen(e_35, f_35);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_stdin_stream();
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_47 = NULL;
  t = SSL_stdout_stream();
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  t = SSL_stderr_stream();
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_47);
  return(t);
}
static ATerm r_48 (ATerm q_47, ATerm t)
{
  ATerm r_47 = NULL;
  t = SSL_explode_term(q_47);
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            r_47 = ATgetFirst((ATermList) d_18);
            {
              ATerm e_18 = (ATerm) ATgetNext((ATermList) d_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_48 (ATerm u_47, ATerm v_47, ATerm w_47, ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,c_48 = NULL,y_12 = NULL;
  t = SSLgetAnnotations(w_47);
  z_47 = t;
  t = u_47;
  if(match_cons(t, sym_Path_1))
    {
      c_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_48, v_47);
  y_12 = t;
  t = SSLsetAnnotations(y_12, z_47);
  if(match_cons(t, sym__2))
    {
      x_47 = ATgetArgument(t, 0);
      y_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(x_47, y_47, t);
  return(t);
}
static ATerm t_48 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,m_48 = NULL,z_12 = NULL;
  t = SSLgetAnnotations(g_48);
  j_48 = t;
  t = SSL_is_string(e_48);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, f_48);
  z_12 = t;
  t = SSLsetAnnotations(z_12, j_48);
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(h_48, i_48, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  if(match_cons(t, sym__2))
    {
      p_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_48(o_48, t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm h_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_48(p_48, q_48, o_48, t);
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = h_18;
                  t = t_48(p_48, q_48, o_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_48(o_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,c_49 = NULL;
  c_49 = t;
  {
    ATerm j_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_49, term_m_18);
        t = t_6(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = j_18;
        {
          ATerm e_20 = NULL,f_20 = NULL;
          t = term_p_18;
          f_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_18, c_49);
          t = r_6(f_20, c_49, t);
          e_20 = t;
          t = SSL_perror(e_20);
          _fail(t);
        }
      }
  }
  w_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(x_48, t);
  v_48 = t;
  t = w_48;
  t = fclose_0_0(t);
  t = v_48;
  return(t);
}
static ATerm u_6 (ATerm v_34, ATerm w_34, ATerm t)
{
  t = SSL_access(v_34, w_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_49 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_49 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_18);
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_49, (ATerm) ATinsert(ATempty, term_q_18));
      t = u_6(h_49, j_49, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_7 (ATerm a_60, ATerm b_60, ATerm t)
{
  ATerm k_49 = NULL;
  t = lookup_table_0_1(a_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7(b_60, k_49, t);
  return(t);
}
static ATerm w_6 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  n_49 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
        t = c_7(m_58, n_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_18 = ATgetFirst((ATermList) t);
            m_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_18);
        {
          ATerm o_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, m_58, n_58, m_49);
          t = lookup_table_0_1(m_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_7(n_58, m_49, o_49, t);
          t = (ATerm) ATmakeAppl(sym__3, m_58, n_58, m_49);
        }
      }
    else
      {
        t = s_18;
        {
          ATerm q_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
          t = lookup_table_0_1(m_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_6(n_58, q_49, t);
          t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
        }
      }
  }
  t = n_49;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  x_49 = t;
  t = k_106(t);
  w_49 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL;
        t = term_y_8;
        b_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_49, term_y_8);
        t = c_7(w_49, b_50, t);
        {
          ATerm x_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_18;
            }
        }
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_49 = ATgetFirst((ATermList) t);
      s_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_49, term_y_8, s_49);
  t = lookup_table_0_1(w_49, t);
  a_50 = t;
  t = term_y_8;
  y_49 = t;
  t = a_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(y_49, s_49, z_49, t);
  t = v_49;
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm c_50 = NULL;
      c_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_49, c_50);
      t = w_6(w_49, c_50, t);
      return(t);
    }
    t = map_1_0(g_4, t);
  }
  t = x_49;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_85(t);
      t = m_85(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = m_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  f_50 = t;
  t = j_106(t);
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_50, term_y_8);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_8;
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_50, term_y_8);
        t = c_7(e_50, o_50, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATempty;
      }
  }
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_50, term_y_8, (ATerm) ATinsert(CheckATermList(g_50), (ATerm) ATempty));
  t = lookup_table_0_1(e_50, t);
  k_50 = t;
  t = term_y_8;
  h_50 = t;
  t = (ATerm) ATinsert(CheckATermList(g_50), (ATerm) ATempty);
  i_50 = t;
  t = k_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(h_50, i_50, j_50, t);
  t = f_50;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_50);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = x_50;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm r_50 = NULL;
  static ATerm j_4 (ATerm t);
  static ATerm j_4 (ATerm t)
  {
    ATerm s_50 = NULL;
    s_50 = t;
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_50 = NULL,u_50 = NULL;
          t = term_e_9;
          t_50 = t;
          t = term_y_8;
          u_50 = t;
          t = term_k_19;
          t = c_7(t_50, u_50, t);
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_50 != NULL) && (r_50 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_50 = ATgetFirst((ATermList) t);
        {
          ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_50;
    t = map_1_0(m_4, t);
    t = s_50;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(h_4, t);
  t = restore_always_2_0(v_119, j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  a_51 = t;
  t = term_g_9;
  t = whoami_0_0(t);
  b_51 = t;
  t = term_m_8;
  d_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_19), b_51), term_m_19);
  e_51 = t;
  t = SSL_printnl(d_51, e_51);
  t = term_i_12;
  c_51 = t;
  t = SSL_exit(c_51);
  t = a_51;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  if(match_string(t, "-k"))
    {
      t = g_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_51;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  t = SSL_string_to_int(h_51);
  i_51 = t;
  t = term_o_19;
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, i_51);
  t = f_7(j_51, i_51, t);
  t = h_51;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, v_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  if(match_string(t, "-S"))
    {
      t = l_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = term_r_19;
  m_51 = t;
  t = term_a_13;
  n_51 = t;
  t = term_s_19;
  t = f_7(m_51, n_51, t);
  t = term_t_19;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  t = SSL_string_to_int(o_51);
  p_51 = t;
  t = term_r_19;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, p_51);
  t = f_7(q_51, p_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_51);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = term_w_19;
  r_51 = t;
  t = term_g_9;
  s_51 = t;
  t = term_x_19;
  t = f_7(r_51, s_51, t);
  t = term_y_19;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, x_4, y_4, t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm d_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, d_5, g_5, t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = d_20;
            t = Option_3_0(i_5, j_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL;
  t = term_c_8;
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_8, m_53, n_53);
  t = lookup_table_0_1(t_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(m_53, n_53, u_51, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_8, m_53, n_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
      t = term_g_9;
      t = h_0(t);
      a_52 = t;
      t = term_j_20;
      b_52 = t;
      t = term_k_20;
      c_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, a_52);
      t = d_7(b_52, c_52, a_52, t);
      _fail(t);
    }
  else
    {
      ATerm f_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_51 = ATgetFirst((ATermList) t);
          z_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_51;
      t = d_0(t);
      t = term_g_9;
      t = g_0(t);
      f_52 = t;
      t = (ATerm) ATinsert(CheckATermList(z_51), f_52);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  if(match_string(t, "-o"))
    {
      t = h_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_52;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL;
  i_52 = t;
  t = term_d_8;
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, i_52);
  t = f_7(j_52, i_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_52);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
static ATerm d_7 (ATerm h_58, ATerm i_58, ATerm g_58, ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
  {
    ATerm m_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
        t = c_7(h_58, i_58, t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
  }
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_58, i_58, (ATerm) ATinsert(CheckATermList(m_52), g_58));
  t = lookup_table_0_1(h_58, t);
  p_52 = t;
  t = (ATerm) ATinsert(CheckATermList(m_52), g_58);
  n_52 = t;
  t = p_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(i_58, n_52, o_52, t);
  t = l_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
      t = term_g_9;
      t = p_0(t);
      a_53 = t;
      t = term_j_20;
      b_53 = t;
      t = term_k_20;
      c_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, a_53);
      t = d_7(b_53, c_53, a_53, t);
      _fail(t);
    }
  else
    {
      ATerm g_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_52 = ATgetFirst((ATermList) t);
          x_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_52 = ATgetFirst((ATermList) t);
          z_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_52;
      t = m_0(t);
      t = y_52;
      t = o_0(t);
      g_53 = t;
      t = (ATerm) ATinsert(CheckATermList(z_52), g_53);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  if(match_string(t, "-i"))
    {
      t = i_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_53;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  j_53 = t;
  t = term_s_20;
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, j_53);
  t = f_7(k_53, j_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_53);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_9;
  t = whoami_0_0(t);
  l_53 = t;
  t = term_m_8;
  p_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_20), l_53);
  q_53 = t;
  t = SSL_printnl(p_53, q_53);
  t = term_i_12;
  o_53 = t;
  t = SSL_exit(o_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_c_8;
  r_53 = t;
  t = term_x_20;
  s_53 = t;
  t = term_y_20;
  t = c_7(r_53, s_53, t);
  return(t);
}
static ATerm x_6 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_37, z_37);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = SSL_addr(y_37, z_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_53;
      t = a_100(t);
    }
  else
    {
      ATerm z_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_53 = ATgetFirst((ATermList) t);
          w_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_53;
      t = foldr_2_0(a_100, b_100, t);
      z_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_53, z_53);
      t = b_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(v_20, w_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_54 = NULL,n_20 = NULL,o_20 = NULL;
  t = times_0_0(t);
  o_20 = t;
  t = SSL_explode_term(o_20);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_20;
  t = foldr_2_0(v_5, w_5, t);
  c_54 = t;
  t = SSL_TicksToSeconds(c_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  if(match_cons(t, sym__2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_54;
        if((o_54 != t))
          {
            _fail(t);
          }
        t = n_54;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_54, p_54);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = SSL_gtr(o_54, p_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm t_54 = NULL;
  t_54 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
        t = term_c_8;
        w_54 = t;
        t = term_r_19;
        x_54 = t;
        t = term_k_21;
        t = c_7(w_54, x_54, t);
        v_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_54, term_i_12);
        t = geq_0_0(t);
        t = t_54;
        t = y_109(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = t_54;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,c_55 = NULL,d_55 = NULL;
  t = run_time_0_0(t);
  z_54 = t;
  t = term_g_9;
  t = whoami_0_0(t);
  a_55 = t;
  t = term_m_8;
  c_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), z_54), term_l_21), a_55);
  d_55 = t;
  t = SSL_printnl(c_55, d_55);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), z_54), term_l_21), a_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_13;
  e_55 = t;
  t = SSL_exit(e_55);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  p_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_55 = ATgetArgument(t, 0);
          {
            ATerm t_21 = NULL,l_13 = NULL;
            t = SSLgetAnnotations(p_55);
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_55);
            l_13 = t;
            t = SSLsetAnnotations(l_13, t_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_55 = NULL,i_55 = NULL;
      t = term_c_8;
      h_55 = t;
      t = term_q_21;
      i_55 = t;
      t = term_s_21;
      t = c_7(h_55, i_55, t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      t = fetch_1_0(y_5, t);
    }
  t = o_112(t);
  return(t);
}
static ATerm g_7 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm r_55 = NULL;
  t = SSL_hashtable_put(b_63, z_62, a_63);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_55);
  return(t);
}
static ATerm h_7 (ATerm c_63, ATerm d_63, ATerm t)
{
  t = SSL_hashtable_get(d_63, c_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_59, ATerm t)
{
  ATerm a_56 = NULL;
  t = table_hashtable_0_0(t);
  a_56 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL;
        t = a_56;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_7(t_59, z_21, t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm e_22 = NULL;
          t = t_59;
          t = table_create_0_0(t);
          t = a_56;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_7(t_59, e_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_63, ATerm i_63, ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_hashtable_create(h_63, i_63);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_56);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL;
  e_56 = t;
  t = term_w_21;
  i_56 = t;
  t = term_x_21;
  j_56 = t;
  t = e_56;
  t = new_hashtable_0_2(i_56, j_56, t);
  f_56 = t;
  t = e_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(e_56, f_56, g_56, t);
  t = e_56;
  return(t);
}
static ATerm z_6 (ATerm e_63, ATerm f_63, ATerm t)
{
  ATerm k_56 = NULL;
  t = SSL_hashtable_remove(f_63, e_63);
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_56);
  return(t);
}
static ATerm a_7 (ATerm j_63, ATerm t)
{
  ATerm l_56 = NULL;
  t = SSL_hashtable_destroy(j_63);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_56 = NULL;
  t = SSL_table_hashtable();
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  n_56 = t;
  t = table_hashtable_0_0(t);
  o_56 = t;
  t = lookup_table_0_1(n_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(q_56, t);
  t = o_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(n_56, p_56, t);
  t = n_56;
  return(t);
}
ATerm map_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  static ATerm f_57 (ATerm t);
  static ATerm f_57 (ATerm t)
  {
    ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
    c_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_57;
      }
    else
      {
        ATerm j_22 = NULL,m_22 = NULL,t_22 = NULL,p_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_57 = ATgetFirst((ATermList) t);
            e_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_57);
        j_22 = t;
        t = d_57;
        t = b_93(t);
        m_22 = t;
        t = e_57;
        t = f_57(t);
        t_22 = t;
        t = (ATerm) ATinsert(CheckATermList(t_22), m_22);
        p_13 = t;
        t = SSLsetAnnotations(p_13, j_22);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_57 = ATgetFirst((ATermList) t);
      j_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_57 = NULL,o_57 = NULL;
        static ATerm z_5 (ATerm t);
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_57)), not_null(o_57));
          return(t);
        }
        t = j_57;
        t = l_0(t);
        if(((n_57 != NULL) && (n_57 != t)))
          _fail(t);
        else
          n_57 = t;
        t = i_57;
        t = j_0(t);
        if(((o_57 != NULL) && (o_57 != t)))
          _fail(t);
        else
          o_57 = t;
        t = j_57;
        t = reverse_acc_2_0(j_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,r_13 = NULL;
  b_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_58);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_58);
  r_13 = t;
  t = SSLsetAnnotations(r_13, z_57);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_58), term_y_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_57 = NULL,y_57 = NULL;
      t = term_c_8;
      x_57 = t;
      t = term_x_20;
      y_57 = t;
      t = term_y_20;
      t = c_7(x_57, y_57, t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = fetch_1_0(a_6, t);
    }
  t = term_c_22;
  t = echo_0_0(t);
  t = term_j_20;
  v_57 = t;
  t = term_k_20;
  w_57 = t;
  t = term_d_22;
  t = c_7(v_57, w_57, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  static ATerm h_59 (ATerm t);
  static ATerm h_59 (ATerm t)
  {
    ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
    e_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_59 = ATgetFirst((ATermList) t);
        g_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_23 = NULL,p_23 = NULL,w_13 = NULL;
          t = SSLgetAnnotations(e_59);
          l_23 = t;
          t = f_59;
          t = l_93(t);
          p_23 = t;
          t = (ATerm) ATinsert(CheckATermList(g_59), p_23);
          w_13 = t;
          t = SSLsetAnnotations(w_13, l_23);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm f_24 = NULL,l_24 = NULL,x_13 = NULL;
            t = SSLgetAnnotations(e_59);
            f_24 = t;
            t = g_59;
            t = h_59(t);
            l_24 = t;
            t = (ATerm) ATinsert(CheckATermList(l_24), f_59);
            x_13 = t;
            t = SSLsetAnnotations(x_13, f_24);
          }
        }
    }
    return(t);
  }
  t = h_59(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_22 = ATgetFirst((ATermList) t);
                ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_59;
          }
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATinsert(ATempty, l_59);
      }
  }
  m_59 = t;
  t = term_f_8;
  n_59 = t;
  t = SSL_printnl(n_59, m_59);
  t = l_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL;
  t = term_c_8;
  r_59 = t;
  t = term_x_20;
  s_59 = t;
  t = term_y_20;
  t = c_7(r_59, s_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = term_p_22;
  x_59 = t;
  t = term_g_9;
  y_59 = t;
  t = term_q_22;
  t = f_7(x_59, y_59, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_59 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  t = term_p_22;
  d_60 = t;
  t = term_g_9;
  e_60 = t;
  t = term_q_22;
  t = f_7(d_60, e_60, t);
  t = term_s_22;
  z_59 = t;
  t = term_g_9;
  c_60 = t;
  t = term_u_22;
  t = f_7(z_59, c_60, t);
  t = term_v_22;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, e_6, g_6, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = Option_3_0(h_6, i_6, k_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,f_14 = NULL;
  k_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_60 = ATgetFirst((ATermList) t);
      h_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  f_60 = t;
  t = g_60;
  t = r_69(t);
  i_60 = t;
  t = h_60;
  t = s_69(t);
  j_60 = t;
  t = (ATerm) ATinsert(CheckATermList(j_60), i_60);
  f_14 = t;
  t = SSLsetAnnotations(f_14, f_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_114 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL,h_14 = NULL;
  p_60 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_23;
        t = r_114(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
      }
  }
  t = p_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_60);
  q_60 = t;
  t = term_x_20;
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, r_60);
  t = f_7(v_60, r_60, t);
  t = s_60;
  {
    static ATerm f_61 (ATerm t);
    static ATerm f_61 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_60 = NULL;
              y_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_60;
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = r_114(t);
              t = Cons_2_0(_id, f_61, t);
            }
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          {
            ATerm b_61 = NULL,c_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_61 = ATgetFirst((ATermList) t);
                c_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_61), (ATerm) ATmakeAppl(sym_Undefined_1, b_61));
          }
        }
      return(t);
    }
    t = f_61(t);
  }
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), (ATerm) ATmakeAppl(sym_Program_1, r_60));
  h_14 = t;
  t = SSLsetAnnotations(h_14, q_60);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_61 = NULL;
  s_61 = t;
  if(match_string(t, "--help"))
    {
      t = s_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_61;
        }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  t = term_q_21;
  t_61 = t;
  t = term_g_9;
  u_61 = t;
  t = term_g_23;
  t = f_7(t_61, u_61, t);
  t = term_h_23;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  m_61 = t;
  t = term_j_20;
  n_61 = t;
  t = term_j_23;
  t = lookup_table_0_1(n_61, t);
  r_61 = t;
  t = term_k_20;
  o_61 = t;
  t = (ATerm) ATempty;
  p_61 = t;
  t = r_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(o_61, p_61, q_61, t);
  t = m_61;
  {
    static ATerm y_6 (ATerm t);
    static ATerm y_6 (ATerm t)
    {
      ATerm k_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_114(t);
          LocalPopChoice(m_23);
        }
      else
        {
          t = k_23;
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, e_7, i_7, t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_6, t);
  }
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_62 = NULL;
        f_62 = t;
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL;
              t = f_62;
              {
                ATerm u_23 = t;
                int v_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_25 = NULL,c_25 = NULL;
                    t = term_c_8;
                    b_25 = t;
                    t = term_q_21;
                    c_25 = t;
                    t = term_s_21;
                    t = c_7(b_25, c_25, t);
                    LocalPopChoice(v_23);
                  }
                else
                  {
                    t = u_23;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = f_62;
              t = default_system_usage_0_0(t);
              t = term_a_13;
              a_25 = t;
              t = SSL_exit(a_25);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
                t = term_c_8;
                n_25 = t;
                t = term_p_22;
                o_25 = t;
                t = term_w_23;
                t = c_7(n_25, o_25, t);
                t = f_62;
                t = default_system_about_0_0(t);
                t = term_a_13;
                m_25 = t;
                t = SSL_exit(m_25);
              }
            }
        }
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm x_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
              static ATerm k_7 (ATerm t);
              static ATerm k_7 (ATerm t)
              {
                ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,j_14 = NULL;
                l_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_62);
                j_62 = t;
                t = k_62;
                if(((k_61 != NULL) && (k_61 != t)))
                  _fail(t);
                else
                  k_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_62);
                j_14 = t;
                t = SSLsetAnnotations(j_14, j_62);
                return(t);
              }
              t = fetch_1_0(k_7, t);
              t = term_m_8;
              h_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_61)), term_c_24);
              i_62 = t;
              t = SSL_printnl(h_62, i_62);
              t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_61)), term_c_24));
              t = default_system_usage_0_0(t);
              t = term_i_12;
              g_62 = t;
              t = SSL_exit(g_62);
              LocalPopChoice(z_23);
            }
          else
            {
              t = x_23;
            }
        }
      }
  }
  l_61 = t;
  t = term_j_20;
  t = table_destroy_0_0(t);
  t = l_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  t = parse_options_1_0(q_112, t);
  q_62 = t;
  t = term_e_24;
  t = table_create_0_0(t);
  t = term_e_24;
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_24, term_g_24, q_62);
  t = lookup_table_0_1(r_62, t);
  u_62 = t;
  t = term_g_24;
  s_62 = t;
  t = u_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(s_62, q_62, t_62, t);
  t = q_62;
  t = s_112(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_112, t);
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
              t = t_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm r_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_7, o_7, r_7, t);
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = r_24;
                  {
                    ATerm t_24 = t;
                    int v_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_24);
                      }
                    else
                      {
                        t = t_24;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = xtc_temp_files_1_0(s_7, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL;
  t = term_w_24;
  w_62 = t;
  t = term_g_9;
  x_62 = t;
  t = term_x_24;
  t = f_7(w_62, x_62, t);
  t = term_y_24;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_63 = NULL,k_63 = NULL,l_63 = NULL;
      t = term_c_8;
      k_63 = t;
      t = term_s_20;
      l_63 = t;
      t = term_g_25;
      t = c_7(k_63, l_63, t);
      g_63 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_63);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = term_j_8;
    }
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_7, default_usage_0_0, _id, m_7, t);
  return(t);
}

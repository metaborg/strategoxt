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
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_c_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_k_17;
ATerm term_z_16;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
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
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_t_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_h_11);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_u_14);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_14);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_s_11);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_p_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_i_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_k_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_c_22);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_s_11);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_i_24, term_s_11);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_s_11);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__3, term_b_22, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_f_24);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_s_11);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_m_22);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_7 (ATerm x_20, ATerm t_212, ATerm t);
ATerm list_tokenize_1_0 (ATerm l_106 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm f_7 (ATerm c_58, ATerm b_58, ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm d_96 (ATerm), ATerm t);
static ATerm t_7 (ATerm h_6, ATerm t);
static ATerm u_7 (ATerm l_6, ATerm n_6, ATerm o_6, ATerm t);
static ATerm k_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm r_6 (ATerm b_110 (ATerm), ATerm e_40, ATerm c_40, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm d_90 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm y_97 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm o_122 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm sep_by_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm r_104 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm t_6 (ATerm j_20, ATerm k_20, ATerm t);
ATerm tov_1_0 (ATerm a_88 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm u_6 (ATerm w_38, ATerm x_38, ATerm t);
ATerm while_not_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm r_122 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm v_6 (ATerm d_88 (ATerm), ATerm v_17, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_90 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_46 (ATerm w_45, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm j_97 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm b_97 (ATerm), ATerm t);
static ATerm w_6 (ATerm c_16, ATerm x_15, ATerm t);
static ATerm m_3 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm i_50 (ATerm c_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_6 (ATerm b_20, ATerm t);
static ATerm d_7 (ATerm y_33, ATerm z_33, ATerm t);
static ATerm y_6 (ATerm w_35, ATerm x_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_51 (ATerm s_50, ATerm t);
static ATerm a_52 (ATerm w_50, ATerm x_50, ATerm y_50, ATerm t);
static ATerm b_52 (ATerm g_51, ATerm h_51, ATerm i_51, ATerm t);
static ATerm z_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_7 (ATerm k_35, ATerm l_35, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_7 (ATerm i_53, ATerm j_53, ATerm t);
static ATerm g_7 (ATerm u_51, ATerm v_51, ATerm t);
ATerm end_scope_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_109 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm z_61, ATerm a_62, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm q_38, ATerm r_38, ATerm t);
ATerm foldr_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_113 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_116 (ATerm), ATerm t);
static ATerm q_7 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm t);
static ATerm r_7 (ATerm k_56, ATerm l_56, ATerm t);
ATerm lookup_table_0_1 (ATerm b_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_56, ATerm q_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm m_56, ATerm n_56, ATerm t);
static ATerm k_7 (ATerm r_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_118 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm parse_options_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_2 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = j_1;
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
        t = (ATerm) ATmakeAppl(sym__2, k_1, e_0);
        t = f_7(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(r_8);
      }
    else
      {
        t = b_2;
        {
          ATerm s_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = j_1;
              t = p_0(t);
              t_0 = t;
              {
                ATerm z_8 = t;
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
                            if((k_1 != t))
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
                    t = z_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, t_0);
              t = f_7(k_1, t_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(v_8);
            }
          else
            {
              t = s_8;
              t = j_1;
              t = p_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_1 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_1;
    }
  else
    {
      t = v_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_7 (ATerm x_20, ATerm t_212, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((x_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = t_212;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm list_tokenize_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,m_2 = NULL;
  ATerm c_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(l_106, t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = c_9;
      {
        ATerm g_2 = NULL;
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_2, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_2;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_9 = ATgetFirst((ATermList) t);
              ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_2;
          t = list_tokenize_1_0(l_106, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_9 = ATgetFirst((ATermList) t);
          ATerm j_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_2;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, j_2);
        }
      else
        {
          ATerm b_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_9 = ATgetFirst((ATermList) t);
              ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_2;
          t = list_tokenize_1_0(l_106, t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(b_3), j_2);
        }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  t = SSL_implode_string(r_3);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,i_3 = NULL,j_3 = NULL,o_3 = NULL,v_0 = NULL;
  o_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  e_3 = t;
  t = SSL_explode_string(i_3);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, j_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, e_3);
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_3;
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      ATerm p_3 = NULL;
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, c_3);
      t = c_7(p_3, c_3, t);
      return(t);
    }
    t = list_tokenize_1_0(b_0, t);
  }
  t = map_1_0(c_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 = NULL;
        t = SSL_filemode(l_4);
        if(match_cons(t, sym__2))
          {
            m_1 = ATgetArgument(t, 0);
            {
              ATerm r_9 = ATgetArgument(t, 1);
              if(((ATgetType(r_9) != AT_INT) || (ATgetInt((ATermInt) r_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_1;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm z_1 = NULL,a_2 = NULL;
          t = term_t_9;
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, l_4);
          t = d_7(a_2, l_4, t);
          z_1 = t;
          t = SSL_perror(z_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm c_58, ATerm b_58, ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  q_4 = t;
  {
    ATerm v_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL,t_4 = NULL;
        t = (ATerm) ATinsert(ATempty, term_c_10);
        t_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_58, (ATerm) ATinsert(ATempty, term_c_10));
        t = e_7(b_58, t_4, t);
        t = filemode_0_0(t);
        s_4 = t;
        t = SSL_S_ISDIR(s_4);
        t = q_4;
        LocalPopChoice(b_10);
        {
          ATerm u_4 = NULL,v_4 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_d_10), c_58);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          u_4 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_4), term_e_10), b_58);
          v_4 = t;
          t = SSL_concat_strings(v_4);
        }
      }
    else
      {
        t = v_9;
        t = b_58;
      }
  }
  p_4 = t;
  t = SSL_copy(c_58, p_4);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,p_5 = NULL;
      t = term_h_10;
      l_5 = t;
      t = term_i_10;
      p_5 = t;
      t = term_j_10;
      t = m_7(l_5, p_5, t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_k_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_2 = NULL,f_2 = NULL;
      t = term_i_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,t_2 = NULL;
            t = term_h_10;
            s_2 = t;
            t = term_i_10;
            t_2 = t;
            t = term_j_10;
            t = m_7(s_2, t_2, t);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = term_k_10;
          }
      }
      e_2 = t;
      t = term_o_10;
      f_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, e_2);
      t = f_7(f_2, e_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_5;
      t = copy_to_1_0(i_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL;
  t_5 = t;
  t = d_96(t);
  u_5 = t;
  t = term_q_10;
  x_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_5), u_5);
  y_5 = t;
  t = SSL_printnl(x_5, y_5);
  t = t_5;
  return(t);
}
static ATerm t_7 (ATerm h_6, ATerm t)
{
  t = h_6;
  {
    ATerm r_10 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            ATerm t_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_10;
      }
  }
  t = term_u_10;
  t = debug_1_0(k_0, t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, term_v_10);
  t = open_file_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm l_6, ATerm n_6, ATerm o_6, ATerm t)
{
  t = SSL_open_file(l_6, n_6);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,i_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      {
        ATerm x_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_7(a_7, t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = x_10;
            t = u_7(b_7, i_7, a_7, t);
          }
      }
    }
  else
    {
      t = t_7(a_7, t);
    }
  return(t);
}
static ATerm r_6 (ATerm b_110 (ATerm), ATerm e_40, ATerm c_40, ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  b_8 = t;
  t = b_110(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_7, e_40, c_40);
  t = n_7(w_7, e_40, c_40, t);
  {
    ATerm c_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_8 = NULL;
        t = term_h_11;
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_7, term_h_11);
        t = m_7(w_7, g_8, t);
        {
          ATerm i_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_11;
            }
        }
        LocalPopChoice(g_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_7 = ATgetFirst((ATermList) t);
      y_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_7, term_h_11, (ATerm) ATinsert(CheckATermList(y_7), (ATerm) ATinsert(CheckATermList(x_7), e_40)));
  t = lookup_table_0_1(w_7, t);
  f_8 = t;
  t = term_h_11;
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), (ATerm) ATinsert(CheckATermList(x_7), e_40));
  d_8 = t;
  t = f_8;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(c_8, d_8, e_8, t);
  t = b_8;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL,y_2 = NULL;
      n_8 = t;
      t = term_l_11;
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_8, term_l_11);
      t = d_7(n_8, y_2, t);
      i_8 = t;
      t = SSL_mkstemp(i_8);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm o_8 = NULL;
        t = term_n_11;
        o_8 = t;
        t = SSL_perror(o_8);
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
static ATerm n_0 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_8 = NULL,x_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL;
  t = P__tmpdir_0_0(t);
  b_9 = t;
  t = term_r_11;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_r_11);
  t = d_7(b_9, d_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_11;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, term_s_11);
  t = r_6(n_0, x_8, a_9, t);
  t = SSL_close(u_8);
  t = x_8;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL;
  k_9 = t;
  t = xtc_new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_v_10);
  t = open_file_0_0(t);
  t = k_9;
  {
    static ATerm q_0 (ATerm t);
    static ATerm q_0 (ATerm t)
    {
      ATerm s_9 = NULL;
      s_9 = t;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 = NULL,h_3 = NULL;
            t = SSL_is_string(s_9);
            g_3 = t;
            t = (ATerm) ATinsert(ATempty, g_3);
            h_3 = t;
            t = SSL_print(m_9, h_3);
            t = g_3;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = s_9;
          }
      }
      return(t);
    }
    t = topdown_1_0(q_0, t);
  }
  t = SSL_close_file(m_9);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      z_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_11), y_9), term_w_11), z_9), term_v_11);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          z_9 = ATgetArgument(t, 0);
          y_9 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), y_9), term_w_11), z_9), term_y_11);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              z_9 = ATgetArgument(t, 0);
              y_9 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), y_9), term_w_11), z_9), term_a_12);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  z_9 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), z_9), term_b_12);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      z_9 = ATgetArgument(t, 0);
                      y_9 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_12), y_9), term_w_11), z_9), term_d_12);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          z_9 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_12), z_9), term_f_12);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              z_9 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_12), z_9), term_h_12);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  z_9 = ATgetArgument(t, 0);
                                  y_9 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), y_9), term_l_12), z_9), term_k_12);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      z_9 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_12), z_9), term_n_12);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_q_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_r_12;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_s_12;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_u_12;
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    t = bottomup_1_0(d_90, t);
    return(t);
  }
  t = SRTS_all(r_0, t);
  t = d_90(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,z_19 = NULL;
  v_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_19 = ATgetFirst((ATermList) t);
          z_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL,v_3 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(v_19);
            s_3 = t;
            t = w_19;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_19;
            t = flat_list_0_0(t);
            v_3 = t;
            t = (ATerm) ATinsert(CheckATermList(v_3), w_19);
            x_0 = t;
            t = SSLsetAnnotations(x_0, s_3);
            LocalPopChoice(x_12);
          }
        else
          {
            t = v_12;
            {
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_4 = NULL,r_4 = NULL,w_4 = NULL,a_5 = NULL,z_0 = NULL;
                  t = SSLgetAnnotations(v_19);
                  w_4 = t;
                  t = w_19;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = w_19;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm b_13 = ATgetFirst((ATermList) t);
                          ATerm c_13 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = w_19;
                    }
                  t = (ATerm) ATinsert(CheckATermList(z_19), w_19);
                  z_0 = t;
                  t = SSLsetAnnotations(z_0, w_4);
                  a_5 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_4 = ATgetFirst((ATermList) t);
                      {
                        ATerm d_13 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_5;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm e_13 = ATgetFirst((ATermList) t);
                      o_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, r_4, o_4);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = z_12;
                  {
                    ATerm w_5 = NULL,b_6 = NULL,a_1 = NULL;
                    t = SSLgetAnnotations(v_19);
                    w_5 = t;
                    t = z_19;
                    t = flat_list_0_0(t);
                    b_6 = t;
                    t = (ATerm) ATinsert(CheckATermList(b_6), w_19);
                    a_1 = t;
                    t = SSLsetAnnotations(a_1, w_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  static ATerm i_20 (ATerm t);
  static ATerm i_20 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_91(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = SRTS_one(i_20, t);
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm z_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_13 = ATgetFirst((ATermList) t);
      if(((ATgetType(h_13) != AT_INT) || (ATgetInt((ATermInt) h_13) != 34)))
        _fail(t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_20), term_i_13), term_i_13);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,y_20 = NULL,e_1 = NULL;
  y_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_20 = ATgetFirst((ATermList) t);
      v_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  t_20 = t;
  t = u_20;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
  e_1 = t;
  t = SSLsetAnnotations(e_1, t_20);
  t = v_20;
  t = oncetd_1_0(s_0, t);
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_20), term_j_13), term_j_13);
  return(t);
}
ATerm listtd_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  static ATerm l_22 (ATerm t);
  static ATerm l_22 (ATerm t)
  {
    ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
    t = y_97(t);
    h_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        ATerm m_6 = NULL,o_7 = NULL,n_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_22 = ATgetFirst((ATermList) t);
            j_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_22);
        m_6 = t;
        t = j_22;
        t = l_22(t);
        o_7 = t;
        t = (ATerm) ATinsert(CheckATermList(o_7), i_22);
        n_1 = t;
        t = SSLsetAnnotations(n_1, m_6);
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  if(match_int(t, 32))
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_8 = NULL;
          t = term_r_12;
          h_8 = t;
          t = SSL_explode_string(h_8);
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          t = v_23;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL;
              t = term_r_13;
              k_8 = t;
              t = SSL_explode_string(k_8);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = v_23;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm s_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_8 = NULL;
                  t = term_u_13;
                  p_8 = t;
                  t = SSL_explode_string(p_8);
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = s_13;
                  t = v_23;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm v_13 = t;
                  int w_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_8 = NULL;
                      t = term_x_13;
                      q_8 = t;
                      t = SSL_explode_string(q_8);
                      LocalPopChoice(w_13);
                    }
                  else
                    {
                      t = v_13;
                      t = v_23;
                    }
                }
              else
                {
                  t = v_23;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  e_23 = t;
  t = SSL_explode_string(e_23);
  t = listtd_1_0(w_0, t);
  t = map_1_0(y_0, t);
  t = flat_list_0_0(t);
  d_23 = t;
  t = SSL_implode_string(d_23);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  static ATerm q_25 (ATerm t);
  static ATerm q_25 (ATerm t)
  {
    ATerm f_25 = NULL,h_25 = NULL,k_25 = NULL;
    k_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_25 = ATgetFirst((ATermList) t);
        h_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL,y_8 = NULL,e_9 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(k_25);
              y_8 = t;
              t = f_25;
              t = o_122(t);
              e_9 = t;
              t = (ATerm) ATinsert(CheckATermList(h_25), e_9);
              w_3 = t;
              t = SSLsetAnnotations(w_3, y_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_14 = ATgetFirst((ATermList) t);
                  w_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_8;
              t = q_25(t);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              t = k_25;
            }
        }
      }
    else
      {
        t = k_25;
      }
    return(t);
  }
  t = q_25(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  if(match_int(t, 9))
    {
      t = a_10;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = a_10;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  if(match_int(t, 9))
    {
      t = a_11;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = a_11;
    }
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_14), b_29);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  n_26 = t;
  t = SSL_explode_string(n_26);
  t = reverse_acc_2_0(_id, b_1, t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_26, (ATerm) ATempty);
  {
    static ATerm d_29 (ATerm t);
    static ATerm d_29 (ATerm t)
    {
      ATerm g_28 = NULL,k_28 = NULL,l_28 = NULL,o_28 = NULL;
      if(match_cons(t, sym__2))
        {
          g_28 = ATgetArgument(t, 0);
          o_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_28;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm w_9 = NULL,x_9 = NULL;
          t = o_28;
          t = remove_trailing_1_0(c_1, t);
          x_9 = t;
          t = SSL_implode_string(x_9);
          w_9 = t;
          t = (ATerm) ATinsert(ATempty, w_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_28 = ATgetFirst((ATermList) t);
              l_28 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_28;
          if(match_int(t, 10))
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_10 = NULL,y_10 = NULL,z_10 = NULL;
                  t = o_28;
                  t = remove_trailing_1_0(d_1, t);
                  z_10 = t;
                  t = SSL_implode_string(z_10);
                  n_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_28, (ATerm) ATempty);
                  t = d_29(t);
                  y_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_10), n_10);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  t = (ATerm) ATmakeAppl(sym__2, l_28, (ATerm) ATinsert(CheckATermList(o_28), k_28));
                  t = d_29(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_28, (ATerm) ATinsert(CheckATermList(o_28), k_28));
              t = d_29(t);
            }
        }
      return(t);
    }
    t = d_29(t);
  }
  t = remove_trailing_1_0(f_1, t);
  t = reverse_acc_2_0(_id, g_1, t);
  t = remove_trailing_1_0(h_1, t);
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  t = (ATerm) ATinsert(ATempty, g_29);
  return(t);
}
ATerm sep_by_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  t = map_1_0(l_1, t);
  e_11 = t;
  t = term_s_11;
  t = b_88(t);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
  t = t_6(d_11, e_11, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,b_30 = NULL,c_30 = NULL;
  y_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_29;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_11 = NULL,p_11 = NULL,q_11 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(y_29);
            m_11 = t;
            t = b_30;
            t = r_104(t);
            p_11 = t;
            t = c_30;
            t = filter_1_0(r_104, t);
            q_11 = t;
            t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
            c_4 = t;
            t = SSLsetAnnotations(c_4, m_11);
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = c_30;
            t = filter_1_0(r_104, t);
          }
      }
    }
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
  ATerm j_30 = NULL;
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      t = term_j_14;
    }
  j_30 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_30, term_k_14);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm j_20, ATerm k_20, ATerm t)
{
  ATerm p_31 = NULL,s_31 = NULL;
  t = k_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_20;
    }
  else
    {
      ATerm i_12 = NULL,o_12 = NULL,f_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_20);
      i_12 = t;
      t = s_31;
      {
        static ATerm y_12 (ATerm t);
        static ATerm y_12 (ATerm t)
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_12 = NULL;
              t_12 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_12;
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
              {
                ATerm w_12 = NULL;
                t = Cons_2_0(_id, y_12, t);
                w_12 = t;
                t = (ATerm) ATinsert(CheckATermList(w_12), j_20);
              }
            }
          return(t);
        }
        t = y_12(t);
      }
      o_12 = t;
      t = (ATerm) ATinsert(CheckATermList(o_12), p_31);
      f_4 = t;
      t = SSLsetAnnotations(f_4, i_12);
    }
  return(t);
}
ATerm tov_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_L_2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(s_33);
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, o_33, p_33);
            h_4 = t;
            t = SSLsetAnnotations(h_4, m_13);
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            {
              ATerm u_33 = NULL;
              t = term_s_11;
              t = a_88(t);
              u_33 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_14), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_33))), u_33))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          o_33 = ATgetArgument(t, 0);
          p_33 = ATgetArgument(t, 1);
          {
            ATerm q_14 = t;
            int r_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_14 = NULL,j_4 = NULL;
                t = SSLgetAnnotations(s_33);
                c_14 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, o_33, p_33);
                j_4 = t;
                t = SSLsetAnnotations(j_4, c_14);
                LocalPopChoice(r_14);
              }
            else
              {
                t = q_14;
                {
                  ATerm v_33 = NULL;
                  t = term_s_11;
                  t = a_88(t);
                  v_33 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_14), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_33))), v_33))));
                }
              }
          }
        }
      else
        {
          ATerm w_33 = NULL;
          t = term_s_11;
          t = a_88(t);
          w_33 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_14), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_33))), w_33))));
        }
    }
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_14), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_32))));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(p_1, t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = term_u_14;
    }
  i_34 = t;
  if(match_int(t, 0))
    {
      t = term_v_14;
    }
  else
    {
      ATerm j_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_34, term_k_14);
      t = copy_0_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, j_34);
    }
  return(t);
}
static ATerm u_6 (ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_38, x_38);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = SSL_subtr(w_38, x_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  static ATerm m_34 (ATerm t);
  static ATerm m_34 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_89(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = u_89(t);
        t = m_34(t);
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm for_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  t = w_89(t);
  t = while_not_2_0(x_89, y_89, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym__2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_34, w_34, (ATerm) ATempty);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_34 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(((ATgetType(a_15) != AT_INT) || (ATgetInt((ATermInt) a_15) != 0)))
        _fail(t);
      {
        ATerm c_15 = ATgetArgument(t, 1);
      }
      y_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_34;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_34 = NULL,c_35 = NULL,d_35 = NULL,f_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__3))
    {
      z_34 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
      d_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_34, term_j_14);
  t = geq_0_0(t);
  t = term_j_14;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, term_j_14);
  t = u_6(z_34, m_35, t);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_35, c_35, (ATerm) ATinsert(CheckATermList(d_35), c_35));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(q_1, r_1, s_1, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  ATerm o_35 = NULL;
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    ATerm s_35 = NULL,v_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,z_4 = NULL;
    c_36 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        v_35 = ATgetArgument(t, 0);
        a_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_36);
    s_35 = t;
    t = v_35;
    t = r_122(t);
    b_36 = t;
    t = a_36;
    if(((o_35 != NULL) && (o_35 != t)))
      _fail(t);
    else
      o_35 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, b_36, a_36);
    z_4 = t;
    t = SSLsetAnnotations(z_4, s_35);
    return(t);
  }
  t = fetch_1_0(t_1, t);
  t = SSL_string_to_int(not_null(o_35));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_1, t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = term_u_14;
    }
  l_36 = t;
  if(match_int(t, 0))
    {
      t = term_v_14;
    }
  else
    {
      ATerm m_36 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_36, term_b_14);
      t = copy_0_0(t);
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, m_36)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm c_37 = NULL,w_36 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      w_36 = ATgetArgument(t, 0);
      t = w_36;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          w_36 = ATgetArgument(t, 0);
          t = w_36;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              w_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_36;
        }
    }
  t = Hspace_0_0(t);
  c_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, c_37);
    }
  return(t);
}
static ATerm v_6 (ATerm d_88 (ATerm), ATerm v_17, ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  t = term_s_11;
  t = d_88(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_17, s_37);
  {
    static ATerm z_40 (ATerm t);
    static ATerm z_40 (ATerm t)
    {
      static ATerm a_41 (ATerm u_37, ATerm v_37, ATerm w_37, ATerm x_37, ATerm y_37, ATerm t);
      static ATerm b_41 (ATerm k_38, ATerm l_38, ATerm m_38, ATerm n_38, ATerm t);
      static ATerm a_41 (ATerm u_37, ATerm v_37, ATerm w_37, ATerm x_37, ATerm y_37, ATerm t)
      {
        ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
        t = x_37;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(g_15);
              t = term_j_15;
            }
          else
            {
              t = f_15;
              {
                ATerm l_15 = t;
                int m_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm n_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_15);
                    t = term_o_15;
                  }
                else
                  {
                    t = l_15;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm p_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_q_15;
                  }
              }
            }
        }
        f_38 = t;
        t = x_37;
        t = make_hs_0_0(t);
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_37), v_37), y_37);
        t = z_40(t);
        h_38 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(h_38), g_38), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, f_38), u_37));
        return(t);
      }
      static ATerm b_41 (ATerm k_38, ATerm l_38, ATerm m_38, ATerm n_38, ATerm t)
      {
        ATerm y_38 = NULL,z_38 = NULL;
        t = m_38;
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm u_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_15);
              t = term_j_15;
            }
          else
            {
              t = s_15;
              {
                ATerm v_15 = t;
                int w_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm y_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_15);
                    t = term_o_15;
                  }
                else
                  {
                    t = v_15;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm a_16 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_q_15;
                  }
              }
            }
        }
        y_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_38, n_38);
        t = z_40(t);
        z_38 = t;
        t = (ATerm) ATinsert(CheckATermList(z_38), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, y_38), k_38));
        return(t);
      }
      ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
      if(match_cons(t, sym__2))
        {
          h_39 = ATgetArgument(t, 0);
          k_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_39;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_39 = ATgetFirst((ATermList) t);
              j_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_39 = ATgetFirst((ATermList) t);
              m_39 = (ATerm) ATgetNext((ATermList) t);
              t = j_39;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_39 = ATgetFirst((ATermList) t);
                  f_39 = (ATerm) ATgetNext((ATermList) t);
                  t = i_39;
                  if(match_cons(t, sym_C_2))
                    {
                      c_39 = ATgetArgument(t, 0);
                      d_39 = ATgetArgument(t, 1);
                      {
                        ATerm b_16 = t;
                        int e_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_40 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, j_39, k_39);
                            t = z_40(t);
                            k_40 = t;
                            t = (ATerm) ATinsert(CheckATermList(k_40), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_39, d_39))));
                            LocalPopChoice(e_16);
                          }
                        else
                          {
                            t = b_16;
                            {
                              ATerm f_16 = t;
                              int g_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_41(i_39, e_39, f_39, l_39, m_39, t);
                                  LocalPopChoice(g_16);
                                }
                              else
                                {
                                  t = f_16;
                                  t = b_41(i_39, j_39, l_39, m_39, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm h_16 = t;
                      int j_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_41(i_39, e_39, f_39, l_39, m_39, t);
                          LocalPopChoice(j_16);
                        }
                      else
                        {
                          t = h_16;
                          t = b_41(i_39, j_39, l_39, m_39, t);
                        }
                    }
                }
              else
                {
                  t = i_39;
                  if(match_cons(t, sym_C_2))
                    {
                      c_39 = ATgetArgument(t, 0);
                      d_39 = ATgetArgument(t, 1);
                      {
                        ATerm k_16 = t;
                        int l_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_40 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, j_39, k_39);
                            t = z_40(t);
                            r_40 = t;
                            t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_39, d_39))));
                            LocalPopChoice(l_16);
                          }
                        else
                          {
                            t = k_16;
                            t = b_41(i_39, j_39, l_39, m_39, t);
                          }
                      }
                    }
                  else
                    {
                      t = b_41(i_39, j_39, l_39, m_39, t);
                    }
                }
            }
          else
            {
              ATerm y_40 = NULL;
              t = i_39;
              if(match_cons(t, sym_C_2))
                {
                  c_39 = ATgetArgument(t, 0);
                  d_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, j_39, k_39);
              t = z_40(t);
              y_40 = t;
              t = (ATerm) ATinsert(CheckATermList(y_40), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_39, d_39))));
            }
        }
      return(t);
    }
    t = z_40(t);
  }
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_14), (ATerm) ATinsert(ATempty, t_37));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_16 = t;
  if((PushChoice() == 0))
    {
      ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,g_5 = NULL;
      n_42 = t;
      if(match_cons(t, sym_R_2))
        {
          l_42 = ATgetArgument(t, 0);
          m_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_42);
      k_42 = t;
      t = m_42;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, l_42, m_42);
      g_5 = t;
      t = SSLsetAnnotations(g_5, k_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_16;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATempty);
  {
    static ATerm o_42 (ATerm t);
    static ATerm o_42 (ATerm t)
    {
      ATerm i_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
      if(match_cons(t, sym__2))
        {
          l_41 = ATgetArgument(t, 0);
          o_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_41 = NULL;
          t = o_41;
          t = reverse_acc_2_0(_id, x_1, t);
          t_41 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_41));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_41 = ATgetFirst((ATermList) t);
              n_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_41;
          if(match_cons(t, sym_R_2))
            {
              i_41 = ATgetArgument(t, 0);
              j_41 = ATgetArgument(t, 1);
              {
                ATerm n_16 = t;
                int o_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_41 = NULL,a_42 = NULL;
                    t = o_41;
                    t = reverse_acc_2_0(_id, y_1, t);
                    z_41 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_41, (ATerm) ATempty);
                    t = o_42(t);
                    a_42 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(a_42), (ATerm) ATmakeAppl(sym_R_2, i_41, j_41)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, z_41));
                    LocalPopChoice(o_16);
                  }
                else
                  {
                    t = n_16;
                    t = (ATerm) ATmakeAppl(sym__2, n_41, (ATerm) ATinsert(CheckATermList(o_41), m_41));
                    t = o_42(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_41, (ATerm) ATinsert(CheckATermList(o_41), m_41));
              t = o_42(t);
            }
        }
      return(t);
    }
    t = o_42(t);
  }
  t = filter_1_0(c_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
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
static ATerm k_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_z_16);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm a_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_17;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm c_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_17;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_v_14;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_17 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_17;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_44 = NULL;
  if(match_cons(t, sym_S_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_44;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  a_44 = t;
  if(match_cons(t, sym_REF_2))
    {
      b_44 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, b_44, z_43);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          b_44 = ATgetArgument(t, 0);
          z_43 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, z_43), (ATerm) ATmakeAppl(sym_ANCHOR_1, b_44));
        }
      else
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm i_17 = ATgetArgument(t, 0);
                  ATerm j_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(h_17);
              t = term_k_17;
            }
          else
            {
              t = g_17;
              {
                ATerm l_17 = t;
                int m_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm o_17 = ATgetArgument(t, 0);
                        ATerm r_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_17);
                    t = term_k_17;
                  }
                else
                  {
                    t = l_17;
                    {
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              b_44 = ATgetArgument(t, 0);
                              {
                                ATerm u_17 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_17);
                          t = b_44;
                        }
                      else
                        {
                          t = s_17;
                          if(match_cons(t, sym_A_3))
                            {
                              b_44 = ATgetArgument(t, 0);
                              z_43 = ATgetArgument(t, 1);
                              y_43 = ATgetArgument(t, 2);
                              {
                                ATerm j_44 = NULL,l_44 = NULL,m_44 = NULL,r_15 = NULL;
                                t = y_43;
                                t = construct_rows_0_0(t);
                                j_44 = t;
                                t = z_43;
                                t = Vspace_0_0(t);
                                l_44 = t;
                                t = j_44;
                                {
                                  static ATerm d_2 (ATerm t);
                                  static ATerm d_2 (ATerm t)
                                  {
                                    ATerm n_44 = NULL;
                                    static ATerm h_2 (ATerm t);
                                    static ATerm h_2 (ATerm t)
                                    {
                                      t = b_44;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm w_17 = ATgetArgument(t, 0);
                                        if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
                                          _fail(t);
                                        n_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = v_6(h_2, n_44, t);
                                    return(t);
                                  }
                                  t = map_1_0(d_2, t);
                                }
                                r_15 = t;
                                t = (ATerm) ATmakeAppl(sym__2, l_44, r_15);
                                t = t_6(l_44, r_15, t);
                                m_44 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_44)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  b_44 = ATgetArgument(t, 0);
                                  z_43 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_15 = NULL;
                                    t = b_44;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm x_17 = t;
                                      int z_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = z_43;
                                          t = filter_1_0(i_2, t);
                                          LocalPopChoice(z_17);
                                        }
                                      else
                                        {
                                          t = x_17;
                                          {
                                            ATerm d_16 = NULL,i_16 = NULL;
                                            t = at_last_1_0(k_2, t);
                                            z_15 = t;
                                            t = z_43;
                                            t = filter_1_0(l_2, t);
                                            i_16 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, z_15, i_16);
                                            t = t_6(z_15, i_16, t);
                                            d_16 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, d_16), term_a_18);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      b_44 = ATgetArgument(t, 0);
                                      z_43 = ATgetArgument(t, 1);
                                      {
                                        ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,d_17 = NULL,i_5 = NULL;
                                        t = b_44;
                                        t = Vspace_0_0(t);
                                        q_16 = t;
                                        t = b_44;
                                        t = Ispace_0_0(t);
                                        p_16 = t;
                                        t = z_43;
                                        t = filter_1_0(n_2, t);
                                        x_16 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            t_16 = ATgetFirst((ATermList) t);
                                            u_16 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(x_16);
                                        s_16 = t;
                                        t = t_16;
                                        t = tov_1_0(o_2, t);
                                        v_16 = t;
                                        t = u_16;
                                        {
                                          static ATerm p_2 (ATerm t);
                                          static ATerm p_2 (ATerm t)
                                          {
                                            static ATerm q_2 (ATerm t);
                                            static ATerm q_2 (ATerm t)
                                            {
                                              t = p_16;
                                              return(t);
                                            }
                                            t = tov_1_0(q_2, t);
                                            return(t);
                                          }
                                          t = map_1_0(p_2, t);
                                        }
                                        w_16 = t;
                                        t = (ATerm) ATinsert(CheckATermList(w_16), v_16);
                                        i_5 = t;
                                        t = SSLsetAnnotations(i_5, s_16);
                                        d_17 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, q_16, d_17);
                                        t = t_6(q_16, d_17, t);
                                        r_16 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, r_16)), term_a_18);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          b_44 = ATgetArgument(t, 0);
                                          z_43 = ATgetArgument(t, 1);
                                          {
                                            ATerm q_44 = NULL;
                                            static ATerm u_2 (ATerm t);
                                            static ATerm u_2 (ATerm t)
                                            {
                                              t = not_null(q_44);
                                              return(t);
                                            }
                                            t = b_44;
                                            t = Hspace_0_0(t);
                                            if(((q_44 != NULL) && (q_44 != t)))
                                              _fail(t);
                                            else
                                              q_44 = t;
                                            t = z_43;
                                            t = filter_1_0(r_2, t);
                                            t = sep_by_1_0(u_2, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              b_44 = ATgetArgument(t, 0);
                                              z_43 = ATgetArgument(t, 1);
                                              t = b_44;
                                              {
                                                ATerm c_18 = t;
                                                int d_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_e_18), (ATerm) ATinsert(ATempty, z_43));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_f_18), (ATerm) ATinsert(ATempty, z_43));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_g_18), (ATerm) ATinsert(ATempty, z_43));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_h_18), (ATerm) ATinsert(ATempty, z_43));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(d_18);
                                                  }
                                                else
                                                  {
                                                    t = c_18;
                                                    t = z_43;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  b_44 = ATgetArgument(t, 0);
                                                  z_43 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm s_44 = NULL;
                                                    t = b_44;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = z_43;
                                                    t = map_1_0(v_2, t);
                                                    s_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_i_18), (ATerm) ATinsert(ATempty, s_44)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      b_44 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_44;
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
ATerm topdown_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  static ATerm w_2 (ATerm t);
  static ATerm w_2 (ATerm t)
  {
    t = topdown_1_0(c_90, t);
    return(t);
  }
  t = c_90(t);
  t = SRTS_all(w_2, t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  static ATerm s_45 (ATerm t);
  static ATerm s_45 (ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
    r_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_45 = ATgetFirst((ATermList) t);
        q_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_17 = NULL,b_18 = NULL,j_8 = NULL;
          t = SSLgetAnnotations(r_45);
          y_17 = t;
          t = q_45;
          t = s_45(t);
          b_18 = t;
          t = (ATerm) ATinsert(CheckATermList(b_18), p_45);
          j_8 = t;
          t = SSLsetAnnotations(j_8, y_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_45;
        t = f_97(t);
      }
    return(t);
  }
  t = s_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_44;
    }
  else
    {
      static ATerm x_2 (ATerm t);
      static ATerm x_2 (ATerm t)
      {
        t = not_null(b_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_45 = ATgetFirst((ATermList) t);
          if(((b_45 != NULL) && (b_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_45;
      t = at_end_1_0(x_2, t);
    }
  return(t);
}
static ATerm e_46 (ATerm w_45, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_explode_term(w_45);
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_45;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  b_46 = t;
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_2 (ATerm t);
            static ATerm z_2 (ATerm t)
            {
              t = a_46;
              return(t);
            }
            t = z_45;
            t = at_end_1_0(z_2, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = e_46(b_46, t);
          }
      }
    }
  else
    {
      t = e_46(b_46, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  static ATerm a_47 (ATerm t);
  static ATerm a_47 (ATerm t)
  {
    ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
    x_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_46 = ATgetFirst((ATermList) t);
        z_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(x_46);
          j_18 = t;
          t = z_46;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_46), y_46);
          m_8 = t;
          t = SSLsetAnnotations(m_8, j_18);
          t = q_97(t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          {
            ATerm b_19 = NULL,m_19 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(x_46);
            b_19 = t;
            t = z_46;
            t = a_47(t);
            m_19 = t;
            t = (ATerm) ATinsert(CheckATermList(m_19), y_46);
            t_8 = t;
            t = SSLsetAnnotations(t_8, b_19);
          }
        }
    }
    return(t);
  }
  t = a_47(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  static ATerm q_47 (ATerm t);
  static ATerm q_47 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_97(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,l_20 = NULL,o_20 = NULL,q_9 = NULL;
          n_47 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_47 = ATgetFirst((ATermList) t);
              p_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_47);
          l_20 = t;
          t = p_47;
          t = q_47(t);
          o_20 = t;
          t = (ATerm) ATinsert(CheckATermList(o_20), o_47);
          q_9 = t;
          t = SSLsetAnnotations(q_9, l_20);
        }
      }
    return(t);
  }
  t = q_47(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,f_11 = NULL,u_9 = NULL;
    c_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_47 = ATgetFirst((ATermList) t);
        z_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_48);
    x_47 = t;
    t = y_47;
    t = b_97(t);
    a_48 = t;
    t = (ATerm) ATinsert(CheckATermList(z_47), a_48);
    u_9 = t;
    t = SSLsetAnnotations(u_9, x_47);
    b_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_47 = ATgetFirst((ATermList) t);
        w_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_48);
    u_47 = t;
    t = w_47;
    if(((s_47 != NULL) && (s_47 != t)))
      _fail(t);
    else
      s_47 = t;
    t = (ATerm) ATinsert(CheckATermList(w_47), v_47);
    f_11 = t;
    t = SSLsetAnnotations(f_11, u_47);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(a_3, t);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_47, not_null(s_47));
  return(t);
}
static ATerm w_6 (ATerm c_16, ATerm x_15, ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  t = x_15;
  {
    static ATerm k_3 (ATerm t);
    static ATerm k_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((h_48 != NULL) && (h_48 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_48 = ATgetArgument(t, 0);
          {
            ATerm t_18 = ATgetArgument(t, 1);
            if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
              {
                if(((d_48 != NULL) && (d_48 != ATgetFirst((ATermList) t_18))))
                  _fail(ATgetFirst((ATermList) t_18));
                else
                  d_48 = ATgetFirst((ATermList) t_18);
                if(((e_48 != NULL) && (e_48 != (ATerm) ATgetNext((ATermList) t_18))))
                  _fail((ATerm) ATgetNext((ATermList) t_18));
                else
                  e_48 = (ATerm) ATgetNext((ATermList) t_18);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(k_3, t);
  }
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_48;
  {
    ATerm u_18 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_18;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(e_48)), not_null(d_48));
  {
    static ATerm l_3 (ATerm t);
    static ATerm l_3 (ATerm t)
    {
      ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,b_15 = NULL;
      n_48 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_48 = ATgetFirst((ATermList) t);
          m_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_48);
      k_48 = t;
      t = m_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
      b_15 = t;
      t = SSLsetAnnotations(b_15, k_48);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, c_16, (ATerm) ATinsert(CheckATermList(f_48), l_48)));
      return(t);
    }
    t = at_last_1_0(l_3, t);
  }
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(h_48), i_48)));
  t = conc_0_0(t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, c_16, j_48);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  y_48 = t;
  if(match_cons(t, sym_H_2))
    {
      w_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
      t = x_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_48 = ATgetFirst((ATermList) t);
          v_48 = (ATerm) ATgetNext((ATermList) t);
          t = v_48;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_48;
            }
          else
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_48;
                  t = w_6(w_48, x_48, t);
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = v_18;
                  t = y_48;
                }
            }
        }
      else
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_48;
              t = w_6(w_48, x_48, t);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = y_48;
            }
        }
    }
  else
    {
      ATerm a_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm d_19 = ATgetArgument(t, 0);
              x_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(c_19);
          t = x_48;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_48 = ATgetFirst((ATermList) t);
              v_48 = (ATerm) ATgetNext((ATermList) t);
              t = v_48;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_48;
                }
              else
                {
                  t = y_48;
                }
            }
          else
            {
              t = y_48;
            }
        }
      else
        {
          t = a_19;
          t = y_48;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(m_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm q_49 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(n_3, t);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, q_49)))));
  t = bottomup_1_0(q_3, t);
  return(t);
}
static ATerm i_50 (ATerm c_50, ATerm t)
{
  t = SSL_fclose(c_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_50 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_50);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = i_50(g_50, t);
          }
      }
    }
  else
    {
      t = i_50(g_50, t);
    }
  return(t);
}
static ATerm x_6 (ATerm b_20, ATerm t)
{
  t = SSL_read_term_from_stream(b_20);
  return(t);
}
static ATerm d_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  t = SSL_strcat(y_33, z_33);
  return(t);
}
static ATerm y_6 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm j_50 = NULL;
  t = SSL_fopen(w_35, x_35);
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_stdin_stream();
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_stdout_stream();
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_stderr_stream();
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_50);
  return(t);
}
static ATerm z_51 (ATerm s_50, ATerm t)
{
  ATerm t_50 = NULL;
  t = SSL_explode_term(s_50);
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            t_50 = ATgetFirst((ATermList) l_19);
            {
              ATerm n_19 = (ATerm) ATgetNext((ATermList) l_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_52 (ATerm w_50, ATerm x_50, ATerm y_50, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,e_51 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(y_50);
  b_51 = t;
  t = w_50;
  if(match_cons(t, sym_Path_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_51, x_50);
  h_15 = t;
  t = SSLsetAnnotations(h_15, b_51);
  if(match_cons(t, sym__2))
    {
      z_50 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(z_50, a_51, t);
  return(t);
}
static ATerm b_52 (ATerm g_51, ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,r_51 = NULL,k_15 = NULL;
  t = SSLgetAnnotations(i_51);
  l_51 = t;
  t = SSL_is_string(g_51);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_51, h_51);
  k_15 = t;
  t = SSLsetAnnotations(k_15, l_51);
  if(match_cons(t, sym__2))
    {
      j_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(j_51, k_51, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  w_51 = t;
  if(match_cons(t, sym__2))
    {
      x_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_51(w_51, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_52(x_51, y_51, w_51, t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  t = b_52(x_51, y_51, w_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_51(w_51, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,k_52 = NULL;
  k_52 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_52, term_u_19);
        t = z_6(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        {
          ATerm j_21 = NULL,k_21 = NULL;
          t = term_x_19;
          k_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_19, k_52);
          t = d_7(k_21, k_52, t);
          j_21 = t;
          t = SSL_perror(j_21);
          _fail(t);
        }
      }
  }
  e_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(f_52, t);
  d_52 = t;
  t = e_52;
  t = fclose_0_0(t);
  t = d_52;
  return(t);
}
static ATerm e_7 (ATerm k_35, ATerm l_35, ATerm t)
{
  t = SSL_access(k_35, l_35);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_52 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_52 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_c_10);
      r_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_52, (ATerm) ATinsert(ATempty, term_c_10));
      t = e_7(p_52, r_52, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_7 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm s_52 = NULL;
  t = lookup_table_0_1(i_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(j_53, s_52, t);
  return(t);
}
static ATerm g_7 (ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  v_52 = t;
  {
    ATerm y_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        t = m_7(u_51, v_51, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_20 = ATgetFirst((ATermList) t);
            u_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_20);
        {
          ATerm w_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_51, v_51, u_52);
          t = lookup_table_0_1(u_51, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(v_51, u_52, w_52, t);
          t = (ATerm) ATmakeAppl(sym__3, u_51, v_51, u_52);
        }
      }
    else
      {
        t = y_19;
        {
          ATerm y_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
          t = lookup_table_0_1(u_51, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(v_51, y_52, t);
          t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        }
      }
  }
  t = v_52;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  h_53 = t;
  t = y_109(t);
  g_53 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL;
        t = term_h_11;
        n_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_53, term_h_11);
        t = m_7(g_53, n_53, t);
        {
          ATerm f_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_20;
            }
        }
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_53 = ATgetFirst((ATermList) t);
      a_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_53, term_h_11, a_53);
  t = lookup_table_0_1(g_53, t);
  m_53 = t;
  t = term_h_11;
  k_53 = t;
  t = m_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(k_53, a_53, l_53, t);
  t = f_53;
  {
    static ATerm t_3 (ATerm t);
    static ATerm t_3 (ATerm t)
    {
      ATerm o_53 = NULL;
      o_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_53, o_53);
      t = g_7(g_53, o_53, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = h_53;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_88(t);
      t = z_88(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = z_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  r_53 = t;
  t = x_109(t);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, term_h_11);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_11;
        a_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_53, term_h_11);
        t = m_7(q_53, a_54, t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
  }
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_53, term_h_11, (ATerm) ATinsert(CheckATermList(s_53), (ATerm) ATempty));
  t = lookup_table_0_1(q_53, t);
  w_53 = t;
  t = term_h_11;
  t_53 = t;
  t = (ATerm) ATinsert(CheckATermList(s_53), (ATerm) ATempty);
  u_53 = t;
  t = w_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(t_53, u_53, v_53, t);
  t = r_53;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_54 = NULL;
  j_54 = t;
  {
    ATerm r_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_54);
        LocalPopChoice(w_20);
      }
    else
      {
        t = r_20;
        t = j_54;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  ATerm d_54 = NULL;
  static ATerm x_3 (ATerm t);
  static ATerm x_3 (ATerm t)
  {
    ATerm e_54 = NULL;
    e_54 = t;
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_54 = NULL,g_54 = NULL;
          t = term_o_11;
          f_54 = t;
          t = term_h_11;
          g_54 = t;
          t = term_c_21;
          t = m_7(f_54, g_54, t);
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_54 != NULL) && (d_54 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_54 = ATgetFirst((ATermList) t);
        {
          ATerm d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_54;
    t = map_1_0(y_3, t);
    t = e_54;
    t = end_scope_1_0(z_3, t);
    return(t);
  }
  t = begin_scope_1_0(u_3, t);
  t = restore_always_2_0(o_123, x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  m_54 = t;
  t = term_s_11;
  t = whoami_0_0(t);
  n_54 = t;
  t = term_q_10;
  p_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_21), n_54), term_e_21);
  q_54 = t;
  t = SSL_printnl(p_54, q_54);
  t = term_j_14;
  o_54 = t;
  t = SSL_exit(o_54);
  t = m_54;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  if(match_string(t, "-k"))
    {
      t = s_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_54;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  t = SSL_string_to_int(t_54);
  u_54 = t;
  t = term_g_21;
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, u_54);
  t = p_7(v_54, u_54, t);
  t = t_54;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  if(match_string(t, "-S"))
    {
      t = x_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_54;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_i_21;
  y_54 = t;
  t = term_u_14;
  z_54 = t;
  t = term_l_21;
  t = p_7(y_54, z_54, t);
  t = term_m_21;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  t = SSL_string_to_int(a_55);
  b_55 = t;
  t = term_i_21;
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, b_55);
  t = p_7(c_55, b_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_55);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  t = term_p_21;
  d_55 = t;
  t = term_s_11;
  e_55 = t;
  t = term_q_21;
  t = p_7(d_55, e_55, t);
  t = term_r_21;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, g_4, i_4, t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm y_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_4, m_4, n_4, t);
            LocalPopChoice(a_22);
          }
        else
          {
            t = y_21;
            t = Option_3_0(x_4, y_4, b_5, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  t = term_h_10;
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, z_61, a_62);
  t = lookup_table_0_1(f_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(z_61, a_62, g_55, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, z_61, a_62);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
      t = term_s_11;
      t = g_0(t);
      m_55 = t;
      t = term_b_22;
      n_55 = t;
      t = term_c_22;
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_22, term_c_22, m_55);
      t = n_7(n_55, o_55, m_55, t);
      _fail(t);
    }
  else
    {
      ATerm r_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_55 = ATgetFirst((ATermList) t);
          l_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_55;
      t = d_0(t);
      t = term_s_11;
      t = f_0(t);
      r_55 = t;
      t = (ATerm) ATinsert(CheckATermList(l_55), r_55);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_55 = NULL;
  t_55 = t;
  if(match_string(t, "-o"))
    {
      t = t_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_55;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  u_55 = t;
  t = term_i_10;
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, u_55);
  t = p_7(v_55, u_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_55);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
static ATerm n_7 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            ATerm k_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
        t = m_7(p_51, q_51, t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = (ATerm) ATempty;
      }
  }
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_51, q_51, (ATerm) ATinsert(CheckATermList(y_55), o_51));
  t = lookup_table_0_1(p_51, t);
  b_56 = t;
  t = (ATerm) ATinsert(CheckATermList(y_55), o_51);
  z_55 = t;
  t = b_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_51, z_55, a_56, t);
  t = x_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
      t = term_s_11;
      t = o_0(t);
      w_56 = t;
      t = term_b_22;
      x_56 = t;
      t = term_c_22;
      y_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_22, term_c_22, w_56);
      t = n_7(x_56, y_56, w_56, t);
      _fail(t);
    }
  else
    {
      ATerm c_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_56 = ATgetFirst((ATermList) t);
          t_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_56 = ATgetFirst((ATermList) t);
          v_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_56;
      t = l_0(t);
      t = u_56;
      t = m_0(t);
      c_57 = t;
      t = (ATerm) ATinsert(CheckATermList(v_56), c_57);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  if(match_string(t, "-i"))
    {
      t = e_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_57;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  f_57 = t;
  t = term_m_22;
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, f_57);
  t = p_7(g_57, f_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_57);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, h_5, k_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_11;
  t = whoami_0_0(t);
  h_57 = t;
  t = term_q_10;
  j_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_22), h_57);
  k_57 = t;
  t = SSL_printnl(j_57, k_57);
  t = term_j_14;
  i_57 = t;
  t = SSL_exit(i_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  t = term_h_10;
  l_57 = t;
  t = term_p_22;
  m_57 = t;
  t = term_q_22;
  t = m_7(l_57, m_57, t);
  return(t);
}
static ATerm h_7 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_38, r_38);
      LocalPopChoice(t_22);
    }
  else
    {
      t = r_22;
      t = SSL_addr(q_38, r_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_57;
      t = n_103(t);
    }
  else
    {
      ATerm t_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_57 = ATgetFirst((ATermList) t);
          q_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_57;
      t = foldr_2_0(n_103, o_103, t);
      t_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_57, t_57);
      t = o_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(x_21, z_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_57 = NULL,s_21 = NULL,t_21 = NULL;
  t = times_0_0(t);
  t_21 = t;
  t = SSL_explode_term(t_21);
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_21;
  t = foldr_2_0(m_5, n_5, t);
  w_57 = t;
  t = SSL_TicksToSeconds(w_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  k_58 = t;
  if(match_cons(t, sym__2))
    {
      l_58 = ATgetArgument(t, 0);
      m_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_58;
        if((l_58 != t))
          {
            _fail(t);
          }
        t = k_58;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATmakeAppl(sym__2, l_58, m_58);
        {
          ATerm x_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_58, m_58);
              LocalPopChoice(z_22);
            }
          else
            {
              t = x_22;
              t = SSL_gtr(l_58, m_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_58, m_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm q_58 = NULL;
  q_58 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
        t = term_h_10;
        t_58 = t;
        t = term_i_21;
        u_58 = t;
        t = term_c_23;
        t = m_7(t_58, u_58, t);
        s_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_58, term_j_14);
        t = geq_0_0(t);
        t = q_58;
        t = r_113(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = q_58;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,z_58 = NULL,a_59 = NULL;
  t = run_time_0_0(t);
  w_58 = t;
  t = term_s_11;
  t = whoami_0_0(t);
  x_58 = t;
  t = term_q_10;
  z_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), w_58), term_g_23), x_58);
  a_59 = t;
  t = SSL_printnl(z_58, a_59);
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), w_58), term_g_23), x_58));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_14;
  b_59 = t;
  t = SSL_exit(b_59);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  m_59 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_59;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_59 = ATgetArgument(t, 0);
          {
            ATerm s_22 = NULL,b_17 = NULL;
            t = SSLgetAnnotations(m_59);
            s_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_59);
            b_17 = t;
            t = SSLsetAnnotations(b_17, s_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_59;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_59 = NULL,f_59 = NULL;
      t = term_h_10;
      e_59 = t;
      t = term_k_23;
      f_59 = t;
      t = term_l_23;
      t = m_7(e_59, f_59, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = fetch_1_0(q_5, t);
    }
  t = h_116(t);
  return(t);
}
static ATerm q_7 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_hashtable_put(j_56, h_56, i_56);
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_59);
  return(t);
}
static ATerm r_7 (ATerm k_56, ATerm l_56, ATerm t)
{
  t = SSL_hashtable_get(l_56, k_56);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_53, ATerm t)
{
  ATerm x_59 = NULL;
  t = table_hashtable_0_0(t);
  x_59 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        t = x_59;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(b_53, y_22, t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm f_23 = NULL;
          t = b_53;
          t = table_create_0_0(t);
          t = x_59;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(b_53, f_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm a_60 = NULL;
  t = SSL_hashtable_create(p_56, q_56);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,f_60 = NULL,g_60 = NULL;
  b_60 = t;
  t = term_o_23;
  f_60 = t;
  t = term_q_23;
  g_60 = t;
  t = b_60;
  t = new_hashtable_0_2(f_60, g_60, t);
  c_60 = t;
  t = b_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(b_60, c_60, d_60, t);
  t = b_60;
  return(t);
}
static ATerm j_7 (ATerm m_56, ATerm n_56, ATerm t)
{
  ATerm h_60 = NULL;
  t = SSL_hashtable_remove(n_56, m_56);
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_60);
  return(t);
}
static ATerm k_7 (ATerm r_56, ATerm t)
{
  ATerm i_60 = NULL;
  t = SSL_hashtable_destroy(r_56);
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_60 = NULL;
  t = SSL_table_hashtable();
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  k_60 = t;
  t = table_hashtable_0_0(t);
  l_60 = t;
  t = lookup_table_0_1(k_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(n_60, t);
  t = l_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(k_60, m_60, t);
  t = k_60;
  return(t);
}
ATerm map_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t);
  static ATerm c_61 (ATerm t)
  {
    ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
    z_60 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_60;
      }
    else
      {
        ATerm p_23 = NULL,t_23 = NULL,u_23 = NULL,f_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_61 = ATgetFirst((ATermList) t);
            b_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_60);
        p_23 = t;
        t = a_61;
        t = o_96(t);
        t_23 = t;
        t = b_61;
        t = c_61(t);
        u_23 = t;
        t = (ATerm) ATinsert(CheckATermList(u_23), t_23);
        f_17 = t;
        t = SSLsetAnnotations(f_17, p_23);
      }
    return(t);
  }
  t = c_61(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_61 = ATgetFirst((ATermList) t);
      g_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_61 = NULL,l_61 = NULL;
        static ATerm r_5 (ATerm t);
        static ATerm r_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_61)), not_null(l_61));
          return(t);
        }
        t = g_61;
        t = j_0(t);
        if(((k_61 != NULL) && (k_61 != t)))
          _fail(t);
        else
          k_61 = t;
        t = f_61;
        t = h_0(t);
        if(((l_61 != NULL) && (l_61 != t)))
          _fail(t);
        else
          l_61 = t;
        t = g_61;
        t = reverse_acc_2_0(h_0, r_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_11;
      t = j_0(t);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,n_17 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_61);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_61);
  n_17 = t;
  t = SSLsetAnnotations(n_17, r_61);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_61), term_r_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  ATerm s_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_61 = NULL,q_61 = NULL;
      t = term_h_10;
      p_61 = t;
      t = term_p_22;
      q_61 = t;
      t = term_q_22;
      t = m_7(p_61, q_61, t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = s_23;
      t = fetch_1_0(s_5, t);
    }
  t = term_x_23;
  t = echo_0_0(t);
  t = term_b_22;
  n_61 = t;
  t = term_c_22;
  o_61 = t;
  t = term_y_23;
  t = m_7(n_61, o_61, t);
  t = reverse_acc_2_0(_id, v_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  static ATerm u_62 (ATerm t);
  static ATerm u_62 (ATerm t)
  {
    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
    r_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_62 = ATgetFirst((ATermList) t);
        t_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24 = NULL,p_24 = NULL,p_17 = NULL;
          t = SSLgetAnnotations(r_62);
          m_24 = t;
          t = s_62;
          t = y_96(t);
          p_24 = t;
          t = (ATerm) ATinsert(CheckATermList(t_62), p_24);
          p_17 = t;
          t = SSLsetAnnotations(p_17, m_24);
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          {
            ATerm i_25 = NULL,n_25 = NULL,q_17 = NULL;
            t = SSLgetAnnotations(r_62);
            i_25 = t;
            t = t_62;
            t = u_62(t);
            n_25 = t;
            t = (ATerm) ATinsert(CheckATermList(n_25), s_62);
            q_17 = t;
            t = SSLsetAnnotations(q_17, i_25);
          }
        }
    }
    return(t);
  }
  t = u_62(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_24 = ATgetFirst((ATermList) t);
                ATerm e_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_62;
          }
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, y_62);
      }
  }
  z_62 = t;
  t = term_k_10;
  a_63 = t;
  t = SSL_printnl(a_63, z_62);
  t = y_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  t = term_h_10;
  e_63 = t;
  t = term_p_22;
  f_63 = t;
  t = term_q_22;
  t = m_7(e_63, f_63, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  t = term_f_24;
  g_63 = t;
  t = term_s_11;
  h_63 = t;
  t = term_g_24;
  t = p_7(g_63, h_63, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  t = term_f_24;
  k_63 = t;
  t = term_s_11;
  l_63 = t;
  t = term_g_24;
  t = p_7(k_63, l_63, t);
  t = term_i_24;
  i_63 = t;
  t = term_s_11;
  j_63 = t;
  t = term_j_24;
  t = p_7(i_63, j_63, t);
  t = term_k_24;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, c_6, d_6, t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      t = Option_3_0(e_6, f_6, g_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,p_18 = NULL;
  r_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_63 = ATgetFirst((ATermList) t);
      o_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  m_63 = t;
  t = n_63;
  t = c_73(t);
  p_63 = t;
  t = o_63;
  t = d_73(t);
  q_63 = t;
  t = (ATerm) ATinsert(CheckATermList(q_63), p_63);
  p_18 = t;
  t = SSLsetAnnotations(p_18, m_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_118 (ATerm), ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,b_64 = NULL,c_64 = NULL,s_18 = NULL;
  w_63 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_24;
        t = k_118(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
      }
  }
  t = w_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_63 = ATgetFirst((ATermList) t);
      z_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_63);
  x_63 = t;
  t = term_p_22;
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, y_63);
  t = p_7(c_64, y_63, t);
  t = z_63;
  {
    static ATerm m_64 (ATerm t);
    static ATerm m_64 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_64 = NULL;
              f_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_64;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = k_118(t);
              t = Cons_2_0(_id, m_64, t);
            }
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm i_64 = NULL,j_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_64 = ATgetFirst((ATermList) t);
                j_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_64), (ATerm) ATmakeAppl(sym_Undefined_1, i_64));
          }
        }
      return(t);
    }
    t = m_64(t);
  }
  b_64 = t;
  t = (ATerm) ATinsert(CheckATermList(b_64), (ATerm) ATmakeAppl(sym_Program_1, y_63));
  s_18 = t;
  t = SSLsetAnnotations(s_18, x_63);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_64 = NULL;
  z_64 = t;
  if(match_string(t, "--help"))
    {
      t = z_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_64;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  t = term_k_23;
  a_65 = t;
  t = term_s_11;
  b_65 = t;
  t = term_x_24;
  t = p_7(a_65, b_65, t);
  t = term_y_24;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  t_64 = t;
  t = term_b_22;
  u_64 = t;
  t = term_a_25;
  t = lookup_table_0_1(u_64, t);
  y_64 = t;
  t = term_c_22;
  v_64 = t;
  t = (ATerm) ATempty;
  w_64 = t;
  t = y_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(v_64, w_64, x_64, t);
  t = t_64;
  {
    static ATerm i_6 (ATerm t);
    static ATerm i_6 (ATerm t)
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_118(t);
          LocalPopChoice(c_25);
        }
      else
        {
          t = b_25;
          {
            ATerm d_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, k_6, p_6, t);
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
  }
  {
    ATerm g_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_65 = NULL;
        m_65 = t;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_25 = NULL;
              t = m_65;
              {
                ATerm o_25 = t;
                int p_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_25 = NULL,z_25 = NULL;
                    t = term_h_10;
                    y_25 = t;
                    t = term_k_23;
                    z_25 = t;
                    t = term_l_23;
                    t = m_7(y_25, z_25, t);
                    LocalPopChoice(p_25);
                  }
                else
                  {
                    t = o_25;
                    t = fetch_1_0(q_6, t);
                  }
              }
              t = m_65;
              t = default_system_usage_0_0(t);
              t = term_u_14;
              x_25 = t;
              t = SSL_exit(x_25);
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              {
                ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
                t = term_h_10;
                e_26 = t;
                t = term_f_24;
                f_26 = t;
                t = term_r_25;
                t = m_7(e_26, f_26, t);
                t = m_65;
                t = default_system_about_0_0(t);
                t = term_u_14;
                d_26 = t;
                t = SSL_exit(d_26);
              }
            }
        }
        LocalPopChoice(j_25);
      }
    else
      {
        t = g_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
              static ATerm s_6 (ATerm t);
              static ATerm s_6 (ATerm t)
              {
                ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,x_18 = NULL;
                s_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_65);
                q_65 = t;
                t = r_65;
                if(((r_64 != NULL) && (r_64 != t)))
                  _fail(t);
                else
                  r_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_65);
                x_18 = t;
                t = SSLsetAnnotations(x_18, q_65);
                return(t);
              }
              t = fetch_1_0(s_6, t);
              t = term_q_10;
              o_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), term_u_25);
              p_65 = t;
              t = SSL_printnl(o_65, p_65);
              t = (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), term_u_25));
              t = default_system_usage_0_0(t);
              t = term_j_14;
              n_65 = t;
              t = SSL_exit(n_65);
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
            }
        }
      }
  }
  s_64 = t;
  t = term_b_22;
  t = table_destroy_0_0(t);
  t = s_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  t = parse_options_1_0(j_116, t);
  x_65 = t;
  t = term_v_25;
  t = table_create_0_0(t);
  t = term_v_25;
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_w_25, x_65);
  t = lookup_table_0_1(y_65, t);
  b_66 = t;
  t = term_w_25;
  z_65 = t;
  t = b_66;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(z_65, x_65, a_66, t);
  t = x_65;
  t = l_116(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_116, t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm c_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_116(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_26);
            }
          else
            {
              t = c_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm l_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_7, z_7, a_8, t);
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = l_26;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
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
static ATerm s_7 (ATerm t)
{
  t = xtc_temp_files_1_0(l_8, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  t = term_r_26;
  i_66 = t;
  t = term_s_11;
  j_66 = t;
  t = term_s_26;
  t = p_7(i_66, j_66, t);
  t = term_t_26;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
      t = term_h_10;
      m_66 = t;
      t = term_m_22;
      n_66 = t;
      t = term_x_26;
      t = m_7(m_66, n_66, t);
      l_66 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_66);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = term_o_10;
    }
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_7, default_usage_0_0, _id, s_7, t);
  return(t);
}

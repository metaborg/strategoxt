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
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_FBOX_2;
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
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_SOpt_2;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
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
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_e_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_s_15;
ATerm term_h_15;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_p_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_a_11;
ATerm term_z_10;
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
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_c_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_y_8);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_z_12);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_12);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_f_9);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_u_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_o_19);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_o_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_i_20);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_f_9);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_f_9);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_f_9);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__3, term_f_20, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_k_22);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_f_9);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_q_20);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t);
static ATerm h_3 (ATerm m_2, ATerm t);
static ATerm i_3 (ATerm o_2, ATerm p_2, ATerm q_2, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm i_6 (ATerm f_96 (ATerm), ATerm h_39, ATerm f_39, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm l_76 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_77 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm l_107 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm sep_by_1_0 (ATerm n_74 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm z_90 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm l_6 (ATerm c_20, ATerm d_20, ATerm t);
ATerm tov_1_0 (ATerm m_74 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm m_6 (ATerm z_37, ATerm a_38, ATerm t);
ATerm while_not_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm n_6 (ATerm p_74 (ATerm), ATerm o_17, ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_76 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_83 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_43 (ATerm w_42, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm r_83 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm j_83 (ATerm), ATerm t);
static ATerm o_6 (ATerm v_15, ATerm q_15, ATerm t);
static ATerm b_4 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm k_47 (ATerm e_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_6 (ATerm u_19, ATerm t);
static ATerm q_6 (ATerm q_33, ATerm r_33, ATerm t);
static ATerm r_6 (ATerm z_34, ATerm a_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_49 (ATerm u_47, ATerm t);
static ATerm b_49 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm t);
static ATerm c_49 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t);
static ATerm s_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_6 (ATerm q_34, ATerm r_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_7 (ATerm e_51, ATerm f_51, ATerm t);
static ATerm v_6 (ATerm q_49, ATerm r_49, ATerm t);
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_7 (ATerm q_44, ATerm r_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_7 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_6 (ATerm t_37, ATerm u_37, ATerm t);
ATerm foldr_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_98 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm need_help_1_0 (ATerm c_101 (ATerm), ATerm t);
static ATerm f_7 (ATerm d_53, ATerm e_53, ATerm f_53, ATerm t);
static ATerm g_7 (ATerm g_53, ATerm h_53, ATerm t);
ATerm lookup_table_0_1 (ATerm x_50, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_53, ATerm m_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_6 (ATerm i_53, ATerm j_53, ATerm t);
static ATerm z_6 (ATerm n_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_82 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_59 (ATerm), ATerm w_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm e_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = l_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, n_1, h_0);
        t = u_6(n_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = l_1;
              t = o_0(t);
              t_0 = t;
              {
                ATerm x_7 = t;
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
                            if((n_1 != t))
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
                    t = x_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_1, t_0);
              t = u_6(n_1, t_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(w_7);
            }
          else
            {
              t = v_7;
              t = l_1;
              t = o_0(t);
              if((n_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
            }
        }
      }
  }
  return(t);
}
static ATerm u_6 (ATerm x_40, ATerm y_40, ATerm t)
{
  t = SSL_copy(x_40, y_40);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm y_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL,d_2 = NULL;
      t = term_b_8;
      c_2 = t;
      t = term_c_8;
      d_2 = t;
      t = term_d_8;
      t = b_7(c_2, d_2, t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = y_7;
      t = term_f_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,g_1 = NULL;
      t = term_c_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 = NULL,m_1 = NULL;
            t = term_b_8;
            i_1 = t;
            t = term_c_8;
            m_1 = t;
            t = term_d_8;
            t = b_7(i_1, m_1, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = term_f_8;
          }
      }
      f_1 = t;
      t = term_i_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, f_1);
      t = u_6(g_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  f_2 = t;
  t = l_82(t);
  g_2 = t;
  t = term_m_8;
  h_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_2), g_2);
  i_2 = t;
  t = SSL_printnl(h_2, i_2);
  t = f_2;
  return(t);
}
static ATerm h_3 (ATerm m_2, ATerm t)
{
  t = m_2;
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
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_r_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm i_3 (ATerm o_2, ATerm p_2, ATerm q_2, ATerm t)
{
  t = SSL_open_file(o_2, p_2);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_s_8;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_3(e_3, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = i_3(f_3, g_3, e_3, t);
          }
      }
    }
  else
    {
      t = h_3(e_3, t);
    }
  return(t);
}
static ATerm i_6 (ATerm f_96 (ATerm), ATerm h_39, ATerm f_39, ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  t_3 = t;
  t = f_96(t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_3, h_39, f_39);
  t = c_7(l_3, h_39, f_39, t);
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        t = term_y_8;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, term_y_8);
        t = b_7(l_3, a_4, t);
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
      n_3 = ATgetFirst((ATermList) t);
      r_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_3, term_y_8, (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATinsert(CheckATermList(n_3), h_39)));
  t = lookup_table_0_1(l_3, t);
  y_3 = t;
  t = term_y_8;
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATinsert(CheckATermList(n_3), h_39));
  w_3 = t;
  t = y_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(u_3, w_3, x_3, t);
  t = t_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 = NULL,u_1 = NULL;
      j_4 = t;
      t = term_b_9;
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, term_b_9);
      t = q_6(j_4, u_1, t);
      d_4 = t;
      t = SSL_mkstemp(d_4);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm k_4 = NULL;
        t = term_c_9;
        k_4 = t;
        t = SSL_perror(k_4);
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
static ATerm f_0 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,s_4 = NULL,t_4 = NULL;
  t = P__tmpdir_0_0(t);
  s_4 = t;
  t = term_e_9;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, term_e_9);
  t = q_6(s_4, t_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_9;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, term_f_9);
  t = i_6(f_0, n_4, o_4, t);
  t = SSL_close(m_4);
  t = n_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  t = xtc_new_file_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_r_8);
  t = open_file_0_0(t);
  t = z_4;
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm g_5 = NULL;
      g_5 = t;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 = NULL,r_2 = NULL;
            t = SSL_is_string(g_5);
            l_2 = t;
            t = (ATerm) ATinsert(ATempty, l_2);
            r_2 = t;
            t = SSL_print(a_5, r_2);
            t = l_2;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            t = g_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(j_0, t);
  }
  t = SSL_close_file(a_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_5);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      n_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), l_5), term_j_9), n_5), term_i_9);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          n_5 = ATgetArgument(t, 0);
          l_5 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_9), l_5), term_j_9), n_5), term_l_9);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              n_5 = ATgetArgument(t, 0);
              l_5 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), l_5), term_j_9), n_5), term_n_9);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  n_5 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), n_5), term_o_9);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      n_5 = ATgetArgument(t, 0);
                      l_5 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), l_5), term_j_9), n_5), term_q_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          n_5 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), n_5), term_u_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              n_5 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), n_5), term_x_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  n_5 = ATgetArgument(t, 0);
                                  l_5 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_10), l_5), term_a_10), n_5), term_z_9);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      n_5 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), n_5), term_c_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_e_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_f_10;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_g_10;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_h_10;
                                                }
                                            }
                                        }
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
ATerm bottomup_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  static ATerm m_0 (ATerm t)
  {
    t = bottomup_1_0(l_76, t);
    return(t);
  }
  t = SRTS_all(m_0, t);
  t = l_76(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_14 = ATgetFirst((ATermList) t);
          l_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 = NULL,b_3 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(j_14);
            y_2 = t;
            t = k_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_14;
            t = flat_list_0_0(t);
            b_3 = t;
            t = (ATerm) ATinsert(CheckATermList(b_3), k_14);
            v_0 = t;
            t = SSLsetAnnotations(v_0, y_2);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 = NULL,v_3 = NULL,z_3 = NULL,f_4 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(j_14);
                  z_3 = t;
                  t = k_14;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = k_14;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm m_10 = ATgetFirst((ATermList) t);
                          ATerm n_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_14;
                    }
                  t = (ATerm) ATinsert(CheckATermList(l_14), k_14);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, z_3);
                  f_4 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_3 = ATgetFirst((ATermList) t);
                      {
                        ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = f_4;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_10 = ATgetFirst((ATermList) t);
                      s_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_3, s_3);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  {
                    ATerm i_5 = NULL,q_5 = NULL,x_0 = NULL;
                    t = SSLgetAnnotations(j_14);
                    i_5 = t;
                    t = l_14;
                    t = flat_list_0_0(t);
                    q_5 = t;
                    t = (ATerm) ATinsert(CheckATermList(q_5), k_14);
                    x_0 = t;
                    t = SSLsetAnnotations(x_0, i_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  static ATerm t_14 (ATerm t)
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_77(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        t = SRTS_one(t_14, t);
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm d_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_10 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_10) != AT_INT) || (ATgetInt((ATermInt) y_10) != 34)))
        _fail(t);
      d_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(d_15), term_z_10), term_z_10);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm u_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,e_1 = NULL;
  c_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_15);
  z_14 = t;
  t = a_15;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_15), a_15);
  e_1 = t;
  t = SSLsetAnnotations(e_1, z_14);
  t = b_15;
  t = oncetd_1_0(p_0, t);
  u_14 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(u_14), term_a_11), term_a_11);
  return(t);
}
ATerm listtd_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm h_17 (ATerm t)
  {
    ATerm x_16 = NULL,e_17 = NULL,g_17 = NULL;
    t = g_84(t);
    x_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_16;
      }
    else
      {
        ATerm f_6 = NULL,h_7 = NULL,j_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_17 = ATgetFirst((ATermList) t);
            g_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_16);
        f_6 = t;
        t = g_17;
        t = h_17(t);
        h_7 = t;
        t = (ATerm) ATinsert(CheckATermList(h_7), e_17);
        j_1 = t;
        t = SSLsetAnnotations(j_1, f_6);
      }
    return(t);
  }
  t = h_17(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  if(match_int(t, 32))
    {
      ATerm d_11 = t;
      int e_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_7 = NULL;
          t = term_f_10;
          p_7 = t;
          t = SSL_explode_string(p_7);
          LocalPopChoice(e_11);
        }
      else
        {
          t = d_11;
          t = y_18;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_7 = NULL;
              t = term_i_11;
              u_7 = t;
              t = SSL_explode_string(u_7);
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = y_18;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_7 = NULL;
                  t = term_l_11;
                  z_7 = t;
                  t = SSL_explode_string(z_7);
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
                  t = y_18;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm m_11 = t;
                  int o_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_8 = NULL;
                      t = term_p_11;
                      e_8 = t;
                      t = SSL_explode_string(e_8);
                      LocalPopChoice(o_11);
                    }
                  else
                    {
                      t = m_11;
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
  t = listtd_1_0(q_0, t);
  t = map_1_0(r_0, t);
  t = flat_list_0_0(t);
  n_18 = t;
  t = SSL_implode_string(n_18);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  static ATerm r_21 (ATerm t)
  {
    ATerm j_21 = NULL,k_21 = NULL,n_21 = NULL;
    n_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_21 = ATgetFirst((ATermList) t);
        k_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL,l_8 = NULL,t_8 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(n_21);
              l_8 = t;
              t = j_21;
              t = l_107(t);
              t_8 = t;
              t = (ATerm) ATinsert(CheckATermList(k_21), t_8);
              p_1 = t;
              t = SSLsetAnnotations(p_1, l_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_11 = ATgetFirst((ATermList) t);
                  k_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_8;
              t = r_21(t);
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
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
static ATerm y_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  if(match_int(t, 9))
    {
      t = v_9;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = v_9;
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
static ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_11), q_24);
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
          ATerm r_9 = NULL,s_9 = NULL;
          t = d_24;
          t = remove_trailing_1_0(y_0, t);
          s_9 = t;
          t = SSL_implode_string(s_9);
          r_9 = t;
          t = (ATerm) ATinsert(ATempty, r_9);
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
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
                  t = d_24;
                  t = remove_trailing_1_0(z_0, t);
                  r_10 = t;
                  t = SSL_implode_string(r_10);
                  p_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATempty);
                  t = u_24(t);
                  q_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_10), p_10);
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
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
  t = remove_trailing_1_0(c_1, t);
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATinsert(ATempty, z_24);
  return(t);
}
ATerm sep_by_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  t = map_1_0(h_1, t);
  w_10 = t;
  t = term_f_9;
  t = n_74(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
  t = l_6(v_10, w_10, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm z_90 (ATerm), ATerm t)
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
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL,n_11 = NULL,s_11 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(y_25);
            f_11 = t;
            t = z_25;
            t = z_90(t);
            n_11 = t;
            t = a_26;
            t = filter_1_0(z_90, t);
            s_11 = t;
            t = (ATerm) ATinsert(CheckATermList(s_11), n_11);
            v_1 = t;
            t = SSLsetAnnotations(v_1, f_11);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = a_26;
            t = filter_1_0(z_90, t);
          }
      }
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm j_26 = NULL;
  ATerm z_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_1, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = z_11;
      t = term_c_12;
    }
  j_26 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_26, term_h_12);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm c_20, ATerm d_20, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t = d_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_20;
    }
  else
    {
      ATerm a_12 = NULL,d_12 = NULL,x_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_20);
      a_12 = t;
      t = u_27;
      {
        static ATerm o_12 (ATerm t)
        {
          ATerm j_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_12 = NULL;
              f_12 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_12;
              LocalPopChoice(k_12);
            }
          else
            {
              t = j_12;
              {
                ATerm i_12 = NULL;
                t = Cons_2_0(_id, o_12, t);
                i_12 = t;
                t = (ATerm) ATinsert(CheckATermList(i_12), c_20);
              }
            }
          return(t);
        }
        t = o_12(t);
      }
      d_12 = t;
      t = (ATerm) ATinsert(CheckATermList(d_12), t_27);
      x_1 = t;
      t = SSLsetAnnotations(x_1, a_12);
    }
  return(t);
}
ATerm tov_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,e_29 = NULL,j_29 = NULL,m_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym_L_2))
    {
      e_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(m_29);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, e_29, j_29);
            z_1 = t;
            t = SSLsetAnnotations(z_1, c_13);
            LocalPopChoice(p_12);
          }
        else
          {
            t = m_12;
            {
              ATerm p_29 = NULL;
              t = term_f_9;
              t = m_74(t);
              p_29 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_q_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), p_29))));
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
            ATerm s_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(m_29);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, e_29, j_29);
                e_2 = t;
                t = SSLsetAnnotations(e_2, t_13);
                LocalPopChoice(t_12);
              }
            else
              {
                t = s_12;
                {
                  ATerm q_29 = NULL;
                  t = term_f_9;
                  t = m_74(t);
                  q_29 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_q_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), q_29))));
                }
              }
          }
        }
      else
        {
          ATerm t_29 = NULL;
          t = term_f_9;
          t = m_74(t);
          t_29 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_q_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_29))), t_29))));
        }
    }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_q_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_28))));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  ATerm u_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = u_12;
      t = term_z_12;
    }
  d_30 = t;
  if(match_int(t, 0))
    {
      t = term_a_13;
    }
  else
    {
      ATerm g_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_30, term_h_12);
      t = copy_0_0(t);
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, g_30);
    }
  return(t);
}
static ATerm m_6 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_37, a_38);
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      t = SSL_subtr(z_37, a_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  static ATerm i_30 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_76(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = c_76(t);
        t = i_30(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm for_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  t = e_76(t);
  t = while_not_2_0(f_76, g_76, t);
  return(t);
}
static ATerm q_1 (ATerm t)
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
      ATerm g_13 = ATgetArgument(t, 0);
      if(((ATgetType(g_13) != AT_INT) || (ATgetInt((ATermInt) g_13) != 0)))
        _fail(t);
      {
        ATerm h_13 = ATgetArgument(t, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, p_30, term_c_12);
  t = geq_0_0(t);
  t = term_c_12;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, term_c_12);
  t = m_6(p_30, x_30, t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_30, r_30, (ATerm) ATinsert(CheckATermList(u_30), r_30));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(q_1, r_1, s_1, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  static ATerm t_1 (ATerm t)
  {
    ATerm a_31 = NULL,b_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,h_4 = NULL;
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
    t = o_107(t);
    g_31 = t;
    t = f_31;
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, g_31, f_31);
    h_4 = t;
    t = SSLsetAnnotations(h_4, a_31);
    return(t);
  }
  t = fetch_1_0(t_1, t);
  t = SSL_string_to_int(not_null(z_30));
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
  ATerm p_31 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_1, t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = term_z_12;
    }
  p_31 = t;
  if(match_int(t, 0))
    {
      t = term_a_13;
    }
  else
    {
      ATerm q_31 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_31, term_u_11);
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
static ATerm n_6 (ATerm p_74 (ATerm), ATerm o_17, ATerm t)
{
  ATerm f_33 = NULL,k_33 = NULL;
  t = term_f_9;
  t = p_74(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, f_33);
  {
    static ATerm i_37 (ATerm t)
    {
      static ATerm j_37 (ATerm m_33, ATerm s_33, ATerm v_33, ATerm w_33, ATerm x_33, ATerm t)
      {
        ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
        t = w_33;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm n_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_13);
              t = term_p_13;
            }
          else
            {
              t = l_13;
              {
                ATerm r_13 = t;
                int s_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm u_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_13);
                    t = term_x_13;
                  }
                else
                  {
                    t = r_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm y_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_z_13;
                  }
              }
            }
        }
        v_34 = t;
        t = w_33;
        t = make_hs_0_0(t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_33), s_33), x_33);
        t = i_37(t);
        x_34 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(x_34), w_34), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, v_34), m_33));
        return(t);
      }
      static ATerm k_37 (ATerm e_35, ATerm i_35, ATerm k_35, ATerm l_35, ATerm t)
      {
        ATerm s_35 = NULL,t_35 = NULL;
        t = k_35;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm c_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(b_14);
              t = term_p_13;
            }
          else
            {
              t = a_14;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm g_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_14);
                    t = term_x_13;
                  }
                else
                  {
                    t = d_14;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm i_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_z_13;
                  }
              }
            }
        }
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_35, l_35);
        t = i_37(t);
        t_35 = t;
        t = (ATerm) ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, s_35), e_35));
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
                        ATerm m_14 = t;
                        int o_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_36 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
                            t = i_37(t);
                            t_36 = t;
                            t = (ATerm) ATinsert(CheckATermList(t_36), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, w_35, x_35))));
                            LocalPopChoice(o_14);
                          }
                        else
                          {
                            t = m_14;
                            {
                              ATerm p_14 = t;
                              int q_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_37(c_36, y_35, z_35, f_36, g_36, t);
                                  LocalPopChoice(q_14);
                                }
                              else
                                {
                                  t = p_14;
                                  t = k_37(c_36, d_36, f_36, g_36, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_14 = t;
                      int s_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_37(c_36, y_35, z_35, f_36, g_36, t);
                          LocalPopChoice(s_14);
                        }
                      else
                        {
                          t = r_14;
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
                        ATerm v_14 = t;
                        int w_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_37 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
                            t = i_37(t);
                            a_37 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, w_35, x_35))));
                            LocalPopChoice(w_14);
                          }
                        else
                          {
                            t = v_14;
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
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_q_12), (ATerm) ATinsert(ATempty, k_33));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm x_14 = t;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,y_38 = NULL,k_39 = NULL,l_39 = NULL,b_5 = NULL;
      l_39 = t;
      if(match_cons(t, sym_R_2))
        {
          y_38 = ATgetArgument(t, 0);
          k_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_39);
      x_38 = t;
      t = k_39;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, y_38, k_39);
      b_5 = t;
      t = SSLsetAnnotations(b_5, x_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, (ATerm) ATempty);
  {
    static ATerm m_39 (ATerm t)
    {
      ATerm r_37 = NULL,s_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,b_38 = NULL;
      if(match_cons(t, sym__2))
        {
          w_37 = ATgetArgument(t, 0);
          b_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_37;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm g_38 = NULL;
          t = b_38;
          t = reverse_acc_2_0(_id, y_1, t);
          g_38 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, g_38));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_37 = ATgetFirst((ATermList) t);
              y_37 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_37;
          if(match_cons(t, sym_R_2))
            {
              r_37 = ATgetArgument(t, 0);
              s_37 = ATgetArgument(t, 1);
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_38 = NULL,n_38 = NULL;
                    t = b_38;
                    t = reverse_acc_2_0(_id, b_2, t);
                    m_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_37, (ATerm) ATempty);
                    t = m_39(t);
                    n_38 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_38), (ATerm) ATmakeAppl(sym_R_2, r_37, s_37)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, m_38));
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    t = (ATerm) ATmakeAppl(sym__2, y_37, (ATerm) ATinsert(CheckATermList(b_38), x_37));
                    t = m_39(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, y_37, (ATerm) ATinsert(CheckATermList(b_38), x_37));
              t = m_39(t);
            }
        }
      return(t);
    }
    t = m_39(t);
  }
  t = filter_1_0(j_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
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
static ATerm t_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_15);
  return(t);
}
static ATerm u_2 (ATerm t)
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
static ATerm v_2 (ATerm t)
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
static ATerm w_2 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm a_3 (ATerm t)
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
static ATerm d_3 (ATerm t)
{
  ATerm t_41 = NULL;
  if(match_cons(t, sym_S_1))
    {
      t_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_41;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm w_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  a_41 = t;
  if(match_cons(t, sym_REF_2))
    {
      b_41 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, b_41, z_40);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          b_41 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, z_40), (ATerm) ATmakeAppl(sym_ANCHOR_1, b_41));
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
              t = term_s_15;
            }
          else
            {
              t = m_15;
              {
                ATerm t_15 = t;
                int u_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm w_15 = ATgetArgument(t, 0);
                        ATerm x_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_15);
                    t = term_s_15;
                  }
                else
                  {
                    t = t_15;
                    {
                      ATerm z_15 = t;
                      int a_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              b_41 = ATgetArgument(t, 0);
                              {
                                ATerm b_16 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_16);
                          t = b_41;
                        }
                      else
                        {
                          t = z_15;
                          if(match_cons(t, sym_A_3))
                            {
                              b_41 = ATgetArgument(t, 0);
                              z_40 = ATgetArgument(t, 1);
                              w_40 = ATgetArgument(t, 2);
                              {
                                ATerm j_41 = NULL,l_41 = NULL,m_41 = NULL,y_14 = NULL;
                                t = w_40;
                                t = construct_rows_0_0(t);
                                j_41 = t;
                                t = z_40;
                                t = Vspace_0_0(t);
                                l_41 = t;
                                t = j_41;
                                {
                                  static ATerm k_2 (ATerm t)
                                  {
                                    ATerm n_41 = NULL;
                                    static ATerm n_2 (ATerm t)
                                    {
                                      t = b_41;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm c_16 = ATgetArgument(t, 0);
                                        if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
                                          _fail(t);
                                        n_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = n_6(n_2, n_41, t);
                                    return(t);
                                  }
                                  t = map_1_0(k_2, t);
                                }
                                y_14 = t;
                                t = (ATerm) ATmakeAppl(sym__2, l_41, y_14);
                                t = l_6(l_41, y_14, t);
                                m_41 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_41)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  b_41 = ATgetArgument(t, 0);
                                  z_40 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_15 = NULL;
                                    t = b_41;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm d_16 = t;
                                      int e_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = z_40;
                                          t = filter_1_0(s_2, t);
                                          LocalPopChoice(e_16);
                                        }
                                      else
                                        {
                                          t = d_16;
                                          {
                                            ATerm r_15 = NULL,y_15 = NULL;
                                            t = at_last_1_0(t_2, t);
                                            l_15 = t;
                                            t = z_40;
                                            t = filter_1_0(u_2, t);
                                            y_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, l_15, y_15);
                                            t = l_6(l_15, y_15, t);
                                            r_15 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_j_16);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      b_41 = ATgetArgument(t, 0);
                                      z_40 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,v_16 = NULL,e_5 = NULL;
                                        t = b_41;
                                        t = Vspace_0_0(t);
                                        g_16 = t;
                                        t = b_41;
                                        t = Ispace_0_0(t);
                                        f_16 = t;
                                        t = z_40;
                                        t = filter_1_0(v_2, t);
                                        p_16 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            k_16 = ATgetFirst((ATermList) t);
                                            l_16 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(p_16);
                                        i_16 = t;
                                        t = k_16;
                                        t = tov_1_0(w_2, t);
                                        m_16 = t;
                                        t = l_16;
                                        {
                                          static ATerm x_2 (ATerm t)
                                          {
                                            static ATerm z_2 (ATerm t)
                                            {
                                              t = f_16;
                                              return(t);
                                            }
                                            t = tov_1_0(z_2, t);
                                            return(t);
                                          }
                                          t = map_1_0(x_2, t);
                                        }
                                        o_16 = t;
                                        t = (ATerm) ATinsert(CheckATermList(o_16), m_16);
                                        e_5 = t;
                                        t = SSLsetAnnotations(e_5, i_16);
                                        v_16 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, g_16, v_16);
                                        t = l_6(g_16, v_16, t);
                                        h_16 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, h_16)), term_j_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          b_41 = ATgetArgument(t, 0);
                                          z_40 = ATgetArgument(t, 1);
                                          {
                                            ATerm q_41 = NULL;
                                            static ATerm c_3 (ATerm t)
                                            {
                                              t = not_null(q_41);
                                              return(t);
                                            }
                                            t = b_41;
                                            t = Hspace_0_0(t);
                                            if(((q_41 != NULL) && (q_41 != t)))
                                              _fail(t);
                                            else
                                              q_41 = t;
                                            t = z_40;
                                            t = filter_1_0(a_3, t);
                                            t = sep_by_1_0(c_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              b_41 = ATgetArgument(t, 0);
                                              z_40 = ATgetArgument(t, 1);
                                              t = b_41;
                                              {
                                                ATerm n_16 = t;
                                                int q_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_16), (ATerm) ATinsert(ATempty, z_40));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_16), (ATerm) ATinsert(ATempty, z_40));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_t_16), (ATerm) ATinsert(ATempty, z_40));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_u_16), (ATerm) ATinsert(ATempty, z_40));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(q_16);
                                                  }
                                                else
                                                  {
                                                    t = n_16;
                                                    t = z_40;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  b_41 = ATgetArgument(t, 0);
                                                  z_40 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm s_41 = NULL;
                                                    t = b_41;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = z_40;
                                                    t = map_1_0(d_3, t);
                                                    s_41 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_w_16), (ATerm) ATinsert(ATempty, s_41)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      b_41 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_41;
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
ATerm topdown_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  static ATerm j_3 (ATerm t)
  {
    t = topdown_1_0(k_76, t);
    return(t);
  }
  t = k_76(t);
  t = SRTS_all(j_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  static ATerm s_42 (ATerm t)
  {
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
    r_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_42 = ATgetFirst((ATermList) t);
        q_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_17 = NULL,s_17 = NULL,j_5 = NULL;
          t = SSLgetAnnotations(r_42);
          p_17 = t;
          t = q_42;
          t = s_42(t);
          s_17 = t;
          t = (ATerm) ATinsert(CheckATermList(s_17), p_42);
          j_5 = t;
          t = SSLsetAnnotations(j_5, p_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_42;
        t = n_83(t);
      }
    return(t);
  }
  t = s_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_41;
    }
  else
    {
      static ATerm k_3 (ATerm t)
      {
        t = not_null(b_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_42 = ATgetFirst((ATermList) t);
          if(((b_42 != NULL) && (b_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_42;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm e_43 (ATerm w_42, ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_explode_term(w_42);
  if(match_cons(t, sym__2))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_42;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  b_43 = t;
  if(match_cons(t, sym__2))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_3 (ATerm t)
            {
              t = a_43;
              return(t);
            }
            t = z_42;
            t = at_end_1_0(m_3, t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = e_43(b_43, t);
          }
      }
    }
  else
    {
      t = e_43(b_43, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm a_44 (ATerm t)
  {
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
    x_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_43 = ATgetFirst((ATermList) t);
        z_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL,e_12 = NULL;
          t = SSLgetAnnotations(x_43);
          a_18 = t;
          t = z_43;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_43), y_43);
          e_12 = t;
          t = SSLsetAnnotations(e_12, a_18);
          t = y_83(t);
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm k_18 = NULL,r_18 = NULL,g_12 = NULL;
            t = SSLgetAnnotations(x_43);
            k_18 = t;
            t = z_43;
            t = a_44(t);
            r_18 = t;
            t = (ATerm) ATinsert(CheckATermList(r_18), y_43);
            g_12 = t;
            t = SSLsetAnnotations(g_12, k_18);
          }
        }
    }
    return(t);
  }
  t = a_44(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  static ATerm s_44 (ATerm t)
  {
    ATerm d_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_83(t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = d_17;
        {
          ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,j_19 = NULL,p_19 = NULL,l_12 = NULL;
          n_44 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_44 = ATgetFirst((ATermList) t);
              p_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_44);
          j_19 = t;
          t = p_44;
          t = s_44(t);
          p_19 = t;
          t = (ATerm) ATinsert(CheckATermList(p_19), o_44);
          l_12 = t;
          t = SSLsetAnnotations(l_12, j_19);
        }
      }
    return(t);
  }
  t = s_44(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,r_12 = NULL,n_12 = NULL;
    e_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_45 = ATgetFirst((ATermList) t);
        b_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_45);
    z_44 = t;
    t = a_45;
    t = j_83(t);
    c_45 = t;
    t = (ATerm) ATinsert(CheckATermList(b_45), c_45);
    n_12 = t;
    t = SSLsetAnnotations(n_12, z_44);
    d_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_44 = ATgetFirst((ATermList) t);
        y_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_45);
    w_44 = t;
    t = y_44;
    if(((u_44 != NULL) && (u_44 != t)))
      _fail(t);
    else
      u_44 = t;
    t = (ATerm) ATinsert(CheckATermList(y_44), x_44);
    r_12 = t;
    t = SSLsetAnnotations(r_12, w_44);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(o_3, t);
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_44, not_null(u_44));
  return(t);
}
static ATerm o_6 (ATerm v_15, ATerm q_15, ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  t = q_15;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((j_45 != NULL) && (j_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_45 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
            if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
              {
                if(((f_45 != NULL) && (f_45 != ATgetFirst((ATermList) i_17))))
                  _fail(ATgetFirst((ATermList) i_17));
                else
                  f_45 = ATgetFirst((ATermList) i_17);
                if(((g_45 != NULL) && (g_45 != (ATerm) ATgetNext((ATermList) i_17))))
                  _fail((ATerm) ATgetNext((ATermList) i_17));
                else
                  g_45 = (ATerm) ATgetNext((ATermList) i_17);
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
      i_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_45;
  {
    ATerm j_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_17;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(g_45)), not_null(f_45));
  {
    static ATerm q_3 (ATerm t)
    {
      ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,v_12 = NULL;
      p_45 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_45 = ATgetFirst((ATermList) t);
          o_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_45);
      m_45 = t;
      t = o_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_45), n_45);
      v_12 = t;
      t = SSLsetAnnotations(v_12, m_45);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, v_15, (ATerm) ATinsert(CheckATermList(h_45), n_45)));
      return(t);
    }
    t = at_last_1_0(q_3, t);
  }
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(j_45), k_45)));
  t = conc_0_0(t);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, v_15, l_45);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  a_46 = t;
  if(match_cons(t, sym_H_2))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
      t = z_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_45 = ATgetFirst((ATermList) t);
          x_45 = (ATerm) ATgetNext((ATermList) t);
          t = x_45;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_45;
            }
          else
            {
              ATerm k_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_46;
                  t = o_6(y_45, z_45, t);
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = k_17;
                  t = a_46;
                }
            }
        }
      else
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_46;
              t = o_6(y_45, z_45, t);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = a_46;
            }
        }
    }
  else
    {
      ATerm q_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm t_17 = ATgetArgument(t, 0);
              z_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(r_17);
          t = z_45;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_45 = ATgetFirst((ATermList) t);
              x_45 = (ATerm) ATgetNext((ATermList) t);
              t = x_45;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_45;
                }
              else
                {
                  t = a_46;
                }
            }
          else
            {
              t = a_46;
            }
        }
      else
        {
          t = q_17;
          t = a_46;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(b_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm s_46 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(c_4, t);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, s_46)))));
  t = bottomup_1_0(e_4, t);
  return(t);
}
static ATerm k_47 (ATerm e_47, ATerm t)
{
  t = SSL_fclose(e_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_47 = ATgetArgument(t, 0);
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_47);
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            t = k_47(i_47, t);
          }
      }
    }
  else
    {
      t = k_47(i_47, t);
    }
  return(t);
}
static ATerm p_6 (ATerm u_19, ATerm t)
{
  t = SSL_read_term_from_stream(u_19);
  return(t);
}
static ATerm q_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  t = SSL_strcat(q_33, r_33);
  return(t);
}
static ATerm r_6 (ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm l_47 = NULL;
  t = SSL_fopen(z_34, a_35);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_47 = NULL;
  t = SSL_stdin_stream();
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_47 = NULL;
  t = SSL_stdout_stream();
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = SSL_stderr_stream();
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_47);
  return(t);
}
static ATerm a_49 (ATerm u_47, ATerm t)
{
  ATerm v_47 = NULL;
  t = SSL_explode_term(u_47);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_18 = ATgetArgument(t, 1);
        if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
          {
            v_47 = ATgetFirst((ATermList) c_18);
            {
              ATerm d_18 = (ATerm) ATgetNext((ATermList) c_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_49 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,g_48 = NULL,x_12 = NULL;
  t = SSLgetAnnotations(a_48);
  d_48 = t;
  t = y_47;
  if(match_cons(t, sym_Path_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_48, z_47);
  x_12 = t;
  t = SSLsetAnnotations(x_12, d_48);
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(b_48, c_48, t);
  return(t);
}
static ATerm c_49 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,q_48 = NULL,y_12 = NULL;
  t = SSLgetAnnotations(k_48);
  n_48 = t;
  t = SSL_is_string(i_48);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_48, j_48);
  y_12 = t;
  t = SSLsetAnnotations(y_12, n_48);
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(l_48, m_48, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm s_48 = NULL,y_48 = NULL,z_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_49(s_48, t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm g_18 = t;
              int h_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_49(y_48, z_48, s_48, t);
                  LocalPopChoice(h_18);
                }
              else
                {
                  t = g_18;
                  t = c_49(y_48, z_48, s_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_49(s_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,s_49 = NULL;
  s_49 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_49, term_l_18);
        t = s_6(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm g_20 = NULL,h_20 = NULL;
          t = term_m_18;
          h_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_18, s_49);
          t = q_6(h_20, s_49, t);
          g_20 = t;
          t = SSL_perror(g_20);
          _fail(t);
        }
      }
  }
  f_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(g_49, t);
  e_49 = t;
  t = f_49;
  t = fclose_0_0(t);
  t = e_49;
  return(t);
}
static ATerm t_6 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_access(q_34, r_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_49 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_49 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_18);
      z_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_49, (ATerm) ATinsert(ATempty, term_p_18));
      t = t_6(x_49, z_49, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm a_50 = NULL;
  t = lookup_table_0_1(e_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(f_51, a_50, t);
  return(t);
}
static ATerm v_6 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  d_50 = t;
  {
    ATerm q_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
        t = b_7(q_49, r_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_18 = ATgetFirst((ATermList) t);
            c_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_18);
        {
          ATerm e_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_49, r_49, c_50);
          t = lookup_table_0_1(q_49, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_7(r_49, c_50, e_50, t);
          t = (ATerm) ATmakeAppl(sym__3, q_49, r_49, c_50);
        }
      }
    else
      {
        t = q_18;
        {
          ATerm g_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
          t = lookup_table_0_1(q_49, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_6(r_49, g_50, t);
          t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
        }
      }
  }
  t = d_50;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  l_50 = t;
  t = c_96(t);
  k_50 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL;
        t = term_y_8;
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_50, term_y_8);
        t = b_7(k_50, p_50, t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_50 = ATgetFirst((ATermList) t);
      i_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_50, term_y_8, i_50);
  t = lookup_table_0_1(k_50, t);
  o_50 = t;
  t = term_y_8;
  m_50 = t;
  t = o_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(m_50, i_50, n_50, t);
  t = j_50;
  {
    static ATerm g_4 (ATerm t)
    {
      ATerm q_50 = NULL;
      q_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_50, q_50);
      t = v_6(k_50, q_50, t);
      return(t);
    }
    t = map_1_0(g_4, t);
  }
  t = l_50;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_75(t);
      t = h_75(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      t = h_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,b_51 = NULL,c_51 = NULL;
  t_50 = t;
  t = b_96(t);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, term_y_8);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_51 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            ATerm c_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_8;
        i_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_50, term_y_8);
        t = b_7(s_50, i_51, t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATempty;
      }
  }
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_50, term_y_8, (ATerm) ATinsert(CheckATermList(u_50), (ATerm) ATempty));
  t = lookup_table_0_1(s_50, t);
  c_51 = t;
  t = term_y_8;
  v_50 = t;
  t = (ATerm) ATinsert(CheckATermList(u_50), (ATerm) ATempty);
  w_50 = t;
  t = c_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(v_50, w_50, b_51, t);
  t = t_50;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_d_9;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_51);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = r_51;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm l_51 = NULL;
  static ATerm l_4 (ATerm t)
  {
    ATerm m_51 = NULL;
    m_51 = t;
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_51 = NULL,o_51 = NULL;
          t = term_d_9;
          n_51 = t;
          t = term_y_8;
          o_51 = t;
          t = term_h_19;
          t = b_7(n_51, o_51, t);
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_51 != NULL) && (l_51 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_51 = ATgetFirst((ATermList) t);
        {
          ATerm i_19 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_51;
    t = map_1_0(p_4, t);
    t = m_51;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(i_4, t);
  t = restore_always_2_0(j_108, l_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  u_51 = t;
  t = term_f_9;
  t = whoami_0_0(t);
  v_51 = t;
  t = term_m_8;
  x_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_19), v_51), term_k_19);
  y_51 = t;
  t = SSL_printnl(x_51, y_51);
  t = term_c_12;
  w_51 = t;
  t = SSL_exit(w_51);
  t = u_51;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_52 = NULL;
  a_52 = t;
  if(match_string(t, "-k"))
    {
      t = a_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_52;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  t = SSL_string_to_int(b_52);
  c_52 = t;
  t = term_m_19;
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, c_52);
  t = e_7(d_52, c_52, t);
  t = b_52;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, u_4, v_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  if(match_string(t, "-S"))
    {
      t = f_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_52;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  t = term_o_19;
  g_52 = t;
  t = term_z_12;
  h_52 = t;
  t = term_q_19;
  t = e_7(g_52, h_52, t);
  t = term_r_19;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  t = SSL_string_to_int(i_52);
  j_52 = t;
  t = term_o_19;
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, j_52);
  t = e_7(k_52, j_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_52);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  t = term_v_19;
  l_52 = t;
  t = term_f_9;
  m_52 = t;
  t = term_w_19;
  t = e_7(l_52, m_52, t);
  t = term_x_19;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, x_4, y_4, t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm b_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_5, d_5, f_5, t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = b_20;
            t = Option_3_0(h_5, k_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  t = term_b_8;
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_8, q_44, r_44);
  t = lookup_table_0_1(n_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(q_44, r_44, o_52, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_8, q_44, r_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
      t = term_f_9;
      t = e_0(t);
      u_52 = t;
      t = term_f_20;
      v_52 = t;
      t = term_i_20;
      w_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_i_20, u_52);
      t = c_7(v_52, w_52, u_52, t);
      _fail(t);
    }
  else
    {
      ATerm z_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_52 = ATgetFirst((ATermList) t);
          t_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_52;
      t = c_0(t);
      t = term_f_9;
      t = d_0(t);
      z_52 = t;
      t = (ATerm) ATinsert(CheckATermList(t_52), z_52);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  if(match_string(t, "-o"))
    {
      t = b_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_53;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_53 = NULL,k_53 = NULL;
  c_53 = t;
  t = term_c_8;
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, c_53);
  t = e_7(k_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_53);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, r_5, t);
  return(t);
}
static ATerm c_7 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_20 = ATgetArgument(t, 0);
            ATerm p_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
        t = b_7(l_49, m_49, t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = (ATerm) ATempty;
      }
  }
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_49, m_49, (ATerm) ATinsert(CheckATermList(q_53), k_49));
  t = lookup_table_0_1(l_49, t);
  t_53 = t;
  t = (ATerm) ATinsert(CheckATermList(q_53), k_49);
  r_53 = t;
  t = t_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(m_49, r_53, s_53, t);
  t = p_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
      t = term_f_9;
      t = n_0(t);
      e_54 = t;
      t = term_f_20;
      f_54 = t;
      t = term_i_20;
      g_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_i_20, e_54);
      t = c_7(f_54, g_54, e_54, t);
      _fail(t);
    }
  else
    {
      ATerm k_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_54 = ATgetFirst((ATermList) t);
          b_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_54 = ATgetFirst((ATermList) t);
          d_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_54;
      t = k_0(t);
      t = c_54;
      t = l_0(t);
      k_54 = t;
      t = (ATerm) ATinsert(CheckATermList(d_54), k_54);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_54 = NULL;
  m_54 = t;
  if(match_string(t, "-i"))
    {
      t = m_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_54;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  t = term_q_20;
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, n_54);
  t = e_7(o_54, n_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_54);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_9;
  t = whoami_0_0(t);
  p_54 = t;
  t = term_m_8;
  r_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_20), p_54);
  s_54 = t;
  t = SSL_printnl(r_54, s_54);
  t = term_c_12;
  q_54 = t;
  t = SSL_exit(q_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  t = term_b_8;
  t_54 = t;
  t = term_u_20;
  u_54 = t;
  t = term_v_20;
  t = b_7(t_54, u_54, t);
  return(t);
}
static ATerm w_6 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_37, u_37);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      t = SSL_addr(t_37, u_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_54;
      t = v_89(t);
    }
  else
    {
      ATerm b_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_54;
      t = foldr_2_0(v_89, w_89, t);
      b_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_54, b_55);
      t = w_89(t);
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
  t = term_z_12;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(t_20, w_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_55 = NULL,m_20 = NULL,n_20 = NULL;
  t = times_0_0(t);
  n_20 = t;
  t = SSL_explode_term(n_20);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_20;
  t = foldr_2_0(v_5, w_5, t);
  e_55 = t;
  t = SSL_TicksToSeconds(e_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_55;
        if((q_55 != t))
          {
            _fail(t);
          }
        t = p_55;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_55, r_55);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = SSL_gtr(q_55, r_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
        t = term_b_8;
        y_55 = t;
        t = term_o_19;
        z_55 = t;
        t = term_g_21;
        t = b_7(y_55, z_55, t);
        x_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_55, term_c_12);
        t = geq_0_0(t);
        t = v_55;
        t = m_98(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = v_55;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,e_56 = NULL,f_56 = NULL;
  t = run_time_0_0(t);
  b_56 = t;
  t = term_f_9;
  t = whoami_0_0(t);
  c_56 = t;
  t = term_m_8;
  e_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_21), b_56), term_h_21), c_56);
  f_56 = t;
  t = SSL_printnl(e_56, f_56);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_21), b_56), term_h_21), c_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_12;
  g_56 = t;
  t = SSL_exit(g_56);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_56 = ATgetArgument(t, 0);
          {
            ATerm t_21 = NULL,k_13 = NULL;
            t = SSLgetAnnotations(r_56);
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_56);
            k_13 = t;
            t = SSLsetAnnotations(k_13, t_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_56 = NULL,k_56 = NULL;
      t = term_b_8;
      j_56 = t;
      t = term_o_21;
      k_56 = t;
      t = term_p_21;
      t = b_7(j_56, k_56, t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = fetch_1_0(y_5, t);
    }
  t = c_101(t);
  return(t);
}
static ATerm f_7 (ATerm d_53, ATerm e_53, ATerm f_53, ATerm t)
{
  ATerm t_56 = NULL;
  t = SSL_hashtable_put(f_53, d_53, e_53);
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_56);
  return(t);
}
static ATerm g_7 (ATerm g_53, ATerm h_53, ATerm t)
{
  t = SSL_hashtable_get(h_53, g_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_50, ATerm t)
{
  ATerm c_57 = NULL;
  t = table_hashtable_0_0(t);
  c_57 = t;
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL;
        t = c_57;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_7(x_50, z_21, t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        {
          ATerm e_22 = NULL;
          t = x_50;
          t = table_create_0_0(t);
          t = c_57;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_7(x_50, e_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_hashtable_create(l_53, m_53);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_57);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,p_57 = NULL,q_57 = NULL;
  l_57 = t;
  t = term_u_21;
  p_57 = t;
  t = term_v_21;
  q_57 = t;
  t = l_57;
  t = new_hashtable_0_2(p_57, q_57, t);
  m_57 = t;
  t = l_57;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(l_57, m_57, n_57, t);
  t = l_57;
  return(t);
}
static ATerm y_6 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm r_57 = NULL;
  t = SSL_hashtable_remove(j_53, i_53);
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_57);
  return(t);
}
static ATerm z_6 (ATerm n_53, ATerm t)
{
  ATerm s_57 = NULL;
  t = SSL_hashtable_destroy(n_53);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_57);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_57 = NULL;
  t = SSL_table_hashtable();
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_57);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  u_57 = t;
  t = table_hashtable_0_0(t);
  v_57 = t;
  t = lookup_table_0_1(u_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(x_57, t);
  t = v_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(u_57, w_57, t);
  t = u_57;
  return(t);
}
ATerm map_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  static ATerm s_58 (ATerm t)
  {
    ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
    p_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_58;
      }
    else
      {
        ATerm j_22 = NULL,m_22 = NULL,t_22 = NULL,o_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_58 = ATgetFirst((ATermList) t);
            r_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_58);
        j_22 = t;
        t = q_58;
        t = w_82(t);
        m_22 = t;
        t = r_58;
        t = s_58(t);
        t_22 = t;
        t = (ATerm) ATinsert(CheckATermList(t_22), m_22);
        o_13 = t;
        t = SSLsetAnnotations(o_13, j_22);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_58 = ATgetFirst((ATermList) t);
      z_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_59 = NULL,g_59 = NULL;
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_59)), not_null(g_59));
          return(t);
        }
        t = z_58;
        t = i_0(t);
        if(((d_59 != NULL) && (d_59 != t)))
          _fail(t);
        else
          d_59 = t;
        t = y_58;
        t = g_0(t);
        if(((g_59 != NULL) && (g_59 != t)))
          _fail(t);
        else
          g_59 = t;
        t = z_58;
        t = reverse_acc_2_0(g_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,q_13 = NULL;
  o_59 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_59);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_59);
  q_13 = t;
  t = SSLsetAnnotations(q_13, m_59);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm q_59 = NULL;
  q_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_59), term_w_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_59 = NULL,l_59 = NULL;
      t = term_b_8;
      k_59 = t;
      t = term_u_20;
      l_59 = t;
      t = term_v_20;
      t = b_7(k_59, l_59, t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = fetch_1_0(a_6, t);
    }
  t = term_a_22;
  t = echo_0_0(t);
  t = term_f_20;
  i_59 = t;
  t = term_i_20;
  j_59 = t;
  t = term_b_22;
  t = b_7(i_59, j_59, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(c_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  static ATerm p_60 (ATerm t)
  {
    ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
    m_60 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_60 = ATgetFirst((ATermList) t);
        o_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_23 = NULL,p_23 = NULL,v_13 = NULL;
          t = SSLgetAnnotations(m_60);
          l_23 = t;
          t = n_60;
          t = g_83(t);
          p_23 = t;
          t = (ATerm) ATinsert(CheckATermList(o_60), p_23);
          v_13 = t;
          t = SSLsetAnnotations(v_13, l_23);
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          {
            ATerm f_24 = NULL,l_24 = NULL,w_13 = NULL;
            t = SSLgetAnnotations(m_60);
            f_24 = t;
            t = o_60;
            t = p_60(t);
            l_24 = t;
            t = (ATerm) ATinsert(CheckATermList(l_24), n_60);
            w_13 = t;
            t = SSLsetAnnotations(w_13, f_24);
          }
        }
    }
    return(t);
  }
  t = p_60(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_22 = ATgetFirst((ATermList) t);
                ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_60;
          }
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = (ATerm) ATinsert(ATempty, t_60);
      }
  }
  u_60 = t;
  t = term_f_8;
  v_60 = t;
  t = SSL_printnl(v_60, u_60);
  t = t_60;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  t = term_b_8;
  z_60 = t;
  t = term_u_20;
  a_61 = t;
  t = term_v_20;
  t = b_7(z_60, a_61, t);
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
  ATerm b_61 = NULL,c_61 = NULL;
  t = term_k_22;
  b_61 = t;
  t = term_f_9;
  c_61 = t;
  t = term_l_22;
  t = e_7(b_61, c_61, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  t = term_k_22;
  f_61 = t;
  t = term_f_9;
  g_61 = t;
  t = term_l_22;
  t = e_7(f_61, g_61, t);
  t = term_q_22;
  d_61 = t;
  t = term_f_9;
  e_61 = t;
  t = term_r_22;
  t = e_7(d_61, e_61, t);
  t = term_s_22;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, e_6, g_6, t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = Option_3_0(h_6, j_6, k_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_59 (ATerm), ATerm w_59 (ATerm), ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,f_14 = NULL;
  m_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_61 = ATgetFirst((ATermList) t);
      j_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_61);
  h_61 = t;
  t = i_61;
  t = v_59(t);
  k_61 = t;
  t = j_61;
  t = w_59(t);
  l_61 = t;
  t = (ATerm) ATinsert(CheckATermList(l_61), k_61);
  f_14 = t;
  t = SSLsetAnnotations(f_14, h_61);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,w_61 = NULL,x_61 = NULL,h_14 = NULL;
  r_61 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_22;
        t = f_103(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
      }
  }
  t = r_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_61 = ATgetFirst((ATermList) t);
      u_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_61);
  s_61 = t;
  t = term_u_20;
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, t_61);
  t = e_7(x_61, t_61, t);
  t = u_61;
  {
    static ATerm h_62 (ATerm t)
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_62 = NULL;
              a_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_62;
              LocalPopChoice(d_23);
            }
          else
            {
              t = c_23;
              t = f_103(t);
              t = Cons_2_0(_id, h_62, t);
            }
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          {
            ATerm d_62 = NULL,e_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_62 = ATgetFirst((ATermList) t);
                e_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_62), (ATerm) ATmakeAppl(sym_Undefined_1, d_62));
          }
        }
      return(t);
    }
    t = h_62(t);
  }
  w_61 = t;
  t = (ATerm) ATinsert(CheckATermList(w_61), (ATerm) ATmakeAppl(sym_Program_1, t_61));
  h_14 = t;
  t = SSLsetAnnotations(h_14, s_61);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm u_62 = NULL;
  u_62 = t;
  if(match_string(t, "--help"))
    {
      t = u_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_62;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL;
  t = term_o_21;
  v_62 = t;
  t = term_f_9;
  w_62 = t;
  t = term_e_23;
  t = e_7(v_62, w_62, t);
  t = term_f_23;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  o_62 = t;
  t = term_f_20;
  p_62 = t;
  t = term_h_23;
  t = lookup_table_0_1(p_62, t);
  t_62 = t;
  t = term_i_20;
  q_62 = t;
  t = (ATerm) ATempty;
  r_62 = t;
  t = t_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(q_62, r_62, s_62, t);
  t = o_62;
  {
    static ATerm x_6 (ATerm t)
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_103(t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          {
            ATerm k_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, d_7, i_7, t);
                LocalPopChoice(m_23);
              }
            else
              {
                t = k_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_63 = NULL;
        h_63 = t;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL;
              t = h_63;
              {
                ATerm s_23 = t;
                int t_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_25 = NULL,c_25 = NULL;
                    t = term_b_8;
                    b_25 = t;
                    t = term_o_21;
                    c_25 = t;
                    t = term_p_21;
                    t = b_7(b_25, c_25, t);
                    LocalPopChoice(t_23);
                  }
                else
                  {
                    t = s_23;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = h_63;
              t = default_system_usage_0_0(t);
              t = term_z_12;
              a_25 = t;
              t = SSL_exit(a_25);
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              {
                ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
                t = term_b_8;
                n_25 = t;
                t = term_k_22;
                o_25 = t;
                t = term_u_23;
                t = b_7(n_25, o_25, t);
                t = h_63;
                t = default_system_about_0_0(t);
                t = term_z_12;
                m_25 = t;
                t = SSL_exit(m_25);
              }
            }
        }
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
              static ATerm k_7 (ATerm t)
              {
                ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,n_14 = NULL;
                n_63 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_63);
                l_63 = t;
                t = m_63;
                if(((m_62 != NULL) && (m_62 != t)))
                  _fail(t);
                else
                  m_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_63);
                n_14 = t;
                t = SSLsetAnnotations(n_14, l_63);
                return(t);
              }
              t = fetch_1_0(k_7, t);
              t = term_m_8;
              j_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_62)), term_x_23);
              k_63 = t;
              t = SSL_printnl(j_63, k_63);
              t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_62)), term_x_23));
              t = default_system_usage_0_0(t);
              t = term_c_12;
              i_63 = t;
              t = SSL_exit(i_63);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
            }
        }
      }
  }
  n_62 = t;
  t = term_f_20;
  t = table_destroy_0_0(t);
  t = n_62;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
  t = parse_options_1_0(e_101, t);
  s_63 = t;
  t = term_z_23;
  t = table_create_0_0(t);
  t = term_z_23;
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_23, term_c_24, s_63);
  t = lookup_table_0_1(t_63, t);
  w_63 = t;
  t = term_c_24;
  u_63 = t;
  t = w_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(u_63, s_63, v_63, t);
  t = s_63;
  t = g_101(t);
  {
    ATerm e_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_101, t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = e_24;
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(n_7, o_7, q_7, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = r_24;
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
  t = xtc_temp_files_1_0(r_7, t);
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
  ATerm y_63 = NULL,z_63 = NULL;
  t = term_t_24;
  y_63 = t;
  t = term_f_9;
  z_63 = t;
  t = term_v_24;
  t = e_7(y_63, z_63, t);
  t = term_w_24;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm y_24 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
      t = term_b_8;
      c_64 = t;
      t = term_q_20;
      d_64 = t;
      t = term_e_25;
      t = b_7(c_64, d_64, t);
      b_64 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_64);
      LocalPopChoice(d_25);
    }
  else
    {
      t = y_24;
      t = term_i_8;
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
